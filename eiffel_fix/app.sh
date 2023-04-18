#!/bin/sh
export ISE_PLATFORM=${ISE_PLATFORM:-linux-x86-64}
gcc `/home/zhou/project/Eiffel/library/base/elks/encoding/implementation/unix/Clib/iconv-config --include_path` -I"/home/zhou/project/Eiffel/library/base/elks/encoding/implementation/include"  -c app1.c
gcc `/home/zhou/project/Eiffel/library/base/elks/encoding/implementation/unix/Clib/iconv-config --library` -o app app1.o  -lm  
