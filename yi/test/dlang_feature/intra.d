import std.stdio;

interface A {
  // int aInt;  // only static allowed, otherwise Error: variable intra.A.aInt field not allowed in interface
  final void f() { }
  void a();
}

interface B: A {
  void a();  // no compiler error
  void b();
  void common();
}

interface C: A {
  void c();
  void common();
}

interface D : B, C {
}

class E : D {
    this() { }
    ~this() { }
    void foo() { }
    int foo(int) { return 0; }

    void a() { }
    void b() { }
    void c() { }

    // 3 times:
    // Error: class intra.E interface function void common() is not implemented
  void common() {}
}

void main()
{
    auto b = [ __traits(allMembers, D) ];
    writeln(b);
    // ["__ctor", "__dtor", "foo", "toString", "toHash", "opCmp", "opEquals",
    // "Monitor", "factory"]

  foreach (member; __traits(allMembers, E)) {
    foreach (overload; __traits(getOverloads, E, member)) {
      writefln!"%s: %s"(member, typeof(overload).stringof);
    }
  }
}
