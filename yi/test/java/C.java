

interface I {
  int i = 911;  // must be assigned, otherwise error: = expected

  default void f() {
    System.out.println("I.f");
  }
}

interface II extends I {
  @Override
  default void f() {
    System.out.println("II.f");
  }
}

class C implements II {
  C() {
    // i = 1;  // error: cannot assign a value to final variable i
  }


  public static void main(String[] args) {
    C c = new C();
    c.f();
  }
}
