import std.stdio;

interface A {
  @property ref int field();
}

class A_ : A {
  private int field_;
  @property ref int field() {
    return field_;
  }
}

void foo(A a) {
  writeln(a.field);
  a.field = 3;
  writeln(a.field);
}

void declVarAs(T)() {
  writeln(typeid(T));
  T a = new A_();
  static if (is(T == class)) writeln(a.field_);  // Error: no property field_ for type A (i.e. interface)
  foo(a);
  static if (is(T == class)) writeln(a.field_);
}

void main() {
  declVarAs!A();
  declVarAs!A_();
}
