

// do NOT edit: this is generated file by Yi yc!
import std.array;
import std.exception;
import std.format;
import std.stdio;

alias TypeIdT = uint;  // ref:___typeid; 2 bytes ushort 65,536 too fewer for large system; let's use 4 bytes
alias TypeStackPathHashT = ulong;

interface MIObject {
  MIObject object();  // return the impl object from the handle
  MIObject cloneH();  // return the clone of the handle
  void pushObjectViewStack(TypeIdT typeId);
  void  popObjectViewStack();
  TypeIdT[]          objectViewStack();
  TypeStackPathHashT objectViewStackHash();
}

class __MIObject : MIObject {
  MIObject object()                         {enforce(false, "should never be called on implClassName"); return null;}
  MIObject cloneH()                         {enforce(false, "should never be called on implClassName"); return null;}
  void pushObjectViewStack(TypeIdT typeId)  {enforce(false, "should never be called on implClassName");}
  void  popObjectViewStack()                {enforce(false, "should never be called on implClassName");}
  TypeIdT[]          objectViewStack()      {enforce(false, "should never be called on implClassName"); return null;}
  TypeStackPathHashT objectViewStackHash()  {return TypeStackPathHashT.max;}
}

abstract class _MIObject : MIObject {
  TypeIdT[]          _objectViewStack;  // only var type change need to be pushed into stack; cast need to be in the stack
  TypeStackPathHashT _objectViewStackHash;

  void pushObjectViewStack(TypeIdT typeId) {
    // since we need push/pop in pairs, we cannot do this early optimization,
    // otherwise pop will always be executed even there is no real push.
    // let's compress the stack only when calc hash
    if (_objectViewStack.length == 0 || _objectViewStack[$-1] != typeId) {  // has to be diff from stack top
      // make sure castHash is valid
      while (_objectViewStack.length >= 1) {
        TypeStackPathHashT castHash = ((_objectViewStack[$-1] << 8) | typeId);
        if (castHash in superClassCasts) {
          break;
        }
        writefln("monkey jump type cast: bad castHash %x", castHash);
        // pop until castHash is valid
        popObjectViewStack();  // will also update the cached value: _objectViewStackHash
      }

      _objectViewStackHash = (_objectViewStackHash << 8) | typeId;
    }
    _objectViewStack ~= typeId;
  }

  // TODO: due to value semantics of the holding variable, pop is not needed any more
  void popObjectViewStack() {
    TypeIdT typeId = _objectViewStack.back();
    _objectViewStack.popBack();
    if (typeId != _objectViewStack.back()) {
      _objectViewStackHash >>= 8;
    }
  }

  // NOTE: hash is calc-ed incrementally in runtime, this func is only for cross-check in debug build
  TypeStackPathHashT recalcObjectViewStackHash() {
    TypeStackPathHashT hash;
    TypeIdT prev = TypeIdT.max;
    foreach (type; _objectViewStack) {  // from leaf type (at the bottom index-0 of the stack) to root type (at the top of the stack)
      if (type != prev) {  // NOTE: remove dup stack frame here
        enforce(type <= 256);
        hash = (hash << 8) | type;
        prev = type;
      }
    }
    return hash;
  }

  TypeIdT[] objectViewStack() {
    return _objectViewStack;
  }

  TypeStackPathHashT objectViewStackHash() {
   version (all) {  // debug build
    TypeStackPathHashT hash = recalcObjectViewStackHash();
    enforce(_objectViewStackHash == hash);
   }
    return _objectViewStackHash;
  }
}


static immutable enum int[TypeStackPathHashT] superClassCasts = [
  0x200: 1, // SANTA_BARBARA -> LONDON
  0x201: 1, // SANTA_BARBARA -> NEW_YORK
];


interface LONDON: MIObject {
  @property ref string _foo();
}

class __LONDON : __MIObject, LONDON {
  // static const uint ___typeid = 0;
  // flattened fields: [foo]
// all subclasses share this same field: __foo
  private string __foo;
  @property ref string _foo() {return this.__foo;}
}
// the handle class
class _LONDON : _MIObject, LONDON {
  LONDON _object;  // forward all the calls to _object
  MIObject object() {enforce(_object);
  return _object;}
  MIObject cloneH() {  // TODO:we should really has covariant return type
  alias oldH = this;
  _LONDON newH = new _LONDON();
  newH._object = cast(LONDON)(oldH.object());  // same underlying _object
  // copy the current view stack
  enforce(newH._object);
  newH._objectViewStack     = oldH.objectViewStack;
  newH._objectViewStackHash = oldH.objectViewStackHash;
  return newH;
}
  @property ref string _foo() {return _object._foo;}
}
ref string LONDONfoo(LONDON self) {return self._foo;}

void __init__(LONDON self) {
  self = cast(LONDON)(self.cloneH());
  self.pushObjectViewStack(0);
  LONDONfoo(self) = "LONDON";;
}


LONDON newLONDON() {_LONDON obj = new _LONDON(); obj._object = new __LONDON(); obj.pushObjectViewStack(0); return obj;}


interface NEW_YORK: MIObject {
  @property ref string _foo();
}

class __NEW_YORK : __MIObject, NEW_YORK {
  // static const uint ___typeid = 1;
  // flattened fields: [foo]
// all subclasses share this same field: __foo
  private string __foo;
  @property ref string _foo() {return this.__foo;}
}
// the handle class
class _NEW_YORK : _MIObject, NEW_YORK {
  NEW_YORK _object;  // forward all the calls to _object
  MIObject object() {enforce(_object);
  return _object;}
  MIObject cloneH() {  // TODO:we should really has covariant return type
  alias oldH = this;
  _NEW_YORK newH = new _NEW_YORK();
  newH._object = cast(NEW_YORK)(oldH.object());  // same underlying _object
  // copy the current view stack
  enforce(newH._object);
  newH._objectViewStack     = oldH.objectViewStack;
  newH._objectViewStackHash = oldH.objectViewStackHash;
  return newH;
}
  @property ref string _foo() {return _object._foo;}
}
ref string NEW_YORKfoo(NEW_YORK self) {return self._foo;}

void __init__(NEW_YORK self) {
  self = cast(NEW_YORK)(self.cloneH());
  self.pushObjectViewStack(1);
  NEW_YORKfoo(self) = "NEW_YORK";;
}


NEW_YORK newNEW_YORK() {_NEW_YORK obj = new _NEW_YORK(); obj._object = new __NEW_YORK(); obj.pushObjectViewStack(1); return obj;}


interface SANTA_BARBARA: MIObject, LONDON, NEW_YORK {
}

class __SANTA_BARBARA : __MIObject, SANTA_BARBARA {
  // static const uint ___typeid = 2;
  // flattened fields: [foo]
// all subclasses share this same field: __foo
  private string __foo;
  @property ref string _foo() {return this.__foo;}
}
// the handle class
class _SANTA_BARBARA : _MIObject, SANTA_BARBARA {
  SANTA_BARBARA _object;  // forward all the calls to _object
  MIObject object() {enforce(_object);
  return _object;}
  MIObject cloneH() {  // TODO:we should really has covariant return type
  alias oldH = this;
  _SANTA_BARBARA newH = new _SANTA_BARBARA();
  newH._object = cast(SANTA_BARBARA)(oldH.object());  // same underlying _object
  // copy the current view stack
  enforce(newH._object);
  newH._objectViewStack     = oldH.objectViewStack;
  newH._objectViewStackHash = oldH.objectViewStackHash;
  return newH;
}
  @property ref string _foo() {return _object._foo;}
}
ref string SANTA_BARBARAfoo(SANTA_BARBARA self) {return self._foo;}

void __init__(SANTA_BARBARA self) {
  self = cast(SANTA_BARBARA)(self.cloneH());
  self.pushObjectViewStack(2);
  SANTA_BARBARAfoo(self) = "SANTA_BARBARA";;
}


SANTA_BARBARA newSANTA_BARBARA() {_SANTA_BARBARA obj = new _SANTA_BARBARA(); obj._object = new __SANTA_BARBARA(); obj.pushObjectViewStack(2); return obj;}




void main() {
  SANTA_BARBARA s = cast(SANTA_BARBARA)((newSANTA_BARBARA()).cloneH());  s.pushObjectViewStack(2);;
  s.__init__();
  write(SANTA_BARBARAfoo(s));
  write("\n");
  LONDON l = cast(LONDON)((s).cloneH());  l.pushObjectViewStack(0);;
  write(LONDONfoo(l));
  write("\n");
  NEW_YORK n = cast(NEW_YORK)((s).cloneH());  n.pushObjectViewStack(1);;
  write(NEW_YORKfoo(n));
  write("\n");
}
