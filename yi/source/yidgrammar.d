module yidgrammar;

enum YiDGrammar = `
YiD:

Module <- ModuleDeclaration? DeclDefs?

DeclDefs < DeclDef+

DeclDef < ClassDeclaration
        / ImportDeclaration

ModuleDeclaration < Identifier

ImportDeclaration < Identifier

### class.html

ClassDeclaration < "class" Identifier BaseClassList? ClassBody
                 # / ClassTemplateDeclaration

### I don't why the grammar distinguish SuperClass and Interface
### They cannot be differentiated at this step
BaseClassList < ":" SuperClass ("," SuperClass)*

SuperClass < Identifier ClassAdapters?

ClassAdapters < "(" (ClassAdapter ";")* ")"

ClassAdapter < Rename
	     / Select

Rename < "rename" Identifier "as" Identifier

Select < "select" Identifier

ClassBody < "{" ClassBodyDeclarations? "}"

ClassBodyDeclarations < ClassBodyDeclaration ClassBodyDeclarations?

ClassBodyDeclaration < Field
                     # / DeclDef
                     # / Invariant
                     # / ClassAllocator
                     # / ClassDeallocator

Field < BasicType Declarators ";"
     # / BasicType Declarator FunctionBody
     # / AutoDeclaration
     # / StorageClasses Field

BasicType < Identifier

Declarators < DeclaratorInitializer ("," DeclaratorIdentifier ("," DeclaratorIdentifier)*)?

DeclaratorInitializer < Declarator ("=" Initializer)?

DeclaratorIdentifier < Identifier ("=" Initializer)?

Declarator < Identifier

Initializer < Identifier


# I had to add it. Otherwise, keywords are recognized as identifiers

Identifier <~ !Keyword [a-zA-Z_] [a-zA-Z0-9_]*

Keyword < "abstract" / "alias" / "align" / "asm" / "assert" / "auto" / "body" / "bool" / "break" / "byte"
         / "case" / "cast" / "catch" / "cdouble" / "cent" / "cfloat" / "char" / "class" / "const" / "continue" / "creal" / "dchar"
         / "debug" / "default" / "delegate" / "delete" / "deprecated" / "double" / "do" / "else" / "enum" / "export" / "extern"
         / "false" / "finally" / "final" / "float" / "foreach_reverse" / "foreach" / "for" / "function" / "goto" / "idouble" / "if"
         / "ifloat" / "immutable" / "import" / "inout" / "interface" / "invariant" / "int" / "in" / "ireal" / "is" / "lazy"
         / "long" / "macro" / "mixin" / "module" / "new" / "nothrow" / "null" / "out" / "override" / "package" / "pragma"
         / "private" / "protected" / "public" / "pure" / "real" / "ref" / "return" / "scope" / "shared" / "short" / "static"
         / "struct" / "super" / "switch" / "synchronized" / "template" / "this" / "throw" / "true" / "try" / "typedef" / "typeid"
         / "typeof" / "ubyte" / "ucent" / "uint" / "ulong" / "union" / "unittest" / "ushort" / "version" / "void" / "volatile"
         / "wchar" / "while" / "with" / "__FILE__" / "__LINE__" / "__gshared" / "__thread" / "__traits"



`;
