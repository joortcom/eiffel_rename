
interface Person {
  String addr();
}


interface Student extends Person {  // , Person error: repeated interface
  String addr();
}

interface Faculty extends Person {
}

interface TeachingAssistant extends Student, Faculty {
}
