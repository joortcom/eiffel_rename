string LAB = "lab";
string HOME = "home";
string DORM = "dorm";


// do NOT edit: this is generated file by Yi yc!
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


static immutable enum int[TypeStackPathHashT] superClassCasts = [
  0x301: 1, // ResearchAssistant -> Student
  0x300: 1, // ResearchAssistant -> Person
  0x100: 1, // Student -> Person
  0x302: 1, // ResearchAssistant -> Faculty
  0x200: 1, // Faculty -> Person
];


interface Person: MIObject {
  @property ref string __addr();
  @property ref string __name();
}

// the actual data class
class __Person : __MIObject, Person {
  // static const uint ___typeid = 0x00;
  // flattened fields: [_addr, _name]
/* renaming history in subclasses
// Person._addr -(==)-> Faculty._addr
// Faculty._addr -(rn)-> ResearchAssistant._faculty_addr
// Person._addr -(==)-> Student._addr
// Student._addr -(rn)-> ResearchAssistant._student_addr
// Person._addr -(==)-> ResearchAssistant._addr
*/
// originInBaseClasses = 
  private string ___addr;
  @property ref string __addr() {return this.___addr;}
// all subclasses share this same field: ___name
// originInBaseClasses = 
  private string ___name;
  @property ref string __name() {return this.___name;}
}
// the handle (fat pointer) class
class _Person : _MIObject, Person {
  Person _object;  // forward all the calls to _object
  MIObject object() {enforce(_object);
  return _object;}
  MIObject cloneH() {  // TODO:we should really has covariant return type
  alias oldH = this;
  _Person newH = new _Person();
  newH._object = cast(Person)(oldH.object());  // same underlying _object
  // copy the current view stack
  enforce(newH._object);
  newH._objectViewStack     = oldH.objectViewStack;
  newH._objectViewStackHash = oldH.objectViewStackHash;
  return newH;
}
  @property ref string __addr() {return _object.__addr;}
  @property ref string __name() {return _object.__name;}
}
ref string Person_addr(Person self) { // virtual field dispatch table (VFDT)
  self = cast(Person)(self.cloneH());
  self.pushObjectViewStack(0);
  switch (self.objectViewStackHash) {
  case           0x030200:  return (cast(ResearchAssistant)self).__faculty_addr;  // renamedCount=1
  case             0x0300:  return (cast(ResearchAssistant)self).__addr;  // renamedCount=0
//case             0x0300:  return (cast(ResearchAssistant)self).__faculty_addr;  // renamedCount=1
//case             0x0300:  return (cast(ResearchAssistant)self).__student_addr;  // renamedCount=1
  case             0x0100:  return (cast(Student)self).__addr;  // renamedCount=0
  case           0x030100:  return (cast(ResearchAssistant)self).__student_addr;  // renamedCount=1
  case             0x0200:  return (cast(Faculty)self).__addr;  // renamedCount=0

  case 0:  {return self.__addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__addr;}
}

ref string Person_name(Person self) {return self.__name;}

void __init__(Person self) {
  self = cast(Person)(self.cloneH());
  self.pushObjectViewStack(0);
  Person_name(self) = "";;
  Person_addr(self) = "";;
}

string get_addr(Person self) {
  self = cast(Person)(self.cloneH());
  self.pushObjectViewStack(0);
  string r = Person_addr(self);;
  return r;
}


Person newPerson() {_Person obj = new _Person(); obj._object = new __Person(); obj.pushObjectViewStack(0); return obj;}


interface Faculty: MIObject, Person {
  @property ref int __faculty_age();
}

// the actual data class
class __Faculty : __MIObject, Faculty {
  // static const uint ___typeid = 0x02;
  // flattened fields: [_addr, _faculty_age, _name]
/* renaming history in subclasses
// Faculty._addr -(rn)-> ResearchAssistant._faculty_addr
*/
// originInBaseClasses = 
// Person._addr -(==)-> Faculty._addr
  private string ___addr;
  @property ref string __addr() {return this.___addr;}
/* renaming history in subclasses
// Faculty._faculty_age -(rn)-> ResearchAssistant._age
*/
// originInBaseClasses = 
  private int ___faculty_age;
  @property ref int __faculty_age() {return this.___faculty_age;}
// all subclasses share this same field: ___name
// originInBaseClasses = 
// Person._name -(==)-> Faculty._name
  private string ___name;
  @property ref string __name() {return this.___name;}
}
// the handle (fat pointer) class
class _Faculty : _MIObject, Faculty {
  Faculty _object;  // forward all the calls to _object
  MIObject object() {enforce(_object);
  return _object;}
  MIObject cloneH() {  // TODO:we should really has covariant return type
  alias oldH = this;
  _Faculty newH = new _Faculty();
  newH._object = cast(Faculty)(oldH.object());  // same underlying _object
  // copy the current view stack
  enforce(newH._object);
  newH._objectViewStack     = oldH.objectViewStack;
  newH._objectViewStackHash = oldH.objectViewStackHash;
  return newH;
}
  @property ref string __addr() {return _object.__addr;}
  @property ref int __faculty_age() {return _object.__faculty_age;}
  @property ref string __name() {return _object.__name;}
}
ref string Faculty_addr(Faculty self) { // virtual field dispatch table (VFDT)
  self = cast(Faculty)(self.cloneH());
  self.pushObjectViewStack(2);
  switch (self.objectViewStackHash) {
  case             0x0302:  return (cast(ResearchAssistant)self).__faculty_addr;  // renamedCount=1

  case 2:  {return self.__addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__addr;}
}

ref int Faculty_faculty_age(Faculty self) { // virtual field dispatch table (VFDT)
  self = cast(Faculty)(self.cloneH());
  self.pushObjectViewStack(2);
  switch (self.objectViewStackHash) {
  case             0x0302:  return (cast(ResearchAssistant)self).__age;  // renamedCount=1

  case 2:  {return self.__faculty_age;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__faculty_age;}
}

ref string Faculty_name(Faculty self) {return self.__name;}

void __init__(Faculty self) {
  self = cast(Faculty)(self.cloneH());
  self.pushObjectViewStack(2);
  Faculty_addr(self) = LAB;;
}

string get_faculty_addr(Faculty self) {
  self = cast(Faculty)(self.cloneH());
  self.pushObjectViewStack(2);
  string r = self.get_addr();;
  return r;
}

string do_benchwork(Faculty self) {
  self = cast(Faculty)(self.cloneH());
  self.pushObjectViewStack(2);
  write(Faculty_name(self));
  write(" do_benchwork in the: ");
  write(Faculty_addr(self));
  write("\n");
  return Faculty_addr(self);
}


Faculty newFaculty() {_Faculty obj = new _Faculty(); obj._object = new __Faculty(); obj.pushObjectViewStack(2); return obj;}


interface Student: MIObject, Person {
  @property ref int __student_age();
}

// the actual data class
class __Student : __MIObject, Student {
  // static const uint ___typeid = 0x01;
  // flattened fields: [_addr, _name, _student_age]
/* renaming history in subclasses
// Student._addr -(rn)-> ResearchAssistant._student_addr
*/
// originInBaseClasses = 
// Person._addr -(==)-> Student._addr
  private string ___addr;
  @property ref string __addr() {return this.___addr;}
// all subclasses share this same field: ___name
// originInBaseClasses = 
// Person._name -(==)-> Student._name
  private string ___name;
  @property ref string __name() {return this.___name;}
/* renaming history in subclasses
// Student._student_age -(rn)-> ResearchAssistant._age
*/
// originInBaseClasses = 
  private int ___student_age;
  @property ref int __student_age() {return this.___student_age;}
}
// the handle (fat pointer) class
class _Student : _MIObject, Student {
  Student _object;  // forward all the calls to _object
  MIObject object() {enforce(_object);
  return _object;}
  MIObject cloneH() {  // TODO:we should really has covariant return type
  alias oldH = this;
  _Student newH = new _Student();
  newH._object = cast(Student)(oldH.object());  // same underlying _object
  // copy the current view stack
  enforce(newH._object);
  newH._objectViewStack     = oldH.objectViewStack;
  newH._objectViewStackHash = oldH.objectViewStackHash;
  return newH;
}
  @property ref string __addr() {return _object.__addr;}
  @property ref string __name() {return _object.__name;}
  @property ref int __student_age() {return _object.__student_age;}
}
ref string Student_addr(Student self) { // virtual field dispatch table (VFDT)
  self = cast(Student)(self.cloneH());
  self.pushObjectViewStack(1);
  switch (self.objectViewStackHash) {
  case             0x0301:  return (cast(ResearchAssistant)self).__student_addr;  // renamedCount=1

  case 1:  {return self.__addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__addr;}
}

ref string Student_name(Student self) {return self.__name;}

ref int Student_student_age(Student self) { // virtual field dispatch table (VFDT)
  self = cast(Student)(self.cloneH());
  self.pushObjectViewStack(1);
  switch (self.objectViewStackHash) {
  case             0x0301:  return (cast(ResearchAssistant)self).__age;  // renamedCount=1

  case 1:  {return self.__student_age;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__student_age;}
}

void __init__(Student self) {
  self = cast(Student)(self.cloneH());
  self.pushObjectViewStack(1);
  Student_addr(self) = DORM;;
}

string get_student_addr(Student self) {
  self = cast(Student)(self.cloneH());
  self.pushObjectViewStack(1);
  string r = self.get_addr();;
  return r;
}

string take_rest(Student self) {
  self = cast(Student)(self.cloneH());
  self.pushObjectViewStack(1);
  write(Student_name(self));
  write(" take_rest in the: ");
  write(Student_addr(self));
  write("\n");
  return Student_addr(self);
}


Student newStudent() {_Student obj = new _Student(); obj._object = new __Student(); obj.pushObjectViewStack(1); return obj;}


interface ResearchAssistant: MIObject, Student, Faculty, Person {
  @property ref int __age();
  @property ref string __faculty_addr();
  @property ref string __student_addr();
}

// the actual data class
class __ResearchAssistant : __MIObject, ResearchAssistant {
  // static const uint ___typeid = 0x03;
  // flattened fields: [_addr, _age, _faculty_addr, _name, _student_addr]
// all subclasses share this same field: ___addr
// originInBaseClasses = 
// Person._addr -(==)-> ResearchAssistant._addr
  private string ___addr;
  @property ref string __addr() {return this.___addr;}
// all subclasses share this same field: ___age
// originInBaseClasses = 
// Student._student_age -(rn)-> ResearchAssistant._age
// Faculty._faculty_age -(rn)-> ResearchAssistant._age
  private int ___age;
  @property ref int __age() {return this.___age;}  @property ref int __student_age()
 {return this.___age;}
  @property ref int __faculty_age()
 {return this.___age;}
// all subclasses share this same field: ___faculty_addr
// originInBaseClasses = 
// Faculty._addr -(rn)-> ResearchAssistant._faculty_addr
  private string ___faculty_addr;
  @property ref string __faculty_addr() {return this.___faculty_addr;}
// all subclasses share this same field: ___name
// originInBaseClasses = 
// Student._name -(==)-> ResearchAssistant._name
// Faculty._name -(==)-> ResearchAssistant._name
// Person._name -(==)-> ResearchAssistant._name
  private string ___name;
  @property ref string __name() {return this.___name;}
// all subclasses share this same field: ___student_addr
// originInBaseClasses = 
// Student._addr -(rn)-> ResearchAssistant._student_addr
  private string ___student_addr;
  @property ref string __student_addr() {return this.___student_addr;}
}
// the handle (fat pointer) class
class _ResearchAssistant : _MIObject, ResearchAssistant {
  ResearchAssistant _object;  // forward all the calls to _object
  MIObject object() {enforce(_object);
  return _object;}
  MIObject cloneH() {  // TODO:we should really has covariant return type
  alias oldH = this;
  _ResearchAssistant newH = new _ResearchAssistant();
  newH._object = cast(ResearchAssistant)(oldH.object());  // same underlying _object
  // copy the current view stack
  enforce(newH._object);
  newH._objectViewStack     = oldH.objectViewStack;
  newH._objectViewStackHash = oldH.objectViewStackHash;
  return newH;
}
  @property ref string __addr() {return _object.__addr;}
  @property ref int __age() {return _object.__age;}  @property ref int __student_age()
 {return _object.__age;}
  @property ref int __faculty_age()
 {return _object.__age;}
  @property ref string __faculty_addr() {return _object.__faculty_addr;}
  @property ref string __name() {return _object.__name;}
  @property ref string __student_addr() {return _object.__student_addr;}
}
ref string ResearchAssistant_addr(ResearchAssistant self) {return self.__addr;}

ref int ResearchAssistant_age(ResearchAssistant self) {return self.__age;}

ref string ResearchAssistant_faculty_addr(ResearchAssistant self) {return self.__faculty_addr;}

ref string ResearchAssistant_name(ResearchAssistant self) {return self.__name;}

ref string ResearchAssistant_student_addr(ResearchAssistant self) {return self.__student_addr;}

void print_ra(ResearchAssistant self) {
  self = cast(ResearchAssistant)(self.cloneH());
  self.pushObjectViewStack(3);
  write(ResearchAssistant_name(self));
  write(" has 3 addresses: <");
  write(ResearchAssistant_addr(self));
  write(" ");
  write(ResearchAssistant_student_addr(self));
  write(" ");
  write(ResearchAssistant_faculty_addr(self));
  write(">\n");
}


ResearchAssistant newResearchAssistant() {_ResearchAssistant obj = new _ResearchAssistant(); obj._object = new __ResearchAssistant(); obj.pushObjectViewStack(3); return obj;}




void print_student_direct_field(Student s) {
  s = cast(Student)(s.cloneH());
  s.pushObjectViewStack(1);
  write(Student_name(s));
  write(" as STUDENT.addr: ");
  write(Student_addr(s));
  write(", age=");
  write(Student_student_age(s));
  write("\n");
  assert(s.get_addr() == DORM);
}

void print_faculty_direct_field(Faculty f) {
  f = cast(Faculty)(f.cloneH());
  f.pushObjectViewStack(2);
  write(Faculty_name(f));
  write(" as FACULTY.addr: ");
  write(Faculty_addr(f));
  write(", age=");
  write(Faculty_faculty_age(f));
  write("\n");
  assert(f.get_addr() == LAB);
}

void print_student_addr_via_accessor(Student u) {
  u = cast(Student)(u.cloneH());
  u.pushObjectViewStack(1);
  string r = u.get_student_addr();;
  write(Student_name(u));
  write(" as STUDENT.addr: ");
  write(r);
  write("\n");
}

void print_faculty_addr_via_accessor(Faculty u) {
  u = cast(Faculty)(u.cloneH());
  u.pushObjectViewStack(2);
  string r = u.get_faculty_addr();;
  write(Faculty_name(u));
  write(" as FACULTY.addr: ");
  write(r);
  write("\n");
}

void test_Faculty() {
  Faculty f1 = cast(Faculty)((newFaculty()).cloneH());  f1.pushObjectViewStack(2);;
  Faculty_name(f1) = "Faculty";;
  Faculty_addr(f1) = LAB;;
  assert(f1.get_addr() == LAB);
  assert(f1.do_benchwork() == LAB);
}

void main() {
  ResearchAssistant ra = cast(ResearchAssistant)((newResearchAssistant()).cloneH());  ra.pushObjectViewStack(3);;
  ResearchAssistant_name(ra) = "ResAsst";;
  ResearchAssistant_age(ra) = 18;;
  ResearchAssistant_addr(ra) = HOME;;
  ResearchAssistant_student_addr(ra) = DORM;;
  ResearchAssistant_faculty_addr(ra) = LAB;;
  ra.print_ra();
  assert(ra.do_benchwork() == LAB);
  assert(ra.take_rest() == DORM);
  write("-- print_student|faculty_addr_direct_field\n");
  print_student_direct_field(ra);
  print_faculty_direct_field(ra);
  write("-- print_student|faculty_addr_via_accessor\n");
  print_student_addr_via_accessor(ra);
  print_faculty_addr_via_accessor(ra);
  write("-- test some assignment: suppose ra moved both lab2 and dorm2\n");
  ResearchAssistant_faculty_addr(ra) = "lab2";;
  ra.print_ra();
  ResearchAssistant_student_addr(ra) = "dorm2";;
  ra.print_ra();
}
