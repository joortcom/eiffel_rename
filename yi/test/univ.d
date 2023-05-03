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
  0x200: 1, // Faculty -> Person
  0x301: 1, // ResearchAssistant -> Student
  0x302: 1, // ResearchAssistant -> Faculty
  0x502: 1, // DualRATA -> Faculty
  0x100: 1, // Student -> Person
  0x503: 1, // DualRATA -> ResearchAssistant
  0x501: 1, // DualRATA -> Student
  0x300: 1, // ResearchAssistant -> Person
  0x504: 1, // DualRATA -> ExternOnlineUnivFaculty
  0x500: 1, // DualRATA -> Person
];


interface Person: MIObject {
  @property ref string __addr();
  @property ref string __name();
}

class __Person : __MIObject, Person {
  // static const uint ___typeid = 0;
  // flattened fields: [_addr, _name]
/* renaming history in subclasses
Person._addr -(==)-> Faculty._addr
Faculty._addr -(rn)-> ResearchAssistant._Faculty_addr
ResearchAssistant._Faculty_addr -(rn)-> DualRATA._ResearchAssistant_Faculty_addr
Person._addr -(==)-> Student._addr
Student._addr -(rn)-> ResearchAssistant._Student_addr
ResearchAssistant._Student_addr -(==)-> DualRATA._Student_addr
Person._addr -(==)-> ResearchAssistant._addr
ResearchAssistant._addr -(==)-> DualRATA._addr
*/
  private string ___addr;
  @property ref string __addr() {return this.___addr;}
// all subclasses share this same field: ___name
  private string ___name;
  @property ref string __name() {return this.___name;}
}
// the handle class
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
  case              0x200:  return (cast(Faculty)self).__addr;  // renamedCount=0
  case          0x5030200:  return (cast(DualRATA)self).__ResearchAssistant_Faculty_addr;  // renamedCount=2
  case            0x50300:  return (cast(DualRATA)self).__addr;  // renamedCount=0
//case            0x50300:  return (cast(DualRATA)self).__Student_addr;  // renamedCount=1
//case            0x50300:  return (cast(DualRATA)self).__ResearchAssistant_Faculty_addr;  // renamedCount=2
  case              0x100:  return (cast(Student)self).__addr;  // renamedCount=0
  case            0x30100:  return (cast(ResearchAssistant)self).__Student_addr;  // renamedCount=1
  case          0x5030100:  return (cast(DualRATA)self).__Student_addr;  // renamedCount=1
  case            0x50100:  return (cast(DualRATA)self).__Student_addr;  // renamedCount=1
  case            0x30200:  return (cast(ResearchAssistant)self).__Faculty_addr;  // renamedCount=1
  case              0x300:  return (cast(ResearchAssistant)self).__addr;  // renamedCount=0
//case              0x300:  return (cast(ResearchAssistant)self).__Faculty_addr;  // renamedCount=1
//case              0x300:  return (cast(ResearchAssistant)self).__Student_addr;  // renamedCount=1
  case            0x50200:  return (cast(DualRATA)self).__ResearchAssistant_Faculty_addr;  // renamedCount=1
  case              0x500:  return (cast(DualRATA)self).__addr;  // renamedCount=0
//case              0x500:  return (cast(DualRATA)self).__ResearchAssistant_Faculty_addr;  // renamedCount=1
//case              0x500:  return (cast(DualRATA)self).__Student_addr;  // renamedCount=1

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

void print_person(Person self) {
  self = cast(Person)(self.cloneH());
  self.pushObjectViewStack(0);
  write(Person_name(self));
  write(" ");
  write(Person_addr(self));
  write("\n");
}


Person newPerson() {_Person obj = new _Person(); obj._object = new __Person(); obj.pushObjectViewStack(0); return obj;}


interface Faculty: MIObject, Person {
}

class __Faculty : __MIObject, Faculty {
  // static const uint ___typeid = 2;
  // flattened fields: [_addr, _name]
/* renaming history in subclasses
Faculty._addr -(rn)-> ResearchAssistant._Faculty_addr
ResearchAssistant._Faculty_addr -(rn)-> DualRATA._ResearchAssistant_Faculty_addr
*/
  private string ___addr;
  @property ref string __addr() {return this.___addr;}
// all subclasses share this same field: ___name
  private string ___name;
  @property ref string __name() {return this.___name;}
}
// the handle class
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
  @property ref string __name() {return _object.__name;}
}
ref string Faculty_addr(Faculty self) { // virtual field dispatch table (VFDT)
  self = cast(Faculty)(self.cloneH());
  self.pushObjectViewStack(2);
  switch (self.objectViewStackHash) {
  case              0x302:  return (cast(ResearchAssistant)self).__Faculty_addr;  // renamedCount=1
  case              0x502:  return (cast(DualRATA)self).__ResearchAssistant_Faculty_addr;  // renamedCount=1
  case            0x50302:  return (cast(DualRATA)self).__ResearchAssistant_Faculty_addr;  // renamedCount=2

  case 2:  {return self.__addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__addr;}
}

ref string Faculty_name(Faculty self) {return self.__name;}

void __init__(Faculty self) {
  self = cast(Faculty)(self.cloneH());
  self.pushObjectViewStack(2);
  Faculty_addr(self) = "lab";;
}

string lab(Faculty self) {
  self = cast(Faculty)(self.cloneH());
  self.pushObjectViewStack(2);
  string addr = self.get_addr();;
  return addr;
}

string do_benchwork(Faculty self) {
  self = cast(Faculty)(self.cloneH());
  self.pushObjectViewStack(2);
  write(Faculty_name(self));
  write(" goto ");
  string addr = self.lab();;
  write(addr);
  write(" to do benchwork.\n");
  return addr;
}


Faculty newFaculty() {_Faculty obj = new _Faculty(); obj._object = new __Faculty(); obj.pushObjectViewStack(2); return obj;}


interface ExternOnlineUnivFaculty: MIObject {
  @property ref string __Faculty_addr();
}

class __ExternOnlineUnivFaculty : __MIObject, ExternOnlineUnivFaculty {
  // static const uint ___typeid = 4;
  // flattened fields: [_Faculty_addr]
/* renaming history in subclasses
ExternOnlineUnivFaculty._Faculty_addr -(==)-> DualRATA._Faculty_addr
*/
  private string ___Faculty_addr;
  @property ref string __Faculty_addr() {return this.___Faculty_addr;}
}
// the handle class
class _ExternOnlineUnivFaculty : _MIObject, ExternOnlineUnivFaculty {
  ExternOnlineUnivFaculty _object;  // forward all the calls to _object
  MIObject object() {enforce(_object);
  return _object;}
  MIObject cloneH() {  // TODO:we should really has covariant return type
  alias oldH = this;
  _ExternOnlineUnivFaculty newH = new _ExternOnlineUnivFaculty();
  newH._object = cast(ExternOnlineUnivFaculty)(oldH.object());  // same underlying _object
  // copy the current view stack
  enforce(newH._object);
  newH._objectViewStack     = oldH.objectViewStack;
  newH._objectViewStackHash = oldH.objectViewStackHash;
  return newH;
}
  @property ref string __Faculty_addr() {return _object.__Faculty_addr;}
}
ref string ExternOnlineUnivFaculty_Faculty_addr(ExternOnlineUnivFaculty self) { // virtual field dispatch table (VFDT)
  self = cast(ExternOnlineUnivFaculty)(self.cloneH());
  self.pushObjectViewStack(4);
  switch (self.objectViewStackHash) {
  case              0x504:  return (cast(DualRATA)self).__Faculty_addr;  // renamedCount=0

  case 4:  {return self.__Faculty_addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__Faculty_addr;}
}


ExternOnlineUnivFaculty newExternOnlineUnivFaculty() {_ExternOnlineUnivFaculty obj = new _ExternOnlineUnivFaculty(); obj._object = new __ExternOnlineUnivFaculty(); obj.pushObjectViewStack(4); return obj;}


interface Student: MIObject, Person {
}

class __Student : __MIObject, Student {
  // static const uint ___typeid = 1;
  // flattened fields: [_addr, _name]
/* renaming history in subclasses
Student._addr -(rn)-> ResearchAssistant._Student_addr
ResearchAssistant._Student_addr -(==)-> DualRATA._Student_addr
*/
  private string ___addr;
  @property ref string __addr() {return this.___addr;}
// all subclasses share this same field: ___name
  private string ___name;
  @property ref string __name() {return this.___name;}
}
// the handle class
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
}
ref string Student_addr(Student self) { // virtual field dispatch table (VFDT)
  self = cast(Student)(self.cloneH());
  self.pushObjectViewStack(1);
  switch (self.objectViewStackHash) {
  case              0x301:  return (cast(ResearchAssistant)self).__Student_addr;  // renamedCount=1
  case            0x50301:  return (cast(DualRATA)self).__Student_addr;  // renamedCount=1
  case              0x501:  return (cast(DualRATA)self).__Student_addr;  // renamedCount=1

  case 1:  {return self.__addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__addr;}
}

ref string Student_name(Student self) {return self.__name;}

void __init__(Student self) {
  self = cast(Student)(self.cloneH());
  self.pushObjectViewStack(1);
  Student_addr(self) = DORM;;
}

string dorm(Student self) {
  self = cast(Student)(self.cloneH());
  self.pushObjectViewStack(1);
  string addr = self.get_addr();;
  return addr;
}

string take_rest(Student self) {
  self = cast(Student)(self.cloneH());
  self.pushObjectViewStack(1);
  write(Student_name(self));
  write(" goto ");
  string addr = self.dorm();;
  write(addr);
  write(" to take rest.\n");
  return addr;
}


Student newStudent() {_Student obj = new _Student(); obj._object = new __Student(); obj.pushObjectViewStack(1); return obj;}


interface ResearchAssistant: MIObject, Student, Faculty, Person {
  @property ref string __Faculty_addr();
  @property ref string __Student_addr();
}

class __ResearchAssistant : __MIObject, ResearchAssistant {
  // static const uint ___typeid = 3;
  // flattened fields: [_Faculty_addr, _Student_addr, _addr, _name]
/* renaming history in subclasses
ResearchAssistant._Faculty_addr -(rn)-> DualRATA._ResearchAssistant_Faculty_addr
*/
  private string ___Faculty_addr;
  @property ref string __Faculty_addr() {return this.___Faculty_addr;}
// all subclasses share this same field: ___Student_addr
  private string ___Student_addr;
  @property ref string __Student_addr() {return this.___Student_addr;}
/* renaming history in subclasses
ResearchAssistant._addr -(==)-> DualRATA._addr
*/
  private string ___addr;
  @property ref string __addr() {return this.___addr;}
// all subclasses share this same field: ___name
  private string ___name;
  @property ref string __name() {return this.___name;}
}
// the handle class
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
  @property ref string __Faculty_addr() {return _object.__Faculty_addr;}
  @property ref string __Student_addr() {return _object.__Student_addr;}
  @property ref string __addr() {return _object.__addr;}
  @property ref string __name() {return _object.__name;}
}
ref string ResearchAssistant_Faculty_addr(ResearchAssistant self) { // virtual field dispatch table (VFDT)
  self = cast(ResearchAssistant)(self.cloneH());
  self.pushObjectViewStack(3);
  switch (self.objectViewStackHash) {
  case              0x503:  return (cast(DualRATA)self).__ResearchAssistant_Faculty_addr;  // renamedCount=1

  case 3:  {return self.__Faculty_addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__Faculty_addr;}
}

ref string ResearchAssistant_Student_addr(ResearchAssistant self) {return self.__Student_addr;}

ref string ResearchAssistant_addr(ResearchAssistant self) { // virtual field dispatch table (VFDT)
  self = cast(ResearchAssistant)(self.cloneH());
  self.pushObjectViewStack(3);
  switch (self.objectViewStackHash) {
  case              0x503:  return (cast(DualRATA)self).__addr;  // renamedCount=0

  case 3:  {return self.__addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__addr;}
}

ref string ResearchAssistant_name(ResearchAssistant self) {return self.__name;}

void print_ra(ResearchAssistant self) {
  self = cast(ResearchAssistant)(self.cloneH());
  self.pushObjectViewStack(3);
  write(ResearchAssistant_name(self));
  write(" ");
  write(ResearchAssistant_addr(self));
  write(" ");
  write(ResearchAssistant_Student_addr(self));
  write(" ");
  write(ResearchAssistant_Faculty_addr(self));
  write("\n");
}


ResearchAssistant newResearchAssistant() {_ResearchAssistant obj = new _ResearchAssistant(); obj._object = new __ResearchAssistant(); obj.pushObjectViewStack(3); return obj;}


interface DualRATA: MIObject, ResearchAssistant, ExternOnlineUnivFaculty {
  @property ref string __ResearchAssistant_Faculty_addr();
}

class __DualRATA : __MIObject, DualRATA {
  // static const uint ___typeid = 5;
  // flattened fields: [_Faculty_addr, _ResearchAssistant_Faculty_addr, _Student_addr, _addr, _name]
/* renaming history in subclasses
*/
  private string ___Faculty_addr;
  @property ref string __Faculty_addr() {return this.___Faculty_addr;}
// all subclasses share this same field: ___ResearchAssistant_Faculty_addr
  private string ___ResearchAssistant_Faculty_addr;
  @property ref string __ResearchAssistant_Faculty_addr() {return this.___ResearchAssistant_Faculty_addr;}
// all subclasses share this same field: ___Student_addr
  private string ___Student_addr;
  @property ref string __Student_addr() {return this.___Student_addr;}
/* renaming history in subclasses
*/
  private string ___addr;
  @property ref string __addr() {return this.___addr;}
// all subclasses share this same field: ___name
  private string ___name;
  @property ref string __name() {return this.___name;}
}
// the handle class
class _DualRATA : _MIObject, DualRATA {
  DualRATA _object;  // forward all the calls to _object
  MIObject object() {enforce(_object);
  return _object;}
  MIObject cloneH() {  // TODO:we should really has covariant return type
  alias oldH = this;
  _DualRATA newH = new _DualRATA();
  newH._object = cast(DualRATA)(oldH.object());  // same underlying _object
  // copy the current view stack
  enforce(newH._object);
  newH._objectViewStack     = oldH.objectViewStack;
  newH._objectViewStackHash = oldH.objectViewStackHash;
  return newH;
}
  @property ref string __Faculty_addr() {return _object.__Faculty_addr;}
  @property ref string __ResearchAssistant_Faculty_addr() {return _object.__ResearchAssistant_Faculty_addr;}
  @property ref string __Student_addr() {return _object.__Student_addr;}
  @property ref string __addr() {return _object.__addr;}
  @property ref string __name() {return _object.__name;}
}
ref string DualRATA_Faculty_addr(DualRATA self) { // virtual field dispatch table (VFDT)
  self = cast(DualRATA)(self.cloneH());
  self.pushObjectViewStack(5);
  switch (self.objectViewStackHash) {


  case 5:  {return self.__Faculty_addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__Faculty_addr;}
}

ref string DualRATA_ResearchAssistant_Faculty_addr(DualRATA self) {return self.__ResearchAssistant_Faculty_addr;}

ref string DualRATA_Student_addr(DualRATA self) {return self.__Student_addr;}

ref string DualRATA_addr(DualRATA self) { // virtual field dispatch table (VFDT)
  self = cast(DualRATA)(self.cloneH());
  self.pushObjectViewStack(5);
  switch (self.objectViewStackHash) {


  case 5:  {return self.__addr;};
  default:  enforce(false, format("%x", self.objectViewStackHash));
  }
 {return self.__addr;}
}

ref string DualRATA_name(DualRATA self) {return self.__name;}


DualRATA newDualRATA() {_DualRATA obj = new _DualRATA(); obj._object = new __DualRATA(); obj.pushObjectViewStack(5); return obj;}




void printFaculty(Faculty f) {
  f = cast(Faculty)(f.cloneH());
  f.pushObjectViewStack(2);
  assert(f.get_addr() == LAB);
}

void testMonkeyJump(ResearchAssistant ra) {
  ra = cast(ResearchAssistant)(ra.cloneH());
  ra.pushObjectViewStack(3);
  Faculty fr = cast(Faculty)((ra).cloneH());  fr.pushObjectViewStack(2);;
  Student st = cast(Student)((ra).cloneH());  st.pushObjectViewStack(1);;
  assert(fr.get_addr() == LAB);
  assert(st.get_addr() == DORM);
  assert(ra.get_addr() == HOME);
  printFaculty(fr);
  assert(fr.do_benchwork() == LAB);
  fr = cast(Faculty)((st).cloneH());  fr.pushObjectViewStack(2);;
  assert(st.get_addr() == DORM);
  assert(fr.get_addr() == LAB);
}

void main() {
  ResearchAssistant ra = cast(ResearchAssistant)((newResearchAssistant()).cloneH());  ra.pushObjectViewStack(3);;
  ResearchAssistant_name(ra) = "ResAsst";;
  ResearchAssistant_addr(ra) = HOME;;
  ResearchAssistant_Student_addr(ra) = DORM;;
  ResearchAssistant_Faculty_addr(ra) = LAB;;
  ra.print_ra();
  testMonkeyJump(ra);
  Faculty f1 = cast(Faculty)((newFaculty()).cloneH());  f1.pushObjectViewStack(2);;
  Faculty_name(f1) = "Faculty";;
  Faculty_addr(f1) = LAB;;
  assert(f1.get_addr() == LAB);
  assert(f1.do_benchwork() == LAB);
  assert(ra.do_benchwork() == LAB);
  assert(ra.take_rest() == DORM);
  ResearchAssistant_Faculty_addr(ra) = "online";;
  ra.print_ra();
  DualRATA rt = cast(DualRATA)((newDualRATA()).cloneH());  rt.pushObjectViewStack(5);;
  DualRATA_name(rt) = "dualRTA";;
  DualRATA_addr(rt) = HOME;;
  DualRATA_Student_addr(rt) = DORM;;
  DualRATA_Faculty_addr(rt) = "online";;
  DualRATA_ResearchAssistant_Faculty_addr(rt) = LAB;;
  assert(rt.do_benchwork() == LAB);
  assert(rt.get_addr() == HOME);
  rt.print_ra();
}
