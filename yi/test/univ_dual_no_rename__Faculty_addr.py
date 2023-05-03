
class Person(object):

  # https://docs.python.org/3.9/library/typing.html#typing.ClassVar
  _name:str  # instance variable! PEP 526
  _addr:str  # all field starts with underscore "_"; these two will be parsed as: ast.AnnAssign

  def __init__(self):
    self._name = ""
    self._addr = ""

  # getter method
  def addr(self):
    return self._addr  # ta.office2() virtual field dispatch: <Person, TeachingAssistant, _addr>


class TaxPayer(Person):
  pass

class Student(Person()):

  def __init__(self):
    self._addr = "dorm"

  def dorm(self):
    return self.addr


class Faculty(Person()):

  def __init__(self):
    self._addr = "office"

  def holdOfficeHour(self):
    print(self._name)
    print(" goto ")
    print(self._addr)  # no matter f is Faculty, or TeachingAssistant, this should always be " goto office"
    print(" to holdOfficeHour.\n")

  '''
  def office1(self):
    return self._addr  # ta.office1() virtual field dispatch: <Faculty, TeachingAssistant, _addr>

  def office2(self):
    return self.addr()

  def __invariant(self):  # TODO: a big topic with inheritance tree
    assert(self.office1() == self.office2())  # no matter it's implemented using field or getter method!
  '''


class TeachingAssistant(Student(rename _addr), Faculty(rename _addr), TaxPayer):  # in Python the superclass order matters!

  '''
  def __init__(self):
    Student.__init__(self)  # and if this __init__ order is different from inheritance order, we are in trouble! the following assert will fail.
    Faculty.__init__(self)  # parse to: FunctionCall(func=ast.Attribute)
    assert(self.addr == "office")  # in Python, all fields with the same name are joined in object.__dict__, well it's a dict!
  '''


class OnlineUnivFaculty:
  _Faculty_addr:str


class OnlineOfflineDualTA(TeachingAssistant, OnlineUnivFaculty):
  pass


def main():
  '''
  s1:Student = Student()
  s2:Student = Student()
  # print(s1.dorm(), s2.dorm())
  s1._addr = "newaddr"
  # s2.addr = 1
  # print(s1.dorm(), s2.dorm())
  '''

  ta:TeachingAssistant = TeachingAssistant()
  ta._name = "TA"
  ta._addr = "home"
  ta._Student_addr = "dorm"
  ta._Faculty_addr = "office"
  # print(vars(ta))
  # print(ta.dorm(), ta.office())

  f1:Faculty = Faculty()
  f1._name = "Faculty"
  f1._addr = "office"

  f1.holdOfficeHour()  # should always be " goto office"
  ta.holdOfficeHour()  # should always be " goto office"


if __name__ == '__main__':
  main()
