import std.stdio;

import visitor;

void main() {
  Visitor v = newVisitor();
  v.name = "Yi";
  v.addr = "My hotel in Paris";
  v.ukAddr = "London";
  v.usAddr = "NewYork";

  Visitor p = v;

  // print(p);  // will only print Visitor (i.e. the variable `p`'s type)
  // print(v);
}
