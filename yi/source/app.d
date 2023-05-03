// https://github.com/symmetryinvestments/autowrap/blob/master/examples/pyd/source/app.d

import autowrap;

enum str = wrapDlang!(
    LibraryName("libyc"),
    Modules(
        Module("system", Yes.alwaysExport),
    ),
);
//pragma(msg, str);
mixin(str);



