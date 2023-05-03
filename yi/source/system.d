import core.stdc.stdlib;

import std.algorithm;
import std.array;
import std.exception;
import std.experimental.logger;
import std.file;
import std.format;
import std.range;
import std.stdio;
import std.string;

alias logger = std.experimental.logger;


// import boilerplate; does not work with autowrap
import commandr;
import pyd.pyd, pyd.embedded;
import jdiutil;

version (none) {
import pegged.grammar;
import pegged.peg;
}


// https://stackoverflow.com/a/3112919
// By counting entries in the 'all classes' frame of the javadoc API: 4569 in java 14
alias TypeIdT = uint;  // ref:___typeid; 2 bytes ushort 65,536 too fewer for large system; let's use 4 bytes
alias TypeStackPathHashT = ulong;

immutable string TypeIdTString = TypeIdT.stringof;

immutable string YI_FLAVOR = "YiD";  // or YiP

version (none) {
static if (YI_FLAVOR == "YiP") {
import yipgrammar;
mixin(grammar(yipgrammar.YiPGrammar));
} else {
import yidgrammar;
mixin(grammar(yidgrammar.YiDGrammar));
}
}

/* do we need this?
shared static this() {
  py_init();
}
*/

immutable string DOT_YI = ".yi";
immutable string DOT_D  = ".d";


class Variable : primary {  // global or local
  string type;  // ref:type_can_be_empty_str, e.g for already declared local var
  string name;  // NOTE: this is the programmer's field var name, for the gen-ed actual data member name ref:dataName()

  mixin(GenerateToString);

  // if the pass in type is "", which means need local var type look up in the current scope
  this(string type, string name, VariableScope skope) {  // TODO: in yi, simplify this silly field-by-field ctor
    this.type = PYTHON_TYPE_TO_D_CLASS.get(type, type);
    this.name = name;
    _scope = skope;
  }

  override string varName() {
    return name;
  }

  override string generateCode() {  // NOTE: this actually gen `decl var` code
    return format("%s %s", type, name).strip();  // strip: ref:type_can_be_empty_str
  }

  bool isSame(Variable other) {
    if (this is other) {
      return true;
    }
    return (this.type == other.type) &&
           (this.name == other.name);
  }
}


alias TypeStackPathT = Field[];
alias TypeStackPathAA = SharedAA!(TypeStackPathHashT, TypeStackPathT);
alias SuperClassCastT = SharedAA!(TypeStackPathHashT, string);

bool isSame(TypeStackPathT a, TypeStackPathT b) {
  if (a is b) {
    return true;
  }

  if (a.length != b.length) {
    return false;
  }

  foreach (i; 0 .. a.length) {
    if (!(a[i].isSame(b[i]))) {
      return false;
    }
  }

  return true;
}

class Field : Variable {  // of a ClassDeclaration
  bool newActualFields;   // renamed from superClass, or newly introduced in this class
  bool renamedInDescendants;  // of any depth, including 0, i.e. the (class) place where renaming happend
  int inheritancePathCount;   // how many paths this field is inherited from ancestor, e.g. 2 paths in diamond inheritance

  // e.g. Person._addr => [_Student_addr, _Faculty_addr] in both ResearchAssistant
  // actually we need to record all the history of this Field.name in the subclasses, even it's not renamed to genVFDT
  Rename[] renames;              // how *this* field is renamed in the *subclasses*, could be multiple,
  Rename[] originInBaseClasses;  // how *this* field coming from the *superclasses*, could be multiple, this is the_aggregated_container

  Field oldField;  // can be null, *one-time processing* tmp helper attr (ref:this_rename_can_be_replaced), only *one* origin; this is not ref:the_aggregated_container

  override mixin(GenerateToString);

  this(string type, string name, bool newActualFields, VariableScope skope, Field oldField=null) {
    super(type, name, skope);
    this.newActualFields = newActualFields;
    this.oldField = oldField;
  }

  // we clone to process this Field in the derived class, hence set clone.newActualFields = false
  Field clone(VariableScope skope) {
    Field clone = new Field(this.type, this.name, false, skope, this);
    return clone;
  }

  void resetAllFlags() {
    inheritancePathCount = 0;
  }

  ClassDeclaration getClassDeclaration() {
    ClassDeclaration cd = cast(ClassDeclaration)_scope;
    enforce(cd !is null, "this is a ClassDeclaration's Field!");
    return cd;
  }

  alias isSame = Variable.isSame;  // to introduce base class overload set
  bool isSame(Field other) {
    if (!super.isSame(other)) {
      return false;
    }

    if (this.oldField.name != other.oldField.name) {
      return false;
    }

    // TODO: add more check
    return true;
  }

  /* return string pair, [rawAccessor, vfAccessor],
     lineEnd: either ";", or "" since the head also need to be used in the class method impl again, e.g:

  @property ref string __Faculty_addr()
   */
  string[] toInterfaceCode(string lineEnd) {
    string arg = "";
    if (renamedInDescendants) {  // turn-off optimation for now
      // arg = TypeIdTString ~ " objectViewStackHash";
    }
    string rawAccessor = format("  @property ref %s %s()",   type, rawAccessorName()) ~ lineEnd;
    return [rawAccessor];
  }

  /*
  ref string ResearchAssistant_Faculty_addr(ResearchAssistant self)
   */
  string toVFAccessor() {
    string vfAccessor = format("ref %s %s%s(%s self)", type, _scope.name, name, _scope.name);
    return vfAccessor;
  }

  /* return:
     _field
   */
  static string dataName(string name) {
    return "__" ~ name;
  }

  string dataName() {
    return dataName(name);
  }

  string rawAccessorName() {
    return "_" ~ name;
  }

  /* return:
    private int _field;"
    @property ref int field() {return _field;}

    For virtual field dispatch, the caller need to pass in the owning object's variable type,
    which can be different from this/self object's runtime actual type (for virtual dispatch)

    NOTE: a field can be renamed multiple times down the inheritance DAG.

    <compile time variableTypeId>
    <run     time rtObjectTypeId>: NOTE: rtObjectTypeId must be the subclass of variableTypeId
    // only add this vf dispatch table for fields that are renamed!
    switch (variableTypeId) {
    case subclass1:  return f1;
    case subclass2:  return f2;
    default:         return original_f;
    }
  */
  void calcShortcuts(TypeStackPathT typeStack) {
  }

  TypeStackPathHashT calcFullPathHash(TypeStackPathT typeStack) {
    TypeStackPathHashT hash = 0;
    foreach_reverse (field; typeStack) {
      hash = (hash << 8) | (field.getClassDeclaration().___typeid);
    }
    return hash;
  }

unittest {
  // pass a array fat pointer to func, append to the array in the func, and return
  // the array content can use used as call stack
  int[] arr;
  arr ~= 1;
  Assert.equal(arr.length, 1);
  Assert.equal(arr[0],     1);

void func(int[] ar2) {  // ar2 is a separate fat pointer from arr
  ar2 ~= 2;
  Assert.equal(ar2.length, 2);
  Assert.equal(ar2[0],     1);
  Assert.equal(ar2[1],     2);
}

  func(arr);
  Assert.equal(arr.length, 1);  // NOTE: content unchanged
  Assert.equal(arr[0],     1);

  int[] ar2 = arr;  // ar2 is a separate fat pointer from arr
  ar2 ~= 2;
  Assert.equal(ar2.length, 2);
  Assert.equal(ar2[0],     1);
  Assert.equal(ar2[1],     2);
  Assert.equal(arr.length, 1);  // NOTE: content unchanged
  Assert.equal(arr[0],     1);
}

  static struct VFDTItem {
    string entry;  // the case statement
    int renamedCount;  // of this path
  }

  string genVFDT() {
    string[] res;
    VFDTItem*[TypeStackPathHashT] seenVFDTEntry;  // hash -> VFDTItem*
    // VFDT: if a field access is called on a typeof(this) object (NOT the base class)
    // due to the no-undefine rule, this object must have that field
    // but which of the subclass (if the runtime object type is a subclass of this)
    // should the accessor dispatch to (due to field renaming)?
    // need to navigate the while this.renames which roots from `this`.
    // e.g. on a ResearchAssistant object, call ra.doBenchwork() which calls:
    // -- in Faculty.doBenchwork() access Faculty._addr;
    // -- in Faculty.doBenchwork(), call Person.my_addr() access Person._addr;
    // both these two calls should be directed to ResearchAssistant._Faculty_addr
    // on each node of the DAG, create hash of the visit path stack,
    // and also shrink it (e.g. ta.my_addr() direct call, skip the middle Faculty mode)
    get_system().resetAllFlags();  // need to reset all the ClassDeclarations of the whole system
    TypeStackPathT[] typeStacks;
    TypeStackPathAA[TypeStackPathHashT] stackSegments;  // use (start, end) pair as the 1st hash key, and full path hash as the 2nd hash key

    void calcVFDTEntry(TypeStackPathT typeStack) {
      // extract hash entry, it's calc'ed from the leaf type to the root type (this)
      // because in inheritance, code reuse means derived class reuse the code from the base class.
      TypeStackPathHashT hash;
      enforce(typeStack.length <= 8);
      int renamedCount = 0;
      Field prevF = null;
      foreach_reverse (f; typeStack) {
        ClassDeclaration cd = f.getClassDeclaration();
        enforce(cd.___typeid <= 256);
        hash = (hash << 8) | cd.___typeid;
        if (prevF) {
          if (prevF.name != f.name) {
            renamedCount++;
          }
        }
        prevF = f;
      }
/* detect dup hash!
  case              0x400:  return (cast(ResearchAssistant)self).__addr;
  case              0x400:  return (cast(ResearchAssistant)self).__Faculty_addr;
  case              0x400:  return (cast(ResearchAssistant)self).__Student_addr;
*/
      // when there are dup hash, choose the un-renamed field! otherwise, raise exception

      Field last = typeStack[$ - 1];
      string caseN = rightJustify(format("0x0%x", hash), 18);  // 8 bytes => 16
      string VFDTEntry = format("  case %s:  return (cast(%s)self).%s;  // renamedCount=%d",
//Jav string VFDTEntry = format("  case %s:  result = (cast(%s)self).%s;  break;  // renamedCount=%d",
          caseN, last.getClassDeclaration().name, last.rawAccessorName(), renamedCount);
      // logger.info(mixin(_S!"{VFDTEntry}"));
      VFDTItem* newE = new VFDTItem(VFDTEntry, renamedCount);
      VFDTItem* oldE = seenVFDTEntry.require(hash, newE);
      if (newE != oldE) {  // have existing item
        auto selected = oldE;  // oldE is the one in the dict!
        auto comments = newE;
        if (oldE.renamedCount > newE.renamedCount) {  // NOTE: use the shorter one for now as shortcut, and keep others as comments
          // TODO: issue warning? add assert the shortest newE.renamedCount == 1
          selected = newE;
          comments = oldE;
          oldE.renamedCount = newE.renamedCount;
        }
        oldE.entry = format("%s\n//%s", selected.entry, comments.entry[2 .. $]);
      }
    }

    void recCacheTypeStack(TypeStackPathT typeStack, TypeStackPathT currPath) {
      enforce(typeStack.length >= 1);
      currPath ~= typeStack[0];

      if (typeStack.length == 1) {  // reached rec leaf
        enforce(currPath[$-1] is typeStack[$-1]);
        calcVFDTEntry(currPath);
        return;
      }

      // save a copy of current stack, and cache every segments
      // split this typeStack path in every possible way
      foreach (mid; 1 .. typeStack.length) {
        TypeStackPathT segment = typeStack[0 .. mid+1];  // the head of the path
        enforce(segment.length >= 2);  // at least 2 points
        TypeStackPathHashT startEndKey =
            (segment[$-1].getClassDeclaration().___typeid << 8) |  // shift the object (sub class type) most
            (segment[  0].getClassDeclaration().___typeid);
        TypeStackPathHashT fullPathKey = calcFullPathHash(segment);
        TypeStackPathAA segments = stackSegments.require(startEndKey, new TypeStackPathAA());
        TypeStackPathT seg = segments.require(fullPathKey, segment);
/* using ___typeid alone cannot distinguish path of different field names between the same two class.
2022-07-05T01:15:29.427 [info] system.d:236:recCacheTypeStack seg=[system.Variable(type=string name=_addr), system.Variable(type=string name=_addr)] segment=[system.Variable(type=string name=_addr), system.Variable(type=string name=_addr)] fullPathKey=1540
2022-07-05T01:15:29.428 [info] system.d:236:recCacheTypeStack seg=[system.Variable(type=string name=_addr), system.Variable(type=string name=_addr)] segment=[system.Variable(type=string name=_Faculty_addr), system.Variable(type=string name=_ResearchAssistant_Faculty_addr)] fullPathKey=1540
 */
        // logger.info(mixin(_S!"{seg; segment; fullPathKey}"));
        // enforce(system.isSame(seg, segment));  TODO: this does not hold
        recCacheTypeStack(typeStack[mid .. $], currPath);  // the tail of the path
      }
    }

    TypeStackPathT typeStack = [this];  // dir from super class type (at index 0) to sub class type (at the end of the array)

    void recVisit(Rename[] renames) {
      foreach (rn; renames) {
        enforce(rn.newField);
        rn.newField.inheritancePathCount++;
        typeStack ~= rn.newField;

        TypeStackPathT path = typeStack.dup;  // NOTE: save a *copy* of current stack, and cache every segments
        typeStacks ~= path;
        recCacheTypeStack(path, []);
        recVisit(rn.newField.renames);

        typeStack.popBack();  // after done with rn
      }
    }
    recVisit(this.renames);

    enforce(typeStack.length == 1);

    // to calc squeezed path, we need to visit the DAG 2nd time, the 1st time will collect all the
    // paths from root to each nodes (Person to ResearchAssistant, 3 paths in this example)
    // for any path [start, mids, end], we need to want to try to remove any one of all the mids points
    // and check if there still is only one unique path between [start, end], then create a shortcut path hash
    foreach (ts; typeStacks) {
      calcShortcuts(ts);
    }

    // NOTE: when we use objectViewStack to down cast this impl class
    // we can only cast to the subclass' interface, and call the accessor from there!
    foreach (e; seenVFDTEntry.values()) {
      res ~= e.entry;
    }
    return res.join("\n") ~ "\n";
  }

  // object: "this" (for the data class) or "_object" (for the handle class) to forward the call
  string toClassCode(ClassDeclaration classDeclaration, Rename[] baseNameClashes, string object) {
    string rawBody = format(" {return %s.%s;}", object, rawAccessorName());
    if (object == "this") {
      rawBody = format(" {return %s.%s;}", object, dataName());
    }

    // all the renaming history in subclasses
    string[] comments = ["/* renaming history in subclasses"];
    void recCollect(Rename[] renames) {
      foreach (rn; renames) {
        comments ~= rn.comments;
        enforce(rn.newField);
        recCollect(rn.newField.renames);
      }
    }
    recCollect(this.renames);  // ? baseNameClashes
    comments ~= ["*/"];

    if (!renamedInDescendants) {
      comments = ["// all subclasses share this same field: " ~ dataName()];
    }

    // output originInBaseClasses
    string[] oldFieldsAccessor = [];
    comments ~= ["// originInBaseClasses = "];
    foreach (rn; originInBaseClasses) {
      comments ~= [rn.comments];

      // if this field has been renamed in this class, and (all) its baseclass.name (before renaming) is not in the current class
      // we need to override that baseclass.name accessor: e.g. int __student_age() @property ref;  int __faculty_age() @property ref
      // e.g.
      // Student._student_age -(rn)-> ResearchAssistant._age
      // Faculty._faculty_age -(rn)-> ResearchAssistant._age
      if (rn.orgName !in classDeclaration.actualFields) {
        oldFieldsAccessor ~= rn.oldField.toInterfaceCode("");
        oldFieldsAccessor ~= [rawBody];
      }

    }


    string[] headers = toInterfaceCode("");
    string rawFunc = headers[0] ~ rawBody ~ oldFieldsAccessor.join("\n");
    string result = rawFunc;  // forward only
    if (object == "this") {
      result = (comments ~ [
          "  private " ~ type ~" " ~ dataName() ~ ";",
          rawFunc,
      ]).join("\n");
    }
    return result;
  }

  string toFunctionCode(Rename[] baseNameClashes) {  // accessor global function, NOT class method!
    string rawBody = format(" {return self.%s;}", rawAccessorName());
    string funBody = rawBody;
/* Java
    string declRes = format("  ref %s result;", type);
    string rawBody = format("  result = self.%s;", rawAccessorName());
    string returnR = "  return result;";
    string funBody = "{" ~ declRes ~ rawBody ~ returnR ~ "}";
*/
    if (renamedInDescendants) {
      string vfdt = baseNameClashes.map!(rn => rn.genVFDT()).join("\n");
      vfdt = this.genVFDT();
      ClassDeclaration cd = getClassDeclaration();
      funBody = [
          " { // virtual field dispatch table (VFDT)",
        //declRes,
          format(    "  self = cast(%s)(self.cloneH());", cd.name), // , cd.cloneHandleFuncName),
          format(    "  self.pushObjectViewStack(%d);", cd.___typeid),
          /*
          "  scope(exit) self.popObjectViewStack();",  // D handy shortcut
          */
          "  switch (self.objectViewStackHash) {", vfdt,
	  format("  case %x: %s;", cd.___typeid, rawBody),
          "  default:  enforce(false, format(\"%x\", self.objectViewStackHash));",  // ~ rawBody,
          "  }",
          rawBody,
/* Java
          "  self.popObjectViewStack();",
          returnR,
*/
          "}"].join("\n");
    }

    return toVFAccessor() ~ funBody ~ "\n";
  }
}

class CodeGenerator {
  VariableScope _scope;  // any CodeGenerator must have a scope
  string generateCode() { return "to be implemented in each subclass"; }
  string varName()      { return "to be implemented in each subclass"; }  // right now in Attribute and Variable
}

alias Statement = CodeGenerator;  // TODO: only needed for FunctionCall? which is both Statement and primary

class annotated_rhs : CodeGenerator {
}

immutable annotated_rhs ANNOTATED_RHS_NULL = new annotated_rhs();
annotated_rhs annotated_rhs_null() {
  return cast()ANNOTATED_RHS_NULL;  // cast away immutable
}

class primary : annotated_rhs {
}

string unescapeCtrlChar(string value) {
  string res = value.replace("\n", "\\n")
                    .replace("\t", "\\t");
  return res;
}

// https://docs.python.org/3/library/ast.html#ast.Constant
class Constant : primary {
  string value;
  mixin(GenerateToString);

  this(string val, VariableScope skope) {
    _scope = skope;
    value = val;
  }

  override string generateCode() {
    return '"' ~ unescapeCtrlChar(value) ~ '"';
  }
}

class Attribute : primary {  // python ast.Attribute
  PydObject value;  // e.g. ast.Name
  string attr;

  // mixin ToString!Attribute;

  this(PydObject value, string attr, VariableScope skope) {
    this.value = value;
    this.attr  = attr;
    _scope = skope;
    // logger.info(mixin(_S!"{_scope.name; attr; value}"));
  }

  override string generateCode() {
    // find value's class type in its scope
    string obj = value.id.toString();
    ClassDeclaration cd = cast(ClassDeclaration)(_scope.lookupType(obj));
    string vfdtArg = "";
    if (cd) {
      // check attr is a virtual field need dispatch!
      // here we may get intput like: `ta.holdOfficeHour()`, which is not parsed as a func call, but an Attribute + "()" !
      Field f = cd.actualFields.get(attr, null);
      if (f && f.renamedInDescendants) {  // turn-off optimation for now
        // vfdtArg = format("(%s /* %s */)", cd.___typeid, cd.name);
      }
    }
    // for input: the `self._name`   part of `self._name = "";`, output: Person_name(self), if _name is a field access
    // for input: the `self.my_addr` part of `addr:str = self.my_addr()`, output: my_addr(self), NOTE: we need consume the tail `()` here
    // for input: the `f1.doBenchwork` part of `f1.doBenchwork()`
    string funPrefix = "";
    string res = format("%s.%s", obj, attr);  // TODO: this is quick hack using D's UFCS, ref:transform
    if (attr in cd.actualFields) {  // it's a field!
      funPrefix = cd.name;
      res = format("%s%s(%s)%s", funPrefix, attr, obj, vfdtArg);
    }
    return res;
  }

  override string  varName() { return generateCode(); }
  override string toString() { return generateCode(); }
}


string astNameOrAttributeToString(PydObject obj, VariableScope skope) {
  string pyType = obj.type().toString();
  // logger.info(mixin(_S!"{skope.name; pyType}"));

  if (pyType == "<class 'ast.Attribute'>") {
    return (new Attribute(obj.value, obj.attr.toString(), skope)).toString();
  }

  if (pyType == "<class 'ast.Name'>") {
    return obj.id.toString();
  }

  if (pyType == "<class 'ast.Constant'>") {
    return '"' ~ unescapeCtrlChar(obj.value.toString()) ~ '"';
  }

  return obj.toString();
}


// source/yipy.gram primary -> ast.Call
// https://docs.python.org/3/library/ast.html#ast.Call
class FunctionCall : primary {
  PydObject func;  // func is the function, which will often be a Name or Attribute object.
  PydObject args;  // args holds a list of the arguments passed by position. Name, or Starred str
  string keywords;

  mixin ToString!FunctionCall;

  this(PydObject func, PydObject args, VariableScope skope) {
    this.func = func;
    this.args = args;
    _scope = skope;
    // logger.info(mixin(_S!"{func; args; func.type().toString()}"));
  }

  override string generateCode() {
    string[] as;
    foreach (arg; this.args) {
      as ~= astNameOrAttributeToString(arg, _scope);
    }

    // TODO: this is a *shortcut* to resolve Python class ctor call
    string funName = astNameOrAttributeToString(func, _scope);  // only work for Name
    bool found = false;
    VariableScope s = _scope;
    while (!found && (s !is null)) {
      if (funName in s.classDeclarations) {
        found = true;
        funName = "new" ~ funName;  // e.g. newFaculty() ref:gened_new_ctor_func
        break;
      }
      s = s._scope;  // walkup the scope tree all the way to the root
    }

    funName = PYTHON_FUNC_TO_D_FUNC.get(funName, funName);

    // TODO: transform: f1.doBenchwork(arg) to doBenchwork(f1, arg)
    return format("%s(%s)", funName, as.join(", "));
  }
}


class Return : Statement {
  PydObject result;
  this(PydObject result) {
    this.result = result;
  }

  override string generateCode() {
    return format("return %s", result.toString());
  }
}

class Assertion : Statement {
  string assertion;
  this(string assertion) {
    this.assertion = assertion;
  }

  override string generateCode() {
    return format("assert(%s)", assertion);
  }
}

class Assign : Statement {
  CodeGenerator var;  // Variable or Attribute
  annotated_rhs val;

  this(CodeGenerator var, annotated_rhs val) {
    this._scope = var._scope;
    enforce(this._scope !is null);

    this.var = var;
    this.val = val;
  }

  override string generateCode() {
    // when typeof(var) > typeof(val) (i.e a superclass), we need to update val.objectViewStack
    string varFull = var.generateCode();  // this may include type decl, e.g. `Faculty f2`
    string varName = var.varName();

    string updateStack = "";
    string result = format("%s = %s%s;", varFull, val.generateCode(), updateStack);

    /* compile time lookup:
    // for `f2:Faculty = ra` we want lookupType(`f2`), not lookupType(`Faculty f2`)
    There is no need to updateStack in Assign, in the above example, suppose f2 is never used
    we only want to updateStack when f2.someField is accessed.
    */

    ClassDeclaration cd = cast(ClassDeclaration)(_scope.lookupType(varName));
    // logger.info(mixin(_S!"{varFull; varName; cd}"));
    if (cd !is null) {
      // will process this: self._name = ""
      // not a class type
      // NOTE: we are calling on the interface type, not the class impl type!
    /*
      updateStack = format(";  %s.pushObjectViewStack(%d);\n", varName, cd.___typeid)
        ~ format("  scope(exit) %s.popObjectViewStack()",      varName);
    */
      // e.g. gen: Faculty fr = cast(Faculty)((ra).cloneH());;
      result = format("%s = cast(%s)((%s).cloneH());", varFull, cd.name, val.generateCode())
             ~ format("  %s.pushObjectViewStack(%d);", varName, cd.___typeid);
    }

    return result;
  }
}

class VariableScope {  // one of global, function, or class (method)
  string name;
  Variable[string] variables;     // directly from the source code

  // TODO: Python allow class / function has inner class; in Yi, we should disable it
  ClassDeclaration[string] classDeclarations;  // dict by class name
  ClassDeclaration[] sortedClassDeclarations;  // by c.latticeOrder

  VariableScope _scope;  // e.g. a FunctionDeclaration's parent scope

  FunctionDeclaration[] functions;  // of this scope
  Statement[] statements;  // multiple statements, NOTE: in Python, we can have statements in GlobalScope! so this field is here

  bool isGlobal()           {return false;}
  bool isFunction()         {return false;}
  bool isClassDeclaration() {return false;}

  void resetAllFlags() {
    enforce(classDeclarations.length == sortedClassDeclarations.length);
    foreach (c; sortedClassDeclarations) {
      c.resetAllFlags();
    }
  }

  void addVariable(Variable f) {  // new var decl
    if (f.name in this.variables) {
      writeln(f.name ~ " is defined already!");
    }
    this.variables[f.name] = f;
    f._scope = this;
  }

  void addReturn(PydObject val) {
    statements ~= new Return(val);
  }

  // vars: list of [e.g. ast.Attribute] e.g. a = b = c = 1
  // example input:
  //   LAB = "lab"            // var type: str
  //   fr = st                // `fr` var type: is passed in as `str`
  //   self._addr = "office"  // var type: Attribute
  //   self._name = "" in Person.__init__(self)
  void addAssign(PydObject vars, PydObject pydVal) {
    // logger.info(mixin(_S!"{vars; pydVal}"));  // e.g. vars=[ta._Faculty_addr] pydVal=office
    // TODO: for the chained assign, semanCheck every var
    string[] vs;

    // TODO: merge val proc with addAssignVariable
    annotated_rhs val;
    // ref: source/ast.py proc_Assign_val()
    try {
      val = pydVal.to_d!Variable;
    } catch (pyd.make_object.PydConversionException ex) {
      val = pydVal.to_d!Constant;
    }

    foreach (var; vars) {
      // TODO: need to look up var's type by name
      CodeGenerator v;
      try {
        v = var.to_d!Attribute;
      } catch (pyd.make_object.PydConversionException ex) {
        // TODO: right now, only handle `str`
        //   fr = st                // `fr` var type: is passed in as `str`
        v = new Variable("", var.toString(), this);
      }

      statements ~= new Assign(v, val);
    }
  }

  // NOTE: these funcs (addAssign, addAssignVariable, ...) will be called from Python, which does not have func overload
  void addAssignVariable(Variable var, PydObject pydVal) {  // annotated_rhs val
    annotated_rhs val;
    try {
      val = pydVal.to_d!(annotated_rhs);
    } catch (pyd.make_object.PydConversionException ex) {
      // this try catch is workaround for this autowrap or pyd bug:
      // https://github.com/symmetryinvestments/autowrap/issues/50
      Variable varVal = pydVal.to_d!(Variable);
      val = varVal;
    }
    enforce(val !is null);
    // logger.info(mixin(_S!"{this.isFunction(); var; val}"));
    var._scope = this;
    val._scope = this;
    statements ~= new Assign(var, val);
  }

  void addExpr(PydObject expr) {  // only 2 places: yield_stmt or simple_stmt in source/yipy.gram, both are stmt
    FunctionCall fc = null;
    try {
      fc = expr.to_d!FunctionCall();
    } catch (pyd.make_object.PydConversionException ex) {
      logger.error(mixin(_S!"we should never reach here!"));  // TODO: debug this!
    }
    // NOTE: Python class triple quotes expr=Constant(str) may reach here
    // logger.info(mixin(_S!"{this.isFunction(); expr.type().toString(); typeid(expr).name; fc;}"));
    if (fc) {
      statements ~= fc;
    }
  }

  void addAssertion(string assertion) {  // TODO: right now assertion is just a string used as it is
    statements ~= new Assertion(assertion);
  }

  // only check classDeclarations for now, return null if not found (not class)
  ClassDeclaration lookupType(string varName) {
    // 1) look for the var decl for type string
    Variable var = lookupVarDecl(varName);
    if (var is null) {
      // will process this: self._name = ""
      logger.error(mixin(_S!"no var decl found {this.name; varName}"));
      return null;
    }

    // 2) look for the type object of the type string
    ClassDeclaration type = lookupVarType(var.type);
    if (type is null) {
      logger.error(mixin(_S!"no var type found {this.name; varName; type}"));
    }

    // logger.info(mixin(_S!"var type found {this.name; varName; type}"));
    return type;
  }

  Variable lookupVarDecl(string varName) {
    // TODO: the self in self._addr need special handling
    // logger.info(mixin(_S!"{this.name; varName; this.variables.keys}"));
    Variable var = this.variables.get(varName, null);
    if (var) {
      return var;
    }
    // walkup the tree
    if (_scope) {
      return _scope.lookupVarDecl(varName);
    }

    return null;
  }

  ClassDeclaration lookupVarType(string typeName) {
    // walkup the tree: keep looking for class name: var.type
    ClassDeclaration res = classDeclarations.get(typeName, null);
    if (res !is null) {
      return res;
    }

    if (_scope) {
      return _scope.lookupVarType(typeName);
    }

    return null;
  }
}


class FunctionDeclaration : VariableScope {  // NOTE: for class method, always pass ClassT self, as the 1st arg of the func decl
  Variable[] args;
  PydObject returnType;
  // string statements;  TODO: this is D bug: re-decl with different type! we need to check in Yi!

  mixin ToString!FunctionDeclaration;

  this(string name, Variable[] args, PydObject returnType) {
    this.name = name;
    this.args = args;
    this.returnType = returnType;

    this._scope = get_system().get_current_scope();  // set it in the ctor!
    this._scope.functions ~= this;

    // normalize "self"'s type
    if (_scope.isClassDeclaration()) {
      Variable firstArg = this.args[0];
      if (firstArg.type == VOID) {  // None has been converted to void in Variable.ctor
        firstArg.type = (cast(ClassDeclaration)_scope).name;
      }
    }

    foreach (arg; args) {
      addVariable(arg);
    }
  }

  string generateCode() {
    string args = this.args.map!(a => a.generateCode()).join(",");

    // push pushObjectViewStack for each args
    string[] argInit = [];
    string[] argExit = [];
    foreach (arg; this.args) {
      ClassDeclaration cd = _scope.lookupVarType(arg.type);
      if (cd) {
        argInit ~= format("%s = cast(%s)(%s.cloneH())", arg.name, cd.name, arg.name);  // , cd.cloneHandleFuncName
        argInit ~= format(           "%s.pushObjectViewStack(%d)", arg.name, cd.___typeid);
        /*
        argExit ~= format("scope(exit) %s.popObjectViewStack()",   arg.name);
        */
      }
    }

    string rt = VOID;
    try {
      rt = astNameOrAttributeToString(returnType, this);  // TODO: only handle ast.Name right now
    } catch (/*pyd.make_object.PydConversionException*/ Exception ex) {
      logger.error(mixin(_S!"unhandled {returnType}"));
    }
    string header = format("%s %s(%s)", PYTHON_TYPE_TO_D_CLASS.get(rt, rt), name, args);
    string fbody = chain(argInit, argExit, this.statements.map!(a => a.generateCode())).join(";\n  ");
    string dcode = format("%s {\n  %s;\n}\n", header, fbody);
    return dcode;
  }
}


class ClassDeclaration : VariableScope {
  TypeIdT ___typeid;

  SuperClass[] superClass;  // this won't change, after parsed; keep the original order in source code
  SuperClass[string] superClassDict;  // dict keyed by superClass.name

  // this ClassDeclaration inherited from a number of base classes, and there could be multiple name clashes
  Rename[][string] nameClashes;  // keyed by the attr's original name from the base classes

  mixin(GenerateToString);

  int latticeOrder;  // in the inheritance lattice
  bool fieldsFlattened;
  Field[string] actualFields;  // after semanCheck, and consolidation with superClass' fields, all flattened
  // TODO: provide shallowClone() for each generated D class

  this(string name) {
    // NOTE: this the programmer's class name, in gen-ed code, this is the interface name, and ref: implClassName()
    this.name = name;
  }

  string interfaceName() {
    return name /*~ "I"*/;
  }

  /* return: __A */
  string implClassName() {  // TODO: better name
    return "_" ~ handleClassName();
  }

  /* return:  _A */
  string handleClassName() {
    return "_" ~ name;
  }

  /* return:  cloneAH */
  string cloneHandleFuncName() {
    return "clone" ~ name ~ "H";
  }

  override bool isClassDeclaration() {return true;}

  override void resetAllFlags() {  // TODO: override VariableScope: so, we do NOT support innner classes for now
    foreach (k, v; actualFields) {
      v.resetAllFlags();
    }
  }

  void appendSuperClass(SuperClass s) {
    this.superClass ~= s;
    enforce(s.name !in this.superClassDict, format("%s has dup superClass: %s", name, s.name));
    this.superClassDict[s.name] = s;
  }

  bool allSuperClassFieldsFlattened() {
    foreach (s; this.superClass) {
      if (!s.clazz.fieldsFlattened) {
        return false;
      }
    }
    return true;
  }

  // only check direct superClass
  void semanCheck() {
    logger.info(mixin(_S!"{this.name}"));

    // ensure we semanCheck in_the_inheritance_lattice_order
    enforce(fieldsFlattened == false);
    enforce(actualFields.length == 0);        // we start from scratch!
    enforce(allSuperClassFieldsFlattened());  // now we can refer to them!

    // process fields from superclasses
    // every field either is renamed in the subclass, or keep the same name
    // here we update all the superclasses' fields, setup the link in both directions
    Field newField;
    foreach (SuperClass s; this.superClass) {
      // 1) copy all the superclasses' fields *as it is* into local container
      enforce(s.clazz.fieldsFlattened);
      typeof(s.clazz.actualFields) af;  // we only process this SuperClass in this local var container
      foreach (k, oldField; s.clazz.actualFields) {
        newField = oldField.clone(this);  // first clone
        af[k] = newField;  // NOTE: when there are renames, this entry could be replaced by the following old_name_as_key to_the_new_name
        Rename rn = new Rename(this, s, newField.name, newField.name, newField);
        newField.originInBaseClasses ~= rn;
        oldField.renames ~= rn;  // NOTE: this_rename_can_be_replaced
      }

      // 2) process adapters, e.g. renamed fields
      foreach (ca; s.classAdapters) {  // process in the same original order as in the source code
        Field oldField = s.clazz.actualFields[ca.orgName];
        newField = ca.process(oldField, this);  // ref:old_must_be_from_the_super_clazz_actualFields
        Field existing = af.get(ca.orgName, null);
        if (existing) {
          existing = existing.oldField;
	  enforce(existing.renames[$-1].asItIs());  // { TODO: we should filter element by this predicate
            existing.renames = existing.renames[0 .. $-1];  // ref:this_rename_can_be_replaced
	  // }
        } else {
          logger.error(mixin(_S!"the programmer renamed *non-exist* field {this.name; ca.orgName} multiple times: {existing; newField}"));
          core.stdc.stdlib.exit(-1);
	}

        af[ca.orgName] = newField;  // map from old_name_as_key to_the_new_name, ref:new_name_as_key in actualFields
        newField.originInBaseClasses ~= cast(Rename)ca;
        oldField.renames ~= cast(Rename)ca;
      }

      // 3) dump local var container of this one SuperClass into subclass' actualFields
      foreach (orgName, f; af) {
        // ref:newField_will_be_set_in_subclass_ClassDeclaration
        // NOTE: fields with the same name here is joined, TODO: update f.comments
        Field existing = actualFields.get(f.name, null);
        // by default dup are joined: enforce(existing is null, mixin(_S!"{this.name} has dup field: {f.name; existing; orgName; f}"));
	// logger.info(mixin(_S!"{this.name} field: {f.name; existing; orgName; f}"));
        if (existing) {
          if (!existing.isSame(f)) {
            // logger.error(mixin(_S!"multiple base class-es fields renamed to the same final field {this.name; f.name} {existing; f}"));
            // core.stdc.stdlib.exit(-1);
	  }
          existing.originInBaseClasses ~= f.originInBaseClasses;  // keep all the history record, i.e. merge history when this field name clash from other superclass
        } else {
          actualFields[f.name] = f;  // when dump from local var container to actualFields, use the new_name_as_key (ref:old_name_as_key)
	}
      }
    }

    // now add this class' own fields, check for name clash
    foreach (v; variables.values()) {
      Field f = cast(Field)v;
      f.newActualFields = true;
      enforce(f.name !in actualFields, this.name ~ "'s super class has defined " ~ f.toString() ~ " already!");
      actualFields[f.name] = f;
    }

    fieldsFlattened = true;
    enforce(actualFields.length >= variables.length);  // TODO: enforce variables is a subset of actualFields

    foreach (s; this.superClass) {
      enforce(s.clazz.fieldsFlattened);
      foreach (e; actualFields.byKeyValue) {
        Field orig = s.clazz.actualFields.get(e.key, null);  // this particular superClass may not have it
        if (orig) {
          // e.value
        }
      }
    }

    // TODO: check no missing fields; e.g. *both* Student and Faculty renamed Person._addr, then we missing one ResearchAssistant._addr
    // NOTE: for now, the underlying target language compiler will check this error.
  }

  /* for each Yi class A, will generate:
     -- interface A : (multiple inherent other interface) {
          // no field def, since field not allowed in interface (see test/i.d)
          // only accessor method proto, e.g:
          @property ref int field();
        }

     -- class _A : A (single A) {
          // the actual fields
          private int field_;

          // the accessor method implementation
          @property ref int field() {
            return field_;
          }
        }

     -- for fields reuse: the ClassAdapter are actually only change the accessor method
     -- for code reuse: use the multi-method, which access the implementation class' field via `ref type field`
     check testdata/ref.d

     usage:
     -- A a = new _A();
     -- "A newA() {return new _A();}"  shortcut func provided
   */
  void collectNameClashes() {  // (inheritance) name clash resolution!
    enforce(nameClashes.length == 0, "this is the only collection point");
    foreach (base; this.superClass) {     // loop on all bases
      foreach (ca; base.classAdapters) {  // loop on all adapters
        if (Rename rn = cast(Rename)ca) {
          nameClashes[rn.orgName] ~= rn;  // collect new renames introduced in this ClassDeclaration
        }
      }
      // also clone* from base, a field once rename in one class, all that class's descendants
      // also need this information to build genVFDT() of their own
      // e.g. in test/univ_dual_no_rename__Faculty_addr.py the OnlineOfflineDualTA example even without rename _Faculty_addr
      // OnlineOfflineDualTA need VFDT for _addr
      foreach (e; base.clazz.nameClashes.byKeyValue) {  // for each orgName
newName_loop:
        foreach (Rename baseRename; e.value) {
          // clone here! because in the following ref:chain_shortcut_assignment, it should only change the newName
          // of the current class's VFDT nameClashes, if we keep (shared) reference to base.clazz.nameClashes,
          // that assignment will inadvertently change the base class's VFDT nameClashes

          // due to multiple inheritance, e.g. in test/rename_chain.yi, for class D2(D1(rename _Base_addr), D1_Dup, Base_Dup):
          // D2 will clone both D1 and D1_Dup's VFDT, however, they both contains: Base._addr -(rename)-> D1._Base_addr
          // (since D1_Dup is D1's dup!)
          // however, there is only one field with that unique (orgName and newName), we need skip such dup Rename entry
          auto needle = baseRename;
          foreach (old; nameClashes.get(e.key, [])) {
            if (old.isSame(needle)) {
              old.comments ~= format(" & %s", needle.comments);
              continue newName_loop;  // it's a dup entry
            }
          }
          nameClashes[e.key] ~= baseRename.dup;  // jdiutil.dup!Rename
        }
      }
    }

    // convert chain in nameClashes to direct link
    // e.g. Faculty._addr => ResearchAssistant._Faculty_addr => DualRATA._ResearchAssistant_Faculty_addr
    // we need create direct link from Faculty._addr => DualRATA._ResearchAssistant_Faculty_addr
    // this need to be a while loop to calc closure, until no more shortcut is created
    bool newShortcutCreated;
    do {
      newShortcutCreated = false;
      foreach (e; nameClashes.byKeyValue) {
        logger.info(mixin(_S!"{this.name; e.key; e.value;}"));
        foreach (Rename rn; e.value) {
          Rename[] nextRenames = nameClashes.get(rn.newName, []);
          if (nextRenames.length > 0) {  // i.e the rn.newName is rename again!
            // rn.newName is renamed again! let's replace this rn.newName to nrn.newName
            foreach (Rename nrn; nextRenames) {  // TODO: generate compiler error: multiple renamed targets, the programmer must specify only one to dispatch to!
              rn.newName = nrn.newName;  // this chain_shortcut_assignment can only be done once!
              rn.comments ~= format(" ; %s", nrn.comments);
              newShortcutCreated = true;
            }
          }
        }
      }
    } while (newShortcutCreated);
  }

  // this method only set the bool flag
  void recSetAncestorsRenamedInDescendants(string fieldName) {
    Field f = actualFields.get(fieldName, null);
    logger.info(mixin(_S!"{this.name; fieldName; f;}"));
    if (f is null) {
      // TODO: assert, fieldName must be a new name in the rec func call coming derived class
      return;  // not present in this class, done!
    }
    f.renamedInDescendants = true;

    foreach (base; superClass) {
      // TODO: is this correct? setAllAncestorsRenamedInDescendants has been called at each level already
      base.clazz.recSetAncestorsRenamedInDescendants(fieldName);
    }
  }

  void setAllAncestorsRenamedInDescendants() {
    foreach (renames; nameClashes.byKeyValue) {
      foreach (Rename rn; renames.value) {
        enforce(rn.orgName == renames.key, "ensure nameClashes dict integrity");

	ClassDeclaration baseClass = rn.base.clazz;
        Field f = baseClass.actualFields[rn.orgName];
	enforce(f !is null);

        // continue walkup to the inheritance DAG
        baseClass.recSetAncestorsRenamedInDescendants(rn.orgName);
      }
    }
  }

  // an object of `this` type can cast (monkey jump) between any two nodes of its superclass DAG
  void recCalcMonkeyJumpHash(ClassDeclaration src, SuperClassCastT superClassCasts) {
    // jump from src(this) to tgt, is tgt a superclass of src? cache every pair
    TypeStackPathHashT hash;
    foreach (base; superClass) {
      // from leaf type (at the bottom index-0 of the stack) to root type (at the top of the stack)
      hash = (src.___typeid << 8) | base.clazz.___typeid;
      superClassCasts[hash] = format("// %s -> %s", src.name, base.clazz.name);
      base.clazz.recCalcMonkeyJumpHash(src, superClassCasts);
    }
  }

  string generateCode() {
    auto sortedFields = this.actualFields.values().sort!("a.name < b.name");

    string superClassCode = ": MIObject";
    if (this.superClass.length > 0) {
      superClassCode ~= ", " ~ this.superClass.map!(s => s.clazz.interfaceName).join(", ");
    }

    enum baseNameClashes = "nameClashes.get(f.name, [])";
    // output only *new* fields in the interface
    string interfaceCode = chain(["interface " ~ this.interfaceName ~ superClassCode ~ " {"],
        sortedFields.filter!(f => f.newActualFields).map!(f => f.toInterfaceCode(";").join("\n")).array,
        ["}"]).join("\n");

    string constMod = "const";  // "final" for Java
    // output all (old + new) the fields in the class
    string classCode = chain(
        ["// the actual data class"],
        ["class " ~this.implClassName()~ " : __MIObject, " ~this.interfaceName~ " {"],
        // NOTE we cannot put ___typeid in the interface, because it could have multiple sub-interfaces
        [format("  // static %s %s ___typeid = 0x%02x;", constMod, TypeIdTString, this.___typeid)],  // all the object of the same class share this same ___typeid;
        [format("  // flattened fields: [%s]", sortedFields.map!(f => f.name).join(", "))],
        sortedFields.map!(  f => f.toClassCode(this, mixin(baseNameClashes), "this")).array,
        ["}"],
        ["// the handle (fat pointer) class"],
        ["class " ~this.handleClassName()~ " : _MIObject, " ~this.interfaceName~ " {"],
        [format("  %s _object;  // forward all the calls to _object", this.interfaceName)],  // NOTE: cannot use implClassName(), because we need be able to assign handle to handle
        ["  MIObject object() {enforce(_object);\n  return _object;}"],
        // ["  alias _object this;"],  // Error: alias this is not reachable as `_PersonH` already converts to `univ.Person`
         // NOTE: we need to clone the *runtime* type of the oldH!
         //format("%s %s(%s oldH) {", this.interfaceName, this.cloneHandleFuncName(), this.interfaceName),
        ["  MIObject cloneH() {  // TODO:we should really has covariant return type",
         "  alias oldH = this;",
         format("  %s newH = new %s();", this.handleClassName, this.handleClassName),
         format("  newH._object = cast(%s)(oldH.object());  // same underlying _object", this.interfaceName),
         "  // copy the current view stack",
         "  enforce(newH._object);",
         "  newH._objectViewStack     = oldH.objectViewStack;",
         "  newH._objectViewStackHash = oldH.objectViewStackHash;",
         "  return newH;",
         // "  return oldH.cloneH();",
         "}"],
        sortedFields.map!(  f => f.toClassCode(this, mixin(baseNameClashes), "_object")).array,
        ["}"],
        sortedFields.map!(  f => f.toFunctionCode(mixin(baseNameClashes)) ).array,
        this.functions.map!(f => f.generateCode()).array,
	).join("\n");

    // ref:gened_new_ctor_func: Person newPerson() {Person obj = new _Person(); obj.pushObjectViewStack(0); return obj;}
    string newFuncCode = format("%s new%s() {%s obj = new %s(); obj._object = new %s(); obj.pushObjectViewStack(%d); return obj;}",
        this.name, this.name,
        this.handleClassName(),
        this.handleClassName(),
        this.implClassName(), this.___typeid);

    string result = [interfaceCode, classCode, newFuncCode, ""].join("\n\n");
    // writeln(result);


    return result;
  }
}


class ClassAdapter : CodeGenerator {
  // set during parsing
  string orgName;  // original name of the field or method
  SuperClass base;  // uplink to the base class

  // set after parsing source, during semanCheck
  Field oldField;  // in the base class
  Field newField;

  // cannot use abstract due to: https://github.com/symmetryinvestments/autowrap/issues/307
  /*abstract*/ Field process(Field oldField, VariableScope newSkope) {return null;};  // return a new Field
}

// we will output multiple languages, so let's do checks as much as possible in this D module here
immutable string PYTHON_NONE = "None";
immutable string VOID = "void";
immutable (string)[string] PYTHON_TYPE_TO_D_CLASS, PYTHON_FUNC_TO_D_FUNC;
static this () {
  // https://stackoverflow.com/a/26862994
  PYTHON_TYPE_TO_D_CLASS = [
    "object": "Object",  // work for Java too
    "str": "string",
    PYTHON_NONE: VOID,
  ];
  PYTHON_FUNC_TO_D_FUNC = [
    "print": "write",
  ];
}

class SuperClass {  // of a derived ClassDeclaration, e.g. which may rename multiple fields of a SuperClass
  string name;

  // classAdapters is used to specify how this SuperClass is adapted to the inheriting *derived* ClassDeclaration
  // note there could be repeated inheritance, i.e. the same SuperClass is inherited multiple times by the ClassDeclaration
  ClassAdapter[] classAdapters;  // keep the original order in source code

  ClassDeclaration clazz;  // the class object of *this* SuperClass after linked
  ClassDeclaration derived;

  this(ClassDeclaration derived, string name) {

    // TODO: handle repeated inheritance here! gen empty class as Base_0, Base_1, etc.
    // check if derived has this superClass already

    this.name = PYTHON_TYPE_TO_D_CLASS.get(name, name);

    this.derived = derived;
    if ("Object" != this.name) {  // TODO: properly by-pass target language's built-in classes; only Python right now
      derived.appendSuperClass(this);
    }

    enforce(this.name in get_system().classDeclarations, this.derived.name ~ "'s superClass " ~ this.name ~ " not found!");
    this.clazz = get_system().classDeclarations[this.name];  // link to super class object
  }

  void appendClassAdapter(ClassAdapter ca) {
    this.classAdapters ~= ca;
    ca.base = this;
  }
}


class Rename : ClassAdapter {
  string newName;
  string comments;  // only set in ctor, we can put in the genCode output

  // autowrap cannot work with immutable/const? https://github.com/symmetryinvestments/autowrap/issues/120
  // ERROR! Autowrap could not wrap aggregate `system.Rename` for Python
  static string RENAME_OP = "-(rn)->";
  static string ASITIS_OP = "-(==)->";

  mixin(GenerateToString);

  bool asItIs() {
    bool aii = (orgName == newName);
    if (aii) {
      enforce(this.newField !is null);
    }
    return aii;
  }

  // NOTE: this._scope is the derived class
  // NOTE: this.newField will be set correctly here, when called from ref:to_the_new_name for asItIs(); or set in this.process()
  // newName can be null, in such case it will be auto-gen-ed by using the SuperClass.name ~ orgName
  this(VariableScope skope, SuperClass superClass, string orgName, string newName, Field newField=null) {
    _scope = skope;
    this.newField = newField;
    enforce(_scope.isClassDeclaration());

    enforce(newName !is null);
    this.orgName = orgName;
    this.newName = newName;

    string op = ASITIS_OP;
    if (!asItIs()) {  // i.e skip trivial Rename; TODO: shall we treat them homogeneously?
      superClass.appendClassAdapter(this);
      op = RENAME_OP;
    }

    comments = format("// %s.%s %s %s.%s",
        superClass.clazz.name, this.orgName, op,
        this._scope.name,      this.newName);

    // also update superClass.orgName to store how its subclass renamed to the newName
  }

  // NOTE: ref:old_must_be_from_the_super_clazz_actualFields
  override Field process(Field oldField, VariableScope newSkope) {  // return a new Field, ref:newField_will_be_set_in_subclass_ClassDeclaration
    enforce(this.oldField is null);

    this.oldField = oldField;  // setup the link, each Rename only has one oldField in the base class

    enforce(oldField.name == orgName);
    enforce(!asItIs());
    enforce(this.newField is null);  // if we reach here, `this` object is created from the ast.py visitor
    this.newField = new Field(oldField.type, newName, true, newSkope, oldField);
    return this.newField;
  }

  // the dispatcher need to use objectViewStack to determine if there is only one unique renaming path
  // to the runtime object type, then use that renaming path; otherwise, use the shortest renaming path, the reason
  // is that otherwise, the programmer would have chosen an alternative renaming path.
  // return "  case subclass1:  return f1;"
  string genVFDT() {
    // NOTE: the ___typeid is defined in each of the generated code's class's body, and
    // the generated class doe not inherit from other classes, only from other interfaces
    // so in the generated code, we can use ___typeid for runtime type check
    // we need cast to the runtime type here when in the gen code: `this.___typeid (runtime object type) != variableTypeId`
    // i.e to derived class's representing interface
    string res = format("    case %d /* %s */:  return %s;  %s",
        this.base.clazz.___typeid,
        this.base.clazz.name,
        // TODO: should the target be accessor call with (variableTypeId) passed and further dispatched (e.g. being renamed again)?  // newName ~ "(variableTypeId)"
        Field.dataName(newName),  // for now we use the actual data member, since we optimize by building the dispatch table ourselves: chain_shortcut_assignment
	this.comments
	);
    return res;
  }

  // check: test/diamond.yi, NOTE: the comments could be different depending on the inheritance renaming path
  bool isSame(Rename other) {
    return (this.base.clazz.___typeid == other.base.clazz.___typeid) &&
           (this.orgName == other.orgName) &&
           (this.newName == other.newName);
  }
}

alias GlobalScope = System;
class System : VariableScope {  // System is *the* GlobalScope
  VariableScope[] _var_scope_stack = [];  // to help resolve variable scope: local, class, global
  SuperClassCastT superClassCasts = new SuperClassCastT();
  string targetLang;

  // mixin Singleton!System;  // we need globl analysis, so only *one* System!

  this() {
    this.name = "GlobalScope";
    _var_scope_stack ~= this;
    enforce(this._scope is null);
  }

  override bool isGlobal() {return true;}

  void set_target_lang(string lang) {
    targetLang = lang;
  }

  VariableScope get_current_scope() {
    return _var_scope_stack[$-1];
  }

  ClassDeclaration get_current_class() {
    foreach_reverse (s; _var_scope_stack) {
      if (s.isClassDeclaration()) {
        return cast(ClassDeclaration)s;
      }
    }
    logger.error(mixin(_S!"no scope class found"));
    return null;
  }

  void push_var_scope_stack(VariableScope s) {
    s._scope = _var_scope_stack[$-1];
    _var_scope_stack ~= s;
  }

  void pop_var_scope_stack() {
    _var_scope_stack.popBack();
  }


  // return the newly created ClassDeclaration, or null on duplicate
  ClassDeclaration addClassDeclaration(string className) {
    if (className in this.classDeclarations) {
      logger.info(mixin(_S!"duplicate defined class: {className}"));
      return null;
    }

    ClassDeclaration c = new ClassDeclaration(className);
    c.___typeid = cast(TypeIdT)(this.classDeclarations.length);
    this.classDeclarations[className] = c;
    push_var_scope_stack(c);

    return c;
  }

  bool addFunctionDeclaration(FunctionDeclaration f) {
    push_var_scope_stack(f);
    return true;
  }

  // whole system semantic check for all the class, and generate code
  string semanCheck() {

    // 1) build class inheritance lattice, this lattice will also be the basis of runtime multiple dispatch
    foreach (c; classDeclarations.values()) {
      foreach (s; c.superClass) {
      }
    }

    // 2.0) calc each class fields (i.e flatten them), from the top to bottom of the lattice
    enforce(sortedClassDeclarations.length == 0);
    int processedCount = 0, oldProcessedCount = 0;
    do {
      oldProcessedCount = processedCount;
      foreach (c; classDeclarations.values()) {
        // this condition ensure we work on class decl in_the_inheritance_lattice_order from top to bottom
        if (c.allSuperClassFieldsFlattened() && !c.fieldsFlattened) {
          c.semanCheck();
          c.latticeOrder = processedCount++;
	  sortedClassDeclarations ~= c;
        }
      }
    } while (oldProcessedCount < processedCount && processedCount < classDeclarations.length);
    enforce(classDeclarations.length == processedCount);
    enforce(classDeclarations.length == sortedClassDeclarations.length);

    // 2.1) set each class' field's renamedInDescendants flag
    foreach (c; sortedClassDeclarations) {
      c.collectNameClashes();
    }
    foreach_reverse (c; sortedClassDeclarations) {
      c.setAllAncestorsRenamedInDescendants();
    }

    // 2.2) 
    foreach (c; sortedClassDeclarations) {
      c.recCalcMonkeyJumpHash(c, superClassCasts);
    }

    // 3) generate D code: interface, and implementation, and runtime dispatch table
    string allCode = chain(
       [MIObjectClass,
        q{static immutable enum int[TypeStackPathHashT] superClassCasts = [}],
        superClassCasts.byKeyValue().map!(kv => format("  0x%x: 1, %s", kv.key, kv.value)),
       [q{];}, "\n\n"]
        ).join("\n");
    allCode ~= sortedClassDeclarations.map!(c => c.generateCode()).join("\n");

    // 4) output global vars & functions
    enforce(_var_scope_stack.length == 1, "GlobalScope must be there!");
    GlobalScope gs = cast(GlobalScope)(_var_scope_stack[0]);
    // TODO: properly handle gs statements and functions decl sequence with all class decls
    allCode = chain(gs.statements.map!(a => a.generateCode()),
        ["\n", allCode, "\n"],
        gs.functions.map!(f => f.generateCode())
        ).join("\n");

    // writeln(allCode);
    return allCode;
  }

  export void summary() {
    writeln("System.summary()");
    foreach (c; classDeclarations.values()) {
      // writeln(c);
    }
  }

  // autowrap cannot work with immutable/const? https://github.com/symmetryinvestments/autowrap/issues/120
  // ERROR! Autowrap could not wrap aggregate `system.System` for Python
  static string MIObjectClass = q{// do NOT edit: this is generated file by Yi yc!
import std.array;
import std.exception;
import std.format;
import std.stdio;

alias TypeIdT = uint;  // ref:___typeid; 2 bytes ushort 65,536 too fewer for large system; let's use 4 bytes
alias TypeStackPathHashT = ulong;

interface MIObject {
  MIObject object();  // return the impl object from the handle
  MIObject cloneH();  // return the clone of the handle
  void pushObjectViewStack(TypeIdT typeId);
  void  popObjectViewStack();
  TypeIdT[]          objectViewStack();
  TypeStackPathHashT objectViewStackHash();
}

class __MIObject : MIObject {
  MIObject object()                         {enforce(false, "should never be called on implClassName"); return null;}
  MIObject cloneH()                         {enforce(false, "should never be called on implClassName"); return null;}
  void pushObjectViewStack(TypeIdT typeId)  {enforce(false, "should never be called on implClassName");}
  void  popObjectViewStack()                {enforce(false, "should never be called on implClassName");}
  TypeIdT[]          objectViewStack()      {enforce(false, "should never be called on implClassName"); return null;}
  TypeStackPathHashT objectViewStackHash()  {return TypeStackPathHashT.max;}
}

abstract class _MIObject : MIObject {
  TypeIdT[]          _objectViewStack;  // only var type change need to be pushed into stack; cast need to be in the stack
  TypeStackPathHashT _objectViewStackHash;

  void pushObjectViewStack(TypeIdT typeId) {
    // since we need push/pop in pairs, we cannot do this early optimization,
    // otherwise pop will always be executed even there is no real push.
    // let's compress the stack only when calc hash
    if (_objectViewStack.length == 0 || _objectViewStack[$-1] != typeId) {  // has to be diff from stack top
      // make sure castHash is valid
      while (_objectViewStack.length >= 1) {
        TypeStackPathHashT castHash = ((_objectViewStack[$-1] << 8) | typeId);
        if (castHash in superClassCasts) {
          break;
        }
        writefln("monkey jump type cast: bad castHash %x", castHash);
        // pop until castHash is valid
        popObjectViewStack();  // will also update the cached value: _objectViewStackHash
      }

      _objectViewStackHash = (_objectViewStackHash << 8) | typeId;
    }
    _objectViewStack ~= typeId;
  }

  // TODO: due to value semantics of the holding variable, pop is not needed any more
  void popObjectViewStack() {
    TypeIdT typeId = _objectViewStack.back();
    _objectViewStack.popBack();
    if (typeId != _objectViewStack.back()) {
      _objectViewStackHash >>= 8;
    }
  }

  // NOTE: hash is calc-ed incrementally in runtime, this func is only for cross-check in debug build
  TypeStackPathHashT recalcObjectViewStackHash() {
    TypeStackPathHashT hash;
    TypeIdT prev = TypeIdT.max;
    foreach (type; _objectViewStack) {  // from leaf type (at the bottom index-0 of the stack) to root type (at the top of the stack)
      if (type != prev) {  // NOTE: remove dup stack frame here
        enforce(type <= 256);
        hash = (hash << 8) | type;
        prev = type;
      }
    }
    return hash;
  }

  TypeIdT[] objectViewStack() {
    return _objectViewStack;
  }

  TypeStackPathHashT objectViewStackHash() {
   version (all) {  // debug build
    TypeStackPathHashT hash = recalcObjectViewStackHash();
    enforce(_objectViewStackHash == hash);
   }
    return _objectViewStackHash;
  }
}

};

  // yiFn: univ.yi
  string genCode(string yiFn) {
    // whole system semantic check for all the class, and generate code
    string dcode = this.semanCheck();
    this.summary();

    enforce(yiFn.endsWith(DOT_YI));
    long end = lastIndexOf(yiFn, ".");  // remove last 2 dots
    string dFn = yiFn[0 .. end] ~ "." ~ get_system().targetLang;
    std.file.write(dFn, dcode);
    return dcode;
  }

}

__gshared System _system;  // TODO: export_able_Singleton
export System get_system() {  // e.g. export to Python, Python naming convention
  if (_system is null) {
    _system = new System(); // private ctor of System.getSingleton(); is not exportable
  }
  return _system;
}



version (none) {
// input Yi code, output D code; the AST tree visitor
string compile(ProgramArgs pargs, string yiFn) {

  auto system = get_system();

  string yicode = std.file.readText(yiFn);
  auto p = YiD(yicode);  // YiP
  // writeln(p, p.matches);  // useful for debug

  void visitSuperClass(ParseTree p, SuperClass s) {
    switch (p.name) {
    case YI_FLAVOR ~ ".ClassAdapters":
    case YI_FLAVOR ~ ".ClassAdapter":
      foreach(i, child; p.children) {
        visitSuperClass(child, s);
      }
      return;
    case YI_FLAVOR ~ ".Rename":
      /*
      foreach(i, child; p.children) {
        writeln(i, child);
      }
      */
      auto rn = new Rename(s,
        p.children[0].matches[0],
        p.children[1].matches[0]
      );
      return;
    default:
      enforce(false, "shouldn't reach here: " ~ p.name);
    }
  }

  void visitClassDeclaration(ParseTree p, ClassDeclaration c) {
    switch (p.name) {
    case YI_FLAVOR ~ ".SuperClass":
      auto s = new SuperClass(c, p.children[0].matches[0]);
      foreach (child; p.children[1..$]) {
        visitSuperClass(child, s);
      }
      writeln(s.name, s.classAdapters);
      return;
    case YI_FLAVOR ~ ".Field":
      auto f = new Field(
        p.children[0].matches[0],
        p.children[1].matches[0],
        true,
      );
      c.addVariable(f);
      return;
    default:
      foreach (i, child; p.children) {
        visitClassDeclaration(child, c);
      }
      // enforce(false, "shouldn't reach here: " ~ p.name);
    }
  }

  // output D code
  void visit(ParseTree p) {
    writeln("==================================================");
    writeln(p.name);
    switch (p.name) {
    case YI_FLAVOR ~ ".ClassDeclaration":
      string className = p.children[0].matches[0];
      auto c = system.addClassDeclaration(className);
      foreach (child; p.children[1..$]) {
        visitClassDeclaration(child, c);
      }
      writeln(c.name, c.superClass, c.variables);
      return;
    default:
      writeln(p.name);
      writeln(position(p));
      writeln(p.matches);
      foreach (i, child; p.children) {
        visit(child);
      }
    }
  }

  visit(p);  // pass the tree root
  system.genCode(yiFn);

  return dcode;
}
}


version (none) {
int main(string[] args) {
  auto program = new Program("yc", "0.0.1");
  if (args.length <= 1) {
    program.printHelp();
    return 0;
  }

  auto pargs = program.summary("Yi compiler").author("<admin@yilabs.com>")
          .add(new commandr.Flag("v", null, "turns on more verbose output")
              .name("verbose")
              .repeating)
          .add(new Option("c", "YISRC", "").validateEachWith(opt => opt.isFile, "must be a valid file"))
          .parse(args);

  string yiFn = pargs.option("YISRC");
  if (!yiFn.endsWith(DOT_YI)) {
    writeln("invalid input filename: " ~ yiFn);
    return -1;
  }

  compile(pargs, yiFn);

  return 0;
}
}

