import std.stdio;


interface Base {
  @property ref string _addr(uint variableTypeId);
}

class _Base : Base {
  static const uint ___typeid = 0;
  // flattened fields: [_addr]
/*
Base._addr -(rename)-> Base_Dup._addr
Base_Dup._addr -(rename)-> D1._addr
D1._addr -(rename)-> D1_Dup._addr
D1_Dup._addr -(rename)-> D2._addr
D1._addr -(rename)-> D2._addr
D2._addr -(rename)-> D2_Dup._addr
D2_Dup._addr -(rename)-> D3._addr
D2._addr -(rename)-> D3._addr
Base_Dup._addr -(rename)-> D2._addr
Base_Dup._addr -(rename)-> D3._addr
Base._addr -(rename)-> D1._Base_addr
D1._Base_addr -(rename)-> D1_Dup._Base_addr
D1_Dup._Base_addr -(rename)-> D2._Base_addr
D2._Base_addr -(rename)-> D2_Dup._Base_addr
D2_Dup._Base_addr -(rename)-> D3._Base_addr
D2._Base_addr -(rename)-> D3._Base_addr
D1._Base_addr -(rename)-> D2._D1_Base_addr
D2._D1_Base_addr -(rename)-> D2_Dup._D1_Base_addr
D2_Dup._D1_Base_addr -(rename)-> D3._D1_Base_addr
D2._D1_Base_addr -(rename)-> D3._D2_D1_Base_addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) {return __addr;}

}

Base newBase() {return new _Base();}


interface Base_Dup: Base {
}

class _Base_Dup : Base_Dup {
  static const uint ___typeid = 1;
  // flattened fields: [_addr]
/*
Base_Dup._addr -(rename)-> D1._addr
D1._addr -(rename)-> D1_Dup._addr
D1_Dup._addr -(rename)-> D2._addr
D1._addr -(rename)-> D2._addr
D2._addr -(rename)-> D2_Dup._addr
D2_Dup._addr -(rename)-> D3._addr
D2._addr -(rename)-> D3._addr
Base_Dup._addr -(rename)-> D2._addr
Base_Dup._addr -(rename)-> D3._addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) {return __addr;}

}

Base_Dup newBase_Dup() {return new _Base_Dup();}


interface D1: Base, Base_Dup {
  @property ref string _Base_addr(uint variableTypeId);
}

class _D1 : D1 {
  static const uint ___typeid = 2;
  // flattened fields: [_Base_addr, _addr]
/*
D1._Base_addr -(rename)-> D1_Dup._Base_addr
D1_Dup._Base_addr -(rename)-> D2._Base_addr
D2._Base_addr -(rename)-> D2_Dup._Base_addr
D2_Dup._Base_addr -(rename)-> D3._Base_addr
D2._Base_addr -(rename)-> D3._Base_addr
D1._Base_addr -(rename)-> D2._D1_Base_addr
D2._D1_Base_addr -(rename)-> D2_Dup._D1_Base_addr
D2_Dup._D1_Base_addr -(rename)-> D3._D1_Base_addr
D2._D1_Base_addr -(rename)-> D3._D2_D1_Base_addr
*/

  private string __Base_addr;
  @property ref string _Base_addr(uint variableTypeId) {return __Base_addr;}

/*
D1._addr -(rename)-> D1_Dup._addr
D1_Dup._addr -(rename)-> D2._addr
D1._addr -(rename)-> D2._addr
D2._addr -(rename)-> D2_Dup._addr
D2_Dup._addr -(rename)-> D3._addr
D2._addr -(rename)-> D3._addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 0 /* Base */:  return __Base_addr;  // Base._addr -(rename)-> D1._Base_addr
    default:  {return __addr;}
  }
 {return __addr;}
  }

}

D1 newD1() {return new _D1();}


interface D1_Dup: D1 {
}

class _D1_Dup : D1_Dup {
  static const uint ___typeid = 3;
  // flattened fields: [_Base_addr, _addr]
/*
D1_Dup._Base_addr -(rename)-> D2._Base_addr
D2._Base_addr -(rename)-> D2_Dup._Base_addr
D2_Dup._Base_addr -(rename)-> D3._Base_addr
D2._Base_addr -(rename)-> D3._Base_addr
*/

  private string __Base_addr;
  @property ref string _Base_addr(uint variableTypeId) {return __Base_addr;}

/*
D1_Dup._addr -(rename)-> D2._addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 0 /* Base */:  return __Base_addr;  // Base._addr -(rename)-> D1._Base_addr
    default:  {return __addr;}
  }
 {return __addr;}
  }

}

D1_Dup newD1_Dup() {return new _D1_Dup();}


interface D2: D1, D1_Dup, Base_Dup {
  @property ref string _D1_Base_addr(uint variableTypeId);
}

class _D2 : D2 {
  static const uint ___typeid = 4;
  // flattened fields: [_Base_addr, _D1_Base_addr, _addr]
/*
D2._Base_addr -(rename)-> D2_Dup._Base_addr
D2_Dup._Base_addr -(rename)-> D3._Base_addr
D2._Base_addr -(rename)-> D3._Base_addr
*/

  private string __Base_addr;
  @property ref string _Base_addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 2 /* D1 */:  return __D1_Base_addr;  // D1._Base_addr -(rename)-> D2._D1_Base_addr
    default:  {return __Base_addr;}
  }
 {return __Base_addr;}
  }

/*
D2._D1_Base_addr -(rename)-> D2_Dup._D1_Base_addr
D2_Dup._D1_Base_addr -(rename)-> D3._D1_Base_addr
D2._D1_Base_addr -(rename)-> D3._D2_D1_Base_addr
*/

  private string __D1_Base_addr;
  @property ref string _D1_Base_addr(uint variableTypeId) {return __D1_Base_addr;}

/*
D2._addr -(rename)-> D2_Dup._addr
D2_Dup._addr -(rename)-> D3._addr
D2._addr -(rename)-> D3._addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 0 /* Base */:  return __D1_Base_addr;  // Base._addr -(rename)-> D1._Base_addr & Base._addr -(rename)-> D1._Base_addr ; D1._Base_addr -(rename)-> D2._D1_Base_addr
    default:  {return __addr;}
  }
 {return __addr;}
  }

}

D2 newD2() {return new _D2();}


interface D2_Dup: D2 {
}

class _D2_Dup : D2_Dup {
  static const uint ___typeid = 5;
  // flattened fields: [_Base_addr, _D1_Base_addr, _addr]
/*
D2_Dup._Base_addr -(rename)-> D3._Base_addr
*/

  private string __Base_addr;
  @property ref string _Base_addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 2 /* D1 */:  return __D1_Base_addr;  // D1._Base_addr -(rename)-> D2._D1_Base_addr
    default:  {return __Base_addr;}
  }
 {return __Base_addr;}
  }

/*
D2_Dup._D1_Base_addr -(rename)-> D3._D1_Base_addr
*/

  private string __D1_Base_addr;
  @property ref string _D1_Base_addr(uint variableTypeId) {return __D1_Base_addr;}

/*
D2_Dup._addr -(rename)-> D3._addr
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 0 /* Base */:  return __D1_Base_addr;  // Base._addr -(rename)-> D1._Base_addr & Base._addr -(rename)-> D1._Base_addr ; D1._Base_addr -(rename)-> D2._D1_Base_addr
    default:  {return __addr;}
  }
 {return __addr;}
  }

}

D2_Dup newD2_Dup() {return new _D2_Dup();}


interface D3: D2, D2_Dup, Base_Dup {
  @property ref string _D2_D1_Base_addr();
}

class _D3 : D3 {
  static const uint ___typeid = 6;
  // flattened fields: [_Base_addr, _D1_Base_addr, _D2_D1_Base_addr, _addr]
/*
*/

  private string __Base_addr;
  @property ref string _Base_addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 2 /* D1 */:  return __D2_D1_Base_addr;  // D1._Base_addr -(rename)-> D2._D1_Base_addr & D1._Base_addr -(rename)-> D2._D1_Base_addr ; D2._D1_Base_addr -(rename)-> D3._D2_D1_Base_addr
    default:  {return __Base_addr;}
  }
 {return __Base_addr;}
  }

/*
*/

  private string __D1_Base_addr;
  @property ref string _D1_Base_addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 4 /* D2 */:  return __D2_D1_Base_addr;  // D2._D1_Base_addr -(rename)-> D3._D2_D1_Base_addr
    default:  {return __D1_Base_addr;}
  }
 {return __D1_Base_addr;}
  }

/*
*/

  private string __D2_D1_Base_addr;
  @property ref string _D2_D1_Base_addr() {return __D2_D1_Base_addr;}

/*
*/

  private string __addr;
  @property ref string _addr(uint variableTypeId) { // virtual field dispatch table (VFDT)
  switch (variableTypeId) {
    case 0 /* Base */:  return __D2_D1_Base_addr;  // Base._addr -(rename)-> D1._Base_addr & Base._addr -(rename)-> D1._Base_addr ; D1._Base_addr -(rename)-> D2._D1_Base_addr & Base._addr -(rename)-> D1._Base_addr & Base._addr -(rename)-> D1._Base_addr ; D1._Base_addr -(rename)-> D2._D1_Base_addr ; D2._D1_Base_addr -(rename)-> D3._D2_D1_Base_addr
    default:  {return __addr;}
  }
 {return __addr;}
  }

}

D3 newD3() {return new _D3();}


void main() {
  ;
}
