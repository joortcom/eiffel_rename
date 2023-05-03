import std.stdio;


interface Person {
  @property ref string _addr(uint variableTypeId);
  @property ref string _name();
}

class _Person : Person {
  static const uint ___typeid = 0;
  // flattened fields: [_addr, _name]
/*
Person._addr -(rename)-> Person_Dup._addr
Person_Dup._addr -(rename)-> Student._addr
Student._addr -(rename)-> ResearchAssistant._addr
Person_Dup._addr -(rename)-> Faculty._addr
Faculty._addr -(rename)-> ResearchAssistant._addr
Person._addr -(rename)-> Student._Person_addr
Student._Person_addr -(rename)-> ResearchAssistant._Person_addr
Person._addr -(rename)-> Faculty._Person_addr
Faculty._Person_addr -(rename)-> ResearchAssistant._Person_addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) {return __addr;}

/*
Person._name -(rename)-> Person_Dup._name
Person_Dup._name -(rename)-> Student._name
Person_Dup._name -(rename)-> Faculty._name
Person._name -(rename)-> Student._name
Student._name -(rename)-> ResearchAssistant._name
Person._name -(rename)-> Faculty._name
Faculty._name -(rename)-> ResearchAssistant._name
*/

  private string __name;
  @property ref string _name() {return __name;}

}

Person newPerson() {return new _Person();}


interface Person_Dup: Person {
}

class _Person_Dup : Person_Dup {
  static const uint ___typeid = 1;
  // flattened fields: [_addr, _name]
/*
Person_Dup._addr -(rename)-> Student._addr
Student._addr -(rename)-> ResearchAssistant._addr
Person_Dup._addr -(rename)-> Faculty._addr
Faculty._addr -(rename)-> ResearchAssistant._addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) {return __addr;}

/*
Person_Dup._name -(rename)-> Student._name
Person_Dup._name -(rename)-> Faculty._name
*/

  private string __name;
  @property ref string _name() {return __name;}

}

Person_Dup newPerson_Dup() {return new _Person_Dup();}


interface Student: Person, Person_Dup {
  @property ref string _Person_addr();
}

class _Student : Student {
  static const uint ___typeid = 2;
  // flattened fields: [_Person_addr, _addr, _name]
/*
Student._Person_addr -(rename)-> ResearchAssistant._Person_addr
*/

  private string __Person_addr;
  @property ref string _Person_addr() {return __Person_addr;}

/*
Student._addr -(rename)-> ResearchAssistant._addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 0 /* Person */:  return __Person_addr;  // Person._addr -(rename)-> Student._Person_addr
    default:  {return __addr;}
  }
 {return __addr;}
  }

/*
Student._name -(rename)-> ResearchAssistant._name
*/

  private string __name;
  @property ref string _name() {return __name;}

}

Student newStudent() {return new _Student();}


interface Faculty: Person, Person_Dup {
  @property ref string _Person_addr();
}

class _Faculty : Faculty {
  static const uint ___typeid = 3;
  // flattened fields: [_Person_addr, _addr, _name]
/*
Faculty._Person_addr -(rename)-> ResearchAssistant._Person_addr
*/

  private string __Person_addr;
  @property ref string _Person_addr() {return __Person_addr;}

/*
Faculty._addr -(rename)-> ResearchAssistant._addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 0 /* Person */:  return __Person_addr;  // Person._addr -(rename)-> Faculty._Person_addr
    default:  {return __addr;}
  }
 {return __addr;}
  }

/*
Faculty._name -(rename)-> ResearchAssistant._name
*/

  private string __name;
  @property ref string _name() {return __name;}

}

Faculty newFaculty() {return new _Faculty();}


interface ResearchAssistant: Student, Faculty {
}

class _ResearchAssistant : ResearchAssistant {
  static const uint ___typeid = 4;
  // flattened fields: [_Person_addr, _addr, _name]
/*
*/

  private string __Person_addr;
  @property ref string _Person_addr() {return __Person_addr;}

/*
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 0 /* Person */:  return __Person_addr;  // Person._addr -(rename)-> Student._Person_addr & Person._addr -(rename)-> Faculty._Person_addr
    default:  {return __addr;}
  }
 {return __addr;}
  }

/*
*/

  private string __name;
  @property ref string _name() {return __name;}

}

ResearchAssistant newResearchAssistant() {return new _ResearchAssistant();}


void main() {
  ;
}
