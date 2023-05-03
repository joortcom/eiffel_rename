import std.stdio;
interface Person {
  @property ref string _addr();
  @property ref string _name();
}

class _Person : Person {
  private string __addr;
  @property ref string _addr() {return __addr;}
  private string __name;
  @property ref string _name() {return __name;}
}
void __init__(Person self) {
  self._name = "";
  self._addr = "";
}

void addr(Person self) {
  ;
}


Person newPerson() {return new _Person();}


interface TaxPayer: Person {
}

class _TaxPayer : TaxPayer {
  private string __addr;
  @property ref string _addr() {return __addr;}
  private string __name;
  @property ref string _name() {return __name;}
}

TaxPayer newTaxPayer() {return new _TaxPayer();}


interface Faculty: Person {
}

class _Faculty : Faculty {
  private string __addr;
  @property ref string _addr() {return __addr;}
  private string __name;
  @property ref string _name() {return __name;}
}
void __init__(Faculty self) {
  self._addr = "office";
}

void holdOfficeHour(Faculty self) {
  write(self._name);
  write(" goto ");
  write(self._addr);
  write(" to holdOfficeHour.
");
}


Faculty newFaculty() {return new _Faculty();}


interface Student: Person {
}

class _Student : Student {
  private string __addr;
  @property ref string _addr() {return __addr;}
  private string __name;
  @property ref string _name() {return __name;}
}
void __init__(Student self) {
  self._addr = "dorm";
}

void dorm(Student self) {
  ;
}


Student newStudent() {return new _Student();}


interface TeachingAssistant: Student, Faculty, TaxPayer {
  @property ref string _Faculty_addr();
  @property ref string _Student_addr();
}

class _TeachingAssistant : TeachingAssistant {
  private string __Faculty_addr;
  @property ref string _Faculty_addr() {return __Faculty_addr;}
  private string __Student_addr;
  @property ref string _Student_addr() {return __Student_addr;}
  private string __addr;
  @property ref string _addr() {return __addr;}
  private string __name;
  @property ref string _name() {return __name;}
}

TeachingAssistant newTeachingAssistant() {return new _TeachingAssistant();}


void main() {
  TeachingAssistant ta = newTeachingAssistant();
  ta._name = "TA";
  ta._addr = "home";
  ta._Student_addr = "dorm";
  ta._Faculty_addr = "office";
  Faculty f1 = newFaculty();
  f1._name = "Faculty";
  f1._addr = "office";
  f1.holdOfficeHour();
  ta.holdOfficeHour();
}
