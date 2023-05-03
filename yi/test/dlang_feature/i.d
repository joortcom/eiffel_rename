
interface I {
  // int i;  // Error: variable i.I.i field not allowed in interface
  final void f() {}  // Error: function `i.I.f` function body only allowed in `final` functions in interface `I`
}

