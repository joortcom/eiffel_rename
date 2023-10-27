#define GE_USE_TYPE_GENERIC_PARAMETERS
#define GE_USE_TYPE_OBJECT_SIZE
/*
	description:

		"C declarations for the Gobo Eiffel runtime."

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2005-2020, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_EIFFEL_H
#define GE_EIFFEL_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Class name mapping as defined in the FreeELKS library. */
#ifndef EIF_INTEGER
#define EIF_INTEGER EIF_INTEGER_32
#endif
#ifndef EIF_CHARACTER
#define EIF_CHARACTER EIF_CHARACTER_8
#endif
#ifndef EIF_REAL
#define EIF_REAL EIF_REAL_32
#endif
#ifndef EIF_DOUBLE
#define EIF_DOUBLE EIF_REAL_64
#endif
#ifndef GE_ms
#if EIF_CHARACTER == EIF_CHARACTER_8
#define GE_ms(s,c) GE_ms8((s),(c))
#else
#define GE_ms(s,c) GE_ms32((s),(c))
#endif
#endif

#if defined(__USE_POSIX) || defined(__unix__) || defined(_POSIX_C_SOURCE)
#include <unistd.h>
#endif
#if !defined(WIN32) && \
	(defined(WINVER) || defined(_WIN32_WINNT) || defined(_WIN32) || \
	defined(__WIN32__) || defined(__TOS_WIN__) || defined(_MSC_VER) || \
	defined(__MINGW32__))
#define WIN32 1
#endif
#ifdef WIN32
#define EIF_WINDOWS 1
#include <windows.h>
#endif

/* See https://sourceforge.net/p/predef/wiki/OperatingSystems/ */
#if (defined(macintosh) || defined(Macintosh))
#define EIF_MAC 1
#define EIF_MACOSX 1
#endif
#if (defined(__APPLE__) && defined(__MACH__))
/* Apparently ISE does not define EIF_MASOSX for Mac OS X >=10.4 (see EXECUTION_ENVIRONMENT.available_cpu_count) */
#define EIF_MAC 1
#endif

#if (defined(VMS) || defined(__VMS))
#define EIF_VMS 1
#endif

#if (defined(__VXWORKS__) || defined(__vxworks))
#define EIF_VXWORKS 1
#endif

#define BYTEORDER 0x1234

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>

#define EIF_OS_WINNT 	1
#define EIF_OS_LINUX 	2
#define EIF_OS_DARWIN 	4
#define EIF_OS_VXWORKS	11
#define EIF_OS_VMS	12

/* Platform definition */
/* Unix definition */
#define EIF_IS_UNIX EIF_TRUE
#define EIF_OS EIF_OS_LINUX
/* Windows definition */
#ifdef EIF_WINDOWS
#define EIF_IS_WINDOWS EIF_TRUE
#undef EIF_OS
#define EIF_OS EIF_OS_WINNT
#undef EIF_IS_UNIX
#define EIF_IS_UNIX EIF_FALSE
#else
#define EIF_IS_WINDOWS EIF_FALSE
#endif
/* VMS definition */
#ifdef EIF_VMS
#define EIF_IS_VMS EIF_TRUE
#undef EIF_OS
#define EIF_OS EIF_OS_VMS
#undef EIF_IS_UNIX
#define EIF_IS_UNIX EIF_FALSE
#else
#define EIF_IS_VMS EIF_FALSE
#endif
/* MAC definition */
#ifdef EIF_MAC
#define EIF_IS_MAC EIF_TRUE
#undef EIF_OS
#define EIF_OS EIF_OS_DARWIN
#undef EIF_IS_UNIX
#define EIF_IS_UNIX EIF_FALSE
#else
#define EIF_IS_MAC EIF_FALSE
#endif
/* VxWorks definition */
#ifdef EIF_VXWORKS
#define EIF_IS_VXWORKS EIF_TRUE
#undef EIF_OS
#define EIF_OS EIF_OS_VXWORKS
#undef EIF_IS_UNIX
#define EIF_IS_UNIX EIF_FALSE
#else
#define EIF_IS_VXWORKS EIF_FALSE
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _MSC_VER /* MSVC */
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed __int64 int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned __int64 uint64_t;
#else
#if defined (__BORLANDC__) && (__BORLANDC__ < 0x600) /* Borland before 6.0 */
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed long int int32_t;
typedef signed __int64 int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned __int64 uint64_t;
#else
#include <inttypes.h>
#endif
#endif

/* Portable integer pointers */
#ifdef EIF_WINDOWS
#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#ifdef _WIN64
typedef __int64 intptr_t;
#else
typedef int intptr_t;
#endif
#endif
#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#ifdef _WIN64
  typedef unsigned __int64 uintptr_t;
#else
  typedef unsigned int uintptr_t;
#endif
#endif
#endif

/* C type for underlying integer type identifying object's dynamic type. */
typedef uint16_t EIF_TYPE_INDEX;

/*
 * Abstraction representing an Eiffel type.
 * It is made of a compiler type-id,
 * and of some annotations (attached/detachable/separate/variant/frozen).
 */
typedef struct eif_type {
	EIF_TYPE_INDEX id;
	EIF_TYPE_INDEX annotations;
} EIF_TYPE;

/*
 * Since EIF_TYPE and EIF_ENCODED_TYPE have the same size, the encoded version
 * is basically a memcpy version of the EIF_TYPE representation.
 * It is used to provide backward compatibility to most Eiffel and
 * C APIs manipulating types as an INTEGER.
 */
typedef int32_t EIF_ENCODED_TYPE;
typedef EIF_ENCODED_TYPE EIF_TYPE_ID;
#define EIF_NO_TYPE (EIF_TYPE_ID)(-1)

/* Basic Eiffel types */
typedef char EIF_BOOLEAN;
typedef unsigned char EIF_CHARACTER_8;
typedef uint32_t EIF_CHARACTER_32;
typedef int8_t EIF_INTEGER_8;
typedef int16_t EIF_INTEGER_16;
typedef int32_t EIF_INTEGER_32;
typedef int64_t EIF_INTEGER_64;
typedef uint8_t EIF_NATURAL_8;
typedef uint16_t EIF_NATURAL_16;
typedef uint32_t EIF_NATURAL_32;
typedef uint64_t EIF_NATURAL_64;
typedef void* EIF_POINTER;
typedef float EIF_REAL_32;
typedef double EIF_REAL_64;
typedef struct {EIF_TYPE_INDEX id; uint16_t flags;} EIF_ANY;
typedef EIF_ANY* EIF_REFERENCE;
typedef struct {EIF_TYPE_INDEX id; uint16_t flags; EIF_REFERENCE area; EIF_INTEGER count;} EIF_STRING;
typedef struct {EIF_TYPE_INDEX id; uint16_t flags; uint32_t offset; EIF_INTEGER count; EIF_INTEGER capacity;} EIF_SPECIAL;

#ifdef EIF_WINDOWS
typedef wchar_t EIF_NATIVE_CHAR;
#else
typedef char EIF_NATIVE_CHAR;
#endif
typedef EIF_NATIVE_CHAR* EIF_FILENAME;

#define EIF_VOID ((EIF_REFERENCE)0)
#define EIF_FALSE ((EIF_BOOLEAN)'\0')
#define EIF_TRUE ((EIF_BOOLEAN)'\1')
#define EIF_TEST(x) ((x) ? EIF_TRUE : EIF_FALSE)

#define EIF_IS_WORKBENCH EIF_FALSE
#define EIF_POINTER_DISPLAY "lX"

/* For INTEGER and NATURAL manifest constants */
#define GE_int8(x) x
#define GE_nat8(x) x
#define GE_int16(x) x
#define GE_nat16(x) x
#define GE_int32(x) x##L
#define GE_nat32(x) x##U
#if defined (_MSC_VER) && (_MSC_VER < 1400) /* MSC older than v8 */
#define GE_int64(x) x##i64
#define GE_nat64(x) x##ui64
#elif defined(__BORLANDC__) && (__BORLANDC__ < 0x600) /* Borland before 6.0 */
#define GE_int64(x) x##i64
#define GE_nat64(x) x##ui64
#else /* ISO C 99 */
#define GE_int64(x) x##LL
#define GE_nat64(x) x##ULL
#endif
#ifdef __LCC__
/* lcc-win32 reports a constant overflow for -21474836478. */
#define GE_min_int32 (-GE_int32(2147483647)-GE_int32(1))
#else
#define GE_min_int32 GE_int32(-2147483648)
#endif
#define GE_max_int32 GE_int32(2147483647)
#if defined(__LCC__) || defined(__GNUC__) || defined(__MINGW32__)
/* lcc-win32 reports a constant overflow for -9223372036854775808. */
/* gcc and mingw-win64 warn that integer constant is so large that it is unsigned. */
#define GE_min_int64 (-GE_int64(9223372036854775807)-GE_int64(1))
#else
#define GE_min_int64 GE_int64(-9223372036854775808)
#endif
#if defined(__LCC__) && !defined(_WIN64)
/* lcc-win32 does not consider 64 bit constants as constants in case statement. */
#define GE_case_int64(x) ((int32_t)(x))
#define GE_case_nat64(x) ((uint32_t)(x))
#else
#define GE_case_int64(x) (x)
#define GE_case_nat64(x) (x)
#endif

#ifdef _WIN64
#define GE_IS_64_BITS EIF_TRUE
#else
#define GE_IS_64_BITS EIF_TEST(sizeof(void*)==64)
#endif

/* Posix threads */
#if !defined(EIF_WINDOWS)
#define GE_USE_POSIX_THREADS
#endif

#ifdef _MSC_VER /* MSVC */
/* MSVC does not support ISO C 99's 'snprintf' from stdio.h */
#define snprintf(a,b,c,d) sprintf(a,c,d)
#endif

/*
 * Gobo compiler version.
 * Starts with 6080 (looks like GOBO) followed by 5 digits.
 */
#define GE_compiler_version() 608000001

/*
	Interoperability with ISE.
*/
#define RTI64C(x) GE_int64(x)
#define EIF_OBJECT EIF_REFERENCE
#define EIF_OBJ EIF_OBJECT
#define OVERHEAD sizeof(EIF_ANY)
/* Function pointer call to make sure all arguments are correctly pushed onto stack. */
/* FUNCTION_CAST is for standard C calls. */
/* FUNCTION_CAST_TYPE is for non-standard C calls. */
#define FUNCTION_CAST(r_type,arg_types) (r_type (*) arg_types)
#define FUNCTION_CAST_TYPE(r_type,call_type,arg_types) (r_type (call_type *) arg_types)
#define SIGBLOCK
#define SIGRESUME
#define rt_public				/* default C scope */
#define rt_private static		/* static outside a block means private */
#define rt_shared				/* data shared between modules, but not public */
typedef intptr_t rt_int_ptr;
typedef uintptr_t rt_uint_ptr;
#define RTMS(s) GE_str8(s)
#define RTMS_EX(s,c) GE_ms8((s),(c))

#ifdef __cplusplus
}
#endif

#endif

/*
	description:

		"C functions used to implement once features"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_ONCE_H
#define GE_ONCE_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Struct to keep track of the call status
 * and results of once features.
 */
typedef struct {
	EIF_BOOLEAN* boolean_value;
	EIF_REFERENCE* boolean_exception;
	unsigned char* boolean_status;
	unsigned int boolean_count;
	EIF_CHARACTER_8* character_8_value;
	EIF_REFERENCE* character_8_exception;
	unsigned char* character_8_status;
	unsigned int character_8_count;
	EIF_CHARACTER_32* character_32_value;
	EIF_REFERENCE* character_32_exception;
	unsigned char* character_32_status;
	unsigned int character_32_count;
	EIF_INTEGER_8* integer_8_value;
	EIF_REFERENCE* integer_8_exception;
	unsigned char* integer_8_status;
	unsigned int integer_8_count;
	EIF_INTEGER_16* integer_16_value;
	EIF_REFERENCE* integer_16_exception;
	unsigned char* integer_16_status;
	unsigned int integer_16_count;
	EIF_INTEGER_32* integer_32_value;
	EIF_REFERENCE* integer_32_exception;
	unsigned char* integer_32_status;
	unsigned int integer_32_count;
	EIF_INTEGER_64* integer_64_value;
	EIF_REFERENCE* integer_64_exception;
	unsigned char* integer_64_status;
	unsigned int integer_64_count;
	EIF_NATURAL_8* natural_8_value;
	EIF_REFERENCE* natural_8_exception;
	unsigned char* natural_8_status;
	unsigned int natural_8_count;
	EIF_NATURAL_16* natural_16_value;
	EIF_REFERENCE* natural_16_exception;
	unsigned char* natural_16_status;
	unsigned int natural_16_count;
	EIF_NATURAL_32* natural_32_value;
	EIF_REFERENCE* natural_32_exception;
	unsigned char* natural_32_status;
	unsigned int natural_32_count;
	EIF_NATURAL_64* natural_64_value;
	EIF_REFERENCE* natural_64_exception;
	unsigned char* natural_64_status;
	unsigned int natural_64_count;
	EIF_POINTER* pointer_value;
	EIF_REFERENCE* pointer_exception;
	unsigned char* pointer_status;
	unsigned int pointer_count;
	EIF_REAL_32* real_32_value;
	EIF_REFERENCE* real_32_exception;
	unsigned char* real_32_status;
	unsigned int real_32_count;
	EIF_REAL_64* real_64_value;
	EIF_REFERENCE* real_64_exception;
	unsigned char* real_64_status;
	unsigned int real_64_count;
	EIF_REFERENCE* reference_value;
	EIF_REFERENCE* reference_exception;
	unsigned char* reference_status;
	unsigned int reference_count;
	EIF_REFERENCE* procedure_exception;
	unsigned char* procedure_status;
	unsigned int procedure_count;
} GE_onces;

/*
 * Variable to keep track of the call status
 * and results of once-per-process features.
 */
extern GE_onces* GE_process_onces;

/*
 * Initialize `GE_process_onces'.
 */
extern void GE_init_onces(
	unsigned int a_boolean_count,
	unsigned int a_character_8_count,
	unsigned int a_character_32_count,
	unsigned int a_integer_8_count,
	unsigned int a_integer_16_count,
	unsigned int a_integer_32_count,
	unsigned int a_integer_64_count,
	unsigned int a_natural_8_count,
	unsigned int a_natural_16_count,
	unsigned int a_natural_32_count,
	unsigned int a_natural_64_count,
	unsigned int a_pointer_count,
	unsigned int a_real_32_count,
	unsigned int a_real_64_count,
	unsigned int a_reference_count,
	unsigned int a_procedure_count);

/*
 * Create a new 'GE_onces' struct which can deal with the
 * numbers of once features passed as argument.
 */
extern GE_onces* GE_new_onces(
	unsigned int a_boolean_count,
	unsigned int a_character_8_count,
	unsigned int a_character_32_count,
	unsigned int a_integer_8_count,
	unsigned int a_integer_16_count,
	unsigned int a_integer_32_count,
	unsigned int a_integer_64_count,
	unsigned int a_natural_8_count,
	unsigned int a_natural_16_count,
	unsigned int a_natural_32_count,
	unsigned int a_natural_64_count,
	unsigned int a_pointer_count,
	unsigned int a_real_32_count,
	unsigned int a_real_64_count,
	unsigned int a_reference_count,
	unsigned int a_procedure_count);

/*
 * Free memory allocated by `a_onces'.
 */
extern void GE_free_onces(GE_onces* a_onces);

#ifdef __cplusplus
}
#endif

#endif

/*
	description:

		"C functions used to implement class EXCEPTION"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_EXCEPTION_H
#define GE_EXCEPTION_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif
#ifndef GE_ONCE_H
#include "ge_once.h"
#endif
#ifdef GE_USE_THREADS
#ifndef GE_THREAD_TYPES_H
#include "ge_thread_types.h"
#endif
#endif

#include <setjmp.h>

/*
 * On Linux glibc systems, we need to use sig* versions of jmp_buf,
 * setjmp and longjmp to preserve the signal handling context.
 * One way to detect this is if _SIGSET_H_types has
 * been defined in /usr/include/setjmp.h.
 * NOTE: ANSI only recognizes the non-sig versions.
 */
#if (defined(_SIGSET_H_types) && !defined(__STRICT_ANSI__))
#define GE_jmp_buf sigjmp_buf
#define GE_setjmp(x) sigsetjmp((x),1)
#define GE_longjmp(x,y) siglongjmp((x),(y))
#else
#define GE_jmp_buf jmp_buf
#define GE_setjmp(x) setjmp((x))
#define GE_longjmp(x,y) longjmp((x),(y))
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Predefined exception codes.
 */
#define GE_EX_VOID		1			/* Feature applied to void reference */
#define GE_EX_MEM		2			/* No more memory */
#define GE_EX_PRE		3			/* Pre-condition violated */
#define GE_EX_POST		4			/* Post-condition violated */
#define GE_EX_FLOAT		5			/* Floating point exception (signal SIGFPE) */
#define GE_EX_CINV		6			/* Class invariant violated */
#define GE_EX_CHECK		7			/* Check instruction violated */
#define GE_EX_FAIL		8			/* Routine failure */
#define GE_EX_WHEN		9			/* Unmatched inspect value */
#define GE_EX_VAR		10			/* Non-decreasing loop variant */
#define GE_EX_LINV		11			/* Loop invariant violated */
#define GE_EX_SIG		12			/* Operating system signal */
#define GE_EX_BYE		13			/* Eiffel run-time panic */
#define GE_EX_RESC		14			/* Exception in rescue clause */
#define GE_EX_OMEM		15			/* Out of memory (cannot be ignored) */
#define GE_EX_RES		16			/* Resumption failed (retry did not succeed) */
#define GE_EX_CDEF		17			/* Create on deferred */
#define GE_EX_EXT		18			/* External event */
#define GE_EX_VEXP		19			/* Void assigned to expanded */
#define GE_EX_HDLR		20			/* Exception in signal handler */
#define GE_EX_IO		21			/* I/O error */
#define GE_EX_SYS		22			/* Operating system error */
#define GE_EX_RETR		23			/* Retrieval error */
#define GE_EX_PROG		24			/* Developer exception */
#define GE_EX_FATAL		25			/* Eiffel run-time fatal error */
#define GE_EX_DOL		26			/* $ applied to melted feature */
#define GE_EX_ISE_IO	27			/* I/O error raised by the ISE Eiffel runtime */
#define GE_EX_COM		28			/* COM error raised by EiffelCOM runtime */
#define GE_EX_RT_CHECK	29			/* Runtime check error such as out-of-bound array access */
#define GE_EX_OLD		30			/* Old violation */
#define GE_EX_SEL		31			/* Serialization failure */
#define GE_EX_DIRTY		32			/* SCOOP processor dirty exception. */
#define GE_EX_NEX		32			/* Number of internal exceptions */

/*
 * String buffer used to build the exception trace.
 */
typedef struct GE_exception_trace_buffer_struct GE_exception_trace_buffer;
struct GE_exception_trace_buffer_struct {
	char* area;
	uint32_t count;
	uint32_t capacity;
};

/*
 * Information about the feature being executed.
 */
typedef struct GE_call_struct GE_call;
struct GE_call_struct {
#ifdef GE_USE_CURRENT_IN_EXCEPTION_TRACE
	void* object; /* Current object */
#endif
	const char* class_name;
	const char* feature_name;
	GE_call* caller; /* previous feature in the call chain */
};

/*
 * Context of features containing a rescue clause.
 */
typedef struct GE_rescue_struct GE_rescue;
struct GE_rescue_struct {
	GE_jmp_buf jb;
	GE_rescue* previous; /* previous context in the call chain */
};

/*
 * Information about the execution context.
 * One such struct per thread.
 */
typedef struct GE_context_struct GE_context;
struct GE_context_struct {
	GE_call* call; /* Call stack */
	uint32_t in_assertion; /* Is an assertion evaluated? */
	GE_rescue* last_rescue; /* Context of last feature entered containing a rescue clause */
	uint32_t in_rescue; /* Number of rescue clauses currently being executed */
	EIF_REFERENCE exception_manager; /* Exception manager */
	char raising_exception; /* Is an exception currently being raised? */
	char exception_trace_enabled; /* Should exception trace be displayed? */
	long exception_code; /* Code of the exception currently being raised, 0 otherwise */
	const char* exception_tag; /* Tag of the exception currently being raised, NULL otherwise */
	GE_exception_trace_buffer exception_trace_buffer; /* String buffer used to build the exception trace */
	GE_exception_trace_buffer last_exception_trace; /* Last non-routine-failure exception trace */
	int pre_ecma_mapping_status; /* Do we map old names to new name? (i.e. STRING to STRING_8, INTEGER to INTEGER_32, ...). */
#ifdef GE_USE_THREADS
	GE_thread_context* thread; /* Thread context */
	GE_onces* process_onces; /* Cache for status and results of onces-per-process */
	GE_onces* thread_onces; /* Status and results of onces-per-thread */
	void* wel_per_thread_data; /* WEL private data */
#endif
};

/*
 * Default initialization for `GE_context'.
 */
extern GE_context GE_default_context;

/*
 * Execution context of main thread.
 */
extern GE_context* GE_main_context;

/*
 * Execution context of current thread.
 */
extern GE_context* GE_current_context(void);

/*
 * Initialization of exception handling.
 */
extern void GE_init_exception(GE_context* context);

/*
 * Free memory allocated in `a_context' for exception handling.
 */
extern void GE_free_exception(GE_context* a_context);

/*
 * Pointer to function to create a new exception manager object
 * (of type ISE_EXCEPTION_MANAGER).
 */
extern EIF_REFERENCE (*GE_new_exception_manager)(EIF_BOOLEAN);

/*
 * Pointer to Eiffel routine ISE_EXCEPTION_MANAGER.init_exception_manager.
 */
extern void (*GE_init_exception_manager)(GE_context*, EIF_REFERENCE);

/*
 * Pointer to Eiffel routine ISE_EXCEPTION_MANAGER.last_exception.
 */
extern EIF_REFERENCE (*GE_last_exception)(GE_context*, EIF_REFERENCE);

/*
 * Pointer to Eiffel routine ISE_EXCEPTION_MANAGER.once_raise.
 */
extern void (*GE_once_raise)(GE_context*, EIF_REFERENCE, EIF_REFERENCE);

/*
 * Pointer to Eiffel routine ISE_EXCEPTION_MANAGER.set_exception_data.
 */
extern void (*GE_set_exception_data)(GE_context*, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN);

/*
 * Exception tag associated with `a_code'.
 */
extern char* GE_exception_tag(long a_code);

/*
 * Raise an exception with code `a_code'.
 */
extern void GE_raise(long a_code);

/*
 * Raise an exception with code `a_code' and message `msg'.
 */
extern void GE_raise_with_message(long a_code, const char* msg);

/*
 * Raise an exception from EXCEPTION_MANAGER.
 */
extern void GE_developer_raise(long a_code, char* a_meaning, char* a_message);

/*
 * Raise exception which was raised the first time a once routine
 * was executed when executing it again.
 */
extern void GE_raise_once_exception(GE_context* a_context, EIF_REFERENCE a_exception);

/*
 * Exception, if any, which was last raised in `a_context'.
 */
extern EIF_REFERENCE GE_last_exception_raised(GE_context* a_context);

/*
 * Jump to execute the rescue of the last routine with a rescue
 * in the call stack.
 */
extern void GE_jump_to_last_rescue(GE_context* a_context);

/*
 * Set `in_assertion' to 'not b'.
 * Return the opposite of previous value.
 */
extern EIF_BOOLEAN GE_check_assert(EIF_BOOLEAN b);

/*
 * Check whether the type id of `obj' is not in `type_ids'.
 * If it is, then raise a CAT-call exception. Don't do anything if `obj' is Void.
 * `nb' is the number of ids in `type_ids' and is expected to be >0.
 * `type_ids' is sorted in increasing order.
 * Return `obj'.
 */
#define GE_catcall(obj,type_ids,nb) GE_check_catcall((obj),(type_ids),(nb))
extern EIF_REFERENCE GE_check_catcall(EIF_REFERENCE obj, EIF_TYPE_INDEX type_ids[], int nb);

/*
 * Check whether `obj' is Void.
 * If it is, then raise a call-on-void-target exception.
 * Return `obj'.
 */
#define GE_void(obj) (!(obj)?GE_check_void(obj):(obj))
extern EIF_REFERENCE GE_check_void(EIF_REFERENCE obj);

/*
 * Check whether `ptr' is a null pointer.
 * If it is, then raise a no-more-memory exception.
 * Return `ptr'.
 */
#define GE_null(ptr) GE_check_null(ptr)
extern void* GE_check_null(void* ptr);

#ifdef EIF_WINDOWS
/*
 * Set default exception handler.
 */
extern void GE_set_windows_exception_filter(void);
#endif

#ifdef __cplusplus
}
#endif

#endif

/*
	description:

		"C functions used to manipulate native strings"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2013-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_NATIVE_STRING_H
#define GE_NATIVE_STRING_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#include <string.h>
#ifdef EIF_WINDOWS
#ifdef __LCC__
/* With lcc-win32, stat.h should be included before wchar.h. */
#include <sys/stat.h>
#endif
#include <wchar.h>
#else
#include <sys/types.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef EIF_WINDOWS

/* Macro used to manipulate native strings, i.e: (wchar_t*) */
#define GE_nstrlen wcslen /* size of string */
#define GE_nstrncpy wcsncpy /* Copy n characters of one string to another */
#define GE_nstrcpy wcscpy /* Copy one string to another */
#define GE_nstrncat wcsncat /* Append characters of a string */
#define GE_nstrcat wcscat /* Append a string */
#define GE_nstrstr wcsstr /* Return a pointer to the first occurrence of a search string in a string. */
#define GE_nmakestr(quote) L##quote /* Manifest Native string declaration */
#define GE_nstr_fopen _wfopen /* Open file using native string name */
#define GE_nstrcmp wcscmp /* Compare two strings. */
#define GE_nstrdup _wcsdup /* Duplicate string. */
#define GE_nstr_cat_ascii(dest, src) {							\
		int i;													\
		size_t dest_len, src_len;								\
		dest_len = rt_nstrlen (dest);							\
		src_len = strlen (src);									\
		for (i = 0; i < src_len; i++) {							\
			dest[dest_len + i] = (EIF_NATIVE_CHAR)src[i];		\
		}														\
		dest[dest_len + src_len] = (EIF_NATIVE_CHAR)0;			\
	}

#else /* not EIF_WINDOWS */

/* Macro used to manipulate native strings, i.e: (char*) */
#define GE_nstrlen strlen /* size of string */
#define GE_nstrncpy strncpy /* Copy n characters of one string to another */
#define GE_nstrcpy strcpy /* Copy one string to another */
#define GE_nstrncat strncat /* Append characters of a string */
#define GE_nstrcat strcat /* Append a string */
#define GE_nstrstr strstr /* Return a pointer to the first occurrence of a search string in a string. */
#define GE_nmakestr(quote) quote /* Manifest Native string declaration */
#define GE_nstr_fopen fopen /* Open file using native string name */
#define GE_nstrcmp strcmp /* Compare two strings. */
#define GE_nstrdup strdup /* Duplicate string. */
#define GE_nstr_cat_ascii strcat

#endif


#ifdef __cplusplus
}
#endif

#endif

/*
	description:

		"C functions used to implement class ARGUMENTS"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_ARGUMENTS_H
#define GE_ARGUMENTS_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int GE_argc;
extern EIF_NATIVE_CHAR** GE_argv;

#ifdef __cplusplus
}
#endif

#endif

/*
	description:

		"C functions used to implement type information"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2016-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_TYPES_H
#define GE_TYPES_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif
#ifndef GE_EXCEPTION_H
#include "ge_exception.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Type annotations.
 * When a type has no annotation, it means a detachable, non-separate, variant type.
 * In all other cases, there will be an annotation.
 */
#define ANNOTATION_MASK			0x007F	/* All possible annotations. */
#define ATTACHED_FLAG			0x0001
#define DETACHABLE_FLAG			0x0002	/* Only present when overriding an attached type. */
#define SEPARATE_FLAG			0x0004
#define VARIANT_FLAG			0x0008	/* Only present when overriding a frozen/poly type. */
#define UNUSABLE_FLAG			0x0010	/* Reserved for backward compatibility for storables. */
#define FROZEN_FLAG				0x0020
#define POLY_FLAG				0x0040

/*
 * Type flags.
 */
#define GE_TYPE_FLAG_SPECIAL		0x0010
#define GE_TYPE_FLAG_TUPLE			0x0020
#define GE_TYPE_FLAG_EXPANDED		0x0040
#define GE_TYPE_FLAG_DEFERRED		0x0080
#define GE_TYPE_FLAG_NONE			0x0100
#define GE_TYPE_FLAG_BASIC_MASK		0x000F /* One of "BOOLEAN", "CHARACTER_8", "CHARACTER_32", "INTEGER_8", "INTEGER_16", "INTEGER_32", "INTEGER_64", "NATURAL_8", "NATURAL_16", "NATURAL_32", "NATURAL_64", "POINTER", "REAL_32", "REAL_64" */
#define GE_TYPE_FLAG_BOOLEAN		0x0001
#define GE_TYPE_FLAG_CHARACTER_8	0x0002
#define GE_TYPE_FLAG_CHARACTER_32	0x0003
#define GE_TYPE_FLAG_INTEGER_8		0x0004
#define GE_TYPE_FLAG_INTEGER_16		0x0005
#define GE_TYPE_FLAG_INTEGER_32		0x0006
#define GE_TYPE_FLAG_INTEGER_64		0x0007
#define GE_TYPE_FLAG_NATURAL_8		0x0008
#define GE_TYPE_FLAG_NATURAL_16		0x0009
#define GE_TYPE_FLAG_NATURAL_32		0x000A
#define GE_TYPE_FLAG_NATURAL_64		0x000B
#define GE_TYPE_FLAG_POINTER		0x000C
#define GE_TYPE_FLAG_REAL_32		0x000D
#define GE_TYPE_FLAG_REAL_64		0x000E

/*
 * Convention for attribute types.
 * The values are in sync with REFLECTOR_CONSTANTS.
 */
#define GE_TYPE_KIND_INVALID		-1
#define GE_TYPE_KIND_POINTER		0
#define GE_TYPE_KIND_REFERENCE		1
#define GE_TYPE_KIND_CHARACTER_8	2
#define GE_TYPE_KIND_BOOLEAN		3
#define GE_TYPE_KIND_INTEGER_32		4
#define GE_TYPE_KIND_REAL_32		5
#define GE_TYPE_KIND_REAL_64		6
#define GE_TYPE_KIND_EXPANDED		7
#define GE_TYPE_KIND_INTEGER_8		9
#define GE_TYPE_KIND_INTEGER_16		10
#define GE_TYPE_KIND_INTEGER_64 	11
#define GE_TYPE_KIND_CHARACTER_32	12
#define GE_TYPE_KIND_NATURAL_8		13
#define GE_TYPE_KIND_NATURAL_16		14
#define GE_TYPE_KIND_NATURAL_32 	15
#define GE_TYPE_KIND_NATURAL_64 	16

/*
 * Object flags.
 */
#define GE_OBJECT_FLAG_MARKED		0x0001

/*
 * Ancestor relationship between two types X and Y.
 */
#ifdef GE_USE_ANCESTORS
typedef struct {
	EIF_TYPE_INDEX type_id; /* Type id of Y */
	EIF_BOOLEAN conforms; /* Does X conform to Y? */
	void (**qualified_calls)(); /* Function pointers, indexed by call id, when the static type of the target is Y and the dynamic type is X */
} GE_ancestor;
#endif

/*
 * Attribute.
 */
#ifdef GE_USE_ATTRIBUTES
typedef struct {
#ifdef GE_USE_ATTRIBUTE_NAME
	const char* name; /* Attribute name */
#endif
#ifdef GE_USE_ATTRIBUTE_TYPE_ID
	EIF_ENCODED_TYPE type_id; /* Static type id */
#endif
#ifdef GE_USE_ATTRIBUTE_OFFSET
	uint32_t offset; /* Address offset in object */
#endif
} GE_attribute;
#endif

/*
 * Type information.
 */
typedef struct {
	EIF_TYPE_INDEX type_id;
	uint16_t flags;
#ifdef GE_USE_TYPE_GENERATOR
	const char* generator; /* Generator class name */
#endif
#ifdef GE_USE_TYPE_NAME
	const char* name; /* Full type name */
#endif
#ifdef GE_USE_TYPE_GENERIC_PARAMETERS
	EIF_ENCODED_TYPE* generic_parameters;
	uint32_t generic_parameter_count;
#endif
#ifdef GE_USE_ANCESTORS
	GE_ancestor** ancestors;
	uint32_t ancestor_count;
#endif
#ifdef GE_USE_ATTRIBUTES
	GE_attribute** attributes;
	uint32_t attribute_count;
#endif
#ifdef GE_USE_TYPE_OBJECT_SIZE
	uint64_t object_size;
#endif
	EIF_REFERENCE (*new_instance)();
	void (*dispose)(GE_context*, EIF_REFERENCE);
} GE_type_info;

typedef struct {
	EIF_TYPE_INDEX id; /* Type id of the "TYPE [X]" object */
	EIF_INTEGER type_id; /* Type id of the type "X" */
	EIF_BOOLEAN is_special;
	void (*dispose)(GE_context*, EIF_REFERENCE);
	EIF_REFERENCE a1; /* internal_name */
	EIF_REFERENCE a2; /* internal_name_32 */
} EIF_TYPE_OBJ;

/*
 * Types indexed by type id.
 * Generated by the compiler.
 */
extern EIF_TYPE_OBJ GE_types[][2];
extern GE_type_info GE_type_infos[];

/*
 * Number of type infos in `GE_type_infos'.
 * Do not take into account the fake item at index 0.
 */
extern int GE_type_info_count;

/*
 * Encode a EIF_TYPE into a EIF_ENCODED_TYPE.
 * The lower part of EIF_ENCODED_TYPE contains the .id field,
 * and the upper part the .annotations.
 */
extern EIF_ENCODED_TYPE GE_encoded_type(EIF_TYPE a_type);

/*
 * Decode a EIF_ENCODED_TYPE into a EIF_TYPE.
 * The lower part of EIF_ENCODED_TYPE contains the .id field,
 * and the upper part the .annotations.
 */
extern EIF_TYPE GE_decoded_type(EIF_ENCODED_TYPE a_type);

/*
 * Type with `a_id' and `a_annotations'.
 */
extern EIF_TYPE GE_new_type(EIF_TYPE_INDEX a_id, EIF_TYPE_INDEX a_annotations);

/*
 * Type of object `obj'.
 */
#define GE_object_type(obj)	GE_new_type(((EIF_REFERENCE)(obj))->id, 0x0)
#define GE_object_encoded_type(obj) GE_encoded_type(GE_object_type(obj))

/*
 * Attachment status of `a_type'.
 */
#define GE_is_attached_type(a_type) EIF_TEST(((a_type).annotations & ATTACHED_FLAG) || GE_is_expanded_type_index((a_type).id))
#define GE_is_attached_encoded_type(a_type) GE_is_attached_type(GE_decoded_type(a_type))

/*
 * Associated detachable type of `a_type' if any,
 * otherwise `a_type'.
 */
extern EIF_TYPE GE_non_attached_type(EIF_TYPE a_type);
#define GE_non_attached_encoded_type(a_type) GE_encoded_type(GE_non_attached_type(GE_decoded_type(a_type)))

/*
 * Associated attached type of `a_type' if any,
 * otherwise `a_type'.
 */
extern EIF_TYPE GE_attached_type(EIF_TYPE a_type);
#define GE_attached_encoded_type(t) GE_encoded_type(GE_attached_type(GE_decoded_type(t)))

/*
 * Is `a_type' a SPECIAL type?
 */
#define GE_is_special_type_index(a_type) EIF_TEST(GE_type_infos[a_type].flags & GE_TYPE_FLAG_SPECIAL)
#define GE_is_special_encoded_type(a_type) GE_is_special_type_index(GE_decoded_type(a_type).id)
#define GE_is_special_object(obj) GE_is_special_type_index(((EIF_REFERENCE)(obj))->id)

/*
 * Is `a_type' a SPECIAL type of user-defined expanded type?
 */
extern EIF_BOOLEAN GE_is_special_of_expanded_type_index(EIF_TYPE_INDEX a_type);
#define GE_is_special_of_expanded_encoded_type(a_type) GE_is_special_of_expanded_type_index(GE_decoded_type(a_type).id)
#define GE_is_special_of_expanded_object(obj) GE_is_special_of_expanded_type_index(((EIF_REFERENCE)(obj))->id)

/*
 * Is `a_type' a SPECIAL type of reference type?
 */
extern EIF_BOOLEAN GE_is_special_of_reference_type_index(EIF_TYPE_INDEX a_type);
#define GE_is_special_of_reference_encoded_type(a_type) GE_is_special_of_reference_type_index(GE_decoded_type(a_type).id)
#define GE_is_special_of_reference_object(obj) GE_is_special_of_reference_type_index(((EIF_REFERENCE)(obj))->id)

/*
 * Is `a_type' a SPECIAL type of reference type or basic expanded type?
 * (Note that user-defined expanded types are excluded.)
 */
extern EIF_BOOLEAN GE_is_special_of_reference_or_basic_expanded_type_index(EIF_TYPE_INDEX a_type);
#define GE_is_special_of_reference_or_basic_expanded_encoded_type(a_type) GE_is_special_of_reference_or_basic_expanded_type_index(GE_decoded_type(a_type).id)
#define GE_is_special_of_reference_or_basic_expanded_object(obj) GE_is_special_of_reference_or_basic_expanded_type_index(((EIF_REFERENCE)(obj))->id)

/*
 * Is `a_type' a TUPLE type?
 */
#define GE_is_tuple_type_index(a_type) EIF_TEST(GE_type_infos[a_type].flags & GE_TYPE_FLAG_TUPLE)
#define GE_is_tuple_encoded_type(a_type) GE_is_tuple_type_index(GE_decoded_type(a_type).id)
#define GE_is_tuple_object(obj) GE_is_tuple_type_index(((EIF_REFERENCE)(obj))->id)

/*
 * Is `a_type' an expanded type?
 */
#define GE_is_expanded_type_index(a_type) EIF_TEST(GE_type_infos[a_type].flags & GE_TYPE_FLAG_EXPANDED)
#define GE_is_expanded_encoded_type(a_type) GE_is_expanded_type_index(GE_decoded_type(a_type).id)
#define GE_is_expanded_object(obj) GE_is_expanded_type_index(((EIF_REFERENCE)(obj))->id)

/*
 * Is `a_type' a type whose base class is deferred?
 */
#define GE_is_deferred_type_index(a_type) EIF_TEST(GE_type_infos[a_type].flags & GE_TYPE_FLAG_DEFERRED)
#define GE_is_deferred_encoded_type(a_type) GE_is_deferred_type_index(GE_decoded_type(a_type).id)

/*
 * Does `i'-th field of `a_object + a_physical_offset' (which is expected to be reference)
 * denote a reference with copy semantics?
 */
extern EIF_BOOLEAN GE_is_copy_semantics_field(EIF_INTEGER i, EIF_POINTER a_object, EIF_INTEGER a_physical_offset);

/*
 * Does `i'-th item of special `a_object' (which is expected to be reference)
 * denote a reference with copy semantics?
 */
extern EIF_BOOLEAN GE_is_special_copy_semantics_item(EIF_INTEGER i, EIF_POINTER a_object);

/*
 * Generator class name of `a_type'.
 */
extern EIF_REFERENCE GE_generator_of_type_index(EIF_TYPE_INDEX a_type);
#define GE_generator_of_encoded_type(a_type) GE_generator_of_type_index(GE_decoded_type(a_type).id)
extern EIF_REFERENCE GE_generator_8_of_type_index(EIF_TYPE_INDEX a_type);
#define GE_generator_8_of_encoded_type(a_type) GE_generator_8_of_type_index(GE_decoded_type(a_type).id)

/*
 * Full name of `a_type'.
 */
extern EIF_REFERENCE GE_generating_type_of_encoded_type(EIF_ENCODED_TYPE a_type);
extern EIF_REFERENCE GE_generating_type_8_of_encoded_type(EIF_ENCODED_TYPE a_type);

/*
 * Encoded type whose name is `a_name'.
 * -1 if no such type.
 */
extern EIF_ENCODED_TYPE GE_encoded_type_from_name(EIF_POINTER a_name);

/*
 * Does `a_type_1' conform to `a_type_2'?
 */
extern EIF_BOOLEAN GE_encoded_type_conforms_to(EIF_ENCODED_TYPE a_type_1, EIF_ENCODED_TYPE a_type_2);

/*
 * Number of generic parameters.
 */
extern EIF_INTEGER GE_generic_parameter_count_of_type_index(EIF_TYPE_INDEX a_type);
#define GE_generic_parameter_count_of_encoded_type(a_type) GE_generic_parameter_count_of_type_index(GE_decoded_type(a_type).id)

/*
 * Type of `i'-th generic parameter of `a_type'.
 */
extern EIF_INTEGER GE_generic_parameter_of_type_index(EIF_TYPE_INDEX a_type, EIF_INTEGER i);
#define GE_generic_parameter_of_encoded_type(a_type,i) GE_generic_parameter_of_type_index(GE_decoded_type(a_type).id, (i))

/*
 * Number of fields of an object of dynamic type `a_type'.
 */
extern EIF_INTEGER GE_field_count_of_type_index(EIF_TYPE_INDEX a_type);
#define GE_field_count_of_encoded_type(a_type) GE_field_count_of_type_index(GE_decoded_type(a_type).id)

/*
 * Physical offset of the `i'-th field for an object of dynamic type `a_type'.
 */
extern EIF_INTEGER GE_field_offset_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type);
#define GE_field_offset_of_encoded_type(i, a_type) GE_field_offset_of_type_index((i), GE_decoded_type(a_type).id)

/*
 * Name of the `i'-th field for an object of dynamic type `a_type'.
 */
extern EIF_POINTER GE_field_name_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type);
#define GE_field_name_of_encoded_type(i, a_type) GE_field_name_of_type_index((i), GE_decoded_type(a_type).id)

/*
 * Static type of the `i'-th field for an object of dynamic type `a_type'.
 */
extern EIF_INTEGER GE_field_static_type_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type);
#define GE_field_static_type_of_encoded_type(i, a_type) GE_field_static_type_of_type_index((i), GE_decoded_type(a_type).id)

/*
 * Kind of type of the `i'-th field for an object of dynamic type `a_type'.
 */
extern EIF_INTEGER GE_field_type_kind_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type);
#define GE_field_type_kind_of_encoded_type(i, a_type) GE_field_type_kind_of_type_index((i), GE_decoded_type(a_type).id)

/*
 * Physical size of `a_object'.
 */
extern EIF_NATURAL_64 GE_object_size(EIF_POINTER a_object);

/*
 * Is `i'-th field of objects of type `a_type' a user-defined expanded attribute?
 */
extern EIF_BOOLEAN GE_is_field_expanded_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type);
#define GE_is_field_expanded_of_encoded_type(i, a_type) GE_is_field_expanded_of_type_index((i), GE_decoded_type(a_type).id)

#define GE_field_address_at(a_field_offset, a_object, a_physical_offset) ((char*)(a_object) + (a_physical_offset) + (a_field_offset))
#define GE_object_at_offset(a_enclosing, a_physical_offset) (EIF_REFERENCE)(GE_field_address_at(0, (a_enclosing), (a_physical_offset)))
#define GE_raw_object_at_offset(a_enclosing, a_physical_offset) (EIF_POINTER)(GE_field_address_at(0, (a_enclosing), (a_physical_offset)))
#define GE_object_encoded_type_at_offset(a_enclosing, a_physical_offset) GE_object_encoded_type(GE_raw_object_at_offset((a_enclosing), (a_physical_offset)))
#define GE_boolean_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_BOOLEAN*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_character_8_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_CHARACTER_8*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_character_32_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_CHARACTER_32*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_integer_8_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_INTEGER_8*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_integer_16_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_INTEGER_16*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_integer_32_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_INTEGER_32*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_integer_64_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_INTEGER_64*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_natural_8_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_NATURAL_8*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_natural_16_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_NATURAL_16*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_natural_32_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_NATURAL_32*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_natural_64_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_NATURAL_64*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_pointer_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_POINTER*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_real_32_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_REAL_32*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_real_64_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_REAL_64*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_raw_reference_field_at(a_field_offset, a_object, a_physical_offset) (EIF_POINTER)*(EIF_REFERENCE*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_reference_field_at(a_field_offset, a_object, a_physical_offset) *(EIF_REFERENCE*)(GE_field_address_at((a_field_offset), (a_object), (a_physical_offset)))
#define GE_set_boolean_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_boolean_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_character_8_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_character_8_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_character_32_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_character_32_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_integer_8_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_integer_8_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_integer_16_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_integer_16_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_integer_32_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_integer_32_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_integer_64_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_integer_64_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_natural_8_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_natural_8_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_natural_16_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_natural_16_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_natural_32_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_natural_32_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_natural_64_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_natural_64_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_pointer_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_pointer_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_real_32_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_real_32_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_real_64_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_real_64_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value
#define GE_set_reference_field_at(a_field_offset, a_object, a_physical_offset, a_value) GE_reference_field_at((a_field_offset), (a_object), (a_physical_offset)) = a_value

#if defined(GE_USE_ATTRIBUTES) && defined(GE_USE_ATTRIBUTE_OFFSET)
#define GE_field_address(i, a_object, a_physical_offset) GE_field_address_at(GE_type_infos[((EIF_REFERENCE)(a_object))->id].attributes[(i) - 1]->offset, (a_object), (a_physical_offset))
#define GE_boolean_field(i, a_object, a_physical_offset) *(EIF_BOOLEAN*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_character_8_field(i, a_object, a_physical_offset) *(EIF_CHARACTER_8*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_character_32_field(i, a_object, a_physical_offset) *(EIF_CHARACTER_32*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_integer_8_field(i, a_object, a_physical_offset) *(EIF_INTEGER_8*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_integer_16_field(i, a_object, a_physical_offset) *(EIF_INTEGER_16*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_integer_32_field(i, a_object, a_physical_offset) *(EIF_INTEGER_32*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_integer_64_field(i, a_object, a_physical_offset) *(EIF_INTEGER_64*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_natural_8_field(i, a_object, a_physical_offset) *(EIF_NATURAL_8*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_natural_16_field(i, a_object, a_physical_offset) *(EIF_NATURAL_16*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_natural_32_field(i, a_object, a_physical_offset) *(EIF_NATURAL_32*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_natural_64_field(i, a_object, a_physical_offset) *(EIF_NATURAL_64*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_pointer_field(i, a_object, a_physical_offset) *(EIF_POINTER*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_real_32_field(i, a_object, a_physical_offset) *(EIF_REAL_32*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_real_64_field(i, a_object, a_physical_offset) *(EIF_REAL_64*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_reference_field(i, a_object, a_physical_offset) *(EIF_REFERENCE*)(GE_field_address((i), (a_object), (a_physical_offset)))
#define GE_set_boolean_field(i, a_object, a_physical_offset, a_value) GE_boolean_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_character_8_field(i, a_object, a_physical_offset, a_value) GE_character_8_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_character_32_field(i, a_object, a_physical_offset, a_value) GE_character_32_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_integer_8_field(i, a_object, a_physical_offset, a_value) GE_integer_8_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_integer_16_field(i, a_object, a_physical_offset, a_value) GE_integer_16_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_integer_32_field(i, a_object, a_physical_offset, a_value) GE_integer_32_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_integer_64_field(i, a_object, a_physical_offset, a_value) GE_integer_64_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_natural_8_field(i, a_object, a_physical_offset, a_value) GE_natural_8_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_natural_16_field(i, a_object, a_physical_offset, a_value) GE_natural_16_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_natural_32_field(i, a_object, a_physical_offset, a_value) GE_natural_32_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_natural_64_field(i, a_object, a_physical_offset, a_value) GE_natural_64_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_pointer_field(i, a_object, a_physical_offset, a_value) GE_pointer_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_real_32_field(i, a_object, a_physical_offset, a_value) GE_real_32_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_real_64_field(i, a_object, a_physical_offset, a_value) GE_real_64_field((i), (a_object), (a_physical_offset)) = (a_value)
#define GE_set_reference_field(i, a_object, a_physical_offset, a_value) GE_reference_field((i), (a_object), (a_physical_offset)) = (a_value)
#else
#define GE_boolean_field(i, a_object, a_physical_offset) (EIF_BOOLEAN)0
#define GE_character_8_field(i, a_object, a_physical_offset) (EIF_CHARACTER_8)0
#define GE_character_32_field(i, a_object, a_physical_offset) (EIF_CHARACTER_32)0
#define GE_integer_8_field(i, a_object, a_physical_offset) (EIF_INTEGER_8)0
#define GE_integer_16_field(i, a_object, a_physical_offset) (EIF_INTEGER_16)0
#define GE_integer_32_field(i, a_object, a_physical_offset) (EIF_INTEGER_32)0
#define GE_integer_64_field(i, a_object, a_physical_offset) (EIF_INTEGER_64)0
#define GE_natural_8_field(i, a_object, a_physical_offset) (EIF_NATURAL_8)0
#define GE_natural_16_field(i, a_object, a_physical_offset) (EIF_NATURAL_16)0
#define GE_natural_32_field(i, a_object, a_physical_offset) (EIF_NATURAL_32)0
#define GE_natural_64_field(i, a_object, a_physical_offset) (EIF_NATURAL_64)0
#define GE_pointer_field(i, a_object, a_physical_offset) (EIF_POINTER)0
#define GE_real_32_field(i, a_object, a_physical_offset) (EIF_REAL_32)0
#define GE_real_64_field(i, a_object, a_physical_offset) (EIF_REAL_64)0
#define GE_reference_field(i, a_object, a_physical_offset) (EIF_REFERENCE)0
#define GE_set_boolean_field(i, a_object, a_physical_offset, a_value)
#define GE_set_character_8_field(i, a_object, a_physical_offset, a_value)
#define GE_set_character_32_field(i, a_object, a_physical_offset, a_value)
#define GE_set_integer_8_field(i, a_object, a_physical_offset, a_value)
#define GE_set_integer_16_field(i, a_object, a_physical_offset, a_value)
#define GE_set_integer_32_field(i, a_object, a_physical_offset, a_value)
#define GE_set_integer_64_field(i, a_object, a_physical_offset, a_value)
#define GE_set_natural_8_field(i, a_object, a_physical_offset, a_value)
#define GE_set_natural_16_field(i, a_object, a_physical_offset, a_value)
#define GE_set_natural_32_field(i, a_object, a_physical_offset, a_value)
#define GE_set_natural_64_field(i, a_object, a_physical_offset, a_value)
#define GE_set_pointer_field(i, a_object, a_physical_offset, a_value)
#define GE_set_real_32_field(i, a_object, a_physical_offset, a_value)
#define GE_set_real_64_field(i, a_object, a_physical_offset, a_value)
#define GE_set_reference_field(i, a_object, a_physical_offset, a_value)
#endif

/*
 * Number of non-transient fields of an object of dynamic type `a_type'.
 * TODO: storable not implemented yet.
 */
#define GE_persistent_field_count_of_type_index(a_type) GE_field_count_of_type_index(a_type)
#define GE_persistent_field_count_of_encoded_type(a_type) GE_persistent_field_count_of_type_index(GE_decoded_type(a_type).id)

/*
 * Is `i'-th field of objects of type `a_type' a transient field?
 * TODO: storable not implemented yet.
 */
#define GE_is_field_transient_of_type_index(i, a_type) EIF_FALSE
#define GE_is_field_transient_of_encoded_type(i, a_type) GE_is_field_transient_of_type_index((i), GE_decoded_type(a_type).id)

/*
 * Storable version of objects of type `a_type'.
 * TODO: storable not implemented yet.
 */
#define GE_storable_version_of_type_index(a_type) EIF_VOID
#define GE_storable_version_of_encoded_type(a_type) GE_storable_version_of_type_index(GE_decoded_type(a_type).id)

/*
 * Get a lock on `GE_mark_object' and `GE_unmark_object' routines so that
 * 2 threads cannot `GE_mark_object' and `GE_unmark_object' at the same time.
 */
extern void GE_lock_marking(void);

/*
 * Release a lock on `GE_mark_object' and `GE_unmark_object', so that another
 * thread can use `GE_mark_object' and `GE_unmark_object'.
 */
extern void GE_unlock_marking(void);

/*
 * Is `obj' marked?
 */
extern EIF_BOOLEAN GE_is_object_marked(EIF_POINTER obj);

/*
 * Mark `obj'.
 */
extern void GE_mark_object(EIF_POINTER obj);

/*
 * Unmark `obj'.
 */
extern void GE_unmark_object(EIF_POINTER obj);

/*
 * New instance of dynamic `a_type'.
 * Note: returned object is not initialized and may
 * hence violate its invariant.
 * `a_type' cannot represent a SPECIAL type, use
 * `GE_new_special_of_reference_instance_of_type_index' instead.
 */
extern EIF_REFERENCE GE_new_instance_of_type_index(EIF_TYPE_INDEX a_type);
#define GE_new_instance_of_encoded_type(a_type) GE_new_instance_of_type_index(GE_decoded_type(a_type).id)

/*
 * New instance of dynamic `a_type' that represents
 * a SPECIAL with can contain `a_capacity' elements of reference type.
 * To create a SPECIAL of basic type, use class SPECIAL directly.
 */
extern EIF_REFERENCE GE_new_special_of_reference_instance_of_type_index(EIF_TYPE_INDEX a_type, EIF_INTEGER a_capacity);
#define GE_new_special_of_reference_instance_of_encoded_type(a_type, a_capacity) GE_new_special_of_reference_instance_of_type_index(GE_decoded_type(a_type).id, (a_capacity))

/*
 * New instance of tuple of type `a_type'.
 * Note: returned object is not initialized and may
 * hence violate its invariant.
 */
#define GE_new_tuple_instance_of_type_index(a_type) GE_new_instance_of_type_index(a_type)
#define GE_new_tuple_instance_of_encoded_type(a_type) GE_new_tuple_instance_of_type_index(GE_decoded_type(a_type).id)

/*
 * New instance of TYPE for object of type `a_type'.
 */
extern EIF_REFERENCE GE_new_type_instance_of_encoded_type(EIF_ENCODED_TYPE a_type);

#ifdef __cplusplus
}
#endif

#endif

/*
	description:

		"C functions used to manipulate strings"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2016-2019, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_STRING_H
#define GE_STRING_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * New Eiffel empty string of type "STRING_8" with can
 * contain `c' characters.
 * Note: The implementation of this function is generated
 * by the Eiffel compiler.
 */
extern EIF_REFERENCE GE_new_str8(EIF_INTEGER c);

/*
 * New Eiffel empty string of type "IMMUTABLE_STRING_8" with can
 * contain `c' characters.
 * Note: The implementation of this function is generated
 * by the Eiffel compiler.
 */
extern EIF_REFERENCE GE_new_istr8(EIF_INTEGER c);

/*
 * New Eiffel empty string of type "STRING_32" with can
 * contain `c' characters.
 * Note: The implementation of this function is generated
 * by the Eiffel compiler.
 */
extern EIF_REFERENCE GE_new_str32(EIF_INTEGER c);

/*
 * New Eiffel empty string of type "IMMUTABLE_STRING_32" with can
 * contain `c' characters.
 * Note: The implementation of this function is generated
 * by the Eiffel compiler.
 */
extern EIF_REFERENCE GE_new_istr32(EIF_INTEGER c);

/*
 * New Eiffel string of type "STRING_8" containing the
 * first `c' characters found in ISO 8859-1 string `s'.
 */
extern EIF_REFERENCE GE_ms8(const char* s, EIF_INTEGER c);

/*
 * New Eiffel string of type "STRING_8" containing all
 * characters found in the null-terminated ISO 8859-1 string `s'.
 */
extern EIF_REFERENCE GE_str8(const char* s);

/*
 * New Eiffel string of type "IMMUTABLE_STRING_8" containing the
 * first `c' characters found in ISO 8859-1 string `s'.
 */
extern EIF_REFERENCE GE_ims8(const char* s, EIF_INTEGER c);

/*
 * New Eiffel string of type "STRING_32" containing the
 * first `c' characters found in ISO 8859-1 string `s'.
 */
extern EIF_REFERENCE GE_ms32(const char* s, EIF_INTEGER c);

/*
 * New Eiffel string of type "STRING_32" containing the
 * first `c' 32-bit characters built from `s' by reading
 * groups of four bytes with little-endian byte order.
 */
extern EIF_REFERENCE GE_ms32_from_utf32le(const char* s, EIF_INTEGER c);

/*
 * New Eiffel string of type "STRING_32" containing all
 * characters found in the null-terminated ISO 8859-1 string `s'.
 */
extern EIF_REFERENCE GE_str32(const char* s);

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing
 * the first `c' characters found in ISO 8859-1 string `s'.
 */
extern EIF_REFERENCE GE_ims32(const char* s, EIF_INTEGER c);

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing the
 * first `c' 32-bit characters built from `s' by reading
 * groups of four bytes with little-endian byte order.
 */
extern EIF_REFERENCE GE_ms32_from_utf32le(const char* s, EIF_INTEGER c);

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing all
 * characters found in the null-terminated ISO 8859-1 string `s'.
 */
extern EIF_REFERENCE GE_istr32(const char* s);

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing the
 * first `n' native characters found in native string `s'.
 * Invalid native characters are escaped.
 */
extern EIF_REFERENCE GE_ims32_from_nstr(EIF_NATIVE_CHAR* s, EIF_INTEGER n);

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing all
 * characters found in the null-terminated native string `s'.
 * Invalid native characters are escaped.
 */
extern EIF_REFERENCE GE_istr32_from_nstr(EIF_NATIVE_CHAR* s);

/*
 * New Eiffel string of type "STRING" containing all
 * characters found in the null-terminated ISO 8859-1 string `s'
 */
extern EIF_REFERENCE GE_str(const char* s);

#ifdef __cplusplus
}
#endif

#endif

/*
	description:

		"C functions used to implement class CONSOLE"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_CONSOLE_H
#define GE_CONSOLE_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Initialize mutex to determine whether a new
 * console needs to be created.
 */
#ifdef EIF_WINDOWS
extern void GE_init_console(void);
#else
#define GE_init_console()
#endif

/*
 * Create a new DOS console if needed (i.e. in case of a Windows application).
 */
#ifdef EIF_WINDOWS
extern void GE_show_console(void);
#else
#define GE_show_console()
#endif

#ifdef __cplusplus
}
#endif

#endif

/*
	description:

		"C functions used to implement the program initialization"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_MAIN_H
#define GE_MAIN_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int GE_main(int argc, EIF_NATIVE_CHAR** argv);

/*
 * System name.
 */
extern char* GE_system_name;

/*
 * Root class name.
 */
extern char* GE_root_class_name;

#ifdef EIF_WINDOWS

#include <windows.h>

/*
 * Used in WEL.
 */
extern HINSTANCE eif_hInstance;
extern HINSTANCE eif_hPrevInstance;
extern LPWSTR eif_lpCmdLine;
extern int eif_nCmdShow;

/*
 * Main entry point when compiling a Windows application.
 * See:
 *    http://en.wikipedia.org/wiki/WinMain
 *    http://msdn2.microsoft.com/en-us/library/ms633559.aspx
 */
extern int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);

#endif

#ifdef __cplusplus
}
#endif

#endif

/*
	description:

		"C functions used to access garbage collector facilities"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_GC_H
#define GE_GC_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EXCEPTION_H
#include "ge_exception.h"
#endif

#ifdef GE_USE_BOEHM_GC
/*
 *	Use the Boehm garbage collector.
 *	See:
 *		http://en.wikipedia.org/wiki/Boehm_GC
 *		http://www.hpl.hp.com/personal/Hans_Boehm/gc/
 */
#define GC_IGNORE_WARN
#ifdef GE_USE_THREADS
#define GC_THREADS
#undef GC_NO_THREAD_REDIRECTS
#endif
#include "gc.h"
#endif

/*
 * GC initialization.
 */

#ifdef GE_USE_BOEHM_GC
#ifdef GE_USE_THREADS
#define GE_init_gc() \
	GC_INIT(); \
	GC_allow_register_threads(); \
	GC_enable_incremental()
#else
#define GE_init_gc() \
	GC_INIT(); \
	GC_enable_incremental()
#endif
#else /* No GC */
#define GE_init_gc() /* do nothing */
#endif

/*
 * Memory allocation.
 */

/*
 * Allocate memory that can contain pointers to collectable objects.
 * The allocated memory is not necessarily zeroed (unless `GE_malloc_cleared' is_defined).
 * The allocated object is itself collectable.
 * Raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_malloc(size) GE_null(GC_MALLOC(size))
#else /* No GC */
#define GE_malloc(size) GE_null(malloc(size))
#endif

/*
 * Allocate memory that can contain pointers to collectable objects.
 * The allocated memory is not necessarily zeroed (unless `GE_malloc_cleared' is_defined).
 * The allocated object is itself collectable.
 * Do not raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_unprotected_malloc(size) GC_MALLOC(size)
#else /* No GC */
#define GE_unprotected_malloc(size) malloc(size)
#endif

/*
 * Allocate memory that does not contain pointers to collectable objects.
 * The allocated memory is not necessarily zeroed (unless `GE_malloc_atomic_cleared' is_defined).
 * The allocated object is itself collectable.
 * Raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_malloc_atomic(size) GE_null(GC_MALLOC_ATOMIC(size))
#else /* No GC */
#define GE_malloc_atomic(size) GE_null(malloc(size))
#endif

/*
 * Allocate memory that does not contain pointers to collectable objects.
 * The allocated memory is not necessarily zeroed (unless `GE_malloc_atomic_cleared' is_defined).
 * The allocated object is itself collectable.
 * Do not raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_unprotected_malloc_atomic(size) GC_MALLOC_ATOMIC(size)
#else /* No GC */
#define GE_unprotected_malloc_atomic(size) malloc(size)
#endif

/*
 * Allocate memory that can contain pointers to collectable objects.
 * The allocated memory is zeroed.
 * The allocated object is itself collectable.
 * Raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_calloc(nelem, elsize) GE_null(GC_MALLOC((nelem) * (elsize)))
#else /* No GC */
#define GE_calloc(nelem, elsize) GE_null(calloc((nelem), (elsize)))
#endif

/*
 * Allocate memory that can contain pointers to collectable objects.
 * The allocated memory is zeroed.
 * The allocated object is itself collectable.
 * Do not raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_unprotected_calloc(nelem, elsize) GC_MALLOC((nelem) * (elsize))
#else /* No GC */
#define GE_unprotected_calloc(nelem, elsize) calloc((nelem), (elsize))
#endif

/*
 * Allocate memory that does not contain pointers to collectable objects.
 * The allocated memory is zeroed.
 * The allocated object is itself collectable.
 * Raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_calloc_atomic(nelem, elsize) memset(GE_null(GC_MALLOC_ATOMIC((nelem) * (elsize))), 0, (nelem) * (elsize))
#else /* No GC */
#define GE_calloc(nelem, elsize) GE_null(calloc((nelem), (elsize)))
#endif

/*
 * Allocate memory that can contain pointers to collectable objects.
 * The allocated memory is not necessarily zeroed (unless `GE_malloc_cleared' is_defined).
 * The allocated object is itself not collectable.
 * Raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_malloc_uncollectable(size) GE_null(GC_MALLOC_UNCOLLECTABLE(size))
#else /* No GC */
#define GE_malloc_uncollectable(size) GE_null(malloc(size))
#endif

/*
 * Allocate memory that can contain pointers to collectable objects.
 * The allocated memory is not necessarily zeroed (unless `GE_malloc_cleared' is_defined).
 * The allocated object is itself not collectable.
 * Do not raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_unprotected_malloc_uncollectable(size) GC_MALLOC_UNCOLLECTABLE(size)
#else /* No GC */
#define GE_unprotected_malloc_uncollectable(size) malloc(size)
#endif

/*
 * Allocate memory that does not contain pointers to collectable objects.
 * The allocated memory is not necessarily zeroed (unless `GE_malloc_atomic_cleared' is_defined).
 * The allocated object is itself not collectable.
 * Raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_malloc_atomic_uncollectable(size) GE_null(GC_malloc_atomic_uncollectable(size))
#else /* No GC */
#define GE_malloc_atomic_uncollectable(size) GE_null(malloc(size))
#endif

/*
 * Allocate memory that does not contain pointers to collectable objects.
 * The allocated memory is not necessarily zeroed (unless `GE_malloc_atomic_cleared' is_defined).
 * The allocated object is itself not collectable.
 * Do not raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_unprotected_malloc_atomic_uncollectable(size) GC_malloc_atomic_uncollectable(size)
#else /* No GC */
#define GE_unprotected_malloc_atomic_uncollectable(size) malloc(size)
#endif

/*
 * Allocate memory that can contain pointers to collectable objects.
 * The allocated memory is zeroed.
 * The allocated object is itself not collectable.
 * Raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_calloc_uncollectable(nelem, elsize) GE_null(GC_MALLOC_UNCOLLECTABLE((nelem) * (elsize)))
#else /* No GC */
#define GE_calloc_uncollectable(nelem, elsize) GE_null(calloc((nelem), (elsize)))
#endif

/*
 * Allocate memory that can contain pointers to collectable objects.
 * The allocated memory is zeroed.
 * The allocated object is itself not collectable.
 * Do not raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_unprotected_calloc_uncollectable(nelem, elsize) GC_MALLOC_UNCOLLECTABLE((nelem) * (elsize))
#else /* No GC */
#define GE_unprotected_calloc_uncollectable(nelem, elsize) calloc((nelem), (elsize))
#endif

/*
 * Allocate memory that does not contain pointers to collectable objects.
 * The allocated memory is zeroed.
 * The allocated object is itself not collectable.
 * Raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_calloc_atomic_uncollectable(nelem, elsize) memset(GE_null(GC_malloc_atomic_uncollectable((nelem) * (elsize))), 0, (nelem) * (elsize))
#else /* No GC */
#define GE_calloc_atomic_uncollectable(nelem, elsize) GE_null(calloc((nelem), (elsize)))
#endif

/*
 * Allocate memory that does not contain pointers to collectable objects.
 * The allocated memory is zeroed.
 * The allocated object is itself not collectable.
 * Do not raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
extern void* GE_unprotected_calloc_atomic_uncollectable(size_t nelem, size_t elsize);
#else /* No GC */
#define GE_unprotected_calloc_atomic_uncollectable(nelem, elsize) calloc((nelem), (elsize))
#endif

/*
 * Allocate more memory for the given pointer.
 * The reallocated pointer keeps the same properties (e.g. atomic or not, collectable or not).
 * The extra allocated memory is not necessarily zeroed.
 * Raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_realloc(p, size) GE_null(GC_REALLOC((p), (size)))
#else /* No GC */
#define GE_realloc(p, size) GE_null(realloc((p), (size)))
#endif

/*
 * Allocate more memory for the given pointer.
 * The reallocated pointer keeps the same properties (e.g. atomic or not, collectable or not).
 * The extra allocated memory is not necessarily zeroed.
 * Do not raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_unprotected_realloc(p, size) GC_REALLOC((p), (size))
#else /* No GC */
#define GE_unprotected_realloc(p, size) realloc((p), (size))
#endif

/*
 * Allocate more memory for the given pointer.
 * The reallocated pointer keeps the same properties (e.g. atomic or not, collectable or not).
 * The extra allocated memory is zeroed.
 * Raise an exception when no-more-memory.
 */
extern void* GE_recalloc(void* p, size_t old_nelem, size_t new_nelem, size_t elsize);

/*
 * Allocate more memory for the given pointer.
 * The reallocated pointer keeps the same properties (e.g. atomic or not, collectable or not).
 * The extra allocated memory is zeroed.
 * Do not raise an exception when no-more-memory.
 */
extern void* GE_unprotected_recalloc(void* p, size_t old_nelem, size_t new_nelem, size_t elsize);

/*
 * Explicitly deallocate an object.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_free(p) GC_FREE(p)
#else /* No GC */
#define GE_free(p) free(p)
#endif

/*
 * When defined, `GE_malloc_cleared' means that `GE_malloc' and
 * `GE_malloc_uncollectable' make sure that the allocated memory
 * is zeroed.
 */
#ifdef GE_USE_BOEHM_GC
#define GE_malloc_cleared
#else /* No GC */
#endif

/*
 * When defined, `GE_malloc_atomic_cleared' means that `GE_malloc_atomic'
 * and `GE_malloc_atomic_uncollectable' make sure that the allocated memory
 * is zeroed.
 */
#ifdef GE_USE_BOEHM_GC
/* #define GE_malloc_atomic_cleared */
#else /* No GC */
#endif

/*
 * Dispose
 */

/*
 * Register dispose routine `disp' to be called on object `obj' when it will be collected.
 */
#ifdef GE_USE_BOEHM_GC
extern void GE_boehm_dispose(void* C, void* disp); /* Call dispose routine on object `C'. */
#define GE_register_dispose(obj, disp) GC_REGISTER_FINALIZER_NO_ORDER((void*)(obj), (void (*) (void*, void*)) &GE_boehm_dispose, (void*)(disp), NULL, NULL)
#else /* No GC */
#define GE_register_dispose(obj, disp) /* do nothing */
#endif

/*
 * Register dispose routine `disp' to be called on once-per-object `data' when it will be collected.
 */
#ifdef GE_USE_BOEHM_GC
extern void GE_boehm_dispose_once_per_object_data(void* data, void* disp); /* Call dispose routine `disp' on once-per-object data `data'. */
#define GE_register_dispose_once_per_object_data(data, disp) GC_REGISTER_FINALIZER_NO_ORDER((void*)(data), (void (*) (void*, void*)) &GE_boehm_dispose_once_per_object_data, (void*)(disp), NULL, NULL)
#else /* No GC */
#define GE_register_dispose_once_per_object_data(data, disp) /* do nothing */
#endif

/*
 * Access to objects, useful with GCs which move objects in memory.
 * This is not the case here, since the Boehm GC is not a moving GC.
 */

/* Access object through hector. */
#define eif_access(obj) (obj)
/* Freeze memory address. */
#define eif_freeze(obj) (obj)
/* The C side adopts an object. */
#define eif_adopt(obj) (obj)
/* The C side protects an object. */
#define eif_protect(obj) (obj)
/* The C side weans adopted object. */
#define eif_wean(obj) (obj)
/* Forget a frozen memory address. */
#define eif_unfreeze(obj)
/* Always frozen since they do not move. */
#define eif_frozen(obj) 1
/* Always frozen since they do not move. */
#define spfrozen(obj) 1

#endif

/*
	description:

		"C functions used to implement class IDENTIFIED"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_IDENTIFIED_H
#define GE_IDENTIFIED_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Initialize data to keep track of object ids.
 */
extern void GE_init_identified(void);

/*
 * Get a new id for `object', assuming it is NOT in the stack.
 */
extern EIF_INTEGER_32 GE_object_id(EIF_OBJECT object);

/*
 * Return the object associated with `id'.
 */
extern EIF_REFERENCE GE_id_object(EIF_INTEGER_32 id);

/*
 * Remove the object associated with `id' from the stack.
 */
extern void GE_object_id_free(EIF_INTEGER_32 id);

#ifdef __cplusplus
}
#endif

#endif

#ifdef __cplusplus
extern "C" {
#endif

#define T0 EIF_ANY

/* CHARACTER */
#define EIF_CHARACTER EIF_CHARACTER_8

/* WIDE_CHARACTER */
#define EIF_WIDE_CHAR EIF_CHARACTER_32

/* INTEGER */
#define EIF_INTEGER EIF_INTEGER_32

/* NATURAL */
#define EIF_NATURAL EIF_NATURAL_32

/* REAL */
#define EIF_REAL EIF_REAL_32

/* DOUBLE */
#define EIF_DOUBLE EIF_REAL_64

/* BOOLEAN */
#define T1 EIF_BOOLEAN
extern T0* GE_boxed1(T1 a1);
extern T0* GE_boxed_pointer1(T1* a1);
typedef struct Sb1 Tb1;

/* CHARACTER_8 */
#define T2 EIF_CHARACTER_8
extern T0* GE_boxed2(T2 a1);
extern T0* GE_boxed_pointer2(T2* a1);
typedef struct Sb2 Tb2;

/* CHARACTER_32 */
#define T3 EIF_CHARACTER_32
extern T0* GE_boxed3(T3 a1);
extern T0* GE_boxed_pointer3(T3* a1);
typedef struct Sb3 Tb3;

/* INTEGER_8 */
#define T4 EIF_INTEGER_8
extern T0* GE_boxed4(T4 a1);
extern T0* GE_boxed_pointer4(T4* a1);
typedef struct Sb4 Tb4;

/* INTEGER_16 */
#define T5 EIF_INTEGER_16
extern T0* GE_boxed5(T5 a1);
extern T0* GE_boxed_pointer5(T5* a1);
typedef struct Sb5 Tb5;

/* INTEGER_32 */
#define T6 EIF_INTEGER_32
extern T0* GE_boxed6(T6 a1);
extern T0* GE_boxed_pointer6(T6* a1);
typedef struct Sb6 Tb6;

/* INTEGER_64 */
#define T7 EIF_INTEGER_64
extern T0* GE_boxed7(T7 a1);
extern T0* GE_boxed_pointer7(T7* a1);
typedef struct Sb7 Tb7;

/* NATURAL_8 */
#define T8 EIF_NATURAL_8
extern T0* GE_boxed8(T8 a1);
extern T0* GE_boxed_pointer8(T8* a1);
typedef struct Sb8 Tb8;

/* NATURAL_16 */
#define T9 EIF_NATURAL_16
extern T0* GE_boxed9(T9 a1);
extern T0* GE_boxed_pointer9(T9* a1);
typedef struct Sb9 Tb9;

/* NATURAL_32 */
#define T10 EIF_NATURAL_32
extern T0* GE_boxed10(T10 a1);
extern T0* GE_boxed_pointer10(T10* a1);
typedef struct Sb10 Tb10;

/* NATURAL_64 */
#define T11 EIF_NATURAL_64
extern T0* GE_boxed11(T11 a1);
extern T0* GE_boxed_pointer11(T11* a1);
typedef struct Sb11 Tb11;

/* REAL_32 */
#define T12 EIF_REAL_32
extern T0* GE_boxed12(T12 a1);
extern T0* GE_boxed_pointer12(T12* a1);
typedef struct Sb12 Tb12;

/* REAL_64 */
#define T13 EIF_REAL_64
extern T0* GE_boxed13(T13 a1);
extern T0* GE_boxed_pointer13(T13* a1);
typedef struct Sb13 Tb13;

/* POINTER */
#define T14 EIF_POINTER
extern T0* GE_boxed14(T14 a1);
extern T0* GE_boxed_pointer14(T14* a1);
typedef struct Sb14 Tb14;

/* [detachable] SPECIAL [CHARACTER_8] */
typedef struct S15 T15;

/* [detachable] SPECIAL [CHARACTER_32] */
typedef struct S16 T16;

/* [detachable] STRING_8 */
typedef struct S17 T17;

/* [detachable] STRING_32 */
typedef struct S18 T18;

/* [detachable] ISE_EXCEPTION_MANAGER */
typedef struct S21 T21;

/* [detachable] APP */
typedef struct S25 T25;

/* [detachable] CELL [detachable EXCEPTION] */
typedef struct S26 T26;

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32] */
typedef struct S27 T27;

/* [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]] */
typedef struct S28 T28;

/* [detachable] CELL [[attached] NO_MORE_MEMORY] */
typedef struct S29 T29;

/* detachable C_STRING */
typedef struct S30 T30;

/* [detachable] TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN] */
typedef struct S31 T31;

/* [detachable] PERSON */
typedef struct S32 T32;

/* [detachable] STUDENT */
typedef struct S33 T33;

/* [detachable] FACULTY */
typedef struct S34 T34;

/* [detachable] RESEARCH_ASSISTANT */
typedef struct S35 T35;

/* [detachable] STD_FILES */
typedef struct S36 T36;

/* [detachable] VOID_TARGET */
typedef struct S38 T38;

/* [detachable] TYPE [[attached] VOID_TARGET] */
#define T39 EIF_TYPE_OBJ

/* [detachable] ROUTINE_FAILURE */
typedef struct S40 T40;

/* [detachable] TYPE [[attached] ROUTINE_FAILURE] */
#define T41 EIF_TYPE_OBJ

/* [detachable] OLD_VIOLATION */
typedef struct S42 T42;

/* [detachable] TYPE [[attached] OLD_VIOLATION] */
#define T43 EIF_TYPE_OBJ

/* [detachable] NO_MORE_MEMORY */
typedef struct S44 T44;

/* [detachable] INVARIANT_VIOLATION */
typedef struct S45 T45;

/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE */
typedef struct S46 T46;

/* [detachable] IO_FAILURE */
typedef struct S47 T47;

/* [detachable] OPERATING_SYSTEM_FAILURE */
typedef struct S48 T48;

/* [detachable] COM_FAILURE */
typedef struct S49 T49;

/* [detachable] EIFFEL_RUNTIME_PANIC */
typedef struct S50 T50;

/* [detachable] PRECONDITION_VIOLATION */
typedef struct S53 T53;

/* [detachable] POSTCONDITION_VIOLATION */
typedef struct S54 T54;

/* [detachable] FLOATING_POINT_FAILURE */
typedef struct S55 T55;

/* [detachable] CHECK_VIOLATION */
typedef struct S56 T56;

/* [detachable] BAD_INSPECT_VALUE */
typedef struct S57 T57;

/* [detachable] VARIANT_VIOLATION */
typedef struct S58 T58;

/* [detachable] LOOP_INVARIANT_VIOLATION */
typedef struct S59 T59;

/* [detachable] RESCUE_FAILURE */
typedef struct S60 T60;

/* [detachable] RESUMPTION_FAILURE */
typedef struct S61 T61;

/* [detachable] CREATE_ON_DEFERRED */
typedef struct S62 T62;

/* [detachable] EXTERNAL_FAILURE */
typedef struct S63 T63;

/* [detachable] VOID_ASSIGNED_TO_EXPANDED */
typedef struct S64 T64;

/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE */
typedef struct S65 T65;

/* [detachable] MISMATCH_FAILURE */
typedef struct S66 T66;

/* [detachable] DEVELOPER_EXCEPTION */
typedef struct S67 T67;

/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE */
typedef struct S68 T68;

/* [detachable] SERIALIZATION_FAILURE */
typedef struct S69 T69;

/* TYPED_POINTER [[attached] ANY] */
typedef struct S70 T70;
extern T0* GE_boxed70(T70 a1);
extern T0* GE_boxed_pointer70(T70* a1);
typedef struct Sb70 Tb70;

/* [detachable] PRIMES */
typedef struct S72 T72;

/* [detachable] SPECIAL [[attached] INTEGER_32] */
typedef struct S73 T73;

/* [detachable] SPECIAL [[attached] BOOLEAN] */
typedef struct S74 T74;

/* [detachable] CONSOLE */
typedef struct S76 T76;

/* UTF_CONVERTER */
typedef struct S77 T77;
extern T0* GE_boxed77(T77 a1);
extern T0* GE_boxed_pointer77(T77* a1);
typedef struct Sb77 Tb77;

/* [detachable] CELL [[attached] INTEGER_32] */
typedef struct S78 T78;

/* [detachable] MANAGED_POINTER */
typedef struct S79 T79;

/* [detachable] FILE_INFO */
typedef struct S81 T81;

/* [detachable] EXCEPTIONS */
typedef struct S82 T82;

/* TYPED_POINTER [[attached] NATURAL_8] */
typedef struct S83 T83;
extern T0* GE_boxed83(T83 a1);
extern T0* GE_boxed_pointer83(T83* a1);
typedef struct Sb83 Tb83;

/* [detachable] SPECIAL [[attached] NATURAL_8] */
typedef struct S86 T86;

/* TYPED_POINTER [[attached] NATURAL_16] */
typedef struct S88 T88;
extern T0* GE_boxed88(T88 a1);
extern T0* GE_boxed_pointer88(T88* a1);
typedef struct Sb88 Tb88;

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER */
typedef struct S89 T89;

/* [detachable] TYPE [[detachable] DEVELOPER_EXCEPTION] */
#define T91 EIF_TYPE_OBJ

/* [detachable] INTEGER_OVERFLOW_CHECKER */
typedef struct S93 T93;

/* [detachable] SPECIAL [[attached] NATURAL_64] */
typedef struct S94 T94;

/* Struct for boxed version of type BOOLEAN */
struct Sb1 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T1* p1; /* pointer */
	T1 z1; /* item */
};

/* Struct for boxed version of type CHARACTER_8 */
struct Sb2 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T2* p1; /* pointer */
	T2 z1; /* item */
};

/* Struct for boxed version of type CHARACTER_32 */
struct Sb3 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T3* p1; /* pointer */
	T3 z1; /* item */
};

/* Struct for boxed version of type INTEGER_8 */
struct Sb4 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T4* p1; /* pointer */
	T4 z1; /* item */
};

/* Struct for boxed version of type INTEGER_16 */
struct Sb5 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T5* p1; /* pointer */
	T5 z1; /* item */
};

/* Struct for boxed version of type INTEGER_32 */
struct Sb6 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T6* p1; /* pointer */
	T6 z1; /* item */
};

/* Struct for boxed version of type INTEGER_64 */
struct Sb7 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T7* p1; /* pointer */
	T7 z1; /* item */
};

/* Struct for boxed version of type NATURAL_8 */
struct Sb8 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T8* p1; /* pointer */
	T8 z1; /* item */
};

/* Struct for boxed version of type NATURAL_16 */
struct Sb9 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T9* p1; /* pointer */
	T9 z1; /* item */
};

/* Struct for boxed version of type NATURAL_32 */
struct Sb10 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T10* p1; /* pointer */
	T10 z1; /* item */
};

/* Struct for boxed version of type NATURAL_64 */
struct Sb11 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T11* p1; /* pointer */
	T11 z1; /* item */
};

/* Struct for boxed version of type REAL_32 */
struct Sb12 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T12* p1; /* pointer */
	T12 z1; /* item */
};

/* Struct for boxed version of type REAL_64 */
struct Sb13 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T13* p1; /* pointer */
	T13 z1; /* item */
};

/* Struct for boxed version of type POINTER */
struct Sb14 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T14* p1; /* pointer */
	T14 z1; /* item */
};

/* Struct for type UTF_CONVERTER */
struct S77 {
	char dummy;
};

/* Struct for boxed version of type UTF_CONVERTER */
struct Sb77 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T77* p1; /* pointer */
	T77 z1; /* item */
};

/* Struct for type TYPED_POINTER [[attached] NATURAL_16] */
struct S88 {
	T14 a1; /* to_pointer */
};

/* Struct for boxed version of type TYPED_POINTER [[attached] NATURAL_16] */
struct Sb88 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T88* p1; /* pointer */
	T88 z1; /* item */
};

/* Struct for type TYPED_POINTER [[attached] NATURAL_8] */
struct S83 {
	T14 a1; /* to_pointer */
};

/* Struct for boxed version of type TYPED_POINTER [[attached] NATURAL_8] */
struct Sb83 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T83* p1; /* pointer */
	T83 z1; /* item */
};

/* Struct for type TYPED_POINTER [[attached] ANY] */
struct S70 {
	T14 a1; /* to_pointer */
};

/* Struct for boxed version of type TYPED_POINTER [[attached] ANY] */
struct Sb70 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T70* p1; /* pointer */
	T70 z1; /* item */
};

/* Struct for type [detachable] SPECIAL [CHARACTER_8] */
struct S15 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	uint32_t offset;
	T6 a1; /* count */
	T6 a2; /* capacity */
	T2 z2[1]; /* item */
};

/* Struct for type [detachable] SPECIAL [CHARACTER_32] */
struct S16 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	uint32_t offset;
	T6 a1; /* count */
	T6 a2; /* capacity */
	T3 z2[1]; /* item */
};

/* Struct for type [detachable] STRING_8 */
struct S17 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* area */
	T6 a2; /* count */
	T6 a3; /* internal_hash_code */
	T6 a4; /* internal_case_insensitive_hash_code */
};

/* Struct for type [detachable] STRING_32 */
struct S18 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* area */
	T6 a2; /* count */
	T6 a3; /* internal_hash_code */
};

/* Struct for type [detachable] ISE_EXCEPTION_MANAGER */
struct S21 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
};

/* Struct for type [detachable] APP */
struct S25 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* p */
	T0* a2; /* s */
	T0* a3; /* f */
	T0* a4; /* ra */
};

/* Struct for type [detachable] CELL [detachable EXCEPTION] */
struct S26 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* item */
};

/* Struct for type [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32] */
struct S27 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T6 a1; /* capacity */
	T0* a2; /* content */
	T0* a3; /* keys */
	T0* a4; /* deleted_marks */
	T0* a5; /* indexes_map */
	T6 a6; /* iteration_position */
	T6 a7; /* count */
	T6 a8; /* deleted_item_position */
	T6 a9; /* control */
	T6 a10; /* found_item */
	T1 a11; /* has_default */
	T6 a12; /* item_position */
	T6 a13; /* ht_lowest_deleted_position */
	T6 a14; /* ht_deleted_item */
	T6 a15; /* ht_deleted_key */
	T1 a16; /* object_comparison */
};

/* Struct for type [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]] */
struct S28 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* item */
};

/* Struct for type [detachable] CELL [[attached] NO_MORE_MEMORY] */
struct S29 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* item */
};

/* Struct for type detachable C_STRING */
struct S30 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* managed_data */
	T6 a2; /* count */
};

/* Struct for type [detachable] TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN] */
struct S31 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T6 z1;
	T6 z2;
	T6 z3;
	T0* z4;
	T0* z5;
	T0* z6;
	T0* z7;
	T0* z8;
	T0* z9;
	T6 z10;
	T1 z11;
};

/* Struct for type [detachable] PERSON */
struct S32 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* name */
	T0* a2; /* addr */
};

/* Struct for type [detachable] STUDENT */
struct S33 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* name */
	T0* a2; /* addr */
};

/* Struct for type [detachable] FACULTY */
struct S34 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* name */
	T0* a2; /* addr */
};

/* Struct for type [detachable] RESEARCH_ASSISTANT */
struct S35 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* addr */
	T0* a2; /* faculty_addr */
	T0* a3; /* student_addr */
	T0* a4; /* name */
};

/* Struct for type [detachable] STD_FILES */
struct S36 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* default_output */
};

/* Struct for type [detachable] VOID_TARGET */
struct S38 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] ROUTINE_FAILURE */
struct S40 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* routine_name */
	T0* a2; /* class_name */
	T0* a3; /* throwing_exception */
	T0* a4; /* internal_trace */
	T0* a5; /* c_description */
	T0* a6; /* recipient_name */
	T0* a7; /* type_name */
};

/* Struct for type [detachable] OLD_VIOLATION */
struct S42 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] NO_MORE_MEMORY */
struct S44 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* internal_trace */
	T6 a2; /* internal_code */
	T0* a3; /* throwing_exception */
	T0* a4; /* c_description */
	T0* a5; /* recipient_name */
	T0* a6; /* type_name */
};

/* Struct for type [detachable] INVARIANT_VIOLATION */
struct S45 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T1 a2; /* is_entry */
	T0* a3; /* internal_trace */
	T0* a4; /* c_description */
	T0* a5; /* recipient_name */
	T0* a6; /* type_name */
};

/* Struct for type [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE */
struct S46 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T6 a2; /* signal_code */
	T0* a3; /* internal_trace */
	T0* a4; /* c_description */
	T0* a5; /* recipient_name */
	T0* a6; /* type_name */
};

/* Struct for type [detachable] IO_FAILURE */
struct S47 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T6 a1; /* internal_code */
	T0* a2; /* throwing_exception */
	T6 a3; /* error_code */
	T0* a4; /* internal_trace */
	T0* a5; /* c_description */
	T0* a6; /* recipient_name */
	T0* a7; /* type_name */
};

/* Struct for type [detachable] OPERATING_SYSTEM_FAILURE */
struct S48 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T6 a2; /* error_code */
	T0* a3; /* internal_trace */
	T0* a4; /* c_description */
	T0* a5; /* recipient_name */
	T0* a6; /* type_name */
};

/* Struct for type [detachable] COM_FAILURE */
struct S49 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T6 a2; /* hresult_code */
	T0* a3; /* exception_information */
	T6 a4; /* hresult */
	T0* a5; /* internal_trace */
	T0* a6; /* c_description */
	T0* a7; /* recipient_name */
	T0* a8; /* type_name */
};

/* Struct for type [detachable] EIFFEL_RUNTIME_PANIC */
struct S50 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T6 a1; /* internal_code */
	T0* a2; /* throwing_exception */
	T0* a3; /* internal_trace */
	T0* a4; /* c_description */
	T0* a5; /* recipient_name */
	T0* a6; /* type_name */
};

/* Struct for type [detachable] PRECONDITION_VIOLATION */
struct S53 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] POSTCONDITION_VIOLATION */
struct S54 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] FLOATING_POINT_FAILURE */
struct S55 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] CHECK_VIOLATION */
struct S56 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] BAD_INSPECT_VALUE */
struct S57 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] VARIANT_VIOLATION */
struct S58 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] LOOP_INVARIANT_VIOLATION */
struct S59 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] RESCUE_FAILURE */
struct S60 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] RESUMPTION_FAILURE */
struct S61 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] CREATE_ON_DEFERRED */
struct S62 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] EXTERNAL_FAILURE */
struct S63 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] VOID_ASSIGNED_TO_EXPANDED */
struct S64 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE */
struct S65 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] MISMATCH_FAILURE */
struct S66 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] DEVELOPER_EXCEPTION */
struct S67 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE */
struct S68 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] SERIALIZATION_FAILURE */
struct S69 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* throwing_exception */
	T0* a2; /* internal_trace */
	T0* a3; /* c_description */
	T0* a4; /* recipient_name */
	T0* a5; /* type_name */
};

/* Struct for type [detachable] PRIMES */
struct S72 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
};

/* Struct for type [detachable] SPECIAL [[attached] INTEGER_32] */
struct S73 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	uint32_t offset;
	T6 a1; /* count */
	T6 a2; /* capacity */
	T6 z2[1]; /* item */
};

/* Struct for type [detachable] SPECIAL [[attached] BOOLEAN] */
struct S74 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	uint32_t offset;
	T6 a1; /* count */
	T6 a2; /* capacity */
	T1 z2[1]; /* item */
};

/* Struct for type [detachable] CONSOLE */
struct S76 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T14 a1; /* file_pointer */
	T0* a2; /* last_string_32 */
	T6 a3; /* mode */
	T0* a4; /* last_string */
	T0* a5; /* internal_name */
	T0* a6; /* internal_detachable_name_pointer */
};

/* Struct for type [detachable] CELL [[attached] INTEGER_32] */
struct S78 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T6 a1; /* item */
};

/* Struct for type [detachable] MANAGED_POINTER */
struct S79 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T14 a1; /* item */
	T6 a2; /* count */
	T1 a3; /* is_shared */
};

/* Struct for type [detachable] FILE_INFO */
struct S81 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T1 a1; /* is_following_symlinks */
	T1 a2; /* exists */
	T0* a3; /* buffered_file_info */
};

/* Struct for type [detachable] EXCEPTIONS */
struct S82 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
};

/* Struct for type [detachable] SPECIAL [[attached] NATURAL_8] */
struct S86 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	uint32_t offset;
	T6 a1; /* count */
	T6 a2; /* capacity */
	T8 z2[1]; /* item */
};

/* Struct for type [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER */
struct S89 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T6 a1; /* last_state */
	T1 a2; /* internal_overflowed */
	T11 a3; /* part1 */
	T11 a4; /* part2 */
	T0* a5; /* leading_separators */
	T0* a6; /* trailing_separators */
	T6 a7; /* sign */
	T6 a8; /* conversion_type */
	T2 a9; /* internal_lookahead */
	T1 a10; /* leading_separators_acceptable */
	T1 a11; /* trailing_separators_acceptable */
};

/* Struct for type [detachable] INTEGER_OVERFLOW_CHECKER */
struct S93 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	T0* a1; /* integer_overflow_state1 */
	T0* a2; /* integer_overflow_state2 */
	T0* a3; /* natural_overflow_state1 */
	T0* a4; /* natural_overflow_state2 */
};

/* Struct for type [detachable] SPECIAL [[attached] NATURAL_64] */
struct S94 {
	EIF_TYPE_INDEX id;
	uint16_t flags;
	uint32_t offset;
	T6 a1; /* count */
	T6 a2; /* capacity */
	T11 z2[1]; /* item */
};


extern T1 GE_default1;
extern T2 GE_default2;
extern T3 GE_default3;
extern T4 GE_default4;
extern T5 GE_default5;
extern T6 GE_default6;
extern T7 GE_default7;
extern T8 GE_default8;
extern T9 GE_default9;
extern T10 GE_default10;
extern T11 GE_default11;
extern T12 GE_default12;
extern T13 GE_default13;
extern T14 GE_default14;
extern T15 GE_default15;
extern T16 GE_default16;
extern T17 GE_default17;
extern T18 GE_default18;
extern T21 GE_default21;
extern T25 GE_default25;
extern T26 GE_default26;
extern T27 GE_default27;
extern T28 GE_default28;
extern T29 GE_default29;
extern T30 GE_default30;
extern T31 GE_default31;
extern T32 GE_default32;
extern T33 GE_default33;
extern T34 GE_default34;
extern T35 GE_default35;
extern T36 GE_default36;
extern T38 GE_default38;
extern T40 GE_default40;
extern T42 GE_default42;
extern T44 GE_default44;
extern T45 GE_default45;
extern T46 GE_default46;
extern T47 GE_default47;
extern T48 GE_default48;
extern T49 GE_default49;
extern T50 GE_default50;
extern T53 GE_default53;
extern T54 GE_default54;
extern T55 GE_default55;
extern T56 GE_default56;
extern T57 GE_default57;
extern T58 GE_default58;
extern T59 GE_default59;
extern T60 GE_default60;
extern T61 GE_default61;
extern T62 GE_default62;
extern T63 GE_default63;
extern T64 GE_default64;
extern T65 GE_default65;
extern T66 GE_default66;
extern T67 GE_default67;
extern T68 GE_default68;
extern T69 GE_default69;
extern T70 GE_default70;
extern T72 GE_default72;
extern T73 GE_default73;
extern T74 GE_default74;
extern T76 GE_default76;
extern T77 GE_default77;
extern T78 GE_default78;
extern T79 GE_default79;
extern T81 GE_default81;
extern T82 GE_default82;
extern T83 GE_default83;
extern T86 GE_default86;
extern T88 GE_default88;
extern T89 GE_default89;
extern T93 GE_default93;
extern T94 GE_default94;

extern T0* GE_new_str8(T6 c);
extern T0* GE_new_str32(T6 c);
extern T0* GE_new_istr8(T6 c);
extern T0* GE_new_istr32(T6 c);
/* New instance of type [detachable] SPECIAL [CHARACTER_8] */
extern T0* GE_new15(T6 a1, T1 initialize);
/* New instance of type [detachable] SPECIAL [CHARACTER_32] */
extern T0* GE_new16(T6 a1, T1 initialize);
/* New instance of type [detachable] STRING_8 */
extern T0* GE_new17(T1 initialize);
/* New instance of type [detachable] STRING_32 */
extern T0* GE_new18(T1 initialize);
/* New instance of type [detachable] ISE_EXCEPTION_MANAGER */
extern T0* GE_new21(T1 initialize);
/* New instance of type [detachable] APP */
extern T0* GE_new25(T1 initialize);
/* New instance of type [detachable] CELL [detachable EXCEPTION] */
extern T0* GE_new26(T1 initialize);
/* New instance of type [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32] */
extern T0* GE_new27(T1 initialize);
/* New instance of type [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]] */
extern T0* GE_new28(T1 initialize);
/* New instance of type [detachable] CELL [[attached] NO_MORE_MEMORY] */
extern T0* GE_new29(T1 initialize);
/* New instance of type detachable C_STRING */
extern T0* GE_new30(T1 initialize);
/* New instance of type [detachable] TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN] */
extern T0* GE_new31(T1 initialize);
/* New instance of type [detachable] PERSON */
extern T0* GE_new32(T1 initialize);
/* New instance of type [detachable] STUDENT */
extern T0* GE_new33(T1 initialize);
/* New instance of type [detachable] FACULTY */
extern T0* GE_new34(T1 initialize);
/* New instance of type [detachable] RESEARCH_ASSISTANT */
extern T0* GE_new35(T1 initialize);
/* New instance of type [detachable] STD_FILES */
extern T0* GE_new36(T1 initialize);
/* New instance of type [detachable] VOID_TARGET */
extern T0* GE_new38(T1 initialize);
/* New instance of type [detachable] ROUTINE_FAILURE */
extern T0* GE_new40(T1 initialize);
/* New instance of type [detachable] OLD_VIOLATION */
extern T0* GE_new42(T1 initialize);
/* New instance of type [detachable] NO_MORE_MEMORY */
extern T0* GE_new44(T1 initialize);
/* New instance of type [detachable] INVARIANT_VIOLATION */
extern T0* GE_new45(T1 initialize);
/* New instance of type [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE */
extern T0* GE_new46(T1 initialize);
/* New instance of type [detachable] IO_FAILURE */
extern T0* GE_new47(T1 initialize);
/* New instance of type [detachable] OPERATING_SYSTEM_FAILURE */
extern T0* GE_new48(T1 initialize);
/* New instance of type [detachable] COM_FAILURE */
extern T0* GE_new49(T1 initialize);
/* New instance of type [detachable] EIFFEL_RUNTIME_PANIC */
extern T0* GE_new50(T1 initialize);
/* New instance of type [detachable] PRECONDITION_VIOLATION */
extern T0* GE_new53(T1 initialize);
/* New instance of type [detachable] POSTCONDITION_VIOLATION */
extern T0* GE_new54(T1 initialize);
/* New instance of type [detachable] FLOATING_POINT_FAILURE */
extern T0* GE_new55(T1 initialize);
/* New instance of type [detachable] CHECK_VIOLATION */
extern T0* GE_new56(T1 initialize);
/* New instance of type [detachable] BAD_INSPECT_VALUE */
extern T0* GE_new57(T1 initialize);
/* New instance of type [detachable] VARIANT_VIOLATION */
extern T0* GE_new58(T1 initialize);
/* New instance of type [detachable] LOOP_INVARIANT_VIOLATION */
extern T0* GE_new59(T1 initialize);
/* New instance of type [detachable] RESCUE_FAILURE */
extern T0* GE_new60(T1 initialize);
/* New instance of type [detachable] RESUMPTION_FAILURE */
extern T0* GE_new61(T1 initialize);
/* New instance of type [detachable] CREATE_ON_DEFERRED */
extern T0* GE_new62(T1 initialize);
/* New instance of type [detachable] EXTERNAL_FAILURE */
extern T0* GE_new63(T1 initialize);
/* New instance of type [detachable] VOID_ASSIGNED_TO_EXPANDED */
extern T0* GE_new64(T1 initialize);
/* New instance of type [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE */
extern T0* GE_new65(T1 initialize);
/* New instance of type [detachable] MISMATCH_FAILURE */
extern T0* GE_new66(T1 initialize);
/* New instance of type [detachable] DEVELOPER_EXCEPTION */
extern T0* GE_new67(T1 initialize);
/* New instance of type [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE */
extern T0* GE_new68(T1 initialize);
/* New instance of type [detachable] SERIALIZATION_FAILURE */
extern T0* GE_new69(T1 initialize);
/* New instance of type [detachable] PRIMES */
extern T0* GE_new72(T1 initialize);
/* New instance of type [detachable] SPECIAL [[attached] INTEGER_32] */
extern T0* GE_new73(T6 a1, T1 initialize);
/* New instance of type [detachable] SPECIAL [[attached] BOOLEAN] */
extern T0* GE_new74(T6 a1, T1 initialize);
/* New instance of type [detachable] CONSOLE */
extern T0* GE_new76(T1 initialize);
/* New instance of type [detachable] CELL [[attached] INTEGER_32] */
extern T0* GE_new78(T1 initialize);
/* New instance of type [detachable] MANAGED_POINTER */
extern T0* GE_new79(T1 initialize);
/* New instance of type [detachable] FILE_INFO */
extern T0* GE_new81(T1 initialize);
/* New instance of type [detachable] EXCEPTIONS */
extern T0* GE_new82(T1 initialize);
/* New instance of type [detachable] SPECIAL [[attached] NATURAL_8] */
extern T0* GE_new86(T6 a1, T1 initialize);
/* New instance of type [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER */
extern T0* GE_new89(T1 initialize);
/* New instance of type [detachable] INTEGER_OVERFLOW_CHECKER */
extern T0* GE_new93(T1 initialize);
/* New instance of type [detachable] SPECIAL [[attached] NATURAL_64] */
extern T0* GE_new94(T6 a1, T1 initialize);
/* [detachable] APP.make */
extern T0* T25c7(GE_context* ac);
/* [detachable] RESEARCH_ASSISTANT.set_student_addr */
extern void T35f14(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESEARCH_ASSISTANT.set_addr */
extern void T35f15(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESEARCH_ASSISTANT.set_faculty_addr */
extern void T35f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] APP.print_faculty_addr_via_accessor */
extern void T25f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESEARCH_ASSISTANT.get_faculty_addr */
extern T0* T35f6(GE_context* ac, T0* C);
/* [detachable] RESEARCH_ASSISTANT.get_addr */
extern T0* T35f7(GE_context* ac, T0* C);
/* [detachable] APP.print_student_addr_via_accessor */
extern void T25f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESEARCH_ASSISTANT.get_student_addr */
extern T0* T35f5(GE_context* ac, T0* C);
/* [detachable] APP.print_faculty_addr_direct_field */
extern void T25f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] APP.print_student_addr_direct_field */
extern void T25f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESEARCH_ASSISTANT.take_rest */
extern void T35f12(GE_context* ac, T0* C);
/* [detachable] RESEARCH_ASSISTANT.io */
extern T0* T35f8(GE_context* ac, T0* C);
/* [detachable] STD_FILES.set_output_default */
extern void T36f6(GE_context* ac, T0* C);
/* [detachable] STD_FILES.output */
extern T0* T36f3(GE_context* ac, T0* C);
/* [detachable] CONSOLE.make_open_stdout */
extern T0* T76c13(GE_context* ac, T0* a1);
/* [detachable] CONSOLE.set_write_mode */
extern void T76f16(GE_context* ac, T0* C);
/* [detachable] CONSOLE.console_def */
extern T14 T76f7(GE_context* ac, T0* C, T6 a1);
/* [detachable] CONSOLE.make_with_name */
extern void T76f15(GE_context* ac, T0* C, T0* a1);
/* [detachable] STRING_32.make_empty */
extern T0* T18c4(GE_context* ac);
/* [detachable] STRING_32.make */
extern void T18f5(GE_context* ac, T0* C, T6 a1);
/* [detachable] SPECIAL [CHARACTER_32].make_filled */
extern T0* T16c4(GE_context* ac, T3 a1, T6 a2);
/* [detachable] SPECIAL [CHARACTER_32].fill_with */
extern void T16f6(GE_context* ac, T0* C, T3 a1, T6 a2, T6 a3);
/* [detachable] SPECIAL [CHARACTER_32].extend */
extern void T16f8(GE_context* ac, T0* C, T3 a1);
/* INTEGER_32.min */
extern T6 T6f18(GE_context* ac, T6* C, T6 a1);
/* INTEGER_32.is_less_equal */
extern T1 T6f20(GE_context* ac, T6* C, T6 a1);
/* [detachable] SPECIAL [CHARACTER_32].make_empty */
extern void T16f5(GE_context* ac, T0* C, T6 a1);
/* [detachable] CONSOLE.make_with_name */
extern void T76f15p1(GE_context* ac, T0* C, T0* a1);
/* [detachable] STRING_8.make_empty */
extern T0* T17c21(GE_context* ac);
/* [detachable] STRING_8.make */
extern void T17f15(GE_context* ac, T0* C, T6 a1);
/* [detachable] STRING_8.make */
extern T0* T17c15(GE_context* ac, T6 a1);
/* [detachable] SPECIAL [CHARACTER_8].make_filled */
extern T0* T15c6(GE_context* ac, T2 a1, T6 a2);
/* [detachable] SPECIAL [CHARACTER_8].fill_with */
extern void T15f9(GE_context* ac, T0* C, T2 a1, T6 a2, T6 a3);
/* [detachable] SPECIAL [CHARACTER_8].extend */
extern void T15f13(GE_context* ac, T0* C, T2 a1);
/* [detachable] SPECIAL [CHARACTER_8].make_empty */
extern void T15f10(GE_context* ac, T0* C, T6 a1);
/* [detachable] SPECIAL [CHARACTER_8].make_empty */
extern T0* T15c10(GE_context* ac, T6 a1);
/* [detachable] CONSOLE.default_pointer */
extern T14 T76f10(GE_context* ac, T0* C);
/* [detachable] CONSOLE.set_name */
extern void T76f18(GE_context* ac, T0* C, T0* a1);
/* [detachable] FILE_INFO.file_name_to_pointer */
extern T0* T81f5(GE_context* ac, T0* C, T0* a1, T0* a2);
/* detachable C_STRING.set_string */
extern void T30f7(GE_context* ac, T0* C, T0* a1);
/* detachable C_STRING.set_substring */
extern void T30f8(GE_context* ac, T0* C, T0* a1, T6 a2, T6 a3);
/* [detachable] MANAGED_POINTER.put_natural_8 */
extern void T79f10(GE_context* ac, T0* C, T8 a1, T6 a2);
/* POINTER.memory_copy */
extern void T14f13(GE_context* ac, T14* C, T14 a1, T6 a2);
/* POINTER.c_memcpy */
extern void T14f17(GE_context* ac, T14* C, T14 a1, T14 a2, T6 a3);
/* NATURAL_32.to_natural_8 */
extern T8 T10f4(GE_context* ac, T10* C);
/* [detachable] STRING_8.code */
extern T10 T17f11(GE_context* ac, T0* C, T6 a1);
/* INTEGER_32.to_natural_32 */
extern T10 T6f26(GE_context* ac, T6* C);
/* detachable C_STRING.make_shared_from_pointer_and_count */
extern T0* T30c9(GE_context* ac, T14 a1, T6 a2);
/* [detachable] MANAGED_POINTER.share_from_pointer */
extern T0* T79c12(GE_context* ac, T14 a1, T6 a2);
/* [detachable] MANAGED_POINTER.increment_counter */
extern void T79f11(GE_context* ac, T0* C);
/* UTF_CONVERTER.escaped_utf_32_substring_into_utf_8_0_pointer */
extern void T77f12(GE_context* ac, T77* C, T0* a1, T6 a2, T6 a3, T0* a4, T6 a5, T0* a6);
/* INTEGER_32.is_greater */
extern T1 T6f14(GE_context* ac, T6* C, T6 a1);
/* NATURAL_32.is_less_equal */
extern T1 T10f5(GE_context* ac, T10* C, T10 a1);
/* UTF_CONVERTER.to_natural_32 */
extern T10 T77f7(GE_context* ac, T77* C, T0* a1);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.parsed_natural_32 */
extern T10 T89f12(GE_context* ac, T0* C);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.parse_string_with_type */
extern void T89f19(GE_context* ac, T0* C, T0* a1, T6 a2);
/* NATURAL_32.is_valid_character_8_code */
extern T1 T10f17(GE_context* ac, T10* C);
/* CHARACTER_32.is_character_8 */
extern T1 T3f6(GE_context* ac, T3* C);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.parse_character */
extern void T89f22(GE_context* ac, T0* C, T2 a1);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.overflowed */
extern T1 T89f16(GE_context* ac, T0* C);
/* [detachable] INTEGER_OVERFLOW_CHECKER.will_overflow */
extern T1 T93f7(GE_context* ac, T0* C, T11 a1, T11 a2, T6 a3, T6 a4);
/* NATURAL_64.is_greater */
extern T1 T11f11(GE_context* ac, T11* C, T11 a1);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.overflow_checker */
extern T0* T89f15(GE_context* ac, T0* C);
/* [detachable] INTEGER_OVERFLOW_CHECKER.make */
extern T0* T93c13(GE_context* ac);
/* NATURAL_64.to_natural_64 */
extern T11 T11f14(GE_context* ac, T11* C);
/* NATURAL_32.to_natural_64 */
extern T11 T10f20(GE_context* ac, T10* C);
/* NATURAL_16.to_natural_64 */
extern T11 T9f6(GE_context* ac, T9* C);
/* INTEGER_64.to_natural_64 */
extern T11 T7f6(GE_context* ac, T7* C);
/* INTEGER_32.to_natural_64 */
extern T11 T6f28(GE_context* ac, T6* C);
/* INTEGER_16.to_natural_64 */
extern T11 T5f6(GE_context* ac, T5* C);
/* INTEGER_8.to_natural_64 */
extern T11 T4f9(GE_context* ac, T4* C);
/* [detachable] SPECIAL [[attached] NATURAL_64].extend */
extern void T94f5(GE_context* ac, T0* C, T11 a1);
/* [detachable] SPECIAL [[attached] NATURAL_64].make_empty */
extern T0* T94c4(GE_context* ac, T6 a1);
/* [detachable] STRING_8.has */
extern T1 T17f14(GE_context* ac, T0* C, T2 a1);
/* NATURAL_8.to_natural_64 */
extern T11 T8f4(GE_context* ac, T8* C);
/* CHARACTER_8.to_hexa_digit */
extern T8 T2f9(GE_context* ac, T2* C);
/* INTEGER_8.to_natural_8 */
extern T8 T4f5(GE_context* ac, T4* C);
/* NATURAL_8.to_integer_8 */
extern T4 T8f9(GE_context* ac, T8* C);
/* CHARACTER_8.natural_32_code */
extern T10 T2f13(GE_context* ac, T2* C);
/* CHARACTER_8.is_hexa_digit */
extern T1 T2f8(GE_context* ac, T2* C);
/* NATURAL_8.is_greater */
extern T1 T8f7(GE_context* ac, T8* C, T8 a1);
/* CHARACTER_8.character_types */
extern T8 T2f10(GE_context* ac, T2* C, T6 a1);
/* CHARACTER_8.internal_character_types */
extern T0* T2f14(GE_context* ac, T2* C);
/* [detachable] SPECIAL [[attached] NATURAL_8].extend */
extern void T86f8(GE_context* ac, T0* C, T8 a1);
/* [detachable] SPECIAL [[attached] NATURAL_8].make_empty */
extern void T86f5(GE_context* ac, T0* C, T6 a1);
/* [detachable] SPECIAL [[attached] NATURAL_8].make_empty */
extern T0* T86c5(GE_context* ac, T6 a1);
/* [detachable] STRING_8.area_lower */
extern T6 T17f9(GE_context* ac, T0* C);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.reset */
extern void T89f18(GE_context* ac, T0* C, T6 a1);
/* UTF_CONVERTER.ctoi_convertor */
extern T0* T77f8(GE_context* ac, T77* C);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.set_trailing_separators_acceptable */
extern void T89f21(GE_context* ac, T0* C, T1 a1);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.set_leading_separators_acceptable */
extern void T89f20(GE_context* ac, T0* C, T1 a1);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.make */
extern T0* T89c17(GE_context* ac);
/* [detachable] STRING_8.make_from_string */
extern T0* T17c26(GE_context* ac, T0* a1);
/* [detachable] SPECIAL [CHARACTER_8].copy_data */
extern void T15f8(GE_context* ac, T0* C, T0* a1, T6 a2, T6 a3, T6 a4);
/* [detachable] SPECIAL [CHARACTER_8].force */
extern void T15f12(GE_context* ac, T0* C, T2 a1, T6 a2);
/* [detachable] SPECIAL [CHARACTER_8].move_data */
extern void T15f11(GE_context* ac, T0* C, T6 a1, T6 a2, T6 a3);
/* [detachable] SPECIAL [CHARACTER_8].overlapping_move */
extern void T15f15(GE_context* ac, T0* C, T6 a1, T6 a2, T6 a3);
/* [detachable] SPECIAL [CHARACTER_8].non_overlapping_move */
extern void T15f14(GE_context* ac, T0* C, T6 a1, T6 a2, T6 a3);
/* UTF_CONVERTER.is_hexa_decimal */
extern T1 T77f6(GE_context* ac, T77* C, T0* a1);
/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.is_integral_integer */
extern T1 T89f14(GE_context* ac, T0* C);
/* [detachable] STRING_8.substring */
extern T0* T17f13(GE_context* ac, T0* C, T6 a1, T6 a2);
/* [detachable] STRING_8.set_count */
extern void T17f25(GE_context* ac, T0* C, T6 a1);
/* [detachable] STRING_8.reset_hash_codes */
extern void T17f20(GE_context* ac, T0* C);
/* [detachable] STRING_8.new_string */
extern T0* T17f6(GE_context* ac, T0* C, T6 a1);
/* [detachable] STRING_8.character_32_item */
extern T3 T17f12(GE_context* ac, T0* C, T6 a1);
/* INTEGER_32.is_greater_equal */
extern T1 T6f13(GE_context* ac, T6* C, T6 a1);
/* UTF_CONVERTER.utf_8_bytes_count */
extern T6 T77f3(GE_context* ac, T77* C, T0* a1, T6 a2, T6 a3);
/* INTEGER_32.do_nothing */
extern void T6f30(GE_context* ac, T6* C);
/* [detachable] FILE_INFO.multi_byte_to_utf_16 */
extern T6 T81f7(GE_context* ac, T0* C, T14 a1, T14 a2, T6 a3);
/* [detachable] FILE_INFO.default_pointer */
extern T14 T81f6(GE_context* ac, T0* C);
/* detachable C_STRING.item */
extern T14 T30f3(GE_context* ac, T0* C);
/* detachable C_STRING.make */
extern T0* T30c6(GE_context* ac, T0* a1);
/* detachable C_STRING.make_empty */
extern void T30f4(GE_context* ac, T0* C, T6 a1);
/* detachable C_STRING.make_empty */
extern T0* T30c4(GE_context* ac, T6 a1);
/* UTF_CONVERTER.escaped_utf_32_substring_into_utf_16_0_pointer */
extern void T77f11(GE_context* ac, T77* C, T0* a1, T6 a2, T6 a3, T0* a4, T6 a5, T0* a6);
/* [detachable] MANAGED_POINTER.put_natural_16 */
extern void T79f13(GE_context* ac, T0* C, T9 a1, T6 a2);
/* NATURAL_32.to_natural_16 */
extern T9 T10f12(GE_context* ac, T10* C);
/* NATURAL_32.is_greater */
extern T1 T10f11(GE_context* ac, T10* C, T10 a1);
/* UTF_CONVERTER.utf_16_bytes_count */
extern T6 T77f4(GE_context* ac, T77* C, T0* a1, T6 a2, T6 a3);
/* [detachable] MANAGED_POINTER.make */
extern T0* T79c8(GE_context* ac, T6 a1);
/* [detachable] EXCEPTIONS.raise */
extern void T82f2(GE_context* ac, T0* C, T0* a1);
/* [detachable] DEVELOPER_EXCEPTION.raise */
extern void T67f16(GE_context* ac, T0* C);
/* [detachable] ISE_EXCEPTION_MANAGER.raise */
extern void T21f19(GE_context* ac, T0* C, T0* a1);
/* [detachable] DEVELOPER_EXCEPTION.code */
extern T6 T67f8(GE_context* ac, T0* C);
/* [detachable] ISE_EXCEPTION_MANAGER.default_pointer */
extern T14 T21f9(GE_context* ac, T0* C);
/* [detachable] ISE_EXCEPTION_MANAGER.set_last_exception */
extern void T21f17(GE_context* ac, T0* C, T0* a1);
/* [detachable] CELL [detachable EXCEPTION].put */
extern void T26f2(GE_context* ac, T0* C, T0* a1);
/* [detachable] CELL [detachable EXCEPTION].put */
extern T0* T26c2(GE_context* ac, T0* a1);
/* [detachable] ISE_EXCEPTION_MANAGER.last_exception_cell */
extern T0* T21f2(GE_context* ac, T0* C);
/* [detachable] DEVELOPER_EXCEPTION.set_throwing_exception */
extern void T67f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] ISE_EXCEPTION_MANAGER.in_rescue */
extern T1 T21f8(GE_context* ac, T0* C);
/* [detachable] DEVELOPER_EXCEPTION.is_ignored */
extern T1 T67f7(GE_context* ac, T0* C);
/* [detachable] ISE_EXCEPTION_MANAGER.is_ignored */
extern T1 T21f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].has */
extern T1 T27f34(GE_context* ac, T0* C, T6 a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].same_keys */
extern T1 T27f26(GE_context* ac, T0* C, T6 a1, T6 a2);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].hash_code_of */
extern T6 T27f25(GE_context* ac, T0* C, T6 a1);
/* INTEGER_32.hash_code */
extern T6 T6f19(GE_context* ac, T6* C);
/* [detachable] ISE_EXCEPTION_MANAGER.ignored_exceptions */
extern T0* T21f3(GE_context* ac, T0* C);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].make */
extern T0* T27c35(GE_context* ac, T6 a1);
/* [detachable] SPECIAL [[attached] INTEGER_32].make_filled */
extern T0* T73c5(GE_context* ac, T6 a1, T6 a2);
/* [detachable] SPECIAL [[attached] INTEGER_32].fill_with */
extern void T73f8(GE_context* ac, T0* C, T6 a1, T6 a2, T6 a3);
/* [detachable] SPECIAL [[attached] INTEGER_32].extend */
extern void T73f9(GE_context* ac, T0* C, T6 a1);
/* [detachable] SPECIAL [[attached] BOOLEAN].make_filled */
extern T0* T74c4(GE_context* ac, T1 a1, T6 a2);
/* [detachable] SPECIAL [[attached] BOOLEAN].fill_with */
extern void T74f7(GE_context* ac, T0* C, T1 a1, T6 a2, T6 a3);
/* [detachable] SPECIAL [[attached] BOOLEAN].extend */
extern void T74f9(GE_context* ac, T0* C, T1 a1);
/* [detachable] SPECIAL [[attached] BOOLEAN].make_empty */
extern void T74f6(GE_context* ac, T0* C, T6 a1);
/* [detachable] SPECIAL [[attached] INTEGER_32].make_empty */
extern void T73f4(GE_context* ac, T0* C, T6 a1);
/* [detachable] SPECIAL [[attached] INTEGER_32].make_empty */
extern T0* T73c4(GE_context* ac, T6 a1);
/* [detachable] PRIMES.higher_prime */
extern T6 T72f1(GE_context* ac, T0* C, T6 a1);
/* [detachable] PRIMES.is_prime */
extern T1 T72f3(GE_context* ac, T0* C, T6 a1);
/* [detachable] PRIMES.default_create */
extern T0* T72c5(GE_context* ac);
/* [detachable] DEVELOPER_EXCEPTION.exception_manager */
extern T0* T67f6(GE_context* ac, T0* C);
/* [detachable] DEVELOPER_EXCEPTION.set_description */
extern void T67f13(GE_context* ac, T0* C, T0* a1);
/* detachable C_STRING.set_count */
extern void T30f5(GE_context* ac, T0* C, T6 a1);
/* UTF_CONVERTER.utf_32_string_into_utf_8_0_pointer */
extern void T77f9(GE_context* ac, T77* C, T0* a1, T0* a2, T6 a3, T0* a4);
/* [detachable] CELL [[attached] INTEGER_32].put */
extern void T78f2(GE_context* ac, T0* C, T6 a1);
/* [detachable] CELL [[attached] INTEGER_32].put */
extern T0* T78c2(GE_context* ac, T6 a1);
/* [detachable] DEVELOPER_EXCEPTION.default_create */
extern T0* T67c10(GE_context* ac);
/* [detachable] EXCEPTIONS.default_create */
extern T0* T82c1(GE_context* ac);
/* [detachable] MANAGED_POINTER.default_pointer */
extern T14 T79f4(GE_context* ac, T0* C);
/* POINTER.memory_calloc */
extern T14 T14f4(GE_context* ac, T14* C, T6 a1, T6 a2);
/* POINTER.c_calloc */
extern T14 T14f7(GE_context* ac, T14* C, T6 a1, T6 a2);
/* INTEGER_32.max */
extern T6 T6f17(GE_context* ac, T6* C, T6 a1);
/* [detachable] MANAGED_POINTER.resize */
extern void T79f9(GE_context* ac, T0* C, T6 a1);
/* POINTER.memory_set */
extern void T14f12(GE_context* ac, T14* C, T6 a1, T6 a2);
/* POINTER.c_memset */
extern void T14f16(GE_context* ac, T14* C, T14 a1, T6 a2, T6 a3);
/* POINTER.memory_realloc */
extern T14 T14f5(GE_context* ac, T14* C, T6 a1);
/* POINTER.c_realloc */
extern T14 T14f8(GE_context* ac, T14* C, T14 a1, T6 a2);
/* [detachable] CONSOLE.buffered_file_info */
extern T0* T76f11(GE_context* ac, T0* C);
/* [detachable] FILE_INFO.make */
extern T0* T81c8(GE_context* ac);
/* [detachable] FILE_INFO.make_filled_area */
extern void T81f9(GE_context* ac, T0* C, T8 a1, T6 a2);
/* [detachable] SPECIAL [[attached] NATURAL_8].make_filled */
extern T0* T86c4(GE_context* ac, T8 a1, T6 a2);
/* [detachable] SPECIAL [[attached] NATURAL_8].fill_with */
extern void T86f6(GE_context* ac, T0* C, T8 a1, T6 a2, T6 a3);
/* [detachable] FILE_INFO.stat_size */
extern T6 T81f4(GE_context* ac, T0* C);
/* [detachable] STD_FILES.default_create */
extern T0* T36c4(GE_context* ac);
/* [detachable] RESEARCH_ASSISTANT.do_benchwork */
extern void T35f11(GE_context* ac, T0* C);
/* [detachable] STD_FILES.put_string */
extern void T36f5(GE_context* ac, T0* C, T0* a1);
/* [detachable] CONSOLE.put_string */
extern void T76f14(GE_context* ac, T0* C, T0* a1);
/* [detachable] CONSOLE.console_ps */
extern void T76f17(GE_context* ac, T0* C, T14 a1, T14 a2, T6 a3);
/* [detachable] STD_FILES.standard_default */
extern T0* T36f2(GE_context* ac, T0* C);
/* [detachable] STRING_8.plus */
extern T0* T17f5(GE_context* ac, T0* C, T0* a1);
/* [detachable] STRING_8.append */
extern void T17f17(GE_context* ac, T0* C, T0* a1);
/* [detachable] STRING_8.resize */
extern void T17f19(GE_context* ac, T0* C, T6 a1);
/* [detachable] SPECIAL [CHARACTER_8].aliased_resized_area_with_default */
extern T0* T15f4(GE_context* ac, T0* C, T2 a1, T6 a2);
/* [detachable] SPECIAL [CHARACTER_8].aliased_resized_area */
extern T0* T15f5(GE_context* ac, T0* C, T6 a1);
/* [detachable] STRING_8.additional_space */
extern T6 T17f8(GE_context* ac, T0* C);
/* [detachable] STRING_8.capacity */
extern T6 T17f7(GE_context* ac, T0* C);
/* INTEGER_32.out */
extern T0* T6f4(GE_context* ac, T6* C);
/* [detachable] STRING_8.append_integer */
extern void T17f16(GE_context* ac, T0* C, T6 a1);
/* [detachable] STRING_8.append_character */
extern void T17f18(GE_context* ac, T0* C, T2 a1);
/* [detachable] APP.physical_size */
extern T6 T25f6(GE_context* ac, T0* C, T0* a1);
/* NATURAL_64.min */
extern T11 T11f4(GE_context* ac, T11* C, T11 a1);
/* NATURAL_64.is_less_equal */
extern T1 T11f6(GE_context* ac, T11* C, T11 a1);
/* [detachable] APP.io */
extern T0* T25f5(GE_context* ac, T0* C);
/* [detachable] RESEARCH_ASSISTANT.print_ra */
extern void T35f10(GE_context* ac, T0* C);
/* [detachable] RESEARCH_ASSISTANT.make */
extern T0* T35c9(GE_context* ac);
/* [detachable] FACULTY.default_create */
extern T0* T34c3(GE_context* ac);
/* [detachable] STUDENT.default_create */
extern T0* T33c3(GE_context* ac);
/* [detachable] PERSON.default_create */
extern T0* T32c3(GE_context* ac);
/* [detachable] ISE_EXCEPTION_MANAGER.set_exception_data */
extern void T21f16(GE_context* ac, T0* C, T6 a1, T1 a2, T6 a3, T6 a4, T0* a5, T0* a6, T0* a7, T0* a8, T0* a9, T0* a10, T6 a11, T1 a12);
/* [detachable] NO_MORE_MEMORY.set_type_name */
extern void T44f14(GE_context* ac, T0* C, T0* a1);
/* [detachable] SERIALIZATION_FAILURE.set_type_name */
extern void T69f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] OLD_VIOLATION.set_type_name */
extern void T42f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] COM_FAILURE.set_type_name */
extern void T49f19(GE_context* ac, T0* C, T0* a1);
/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_type_name */
extern void T68f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] DEVELOPER_EXCEPTION.set_type_name */
extern void T67f15(GE_context* ac, T0* C, T0* a1);
/* [detachable] MISMATCH_FAILURE.set_type_name */
extern void T66f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_FAILURE.set_type_name */
extern void T48f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] IO_FAILURE.set_type_name */
extern void T47f15(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_type_name */
extern void T65f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_type_name */
extern void T64f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXTERNAL_FAILURE.set_type_name */
extern void T63f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] CREATE_ON_DEFERRED.set_type_name */
extern void T62f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESUMPTION_FAILURE.set_type_name */
extern void T61f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESCUE_FAILURE.set_type_name */
extern void T60f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] EIFFEL_RUNTIME_PANIC.set_type_name */
extern void T50f14(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_type_name */
extern void T46f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] LOOP_INVARIANT_VIOLATION.set_type_name */
extern void T59f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] VARIANT_VIOLATION.set_type_name */
extern void T58f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] BAD_INSPECT_VALUE.set_type_name */
extern void T57f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] ROUTINE_FAILURE.set_type_name */
extern void T40f15(GE_context* ac, T0* C, T0* a1);
/* [detachable] CHECK_VIOLATION.set_type_name */
extern void T56f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] INVARIANT_VIOLATION.set_type_name */
extern void T45f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] FLOATING_POINT_FAILURE.set_type_name */
extern void T55f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] POSTCONDITION_VIOLATION.set_type_name */
extern void T54f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] PRECONDITION_VIOLATION.set_type_name */
extern void T53f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_TARGET.set_type_name */
extern void T38f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] NO_MORE_MEMORY.set_recipient_name */
extern void T44f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] SERIALIZATION_FAILURE.set_recipient_name */
extern void T69f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] OLD_VIOLATION.set_recipient_name */
extern void T42f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] COM_FAILURE.set_recipient_name */
extern void T49f18(GE_context* ac, T0* C, T0* a1);
/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_recipient_name */
extern void T68f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] DEVELOPER_EXCEPTION.set_recipient_name */
extern void T67f14(GE_context* ac, T0* C, T0* a1);
/* [detachable] MISMATCH_FAILURE.set_recipient_name */
extern void T66f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_FAILURE.set_recipient_name */
extern void T48f12(GE_context* ac, T0* C, T0* a1);
/* [detachable] IO_FAILURE.set_recipient_name */
extern void T47f14(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_recipient_name */
extern void T65f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_recipient_name */
extern void T64f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXTERNAL_FAILURE.set_recipient_name */
extern void T63f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] CREATE_ON_DEFERRED.set_recipient_name */
extern void T62f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESUMPTION_FAILURE.set_recipient_name */
extern void T61f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESCUE_FAILURE.set_recipient_name */
extern void T60f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] EIFFEL_RUNTIME_PANIC.set_recipient_name */
extern void T50f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_recipient_name */
extern void T46f12(GE_context* ac, T0* C, T0* a1);
/* [detachable] LOOP_INVARIANT_VIOLATION.set_recipient_name */
extern void T59f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] VARIANT_VIOLATION.set_recipient_name */
extern void T58f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] BAD_INSPECT_VALUE.set_recipient_name */
extern void T57f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] ROUTINE_FAILURE.set_recipient_name */
extern void T40f14(GE_context* ac, T0* C, T0* a1);
/* [detachable] CHECK_VIOLATION.set_recipient_name */
extern void T56f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] INVARIANT_VIOLATION.set_recipient_name */
extern void T45f12(GE_context* ac, T0* C, T0* a1);
/* [detachable] FLOATING_POINT_FAILURE.set_recipient_name */
extern void T55f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] POSTCONDITION_VIOLATION.set_recipient_name */
extern void T54f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] PRECONDITION_VIOLATION.set_recipient_name */
extern void T53f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_TARGET.set_recipient_name */
extern void T38f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] NO_MORE_MEMORY.set_exception_trace */
extern void T44f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] SERIALIZATION_FAILURE.set_exception_trace */
extern void T69f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] OLD_VIOLATION.set_exception_trace */
extern void T42f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] COM_FAILURE.set_exception_trace */
extern void T49f16(GE_context* ac, T0* C, T0* a1);
/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_exception_trace */
extern void T68f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] DEVELOPER_EXCEPTION.set_exception_trace */
extern void T67f12(GE_context* ac, T0* C, T0* a1);
/* [detachable] MISMATCH_FAILURE.set_exception_trace */
extern void T66f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_FAILURE.set_exception_trace */
extern void T48f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] IO_FAILURE.set_exception_trace */
extern void T47f12(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_exception_trace */
extern void T65f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_exception_trace */
extern void T64f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXTERNAL_FAILURE.set_exception_trace */
extern void T63f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] CREATE_ON_DEFERRED.set_exception_trace */
extern void T62f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESUMPTION_FAILURE.set_exception_trace */
extern void T61f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESCUE_FAILURE.set_exception_trace */
extern void T60f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] EIFFEL_RUNTIME_PANIC.set_exception_trace */
extern void T50f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_exception_trace */
extern void T46f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] LOOP_INVARIANT_VIOLATION.set_exception_trace */
extern void T59f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] VARIANT_VIOLATION.set_exception_trace */
extern void T58f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] BAD_INSPECT_VALUE.set_exception_trace */
extern void T57f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] ROUTINE_FAILURE.set_exception_trace */
extern void T40f12(GE_context* ac, T0* C, T0* a1);
/* [detachable] CHECK_VIOLATION.set_exception_trace */
extern void T56f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] INVARIANT_VIOLATION.set_exception_trace */
extern void T45f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] FLOATING_POINT_FAILURE.set_exception_trace */
extern void T55f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] POSTCONDITION_VIOLATION.set_exception_trace */
extern void T54f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] PRECONDITION_VIOLATION.set_exception_trace */
extern void T53f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_TARGET.set_exception_trace */
extern void T38f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] ISE_EXCEPTION_MANAGER.exception_from_data */
extern T0* T21f10(GE_context* ac, T0* C);
extern T1 T21f10ot1(T0* a1, T0** a2);
extern T1 T21f10ot2(T0* a1, T0** a2);
extern T1 T21f10ot3(T0* a1, T0** a2);
extern T1 T21f10ot4(T0* a1, T0** a2);
extern T1 T21f10ot5(T0* a1, T0** a2);
extern T1 T21f10ot6(T0* a1, T0** a2);
extern T1 T21f10ot7(T0* a1, T0** a2);
/* [detachable] NO_MORE_MEMORY.set_description */
extern void T44f12(GE_context* ac, T0* C, T0* a1);
/* [detachable] SERIALIZATION_FAILURE.set_description */
extern void T69f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] OLD_VIOLATION.set_description */
extern void T42f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] COM_FAILURE.set_description */
extern void T49f17(GE_context* ac, T0* C, T0* a1);
/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_description */
extern void T68f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] MISMATCH_FAILURE.set_description */
extern void T66f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_FAILURE.set_description */
extern void T48f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] IO_FAILURE.set_description */
extern void T47f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_description */
extern void T65f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_description */
extern void T64f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXTERNAL_FAILURE.set_description */
extern void T63f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] CREATE_ON_DEFERRED.set_description */
extern void T62f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESUMPTION_FAILURE.set_description */
extern void T61f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESCUE_FAILURE.set_description */
extern void T60f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] EIFFEL_RUNTIME_PANIC.set_description */
extern void T50f12(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_description */
extern void T46f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] LOOP_INVARIANT_VIOLATION.set_description */
extern void T59f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] VARIANT_VIOLATION.set_description */
extern void T58f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] BAD_INSPECT_VALUE.set_description */
extern void T57f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] ROUTINE_FAILURE.set_description */
extern void T40f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] CHECK_VIOLATION.set_description */
extern void T56f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] INVARIANT_VIOLATION.set_description */
extern void T45f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] FLOATING_POINT_FAILURE.set_description */
extern void T55f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] POSTCONDITION_VIOLATION.set_description */
extern void T54f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] PRECONDITION_VIOLATION.set_description */
extern void T53f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_TARGET.set_description */
extern void T38f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] COM_FAILURE.set_exception_information */
extern void T49f15(GE_context* ac, T0* C, T0* a1);
/* [detachable] COM_FAILURE.ccom_hresult_to_string */
extern T0* T49f11(GE_context* ac, T0* C, T6 a1);
/* INTEGER_32.to_hex_string */
extern T0* T6f23(GE_context* ac, T6* C);
/* [detachable] STRING_8.put */
extern void T17f23(GE_context* ac, T0* C, T2 a1, T6 a2);
/* INTEGER_32.to_hex_character */
extern T2 T6f24(GE_context* ac, T6* C);
/* CHARACTER_8.plus */
extern T2 T2f5(GE_context* ac, T2* C, T6 a1);
/* CHARACTER_8.minus */
extern T2 T2f4(GE_context* ac, T2* C, T6 a1);
/* [detachable] STRING_8.make_filled */
extern T0* T17c22(GE_context* ac, T2 a1, T6 a2);
/* [detachable] STRING_8.fill_character */
extern void T17f24(GE_context* ac, T0* C, T2 a1);
/* [detachable] COM_FAILURE.set_hresult_code */
extern void T49f14(GE_context* ac, T0* C, T6 a1);
/* [detachable] OPERATING_SYSTEM_FAILURE.set_error_code */
extern void T48f9(GE_context* ac, T0* C, T6 a1);
/* [detachable] IO_FAILURE.set_error_code */
extern void T47f11(GE_context* ac, T0* C, T6 a1);
/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_signal_code */
extern void T46f9(GE_context* ac, T0* C, T6 a1);
/* [detachable] INVARIANT_VIOLATION.set_is_entry */
extern void T45f9(GE_context* ac, T0* C, T1 a1);
/* [detachable] ROUTINE_FAILURE.set_class_name */
extern void T40f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] ROUTINE_FAILURE.set_routine_name */
extern void T40f9(GE_context* ac, T0* C, T0* a1);
/* [detachable] NO_MORE_MEMORY.set_throwing_exception */
extern void T44f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] SERIALIZATION_FAILURE.set_throwing_exception */
extern void T69f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] OLD_VIOLATION.set_throwing_exception */
extern void T42f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] COM_FAILURE.set_throwing_exception */
extern void T49f13(GE_context* ac, T0* C, T0* a1);
/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_throwing_exception */
extern void T68f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] MISMATCH_FAILURE.set_throwing_exception */
extern void T66f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_FAILURE.set_throwing_exception */
extern void T48f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] IO_FAILURE.set_throwing_exception */
extern void T47f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_throwing_exception */
extern void T65f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_throwing_exception */
extern void T64f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] EXTERNAL_FAILURE.set_throwing_exception */
extern void T63f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] CREATE_ON_DEFERRED.set_throwing_exception */
extern void T62f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESUMPTION_FAILURE.set_throwing_exception */
extern void T61f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] RESCUE_FAILURE.set_throwing_exception */
extern void T60f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] EIFFEL_RUNTIME_PANIC.set_throwing_exception */
extern void T50f10(GE_context* ac, T0* C, T0* a1);
/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_throwing_exception */
extern void T46f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] LOOP_INVARIANT_VIOLATION.set_throwing_exception */
extern void T59f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] VARIANT_VIOLATION.set_throwing_exception */
extern void T58f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] BAD_INSPECT_VALUE.set_throwing_exception */
extern void T57f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] ROUTINE_FAILURE.set_throwing_exception */
extern void T40f11(GE_context* ac, T0* C, T0* a1);
/* [detachable] CHECK_VIOLATION.set_throwing_exception */
extern void T56f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] INVARIANT_VIOLATION.set_throwing_exception */
extern void T45f8(GE_context* ac, T0* C, T0* a1);
/* [detachable] FLOATING_POINT_FAILURE.set_throwing_exception */
extern void T55f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] POSTCONDITION_VIOLATION.set_throwing_exception */
extern void T54f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] PRECONDITION_VIOLATION.set_throwing_exception */
extern void T53f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] VOID_TARGET.set_throwing_exception */
extern void T38f7(GE_context* ac, T0* C, T0* a1);
/* [detachable] ISE_EXCEPTION_MANAGER.exception_from_code */
extern T0* T21f12(GE_context* ac, T0* C, T6 a1);
/* [detachable] SERIALIZATION_FAILURE.default_create */
extern T0* T69c6(GE_context* ac);
/* [detachable] OLD_VIOLATION.default_create */
extern T0* T42c6(GE_context* ac);
/* [detachable] COM_FAILURE.default_create */
extern T0* T49c12(GE_context* ac);
/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.default_create */
extern T0* T68c6(GE_context* ac);
/* [detachable] MISMATCH_FAILURE.default_create */
extern T0* T66c6(GE_context* ac);
/* [detachable] OPERATING_SYSTEM_FAILURE.default_create */
extern T0* T48c7(GE_context* ac);
/* [detachable] IO_FAILURE.set_code */
extern void T47f9(GE_context* ac, T0* C, T6 a1);
/* [detachable] IO_FAILURE.default_create */
extern T0* T47c8(GE_context* ac);
/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.default_create */
extern T0* T65c6(GE_context* ac);
/* [detachable] VOID_ASSIGNED_TO_EXPANDED.default_create */
extern T0* T64c6(GE_context* ac);
/* [detachable] EXTERNAL_FAILURE.default_create */
extern T0* T63c6(GE_context* ac);
/* [detachable] CREATE_ON_DEFERRED.default_create */
extern T0* T62c6(GE_context* ac);
/* [detachable] RESUMPTION_FAILURE.default_create */
extern T0* T61c6(GE_context* ac);
/* [detachable] RESCUE_FAILURE.default_create */
extern T0* T60c6(GE_context* ac);
/* [detachable] EIFFEL_RUNTIME_PANIC.set_code */
extern void T50f9(GE_context* ac, T0* C, T6 a1);
/* [detachable] EIFFEL_RUNTIME_PANIC.code */
extern T6 T50f7(GE_context* ac, T0* C);
/* [detachable] EIFFEL_RUNTIME_PANIC.default_create */
extern T0* T50c8(GE_context* ac);
/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.default_create */
extern T0* T46c7(GE_context* ac);
/* [detachable] LOOP_INVARIANT_VIOLATION.default_create */
extern T0* T59c6(GE_context* ac);
/* [detachable] VARIANT_VIOLATION.default_create */
extern T0* T58c6(GE_context* ac);
/* [detachable] BAD_INSPECT_VALUE.default_create */
extern T0* T57c6(GE_context* ac);
/* [detachable] ROUTINE_FAILURE.default_create */
extern T0* T40c8(GE_context* ac);
/* [detachable] CHECK_VIOLATION.default_create */
extern T0* T56c6(GE_context* ac);
/* [detachable] INVARIANT_VIOLATION.default_create */
extern T0* T45c7(GE_context* ac);
/* [detachable] FLOATING_POINT_FAILURE.default_create */
extern T0* T55c6(GE_context* ac);
/* [detachable] POSTCONDITION_VIOLATION.default_create */
extern T0* T54c6(GE_context* ac);
/* [detachable] PRECONDITION_VIOLATION.default_create */
extern T0* T53c6(GE_context* ac);
/* [detachable] NO_MORE_MEMORY.set_code */
extern void T44f10(GE_context* ac, T0* C, T6 a1);
/* [detachable] NO_MORE_MEMORY.code */
extern T6 T44f7(GE_context* ac, T0* C);
/* [detachable] ISE_EXCEPTION_MANAGER.no_memory_exception_object_cell */
extern T0* T21f7(GE_context* ac, T0* C);
/* [detachable] CELL [[attached] NO_MORE_MEMORY].put */
extern T0* T29c2(GE_context* ac, T0* a1);
/* [detachable] NO_MORE_MEMORY.default_create */
extern T0* T44c8(GE_context* ac);
/* [detachable] VOID_TARGET.default_create */
extern T0* T38c6(GE_context* ac);
/* [detachable] ISE_EXCEPTION_MANAGER.exception_data */
extern T0* T21f11(GE_context* ac, T0* C);
/* [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]].put */
extern void T28f2(GE_context* ac, T0* C, T0* a1);
/* [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]].put */
extern T0* T28c2(GE_context* ac, T0* a1);
/* [detachable] ISE_EXCEPTION_MANAGER.exception_data_cell */
extern T0* T21f6(GE_context* ac, T0* C);
/* [detachable] ISE_EXCEPTION_MANAGER.once_raise */
extern void T21f15(GE_context* ac, T0* C, T0* a1);
/* [detachable] ISE_EXCEPTION_MANAGER.last_exception */
extern T0* T21f1(GE_context* ac, T0* C);
/* [detachable] ISE_EXCEPTION_MANAGER.init_exception_manager */
extern void T21f14(GE_context* ac, T0* C);
/* [detachable] CELL [[attached] NO_MORE_MEMORY].do_nothing */
extern void T29f3(GE_context* ac, T0* C);
/* [detachable] CELL [detachable EXCEPTION].do_nothing */
extern void T26f3(GE_context* ac, T0* C);
/* [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]].do_nothing */
extern void T28f3(GE_context* ac, T0* C);
/* [detachable] ISE_EXCEPTION_MANAGER.unraisable_exceptions */
extern T0* T21f5(GE_context* ac, T0* C);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].force */
extern void T27f37(GE_context* ac, T0* C, T6 a1, T6 a2);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].position */
extern T6 T27f22(GE_context* ac, T0* C);
/* [detachable] SPECIAL [[attached] INTEGER_32].force */
extern void T73f7(GE_context* ac, T0* C, T6 a1, T6 a2);
/* [detachable] SPECIAL [[attached] BOOLEAN].force */
extern void T74f5(GE_context* ac, T0* C, T1 a1, T6 a2);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].deleted_position */
extern T6 T27f21(GE_context* ac, T0* C, T6 a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].add_space */
extern void T27f39(GE_context* ac, T0* C);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].accommodate */
extern void T27f40(GE_context* ac, T0* C, T6 a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_indexes_map */
extern void T27f44(GE_context* ac, T0* C, T0* a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_deleted_marks */
extern void T27f43(GE_context* ac, T0* C, T0* a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_keys */
extern void T27f42(GE_context* ac, T0* C, T0* a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_content */
extern void T27f41(GE_context* ac, T0* C, T0* a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].put */
extern void T27f45(GE_context* ac, T0* C, T6 a1, T6 a2);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_conflict */
extern void T27f47(GE_context* ac, T0* C);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].found */
extern T1 T27f31(GE_context* ac, T0* C);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].occupied */
extern T1 T27f29(GE_context* ac, T0* C, T6 a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].empty_duplicate */
extern T0* T27f28(GE_context* ac, T0* C, T6 a1);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].compare_objects */
extern void T27f46(GE_context* ac, T0* C);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].soon_full */
extern T1 T27f20(GE_context* ac, T0* C);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].not_found */
extern T1 T27f19(GE_context* ac, T0* C);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].internal_search */
extern void T27f38(GE_context* ac, T0* C, T6 a1);
/* [detachable] ISE_EXCEPTION_MANAGER.unignorable_exceptions */
extern T0* T21f4(GE_context* ac, T0* C);
/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].do_nothing */
extern void T27f36(GE_context* ac, T0* C);
/* [detachable] MANAGED_POINTER.dispose */
extern void T79f7(GE_context* ac, T0* C);
/* POINTER.memory_free */
extern void T14f11(GE_context* ac, T14* C);
/* POINTER.default_pointer */
extern T14 T14f9(GE_context* ac, T14* C);
/* POINTER.c_free */
extern void T14f14(GE_context* ac, T14* C, T14 a1);
/* [detachable] ISE_RUNTIME.object_size */
extern T11 T71s1(GE_context* ac, T14 a1);
/* [detachable] PLATFORM.is_windows */
extern T1 T84s2(GE_context* ac);
/* Call to detachable EXCEPTION.set_type_name */
extern void T22x4276248T0(GE_context* ac, T0* C, T0* a1);
/* Call to detachable EXCEPTION.set_recipient_name */
extern void T22x4276251T0(GE_context* ac, T0* C, T0* a1);
/* Call to detachable EXCEPTION.set_description */
extern void T22x4276253T0(GE_context* ac, T0* C, T0* a1);
/* Call to detachable EXCEPTION.set_exception_trace */
extern void T22x4276247T0(GE_context* ac, T0* C, T0* a1);
/* Call to detachable EXCEPTION.set_throwing_exception */
extern void T22x4276252T0(GE_context* ac, T0* C, T0* a1);
extern T0* GE_mt31(T6 a1, T6 a2, T6 a3, T0* a4, T0* a5, T0* a6, T0* a7, T0* a8, T0* a9, T6 a10, T1 a11);
extern void GE_init_const1(void);
extern void GE_init_const(void);

#ifdef __cplusplus
}
#endif


/*
	description:

		"Part of ISE Eiffel runtime. Needed to compile the EiffelCOM library."

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2010-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_CECIL_H
#define EIF_CECIL_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*EIF_PROCEDURE)(EIF_REFERENCE, ...);
#define EIF_PROC EIF_PROCEDURE
typedef EIF_INTEGER_32 (*EIF_INTEGER_32_FUNCTION)(EIF_REFERENCE, ...); /* Returns an Eiffel Integer 32 bits */
#define EIF_INTEGER_FUNCTION EIF_INTEGER_32_FUNCTION
typedef EIF_REFERENCE (*EIF_REFERENCE_FUNCTION)(EIF_REFERENCE, ...); /* Returns an Eiffel Reference */
typedef EIF_POINTER (*EIF_POINTER_FUNCTION)(EIF_REFERENCE, ...); /* Returns an Eiffel Pointer */
typedef EIF_BOOLEAN (*EIF_BOOLEAN_FUNCTION)(EIF_REFERENCE, ...); /* Returns an Eiffel Boolean */
typedef EIF_CHARACTER_8 (*EIF_CHARACTER_8_FUNCTION)(EIF_REFERENCE, ...); /* Returns char */
#define EIF_CHARACTER_FUNCTION EIF_CHARACTER_8_FUNCTION
typedef EIF_REAL_64 (*EIF_REAL_64_FUNCTION)(EIF_REFERENCE, ...); /* Returns an Eiffel Double */
#define EIF_DOUBLE_FUNCTION EIF_REAL_64_FUNCTION
typedef EIF_REAL_32 (*EIF_REAL_32_FUNCTION)(EIF_REFERENCE, ...); /* Returns an Eiffel Real */
#define EIF_REAL_FUNCTION EIF_REAL_32_FUNCTION

extern EIF_PROCEDURE eif_procedure(char* rout, EIF_TYPE_ID cid);
#define eif_proc eif_procedure /* Use `eif_procedure' instead */
extern EIF_INTEGER_FUNCTION eif_integer_function(char* rout, EIF_TYPE_ID cid);
extern EIF_REFERENCE_FUNCTION eif_reference_function(char* rout, EIF_TYPE_ID cid);
extern EIF_POINTER_FUNCTION eif_pointer_function(char* rout, EIF_TYPE_ID cid);
extern EIF_BOOLEAN_FUNCTION eif_boolean_function(char* rout, EIF_TYPE_ID cid);
extern EIF_REAL_64_FUNCTION eif_real_64_function(char* rout, EIF_TYPE_ID cid);
#define eif_double_function(rout,cid) eif_real_64_function((rout),(cid))
extern EIF_REAL_32_FUNCTION eif_real_32_function(char* rout, EIF_TYPE_ID cid);
#define eif_real_function(rout,cid) eif_real_32_function((rout),(cid))
extern EIF_CHARACTER_8_FUNCTION eif_character_8_function(char* rout, EIF_TYPE_ID cid);
#define eif_character_function(rout,cid) eif_character_8_function((rout),(cid))
extern EIF_OBJECT eif_create(EIF_TYPE_ID cid);
extern EIF_TYPE_ID eif_type_id(char* type_string);
extern EIF_INTEGER eifaddr_offset(EIF_REFERENCE object, char *name, int * const ret);
#define eif_string(s) RTMS(s)
#define makestr(s,c) RTMS_EX((s),(c))
#define eifaddr(object,name,ret) ((void *) ((char *) object + eifaddr_offset (object, name, ret)))
#define eif_field(object,name,type) *(type *)(eifaddr(object,name, NULL)) /* Obsolete. Use "eif_attribute" instead. */
#define eif_attribute(object,name,type,ret) *(type *)(eifaddr(object,name,ret)) /* Returns the attribute of an object. Return status in "ret".*/

/* Miscellaneous useful functions. */

/* Make an Eiffel array from a C array:
 * `eif_array' is the direct reference to the Eiffel array.
 * `c_array' is the C array.
 * `nelts' the number of elements to copy in the eiffel array, it has to
 * be equal to `eif_array.count'.
 * type is an Eiffel type.
 */
#define eif_make_from_c(eif_array, c_array, nelts, type) \
	{ \
		EIF_REFERENCE area = eif_field(eif_array, "area", EIF_REFERENCE); \
		memcpy((type *)area, c_array, nelts * sizeof(type));\
	}

#define eif_type eiftype /* Dynamic type ID */
extern EIF_TYPE_ID eiftype(EIF_OBJECT object); /* Give dynamic type of EIF_OBJECT. Obsolete, use "eif_type_by_object". */
extern EIF_TYPE_ID eif_type_by_reference(EIF_REFERENCE object);
extern EIF_TYPE_INDEX eif_gen_param_id(EIF_TYPE_INDEX dftype, uint32_t pos);

#ifdef __cplusplus
}
#endif

#endif
/*
	description:

		"Part of ISE Eiffel runtime. Needed to compile the EiffelCOM library."

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2010-2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_PLUG_H
#define EIF_PLUG_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int nstcall;	/* Nested call global variable: signals a nested call and
					 * trigger an invariant check in generated C routines  */

#ifdef __cplusplus
}
#endif

#endif
/*
	description:

		"C functions used to implement class CONSOLE"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2006-2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_CONSOLE_H
#define EIF_CONSOLE_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern EIF_POINTER console_def(EIF_INTEGER file);
extern EIF_BOOLEAN console_eof(FILE* fp);
extern EIF_CHARACTER_8 console_separator(FILE* f);
extern void console_ps(FILE* f, char* str, EIF_INTEGER len);
extern void console_pr(FILE* f, EIF_REAL_32 number);
extern void console_pc(FILE* f, EIF_CHARACTER_8 c);
extern void console_pd(FILE* f, EIF_REAL_64 val);
extern void console_pi(FILE* f, EIF_INTEGER number);
extern void console_tnwl(FILE* f);
extern EIF_CHARACTER_8 console_readchar(FILE* f);
extern EIF_REAL_32 console_readreal(FILE* f);
extern EIF_INTEGER console_readint(FILE* f);
extern EIF_REAL_64 console_readdouble(FILE* f);
extern EIF_INTEGER console_readword(FILE* f, char* s, EIF_INTEGER bound, EIF_INTEGER start);
extern EIF_INTEGER console_readline(FILE* f, char* s, EIF_INTEGER bound, EIF_INTEGER start);
extern void console_next_line(FILE* f);
extern EIF_INTEGER console_readstream(FILE* f, char* s, EIF_INTEGER bound);
extern void console_file_close (FILE* f);

#ifdef __cplusplus
}
#endif

#endif
/*
	description:

		"C functions used to implement class FILE"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2006-2019, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_FILE_H
#define EIF_FILE_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#include <time.h>
#include <sys/stat.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Let's define the stat structure for our platforms. */
/* The definition is the same for both ANSI and Unicode versions on Windows. */
#ifdef EIF_WINDOWS
#	ifdef __LCC__
#		define rt_stat_buf	struct stat
#	elif defined EIF_64_BITS
#		define rt_stat_buf	struct _stat64
#	else
#		define rt_stat_buf	struct _stat64i32
#	endif
#else
#	define rt_stat_buf		struct stat
#endif

/*
 * Create directory `dirname'.
 */
extern void eif_file_mkdir(EIF_FILENAME dirname);

/*
 * Rename file `from' into `to'.
 */
extern void eif_file_rename(EIF_FILENAME from, EIF_FILENAME  to);

/*
 * Link file `from' into `to'.
 */
extern void eif_file_link(EIF_FILENAME from, EIF_FILENAME to);

/*
 * Delete file or directory `name'.
 */
extern void eif_file_unlink(EIF_FILENAME name);

/*
 * Open file `name' with the corresponding type `how'.
 */
extern EIF_POINTER eif_file_open(EIF_FILENAME name, int how);

/*
 * Open file `fd' with the corresponding type `how'.
 */
extern EIF_POINTER eif_file_dopen(int fd, int how);

/*
 * Reopen file `name' with the corresponding type `how' and substitute that
 * to the old stream described by `old'. This is useful to redirect 'stdout'
 * to another place, for instance.
 */
extern EIF_POINTER eif_file_reopen(EIF_FILENAME name, int how, FILE *old);

/*
 * Close the file.
 */
extern void eif_file_close(FILE *fp);

/*
 * Flush data held in stdio buffer.
 */
extern void eif_file_flush(FILE *fp);

/*
 * Return the associated file descriptor.
 */
extern EIF_INTEGER eif_file_fd(FILE *f);

/*
 * Get a character from `f'.
 */
extern EIF_CHARACTER_8 eif_file_gc(FILE *f);

/*
 * Get a string from `f' and fill it into `s' (at most `bound' characters),
 * with `start' being the amount of bytes already stored within s. This
 * means we really have to read (bound - start) characters.
 */
extern EIF_INTEGER eif_file_gs(FILE *f, char *s, EIF_INTEGER bound, EIF_INTEGER start);

/*
 * Read min (bound, remaining bytes in file) characters into `s' and
 * return the number of characters read.
 */
extern EIF_INTEGER eif_file_gss(FILE *f, char *s, EIF_INTEGER bound);

/*
 * Get a word from `f' and fill it into `s' (at most `bound' characters),
 * with `start' being the amount of bytes already stored within s. This
 * means we really have to read (bound - start) characters. Any leading
 * spaces are skipped.
 */
extern EIF_INTEGER eif_file_gw(FILE *f, char *s, EIF_INTEGER bound, EIF_INTEGER start);

/*
 * Look ahead one character. If EOF, return 0.
 */
extern EIF_CHARACTER_8 eif_file_lh(FILE *f);

/*
 * Size of file `fp'.
 */
extern EIF_INTEGER eif_file_size(FILE *fp);

/*
 * Read upto next input line.
 */
extern void eif_file_tnil(FILE *f);

/*
 * Current position within file.
 */
extern EIF_INTEGER eif_file_tell(FILE *f);

/*
 * Touch file `name' by setting both access and modification time to the
 * current time stamp. This external function exists only because there
 * is no way within UNIX_FILE to get the current time stamp. Otherwise,
 * we could simply call file_utime.
 */
extern void eif_file_touch(EIF_FILENAME name);

/*
 * Modify the modification and/or the access time stored in the file's
 * inode. The 'how' parameter tells which attributes should be set.
 */
extern void eif_file_utime(EIF_FILENAME name, time_t stamp, int how);

/*
 * This is an encapsulation of the stat() system call. The routine either
 * succeeds and returns or fails and raises the appropriate exception.
 */
extern int eif_file_stat(EIF_FILENAME path, rt_stat_buf *buf, int follow);

/*
 * Change permissions of file `name', using an interface like chmod(1).
 * The flag is true if permissions are to be added, 0 to remove them.
 */
extern void eif_file_perm(EIF_FILENAME name, char *who, char *what, int flag);

/*
 * Change permission mode on file `path'.
 */
extern void eif_file_chmod(EIF_FILENAME path, int mode);

/*
 * Change the owner of the file to `uid'.
 */
extern void eif_file_chown(EIF_FILENAME name, int uid);

/*
 * Change the group of the file to `gid'.
 */
extern void eif_file_chgrp(EIF_FILENAME name, int gid);

/*
 * Put new_line onto `f'.
 */
extern void eif_file_tnwl(FILE *f);

/*
 * Append a copy of `other' to `f'.
 */
extern void eif_file_append(FILE *f, FILE *other, EIF_INTEGER l);

/*
 * Write string `str' on `f'.
 */
extern void eif_file_ps(FILE *f, char *str, EIF_INTEGER len);

/*
 * Write character `c' on `f'.
 */
extern void eif_file_pc(FILE *f, char c);

/*
 * Go to absolute position `pos' counted from start.
 */
extern void eif_file_go(FILE *f, EIF_INTEGER pos);

/*
 * Go to absolute position `pos' counted from end.
 */
extern void eif_file_recede(FILE *f, EIF_INTEGER pos);

/*
 * Go to absolute position `pos' counted from current position.
 */
extern void eif_file_move(FILE *f, EIF_INTEGER pos);

/*
 * End of file.
 */
extern EIF_BOOLEAN eif_file_feof(FILE *fp);

/*
 * Test whether file exists or not. If `name' represents a symbolic link,
 * it will check that pointed file does exist.
 */
extern EIF_BOOLEAN eif_file_exists(EIF_FILENAME name);

/*
 * Test whether file exists or not without following the symbolic link
 * if `name' represents one.
 */
extern EIF_BOOLEAN eif_file_path_exists(EIF_FILENAME name);

/*
 * Check whether access permission `op' are possible on file `name' using
 * real UID and real GID. This is probably only useful to setuid or setgid
 * programs.
 */
extern EIF_BOOLEAN eif_file_access(EIF_FILENAME name, EIF_INTEGER op);

/*
 * Check whether the file `path' may be created: we need write permissions
 * in the parent directory and there must not be any file bearing that name
 * with no write permissions...
 */
extern EIF_BOOLEAN eif_file_creatable(EIF_FILENAME path, EIF_INTEGER nbytes);

/*
 * Get an integer from `f'.
 */
extern EIF_INTEGER eif_file_gi(FILE *f);

/*
 * Get a real from `f'.
 */
extern EIF_REAL_32 eif_file_gr(FILE *f);

/*
 * Get a double from `f'.
 */
extern EIF_REAL_64 eif_file_gd(FILE *f);

/*
 * Write `number' on `f'.
 */
extern void eif_file_pi(FILE *f, EIF_INTEGER number);

/*
 * Write `number' on `f'.
 */
extern void eif_file_pr(FILE *f, EIF_REAL_32 number);

/*
 * Write double `val' onto `f'.
 */
extern void eif_file_pd(FILE *f, EIF_REAL_64 val);

/*
 * Size of the stat structure. This is used by the Eiffel side to create
 * the area (special object) which will play the role of a stat buffer
 * structure.
 */
extern EIF_INTEGER stat_size(void);

/*
 * Check file permissions using effective UID and effective GID. The
 * current permission mode is held in the st_mode field of the stat()
 * buffer structure `buf'.
 */
extern EIF_BOOLEAN eif_file_eaccess(rt_stat_buf *buf, int op);

/*
 * Perform the field dereferencing from the appropriate stat structure,
 * which Eiffel cannot do directly.
 */
extern EIF_INTEGER eif_file_info(rt_stat_buf *buf, int op);

/*
 * Return the Eiffel string filled in with the name associated with `uid'
 * if found in /etc/passwd. Otherwise, return fill it in with the numeric
 * value.
 */
extern EIF_REFERENCE eif_file_owner(int uid);

/*
 * Return the Eiffel string filled in with the name associated with `gid'
 * if found in /etc/group. Otherwise, return fill it in with the numeric
 * value.
 */
extern EIF_REFERENCE eif_file_group(int gid);

/*
 * Get an integer from `f'.
 */
extern EIF_INTEGER eif_file_gib(FILE* f);

/*
 * Get a real from `f'.
 */
extern EIF_REAL_32 eif_file_grb(FILE* f);

/*
 * Get a double from `f'.
 */
extern EIF_REAL_64 eif_file_gdb(FILE* f);

/*
 * Open file `name' with the corresponding type `how'.
 */
extern EIF_POINTER eif_file_binary_open(EIF_FILENAME name, int how);

/*
 * Open file `fd' with the corresponding type `how'.
 */
extern EIF_POINTER eif_file_binary_dopen(int fd, int how);

/*
 * Reopen file `name' with the corresponding type `how' and substitute that
 * to the old stream described by `old'. This is useful to redirect 'stdout'
 * to another place, for instance.
 */
extern EIF_POINTER eif_file_binary_reopen(EIF_FILENAME name, int how, FILE* old);

/*
 * Write `number' on `f'.
 */
extern void eif_file_pib(FILE* f, EIF_INTEGER number);

/*
 * Write `number' on `f'.
 */
extern void eif_file_prb(FILE* f, EIF_REAL_32 number);

/*
 * Write double `val' onto `f'.
 */
extern void eif_file_pdb(FILE* f, EIF_REAL_64 val);

/*
 * Modification time of a file.
 * Seconds since epoch (01 January 1970) in UTC or 0 if time cannot be retrieved.
 */
extern EIF_INTEGER eif_file_date(EIF_FILENAME  name);

/*
 * Access time of a file.
 * Seconds since epoch (01 January 1970) in UTC or 0 if time cannot be retrieved.
 */
extern EIF_INTEGER eif_file_access_date(EIF_FILENAME name);

/*
 * Generate a temporary file with a name based on a template and
 * return a file descriptor to the file.
 * The template is overwritten with the name of the new file.
 * Return a non-zero file descriptor for the temporary file upon success, -1 otherwise.
 * `template'is the template to use for creating the temporary file.
 * It must match the rules for mk[s]temp (i.e. end in "XXXXXX").
 * On exit, it is updated with the new name.
 * `is_text_mode', if non-zero, then the temporary file is created
 * in text mode, otherwise in binary mode.<param>
 * Note: Code was inspired from https://github.com/mirror/mingw-w64/blob/master/mingw-w64-crt/misc/mkstemp.c
 */
extern EIF_INTEGER eif_file_mkstemp(EIF_FILENAME a_template, EIF_BOOLEAN is_text_mode);

#ifdef __cplusplus
}
#endif

#endif
/*
	description:

		"C functions used to implement class EXCEPTIONS"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2006-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_EXCEPT_H
#define EIF_EXCEPT_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif
#ifndef GE_EXCEPTION_H
#include "ge_exception.h"
#endif

#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Predefined exception codes.
 */
#define EN_VOID		GE_EX_VOID			/* Feature applied to void reference */
#define EN_MEM		GE_EX_MEM			/* No more memory */
#define EN_PRE		GE_EX_PRE			/* Pre-condition violated */
#define EN_POST		GE_EX_POST			/* Post-condition violated */
#define EN_FLOAT	GE_EX_FLOAT			/* Floating point exception (signal SIGFPE) */
#define EN_CINV		GE_EX_CINV			/* Class invariant violated */
#define EN_CHECK	GE_EX_CHECK			/* Assertion violated */
#define EN_FAIL		GE_EX_FAIL			/* Routine failure */
#define EN_WHEN		GE_EX_WHEN			/* Unmatched inspect value */
#define EN_VAR		GE_EX_VAR			/* Non-decreasing loop variant */
#define EN_LINV		GE_EX_LINV			/* Loop invariant violated */
#define EN_SIG		GE_EX_SIG			/* Operating system signal */
#define EN_BYE		GE_EX_BYE			/* Eiffel run-time panic */
#define EN_RESC		GE_EX_RESC			/* Exception in rescue clause */
#define EN_OMEM		GE_EX_OMEM			/* Out of memory (cannot be ignored) */
#define EN_RES		GE_EX_RES			/* Resumption failed (retry did not succeed) */
#define EN_CDEF		GE_EX_CDEF			/* Create on deferred */
#define EN_EXT		GE_EX_EXT			/* External event */
#define EN_VEXP		GE_EX_VEXP			/* Void assigned to expanded */
#define EN_HDLR		GE_EX_HDLR			/* Exception in signal handler */
#define EN_IO		GE_EX_IO			/* I/O error */
#define EN_SYS		GE_EX_SYS			/* Operating system error */
#define EN_RETR		GE_EX_RETR			/* Retrieval error */
#define EN_PROG		GE_EX_PROG			/* Developer exception */
#define EN_FATAL	GE_EX_FATAL			/* Eiffel run-time fatal error */
#define EN_DOL		GE_EX_DOL			/* $ applied to melted feature */
#define EN_ISE_IO	GE_EX_ISE_IO		/* I/O error raised by the ISE Eiffel runtime */
#define EN_COM		GE_EX_COM			/* COM error raised by EiffelCOM runtime */
#define EN_RT_CHECK	GE_EX_RT_CHECK		/* Runtime check error such as out-of-bound array access */
#define EN_OLD		GE_EX_OLD			/* Old violation */
#define EN_SEL		GE_EX_SEL			/* Serialization failure */
#define EN_DIRTY	GE_EX_DIRTY			/* SCOOP processor dirty exception. */
#define EN_NEX		GE_EX_NEX			/* Number of internal exceptions */

/*
 * Raise an Eiffel exception.
 */
extern void eraise(const char* name, long code);

/*
 * Raise an Eiffel exception of the given code with no associated tag.
 */
extern void xraise(int code);

/*
 * Raise an "Operating system error" exception.
 */
extern void esys(void);

/*
 * As a special case, an I/O error is raised when a system call which is I/O bound fails.
 */
extern void eise_io(const char* tag);

/*
 * Raise a "No more memory" exception.
 */
extern void enomem(void);

/*
 * Raise EiffelCOM exception.
 */
extern void com_eraise(const char* tag, long num);

/*
 * Terminate execution with exit status `code',
 * without triggering an exception.
 */
extern void esdie(int code);

/*
 * Exception tag associated with `code'.
 * This is a duplication from Eiffel classes, but still used for trace printing and in EiffelCom.
 */
extern EIF_REFERENCE eename(long except);

/*
 * Is exception `ex' defined?
 * Used in EiffelCOM.
 */
extern char eedefined(long ex);

/*
 * Enable/diable printing of the exception trace.
 * Per thead information.
 */
extern void eetrace(char b);

/*
 * Is current execution during rescue?
 */
extern EIF_BOOLEAN eif_is_in_rescue(void);

#ifdef EIF_WINDOWS
/*
 * Set default exception handler.
 */
extern void set_windows_exception_filter(void);
#endif

/*
 * Used in EiffelCOM.
 */
#define echval GE_current_context()->exception_code
#define echtg GE_current_context()->exception_tag

#ifdef __cplusplus
}
#endif

#endif
/*
	description:

		"C functions used to implement class REAL"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2006-2019, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_REAL_H
#define GE_REAL_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#include <math.h>

#ifndef GE_power
#define GE_power(x,y) pow((x),(y))
#endif
#define GE_ceiling(x) ceil(x)
#define GE_floor(x) floor(x)

extern EIF_NATURAL_32 GE_real_32_to_bits (EIF_REAL_32 v);
extern EIF_NATURAL_64 GE_real_64_to_bits (EIF_REAL_64 v);
extern EIF_REAL_32 GE_real_32_from_bits (EIF_NATURAL_32 v);
extern EIF_REAL_64 GE_real_64_from_bits (EIF_NATURAL_64 v);

#define GE_real_32_is_nan(v) ((v) != (v) ? EIF_TRUE : ((GE_real_32_to_bits(v) & ~GE_nat32(0x80000000)) > GE_nat32(0x7FF00000)))
#define GE_real_64_is_nan(v) ((v) != (v) ? EIF_TRUE : ((GE_real_64_to_bits(v) & ~GE_nat64(0x8000000000000000)) > GE_nat64(0x7FF0000000000000)))
#define GE_real_32_is_negative_infinity(v) (GE_real_32_to_bits(v) == GE_nat32(0xFF800000))
#define GE_real_64_is_negative_infinity(v) (GE_real_64_to_bits(v) == GE_nat64(0xFFF0000000000000))
#define GE_real_32_is_positive_infinity(v) (GE_real_32_to_bits(v) == GE_nat32(0x7F800000))
#define GE_real_64_is_positive_infinity(v) (GE_real_64_to_bits(v) == GE_nat64(0x7FF0000000000000))
#define GE_real_32_nan GE_real_32_from_bits(GE_nat32(0x7FC00000))
#define GE_real_64_nan GE_real_64_from_bits(GE_nat64(0x7FF8000000000000))
#define GE_real_32_negative_infinity GE_real_32_from_bits(GE_nat32(0xFF800000))
#define GE_real_64_negative_infinity GE_real_64_from_bits(GE_nat64(0xFFF0000000000000))
#define GE_real_32_positive_infinity GE_real_32_from_bits(GE_nat32(0x7F800000))
#define GE_real_64_positive_infinity GE_real_64_from_bits(GE_nat64(0x7FF0000000000000))
#define GE_real_32_is_equal(v1,v2) ((v1) == (v1) ? (v1) == (v2) : (v2) != (v2))
#define GE_real_64_is_equal(v1,v2) ((v1) == (v1) ? (v1) == (v2) : (v2) != (v2))
#define GE_real_32_is_less(v1,v2) ((v1) == (v1) ? (v1) < (v2) : (v2) == (v2))
#define GE_real_64_is_less(v1,v2) ((v1) == (v1) ? (v1) < (v2) : (v2) == (v2))
#define GE_real_32_ieee_is_equal(v1,v2) (v1) == (v2)
#define GE_real_64_ieee_is_equal(v1,v2) (v1) == (v2)
#define GE_real_32_ieee_is_greater(v1,v2) isgreater(v1,v2)
#define GE_real_64_ieee_is_greater(v1,v2) isgreater(v1,v2)
#define GE_real_32_ieee_is_greater_equal(v1,v2) isgreaterequal(v1,v2)
#define GE_real_64_ieee_is_greater_equal(v1,v2) isgreaterequal(v1,v2)
#define GE_real_32_ieee_is_less(v1,v2) isless(v1,v2)
#define GE_real_64_ieee_is_less(v1,v2) isless(v1,v2)
#define GE_real_32_ieee_is_less_equal(v1,v2) islessequal(v1,v2)
#define GE_real_64_ieee_is_less_equal(v1,v2) islessequal(v1,v2)
#define GE_real_32_ieee_maximum_number(v1,v2) fmaxf(v1,v2)
#define GE_real_64_ieee_maximum_number(v1,v2) fmax(v1,v2)
#define GE_real_32_ieee_minimum_number(v1,v2) fminf(v1,v2)
#define GE_real_64_ieee_minimum_number(v1,v2) fmin(v1,v2)

#endif
/*
	description:

		"C functions used to implement Thread support"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_THREADS_H
#define EIF_THREADS_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef EIF_CECIL_H
#include "eif_cecil.h"
#endif
#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif
#ifdef GE_USE_THREADS
#ifndef GE_THREAD_H
#include "ge_thread.h"
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef GE_USE_THREADS

/*
 * Empty stubs for EiffelThread library so that it may be compiled against a non-multithreaded run-time.
 */

/* THREAD_ENVIRONMENT */
#define eif_thr_thread_id() NULL

/* THREAD_CONTROL */
#define eif_thr_yield()
#define eif_thr_join_all()

/* THREAD */
#define eif_thr_create_with_attr(current_obj, init_func, set_terminated_func, attr)
#define eif_thr_wait(obj,get_terminated)
#define eif_thr_wait_with_timeout(obj,get_terminated,tms) EIF_TRUE
#define eif_thr_last_thread() NULL
#define eif_thr_exit()

/* THREAD_ATTRIBUTES */
#define eif_thr_default_priority() 0
#define eif_thr_min_priority() 0
#define eif_thr_max_priority() 0

/* MUTEX */
#define eif_thr_mutex_create() NULL
#define eif_thr_mutex_lock(a_mutex_pointer)
#define eif_thr_mutex_trylock(a_mutex_pointer) EIF_TRUE
#define eif_thr_mutex_unlock(a_mutex_pointer)
#define eif_thr_mutex_destroy(a_mutex_pointer)

/* CONDITION_VARIABLE */
#define eif_thr_cond_create() NULL
#define eif_thr_cond_broadcast(a_cond_ptr)
#define eif_thr_cond_signal(a_cond_ptr)
#define eif_thr_cond_wait(a_cond_ptr,a_mutex_ptr)
#define eif_thr_cond_wait_with_timeout(a_cond_ptr,a_mutex_ptr,a_timeout) 1
#define eif_thr_cond_destroy(a_cond_ptr)

/* SEMAPHORE */
#define eif_thr_sem_create(a_count) NULL
#define eif_thr_sem_wait(a_sem_pointer)
#define eif_thr_sem_post(a_sem_pointer)
#define eif_thr_sem_trywait(a_sem_pointer) EIF_TRUE
#define eif_thr_sem_destroy(a_sem_pointer)

/* READ_WRITE_LOCK */
#define eif_thr_rwl_create() NULL
#define eif_thr_rwl_rdlock(a_read_write_lock_pointer)
#define eif_thr_rwl_unlock(a_read_write_lock_pointer)
#define eif_thr_rwl_wrlock(a_read_write_lock_pointer)
#define eif_thr_rwl_destroy(a_read_write_lock_pointer)

#else

/* THREAD_ENVIRONMENT */
#define eif_thr_thread_id() GE_thread_id()

/* THREAD_CONTROL */
#define eif_thr_yield() GE_thread_yield()
#define eif_thr_join_all() GE_thread_join_all()

/* THREAD */
#define eif_thr_create_with_attr(current_obj,init_func,set_terminated_func,attr) GE_thread_create_with_attr((current_obj),(void (*)(EIF_REFERENCE))(init_func),(void (*)(EIF_REFERENCE,EIF_BOOLEAN))(set_terminated_func),(EIF_THR_ATTR_TYPE*)(attr))
#define eif_thr_wait(obj,get_terminated) GE_thread_wait((obj),(EIF_BOOLEAN (*)(EIF_REFERENCE))(get_terminated))
#define eif_thr_wait_with_timeout(obj,get_terminated,tms) GE_thread_wait_with_timeout((obj),(EIF_BOOLEAN (*)(EIF_REFERENCE))(get_terminated),(tms))
#define eif_thr_last_thread() GE_last_thread_created()
#define eif_thr_exit() GE_thread_exit()

/* THREAD_ATTRIBUTES */
#define eif_thr_default_priority() GE_thread_default_priority()
#define eif_thr_min_priority() GE_thread_min_priority()
#define eif_thr_max_priority() GE_thread_max_priority()

/* MUTEX */
#define eif_thr_mutex_create() GE_mutex_create()
#define eif_thr_mutex_lock(a_mutex_pointer) GE_mutex_lock(a_mutex_pointer)
#define eif_thr_mutex_trylock(a_mutex_pointer) GE_mutex_try_lock(a_mutex_pointer)
#define eif_thr_mutex_unlock(a_mutex_pointer) GE_mutex_unlock(a_mutex_pointer)
#define eif_thr_mutex_destroy(a_mutex_pointer) GE_mutex_destroy(a_mutex_pointer)

/* CONDITION_VARIABLE */
#define eif_thr_cond_create() GE_condition_variable_create()
#define eif_thr_cond_broadcast(a_cond_ptr) GE_condition_variable_broadcast(a_cond_ptr)
#define eif_thr_cond_signal(a_cond_ptr) GE_condition_variable_signal(a_cond_ptr)
#define eif_thr_cond_wait(a_cond_ptr,a_mutex_ptr) GE_condition_variable_wait((a_cond_ptr),(a_mutex_ptr))
#define eif_thr_cond_wait_with_timeout(a_cond_ptr,a_mutex_ptr,a_timeout) GE_condition_variable_wait_with_timeout((a_cond_ptr),(a_mutex_ptr),(a_timeout))
#define eif_thr_cond_destroy(a_cond_ptr) GE_condition_variable_destroy(a_cond_ptr)

/* SEMAPHORE */
#define eif_thr_sem_create(a_count) GE_semaphore_create(a_count)
#define eif_thr_sem_wait(a_sem_pointer) GE_semaphore_wait(a_sem_pointer)
#define eif_thr_sem_post(a_sem_pointer) GE_semaphore_post(a_sem_pointer)
#define eif_thr_sem_trywait(a_sem_pointer) GE_semaphore_try_wait(a_sem_pointer)
#define eif_thr_sem_destroy(a_sem_pointer) GE_semaphore_destroy(a_sem_pointer)

/* READ_WRITE_LOCK */
#define eif_thr_rwl_create() GE_read_write_lock_create()
#define eif_thr_rwl_rdlock(a_read_write_lock_pointer) GE_read_write_lock_read_lock(a_read_write_lock_pointer)
#define eif_thr_rwl_unlock(a_read_write_lock_pointer) GE_read_write_lock_unlock(a_read_write_lock_pointer)
#define eif_thr_rwl_wrlock(a_read_write_lock_pointer) GE_read_write_lock_write_lock(a_read_write_lock_pointer)
#define eif_thr_rwl_destroy(a_read_write_lock_pointer) GE_read_write_lock_destroy(a_read_write_lock_pointer)

/* WEL */
#ifdef EIF_WINDOWS
#define eif_thr_create_wel_per_thread_data(a_size) GE_thread_create_wel_per_thread_data(a_size)
#endif

#endif

#ifdef __cplusplus
}
#endif

#endif
/*
	description:

		"Part of ISE Eiffel runtime. Needed to compile ISE's compiler."

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2019, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_SIZE_H
#define EIF_SIZE_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Basic sizes */
#define EIF_ALIGN	8	/* Alignment restrictions */
#define R64SIZ	8	/* Size of double */
#define I64SIZ	8	/* Size of integer 64 bits */
#define R32SIZ	4	/* Size of float */
#define REFSIZ	sizeof(char*)	/* Size of char* */
#define LNGSIZ	4	/* Size of long */
#define I16SIZ	2	/* Size of integer 16 bits */
#define CHRSIZ	1	/* Size of char */
#define PTRSIZ	sizeof(void*)	/* Size of a function pointer */

/* Macros used to access fields in the object */
#define REFACS(n) ((n)*REFSIZ)
#define CHRACS(n) ((n)*CHRSIZ)
#define I16ACS(n) ((n)*I16SIZ)
#define LNGACS(n) ((n)*LNGSIZ)
#define R32ACS(n) ((n)*R32SIZ)
#define I64ACS(n) ((n)*I64SIZ)
#define R64ACS(n) ((n)*R64SIZ)
#define PTRACS(n) ((n)*PTRSIZ)

#ifdef __cplusplus
}
#endif

#endif
/*
	description:

		"Part of ISE Eiffel runtime. Needed to compile the EiffelCOM library."

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2010-2019, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_GLOBALS_H
#define EIF_GLOBALS_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EXCEPTION_H
#include "ge_exception.h"
#endif
#ifndef EIF_THREADS_H
#include "eif_threads.h"
#endif
#ifndef EIF_SIZE_H
#include "eif_size.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef GE_USE_THREADS
#define EIF_GET_CONTEXT \
	GE_context* eif_globals = GE_current_context();
#else
#define EIF_GET_CONTEXT
#endif

#define GTCX EIF_GET_CONTEXT

#ifdef __cplusplus
}
#endif

#endif
/*
	description:

		"C declarations for the ISE Eiffel runtime."

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2006-2016, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_EIFFEL_H
#define EIF_EIFFEL_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif
#ifndef GE_STRING_H
#include "ge_string.h"
#endif
#ifndef EIF_GLOBALS_H
#include "eif_globals.h"
#endif
#ifndef EIF_EXCEPT_H
#include "eif_except.h"
#endif

#endif
/*
	description:

		"C functions used to implement class COM_FAILURE"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2016-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_COM_FAILURE_H
#define GE_COM_FAILURE_H
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern EIF_INTEGER GE_ccom_hresult(EIF_POINTER an_exception_code);

extern EIF_INTEGER GE_ccom_hresult_code(EIF_INTEGER an_hresult);

extern EIF_INTEGER GE_ccom_hresult_facility(EIF_INTEGER an_hresult);

/*
 * Get text from error `a_code'. It is up to the caller to free
 * the returned buffer using `GE_ccom_local_free'.
 */
extern EIF_POINTER GE_ccom_error_text(EIF_INTEGER a_code);

/*
 * Number of characters in `ptr'.
 */
extern EIF_INTEGER_32 GE_ccom_strlen(EIF_POINTER ptr);

/*
 * Number of bytes occupied by a TCHAR.
 */
extern EIF_INTEGER_32 GE_ccom_character_size(void);

/*
 * Free `a_ptr' using LocalFree.
 */
extern void GE_ccom_local_free(EIF_POINTER a_ptr);

#ifdef __cplusplus
}
#endif

#endif
#include <string.h>
#include <stdlib.h>
