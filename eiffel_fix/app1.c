#include "app.h"

#ifdef __cplusplus
extern "C" {
#endif

T0* GE_boxed1(T1 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb1));
	((T0*)(R))->id = 1;
	((T0*)(R))->flags = 0;
	((Tb1*)(R))->p1 = &(((Tb1*)(R))->z1);
	((Tb1*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer1(T1* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb1));
	((T0*)(R))->id = 1;
	((T0*)(R))->flags = 0;
	((Tb1*)(R))->p1 = a1;
	((Tb1*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed2(T2 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb2));
	((T0*)(R))->id = 2;
	((T0*)(R))->flags = 0;
	((Tb2*)(R))->p1 = &(((Tb2*)(R))->z1);
	((Tb2*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer2(T2* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb2));
	((T0*)(R))->id = 2;
	((T0*)(R))->flags = 0;
	((Tb2*)(R))->p1 = a1;
	((Tb2*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed3(T3 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb3));
	((T0*)(R))->id = 3;
	((T0*)(R))->flags = 0;
	((Tb3*)(R))->p1 = &(((Tb3*)(R))->z1);
	((Tb3*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer3(T3* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb3));
	((T0*)(R))->id = 3;
	((T0*)(R))->flags = 0;
	((Tb3*)(R))->p1 = a1;
	((Tb3*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed4(T4 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb4));
	((T0*)(R))->id = 4;
	((T0*)(R))->flags = 0;
	((Tb4*)(R))->p1 = &(((Tb4*)(R))->z1);
	((Tb4*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer4(T4* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb4));
	((T0*)(R))->id = 4;
	((T0*)(R))->flags = 0;
	((Tb4*)(R))->p1 = a1;
	((Tb4*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed5(T5 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb5));
	((T0*)(R))->id = 5;
	((T0*)(R))->flags = 0;
	((Tb5*)(R))->p1 = &(((Tb5*)(R))->z1);
	((Tb5*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer5(T5* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb5));
	((T0*)(R))->id = 5;
	((T0*)(R))->flags = 0;
	((Tb5*)(R))->p1 = a1;
	((Tb5*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed6(T6 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb6));
	((T0*)(R))->id = 6;
	((T0*)(R))->flags = 0;
	((Tb6*)(R))->p1 = &(((Tb6*)(R))->z1);
	((Tb6*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer6(T6* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb6));
	((T0*)(R))->id = 6;
	((T0*)(R))->flags = 0;
	((Tb6*)(R))->p1 = a1;
	((Tb6*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed7(T7 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb7));
	((T0*)(R))->id = 7;
	((T0*)(R))->flags = 0;
	((Tb7*)(R))->p1 = &(((Tb7*)(R))->z1);
	((Tb7*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer7(T7* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb7));
	((T0*)(R))->id = 7;
	((T0*)(R))->flags = 0;
	((Tb7*)(R))->p1 = a1;
	((Tb7*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed8(T8 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb8));
	((T0*)(R))->id = 8;
	((T0*)(R))->flags = 0;
	((Tb8*)(R))->p1 = &(((Tb8*)(R))->z1);
	((Tb8*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer8(T8* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb8));
	((T0*)(R))->id = 8;
	((T0*)(R))->flags = 0;
	((Tb8*)(R))->p1 = a1;
	((Tb8*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed9(T9 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb9));
	((T0*)(R))->id = 9;
	((T0*)(R))->flags = 0;
	((Tb9*)(R))->p1 = &(((Tb9*)(R))->z1);
	((Tb9*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer9(T9* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb9));
	((T0*)(R))->id = 9;
	((T0*)(R))->flags = 0;
	((Tb9*)(R))->p1 = a1;
	((Tb9*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed10(T10 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb10));
	((T0*)(R))->id = 10;
	((T0*)(R))->flags = 0;
	((Tb10*)(R))->p1 = &(((Tb10*)(R))->z1);
	((Tb10*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer10(T10* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb10));
	((T0*)(R))->id = 10;
	((T0*)(R))->flags = 0;
	((Tb10*)(R))->p1 = a1;
	((Tb10*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed11(T11 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb11));
	((T0*)(R))->id = 11;
	((T0*)(R))->flags = 0;
	((Tb11*)(R))->p1 = &(((Tb11*)(R))->z1);
	((Tb11*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer11(T11* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb11));
	((T0*)(R))->id = 11;
	((T0*)(R))->flags = 0;
	((Tb11*)(R))->p1 = a1;
	((Tb11*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed12(T12 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb12));
	((T0*)(R))->id = 12;
	((T0*)(R))->flags = 0;
	((Tb12*)(R))->p1 = &(((Tb12*)(R))->z1);
	((Tb12*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer12(T12* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb12));
	((T0*)(R))->id = 12;
	((T0*)(R))->flags = 0;
	((Tb12*)(R))->p1 = a1;
	((Tb12*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed13(T13 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb13));
	((T0*)(R))->id = 13;
	((T0*)(R))->flags = 0;
	((Tb13*)(R))->p1 = &(((Tb13*)(R))->z1);
	((Tb13*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer13(T13* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb13));
	((T0*)(R))->id = 13;
	((T0*)(R))->flags = 0;
	((Tb13*)(R))->p1 = a1;
	((Tb13*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed14(T14 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb14));
	((T0*)(R))->id = 14;
	((T0*)(R))->flags = 0;
	((Tb14*)(R))->p1 = &(((Tb14*)(R))->z1);
	((Tb14*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer14(T14* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb14));
	((T0*)(R))->id = 14;
	((T0*)(R))->flags = 0;
	((Tb14*)(R))->p1 = a1;
	((Tb14*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed70(T70 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb70));
	((T0*)(R))->id = 70;
	((T0*)(R))->flags = 0;
	((Tb70*)(R))->p1 = &(((Tb70*)(R))->z1);
	((Tb70*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer70(T70* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb70));
	((T0*)(R))->id = 70;
	((T0*)(R))->flags = 0;
	((Tb70*)(R))->p1 = a1;
	((Tb70*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed77(T77 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb77));
	((T0*)(R))->id = 77;
	((T0*)(R))->flags = 0;
	((Tb77*)(R))->p1 = &(((Tb77*)(R))->z1);
	((Tb77*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer77(T77* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb77));
	((T0*)(R))->id = 77;
	((T0*)(R))->flags = 0;
	((Tb77*)(R))->p1 = a1;
	((Tb77*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed83(T83 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb83));
	((T0*)(R))->id = 83;
	((T0*)(R))->flags = 0;
	((Tb83*)(R))->p1 = &(((Tb83*)(R))->z1);
	((Tb83*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer83(T83* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb83));
	((T0*)(R))->id = 83;
	((T0*)(R))->flags = 0;
	((Tb83*)(R))->p1 = a1;
	((Tb83*)(R))->z1 = *a1;
	return R;
}

T0* GE_boxed88(T88 a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb88));
	((T0*)(R))->id = 88;
	((T0*)(R))->flags = 0;
	((Tb88*)(R))->p1 = &(((Tb88*)(R))->z1);
	((Tb88*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed_pointer88(T88* a1)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(Tb88));
	((T0*)(R))->id = 88;
	((T0*)(R))->flags = 0;
	((Tb88*)(R))->p1 = a1;
	((Tb88*)(R))->z1 = *a1;
	return R;
}

T1 GE_default1 = 0;
T2 GE_default2 = 0;
T3 GE_default3 = 0;
T4 GE_default4 = 0;
T5 GE_default5 = 0;
T6 GE_default6 = 0;
T7 GE_default7 = 0;
T8 GE_default8 = 0;
T9 GE_default9 = 0;
T10 GE_default10 = 0;
T11 GE_default11 = 0;
T12 GE_default12 = 0;
T13 GE_default13 = 0;
T14 GE_default14 = 0;
T15 GE_default15 = {15,0,offsetof(T15, z2),0,0,{0}};
T16 GE_default16 = {16,0,offsetof(T16, z2),0,0,{0}};
T17 GE_default17 = {17,0,0,0,0,0};
T18 GE_default18 = {18,0,0,0,0};
T21 GE_default21 = {21,0};
T25 GE_default25 = {25,0,0,0,0,0};
T26 GE_default26 = {26,0,0};
T27 GE_default27 = {27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T28 GE_default28 = {28,0,0};
T29 GE_default29 = {29,0,0};
T30 GE_default30 = {30,0,0,0};
T31 GE_default31 = {31,0,0,0,0,0,0,0,0,0,0,0,0};
T32 GE_default32 = {32,0,0,0};
T33 GE_default33 = {33,0,0,0};
T34 GE_default34 = {34,0,0,0};
T35 GE_default35 = {35,0,0,0,0,0};
T36 GE_default36 = {36,0,0};
T38 GE_default38 = {38,0,0,0,0,0,0};
T40 GE_default40 = {40,0,0,0,0,0,0,0,0};
T42 GE_default42 = {42,0,0,0,0,0,0};
T44 GE_default44 = {44,0,0,0,0,0,0,0};
T45 GE_default45 = {45,0,0,0,0,0,0,0};
T46 GE_default46 = {46,0,0,0,0,0,0,0};
T47 GE_default47 = {47,0,0,0,0,0,0,0,0};
T48 GE_default48 = {48,0,0,0,0,0,0,0};
T49 GE_default49 = {49,0,0,0,0,0,0,0,0,0};
T50 GE_default50 = {50,0,0,0,0,0,0,0};
T53 GE_default53 = {53,0,0,0,0,0,0};
T54 GE_default54 = {54,0,0,0,0,0,0};
T55 GE_default55 = {55,0,0,0,0,0,0};
T56 GE_default56 = {56,0,0,0,0,0,0};
T57 GE_default57 = {57,0,0,0,0,0,0};
T58 GE_default58 = {58,0,0,0,0,0,0};
T59 GE_default59 = {59,0,0,0,0,0,0};
T60 GE_default60 = {60,0,0,0,0,0,0};
T61 GE_default61 = {61,0,0,0,0,0,0};
T62 GE_default62 = {62,0,0,0,0,0,0};
T63 GE_default63 = {63,0,0,0,0,0,0};
T64 GE_default64 = {64,0,0,0,0,0,0};
T65 GE_default65 = {65,0,0,0,0,0,0};
T66 GE_default66 = {66,0,0,0,0,0,0};
T67 GE_default67 = {67,0,0,0,0,0,0};
T68 GE_default68 = {68,0,0,0,0,0,0};
T69 GE_default69 = {69,0,0,0,0,0,0};
T70 GE_default70 = {0};
T72 GE_default72 = {72,0};
T73 GE_default73 = {73,0,offsetof(T73, z2),0,0,{0}};
T74 GE_default74 = {74,0,offsetof(T74, z2),0,0,{0}};
T76 GE_default76 = {76,0,0,0,0,0,0,0};
T77 GE_default77 = {0};
T78 GE_default78 = {78,0,0};
T79 GE_default79 = {79,0,0,0,0};
T81 GE_default81 = {81,0,0,0,0};
T82 GE_default82 = {82,0};
T83 GE_default83 = {0};
T86 GE_default86 = {86,0,offsetof(T86, z2),0,0,{0}};
T88 GE_default88 = {0};
T89 GE_default89 = {89,0,0,0,0,0,0,0,0,0,0,0,0};
T93 GE_default93 = {93,0,0,0,0,0};
T94 GE_default94 = {94,0,offsetof(T94, z2),0,0,{0}};

T0* GE_new_str8(T6 c)
{
	T0* R;
	T0* t1;
	t1 = GE_new15(c+1, EIF_FALSE);
	*(T15*)t1 = GE_default15;
	((T15*)(t1))->a2 = (c+1);
	((T15*)(t1))->a1 = 0;
	R = GE_new17(EIF_TRUE);
	((T17*)(R))->a1 = t1;
	return R;
}

T0* GE_new_str32(T6 c)
{
	T0* R;
	T0* t1;
	t1 = GE_new16(c+1, EIF_FALSE);
	*(T16*)t1 = GE_default16;
	((T16*)(t1))->a2 = (c+1);
	((T16*)(t1))->a1 = 0;
	R = GE_new18(EIF_TRUE);
	((T18*)(R))->a1 = t1;
	return R;
}

T0* GE_new_istr8(T6 c)
{
	T0* R;
	R = EIF_VOID;
	return R;
}

T0* GE_new_istr32(T6 c)
{
	T0* R;
	R = EIF_VOID;
	return R;
}

/* New instance of type [detachable] SPECIAL [CHARACTER_8] */
T0* GE_new15(T6 a1, T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T15)+(a1>1?(a1-1):0)*sizeof(T2));
	if (initialize) {
		*(T15*)R = GE_default15;
		((T15*)(R))->a2 = a1;
		((T15*)(R))->a1 = 0;
#ifndef GE_malloc_atomic_cleared
		memset(((T15*)(R))->z2,0,a1*sizeof(T2));
#endif
	}
	return R;
}

/* New instance of type [detachable] SPECIAL [CHARACTER_32] */
T0* GE_new16(T6 a1, T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T16)+(a1>1?(a1-1):0)*sizeof(T3));
	if (initialize) {
		*(T16*)R = GE_default16;
		((T16*)(R))->a2 = a1;
		((T16*)(R))->a1 = 0;
#ifndef GE_malloc_atomic_cleared
		memset(((T16*)(R))->z2,0,a1*sizeof(T3));
#endif
	}
	return R;
}

/* New instance of type [detachable] STRING_8 */
T0* GE_new17(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T17));
	if (initialize) {
		*(T17*)R = GE_default17;
	}
	return R;
}

/* New instance of type [detachable] STRING_32 */
T0* GE_new18(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T18));
	if (initialize) {
		*(T18*)R = GE_default18;
	}
	return R;
}

/* New instance of type [detachable] ISE_EXCEPTION_MANAGER */
T0* GE_new21(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T21));
	if (initialize) {
		*(T21*)R = GE_default21;
	}
	return R;
}

/* New instance of type [detachable] APP */
T0* GE_new25(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T25));
	if (initialize) {
		*(T25*)R = GE_default25;
	}
	return R;
}

/* New instance of type [detachable] CELL [detachable EXCEPTION] */
T0* GE_new26(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T26));
	if (initialize) {
		*(T26*)R = GE_default26;
	}
	return R;
}

/* New instance of type [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32] */
T0* GE_new27(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T27));
	if (initialize) {
		*(T27*)R = GE_default27;
	}
	return R;
}

/* New instance of type [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]] */
T0* GE_new28(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T28));
	if (initialize) {
		*(T28*)R = GE_default28;
	}
	return R;
}

/* New instance of type [detachable] CELL [[attached] NO_MORE_MEMORY] */
T0* GE_new29(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T29));
	if (initialize) {
		*(T29*)R = GE_default29;
	}
	return R;
}

/* New instance of type detachable C_STRING */
T0* GE_new30(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T30));
	if (initialize) {
		*(T30*)R = GE_default30;
	}
	return R;
}

/* New instance of type [detachable] TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN] */
T0* GE_new31(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T31));
	if (initialize) {
		*(T31*)R = GE_default31;
	}
	return R;
}

/* New instance of type [detachable] PERSON */
T0* GE_new32(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T32));
	if (initialize) {
		*(T32*)R = GE_default32;
	}
	return R;
}

/* New instance of type [detachable] STUDENT */
T0* GE_new33(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T33));
	if (initialize) {
		*(T33*)R = GE_default33;
	}
	return R;
}

/* New instance of type [detachable] FACULTY */
T0* GE_new34(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T34));
	if (initialize) {
		*(T34*)R = GE_default34;
	}
	return R;
}

/* New instance of type [detachable] RESEARCH_ASSISTANT */
T0* GE_new35(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T35));
	if (initialize) {
		*(T35*)R = GE_default35;
	}
	return R;
}

/* New instance of type [detachable] STD_FILES */
T0* GE_new36(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T36));
	if (initialize) {
		*(T36*)R = GE_default36;
	}
	return R;
}

/* New instance of type [detachable] VOID_TARGET */
T0* GE_new38(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T38));
	if (initialize) {
		*(T38*)R = GE_default38;
	}
	return R;
}

/* New instance of type [detachable] ROUTINE_FAILURE */
T0* GE_new40(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T40));
	if (initialize) {
		*(T40*)R = GE_default40;
	}
	return R;
}

/* New instance of type [detachable] OLD_VIOLATION */
T0* GE_new42(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T42));
	if (initialize) {
		*(T42*)R = GE_default42;
	}
	return R;
}

/* New instance of type [detachable] NO_MORE_MEMORY */
T0* GE_new44(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T44));
	if (initialize) {
		*(T44*)R = GE_default44;
	}
	return R;
}

/* New instance of type [detachable] INVARIANT_VIOLATION */
T0* GE_new45(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T45));
	if (initialize) {
		*(T45*)R = GE_default45;
	}
	return R;
}

/* New instance of type [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE */
T0* GE_new46(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T46));
	if (initialize) {
		*(T46*)R = GE_default46;
	}
	return R;
}

/* New instance of type [detachable] IO_FAILURE */
T0* GE_new47(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T47));
	if (initialize) {
		*(T47*)R = GE_default47;
	}
	return R;
}

/* New instance of type [detachable] OPERATING_SYSTEM_FAILURE */
T0* GE_new48(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T48));
	if (initialize) {
		*(T48*)R = GE_default48;
	}
	return R;
}

/* New instance of type [detachable] COM_FAILURE */
T0* GE_new49(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T49));
	if (initialize) {
		*(T49*)R = GE_default49;
	}
	return R;
}

/* New instance of type [detachable] EIFFEL_RUNTIME_PANIC */
T0* GE_new50(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T50));
	if (initialize) {
		*(T50*)R = GE_default50;
	}
	return R;
}

/* New instance of type [detachable] PRECONDITION_VIOLATION */
T0* GE_new53(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T53));
	if (initialize) {
		*(T53*)R = GE_default53;
	}
	return R;
}

/* New instance of type [detachable] POSTCONDITION_VIOLATION */
T0* GE_new54(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T54));
	if (initialize) {
		*(T54*)R = GE_default54;
	}
	return R;
}

/* New instance of type [detachable] FLOATING_POINT_FAILURE */
T0* GE_new55(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T55));
	if (initialize) {
		*(T55*)R = GE_default55;
	}
	return R;
}

/* New instance of type [detachable] CHECK_VIOLATION */
T0* GE_new56(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T56));
	if (initialize) {
		*(T56*)R = GE_default56;
	}
	return R;
}

/* New instance of type [detachable] BAD_INSPECT_VALUE */
T0* GE_new57(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T57));
	if (initialize) {
		*(T57*)R = GE_default57;
	}
	return R;
}

/* New instance of type [detachable] VARIANT_VIOLATION */
T0* GE_new58(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T58));
	if (initialize) {
		*(T58*)R = GE_default58;
	}
	return R;
}

/* New instance of type [detachable] LOOP_INVARIANT_VIOLATION */
T0* GE_new59(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T59));
	if (initialize) {
		*(T59*)R = GE_default59;
	}
	return R;
}

/* New instance of type [detachable] RESCUE_FAILURE */
T0* GE_new60(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T60));
	if (initialize) {
		*(T60*)R = GE_default60;
	}
	return R;
}

/* New instance of type [detachable] RESUMPTION_FAILURE */
T0* GE_new61(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T61));
	if (initialize) {
		*(T61*)R = GE_default61;
	}
	return R;
}

/* New instance of type [detachable] CREATE_ON_DEFERRED */
T0* GE_new62(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T62));
	if (initialize) {
		*(T62*)R = GE_default62;
	}
	return R;
}

/* New instance of type [detachable] EXTERNAL_FAILURE */
T0* GE_new63(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T63));
	if (initialize) {
		*(T63*)R = GE_default63;
	}
	return R;
}

/* New instance of type [detachable] VOID_ASSIGNED_TO_EXPANDED */
T0* GE_new64(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T64));
	if (initialize) {
		*(T64*)R = GE_default64;
	}
	return R;
}

/* New instance of type [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE */
T0* GE_new65(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T65));
	if (initialize) {
		*(T65*)R = GE_default65;
	}
	return R;
}

/* New instance of type [detachable] MISMATCH_FAILURE */
T0* GE_new66(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T66));
	if (initialize) {
		*(T66*)R = GE_default66;
	}
	return R;
}

/* New instance of type [detachable] DEVELOPER_EXCEPTION */
T0* GE_new67(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T67));
	if (initialize) {
		*(T67*)R = GE_default67;
	}
	return R;
}

/* New instance of type [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE */
T0* GE_new68(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T68));
	if (initialize) {
		*(T68*)R = GE_default68;
	}
	return R;
}

/* New instance of type [detachable] SERIALIZATION_FAILURE */
T0* GE_new69(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T69));
	if (initialize) {
		*(T69*)R = GE_default69;
	}
	return R;
}

/* New instance of type [detachable] PRIMES */
T0* GE_new72(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T72));
	if (initialize) {
		*(T72*)R = GE_default72;
	}
	return R;
}

/* New instance of type [detachable] SPECIAL [[attached] INTEGER_32] */
T0* GE_new73(T6 a1, T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T73)+(a1>1?(a1-1):0)*sizeof(T6));
	if (initialize) {
		*(T73*)R = GE_default73;
		((T73*)(R))->a2 = a1;
		((T73*)(R))->a1 = 0;
#ifndef GE_malloc_atomic_cleared
		memset(((T73*)(R))->z2,0,a1*sizeof(T6));
#endif
	}
	return R;
}

/* New instance of type [detachable] SPECIAL [[attached] BOOLEAN] */
T0* GE_new74(T6 a1, T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T74)+(a1>1?(a1-1):0)*sizeof(T1));
	if (initialize) {
		*(T74*)R = GE_default74;
		((T74*)(R))->a2 = a1;
		((T74*)(R))->a1 = 0;
#ifndef GE_malloc_atomic_cleared
		memset(((T74*)(R))->z2,0,a1*sizeof(T1));
#endif
	}
	return R;
}

/* New instance of type [detachable] CONSOLE */
T0* GE_new76(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T76));
	if (initialize) {
		*(T76*)R = GE_default76;
	}
	return R;
}

/* New instance of type [detachable] CELL [[attached] INTEGER_32] */
T0* GE_new78(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T78));
	if (initialize) {
		*(T78*)R = GE_default78;
	}
	return R;
}

/* New instance of type [detachable] MANAGED_POINTER */
T0* GE_new79(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T79));
	GE_register_dispose(R,&T79f7);
	if (initialize) {
		*(T79*)R = GE_default79;
	}
	return R;
}

/* New instance of type [detachable] FILE_INFO */
T0* GE_new81(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T81));
	if (initialize) {
		*(T81*)R = GE_default81;
	}
	return R;
}

/* New instance of type [detachable] EXCEPTIONS */
T0* GE_new82(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T82));
	if (initialize) {
		*(T82*)R = GE_default82;
	}
	return R;
}

/* New instance of type [detachable] SPECIAL [[attached] NATURAL_8] */
T0* GE_new86(T6 a1, T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T86)+(a1>1?(a1-1):0)*sizeof(T8));
	if (initialize) {
		*(T86*)R = GE_default86;
		((T86*)(R))->a2 = a1;
		((T86*)(R))->a1 = 0;
#ifndef GE_malloc_atomic_cleared
		memset(((T86*)(R))->z2,0,a1*sizeof(T8));
#endif
	}
	return R;
}

/* New instance of type [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER */
T0* GE_new89(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T89));
	if (initialize) {
		*(T89*)R = GE_default89;
	}
	return R;
}

/* New instance of type [detachable] INTEGER_OVERFLOW_CHECKER */
T0* GE_new93(T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc(sizeof(T93));
	if (initialize) {
		*(T93*)R = GE_default93;
	}
	return R;
}

/* New instance of type [detachable] SPECIAL [[attached] NATURAL_64] */
T0* GE_new94(T6 a1, T1 initialize)
{
	T0* R;
	R = (T0*)GE_malloc_atomic(sizeof(T94)+(a1>1?(a1-1):0)*sizeof(T11));
	if (initialize) {
		*(T94*)R = GE_default94;
		((T94*)(R))->a2 = a1;
		((T94*)(R))->a1 = 0;
#ifndef GE_malloc_atomic_cleared
		memset(((T94*)(R))->z2,0,a1*sizeof(T11));
#endif
	}
	return R;
}

/* [detachable] APP.make */
T0* T25c7(GE_context* ac)
{
	T0* C;
	T0* t1;
	T6 t2;
	T0* t3;
	T1 t4;
	C = GE_new25(EIF_TRUE);
	((T25*)(C))->a1 = T32c3(ac);
	((T25*)(C))->a2 = T33c3(ac);
	((T25*)(C))->a3 = T34c3(ac);
	((T25*)(C))->a4 = T35c8(ac);
	T35f9(ac, GE_void(((T25*)(C))->a4));
	t1 = (T25f5(ac, C));
	t2 = (T25f6(ac, C, ((T25*)(C))->a1));
	t3 = (T6f4(ac, &t2));
	t3 = (T17f5(ac, GE_ms8("PERSON  size: ", 14), t3));
	t3 = (T17f5(ac, GE_void(t3), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t3);
	t1 = (T25f5(ac, C));
	t2 = (T25f6(ac, C, ((T25*)(C))->a2));
	t3 = (T6f4(ac, &t2));
	t3 = (T17f5(ac, GE_ms8("STUDENT size: ", 14), t3));
	t3 = (T17f5(ac, GE_void(t3), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t3);
	t1 = (T25f5(ac, C));
	t2 = (T25f6(ac, C, ((T25*)(C))->a3));
	t3 = (T6f4(ac, &t2));
	t3 = (T17f5(ac, GE_ms8("FACULTY size: ", 14), t3));
	t3 = (T17f5(ac, GE_void(t3), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t3);
	t1 = (T25f5(ac, C));
	t2 = (T25f6(ac, C, ((T25*)(C))->a4));
	t3 = (T6f4(ac, &t2));
	t3 = (T17f5(ac, GE_ms8("RESEARCH_ASSISTANT size: ", 25), t3));
	t3 = (T17f5(ac, GE_void(t3), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t3);
	T35f10(ac, GE_void(((T25*)(C))->a4));
	T35f11(ac, GE_void(((T25*)(C))->a4));
	t1 = (T25f5(ac, C));
	T36f5(ac, GE_void(t1), GE_ms8("-- print_student|faculty_addr_direct_field\n", 43));
	T25f8(ac, C, ((T25*)(C))->a4);
	T25f9(ac, C, ((T25*)(C))->a4);
	t1 = (T25f5(ac, C));
	T36f5(ac, GE_void(t1), GE_ms8("-- print_student|faculty_addr_via_accessor\n", 43));
	T25f10(ac, C, ((T25*)(C))->a4);
	T25f11(ac, C, ((T25*)(C))->a4);
	t1 = (T25f5(ac, C));
	T36f5(ac, GE_void(t1), GE_ms8("-- check reference identity\n", 28));
	t1 = (((T35*)(GE_void(((T25*)(C))->a4)))->a1);
	t3 = (((T35*)(GE_void(((T25*)(C))->a4)))->a2);
	t4 = (T1)(t1==t3);
	if (t4) {
		t1 = (T25f5(ac, C));
		T36f5(ac, GE_void(t1), GE_ms8("ra.addr  = ra.faculty_addr\n", 27));
	} else {
		t1 = (T25f5(ac, C));
		T36f5(ac, GE_void(t1), GE_ms8("ra.addr != ra.faculty_addr\n", 27));
	}
	t1 = (((T35*)(GE_void(((T25*)(C))->a4)))->a1);
	t3 = (((T35*)(GE_void(((T25*)(C))->a4)))->a3);
	t4 = (T1)(t1==t3);
	if (t4) {
		t1 = (T25f5(ac, C));
		T36f5(ac, GE_void(t1), GE_ms8("ra.addr  = ra.student_addr\n", 27));
	} else {
		t1 = (T25f5(ac, C));
		T36f5(ac, GE_void(t1), GE_ms8("ra.addr != ra.student_addr\n", 27));
	}
	t1 = (((T35*)(GE_void(((T25*)(C))->a4)))->a3);
	t3 = (((T35*)(GE_void(((T25*)(C))->a4)))->a2);
	t4 = (T1)(t1==t3);
	if (t4) {
		t1 = (T25f5(ac, C));
		T36f5(ac, GE_void(t1), GE_ms8("ra.student_addr  = ra.faculty_addr\n", 35));
	} else {
		t1 = (T25f5(ac, C));
		T36f5(ac, GE_void(t1), GE_ms8("ra.student_addr != ra.faculty_addr\n", 35));
	}
	t1 = (T25f5(ac, C));
	T36f5(ac, GE_void(t1), GE_ms8("-- test some assignment: suppose ra moved both lab2 and dorm2\n", 62));
	T35f12(ac, GE_void(((T25*)(C))->a4), GE_ms8("lab2", 4));
	T35f9(ac, GE_void(((T25*)(C))->a4));
	T35f13(ac, GE_void(((T25*)(C))->a4), GE_ms8("dorm2", 5));
	T35f9(ac, GE_void(((T25*)(C))->a4));
	return C;
}

/* [detachable] RESEARCH_ASSISTANT.set_student_addr */
void T35f13(GE_context* ac, T0* C, T0* a1)
{
	((T35*)(C))->a3 = a1;
}

/* [detachable] RESEARCH_ASSISTANT.set_faculty_addr */
void T35f12(GE_context* ac, T0* C, T0* a1)
{
	((T35*)(C))->a2 = a1;
}

/* [detachable] APP.print_faculty_addr_via_accessor */
void T25f11(GE_context* ac, T0* C, T0* a1)
{
	T0* t1;
	T0* t2;
	T0* t3;
	t1 = (T25f5(ac, C));
	t2 = (((T35*)(GE_void(a1)))->a4);
	t2 = (T17f5(ac, GE_void(t2), GE_ms8(" as FACULTY.addr: ", 18)));
	t3 = (T35f6(ac, GE_void(a1)));
	t2 = (T17f5(ac, GE_void(t2), t3));
	t2 = (T17f5(ac, GE_void(t2), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t2);
}

/* [detachable] RESEARCH_ASSISTANT.get_faculty_addr */
T0* T35f6(GE_context* ac, T0* C)
{
	T0* R = 0;
	R = ((T35*)(C))->a2;
	return R;
}

/* [detachable] APP.print_student_addr_via_accessor */
void T25f10(GE_context* ac, T0* C, T0* a1)
{
	T0* t1;
	T0* t2;
	T0* t3;
	t1 = (T25f5(ac, C));
	t2 = (((T35*)(GE_void(a1)))->a4);
	t2 = (T17f5(ac, GE_void(t2), GE_ms8(" as STUDENT.addr: ", 18)));
	t3 = (T35f5(ac, GE_void(a1)));
	t2 = (T17f5(ac, GE_void(t2), t3));
	t2 = (T17f5(ac, GE_void(t2), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t2);
}

/* [detachable] RESEARCH_ASSISTANT.get_student_addr */
T0* T35f5(GE_context* ac, T0* C)
{
	T0* R = 0;
	R = ((T35*)(C))->a3;
	return R;
}

/* [detachable] APP.print_faculty_addr_direct_field */
void T25f9(GE_context* ac, T0* C, T0* a1)
{
	T0* t1;
	T0* t2;
	T0* t3;
	t1 = (T25f5(ac, C));
	t2 = (((T35*)(GE_void(a1)))->a4);
	t2 = (T17f5(ac, GE_void(t2), GE_ms8(" as FACULTY.addr: ", 18)));
	t3 = (((T35*)(GE_void(a1)))->a1);
	t2 = (T17f5(ac, GE_void(t2), t3));
	t2 = (T17f5(ac, GE_void(t2), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t2);
}

/* [detachable] APP.print_student_addr_direct_field */
void T25f8(GE_context* ac, T0* C, T0* a1)
{
	T0* t1;
	T0* t2;
	T0* t3;
	t1 = (T25f5(ac, C));
	t2 = (((T35*)(GE_void(a1)))->a4);
	t2 = (T17f5(ac, GE_void(t2), GE_ms8(" as STUDENT.addr: ", 18)));
	t3 = (((T35*)(GE_void(a1)))->a1);
	t2 = (T17f5(ac, GE_void(t2), t3));
	t2 = (T17f5(ac, GE_void(t2), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t2);
}

/* [detachable] RESEARCH_ASSISTANT.take_rest */
void T35f11(GE_context* ac, T0* C)
{
	T0* t1;
	T0* t2;
	T0* t3;
	t1 = (T35f7(ac, C));
	t2 = (T17f5(ac, GE_void(((T35*)(C))->a4), GE_ms8(" take_rest in the: ", 19)));
	t3 = (T35f5(ac, C));
	t2 = (T17f5(ac, GE_void(t2), t3));
	t2 = (T17f5(ac, GE_void(t2), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t2);
}

/* [detachable] RESEARCH_ASSISTANT.io */
T0* T35f7(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	if (GE_process_onces->reference_status[0]) {
		if (GE_process_onces->reference_exception[0]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[0]);
		}
		return GE_process_onces->reference_value[0];
	} else {
		GE_process_onces->reference_status[0] = '\1';
		GE_process_onces->reference_value[0] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[0] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T36c4(ac);
	GE_process_onces->reference_value[0] = R;
	T36f6(ac, GE_void(R));
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] STD_FILES.set_output_default */
void T36f6(GE_context* ac, T0* C)
{
	((T36*)(C))->a1 = (T36f3(ac, C));
}

/* [detachable] STD_FILES.output */
T0* T36f3(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	if (GE_process_onces->reference_status[1]) {
		if (GE_process_onces->reference_exception[1]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[1]);
		}
		return GE_process_onces->reference_value[1];
	} else {
		GE_process_onces->reference_status[1] = '\1';
		GE_process_onces->reference_value[1] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[1] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T76c13(ac, GE_ms8("stdout", 6));
	GE_process_onces->reference_value[1] = R;
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] CONSOLE.make_open_stdout */
T0* T76c13(GE_context* ac, T0* a1)
{
	T0* C;
	C = GE_new76(EIF_TRUE);
	T76f15(ac, C, a1);
	((T76*)(C))->a1 = (T76f7(ac, C, (T6)(GE_int32(1))));
	T76f16(ac, C);
	return C;
}

/* [detachable] CONSOLE.set_write_mode */
void T76f16(GE_context* ac, T0* C)
{
	((T76*)(C))->a3 = (T6)(GE_int32(2));
}

/* [detachable] CONSOLE.console_def */
T14 T76f7(GE_context* ac, T0* C, T6 a1)
{
	T14 R = 0;
	{
	R = (T14)(console_def(a1));
	}
	return R;
}

/* [detachable] CONSOLE.make_with_name */
void T76f15(GE_context* ac, T0* C, T0* a1)
{
	T76f15p1(ac, C, a1);
	((T76*)(C))->a2 = T18c4(ac);
}

/* [detachable] STRING_32.make_empty */
T0* T18c4(GE_context* ac)
{
	T0* C;
	C = GE_new18(EIF_TRUE);
	T18f5(ac, C, (T6)(GE_int32(0)));
	return C;
}

/* [detachable] STRING_32.make */
void T18f5(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	((T18*)(C))->a2 = (T6)(GE_int32(0));
	((T18*)(C))->a3 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T18*)(C))->a1 = T16c4(ac, (T3)(GE_nat32(0)), t1);
}

/* [detachable] SPECIAL [CHARACTER_32].make_filled */
T0* T16c4(GE_context* ac, T3 a1, T6 a2)
{
	T0* C;
	T6 t1;
	C = GE_new16(a2, EIF_TRUE);
	T16f5(ac, C, a2);
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	T16f6(ac, C, a1, (T6)(GE_int32(0)), t1);
	return C;
}

/* [detachable] SPECIAL [CHARACTER_32].fill_with */
void T16f6(GE_context* ac, T0* C, T3 a1, T6 a2, T6 a3)
{
	T6 t1;
	T1 t2;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	l1 = a2;
	t1 = ((T6)((a3)+((T6)(GE_int32(1)))));
	l3 = (T6f18(ac, &(((T16*)(C))->a1), t1));
	l2 = l3;
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		((T16*)(C))->z2[l1] = (a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
	l1 = l3;
	l2 = ((T6)((a3)+((T6)(GE_int32(1)))));
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		T16f8(ac, C, a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
}

/* [detachable] SPECIAL [CHARACTER_32].extend */
void T16f8(GE_context* ac, T0* C, T3 a1)
{
	T6 t1;
	{
	t1 = ((T16*)(C))->a1;
	((T16*)(C))->a1 = t1 + 1 ;
	((T16*)(C))->z2[t1] = a1;
	}
}

/* INTEGER_32.min */
T6 T6f18(GE_context* ac, T6* C, T6 a1)
{
	T1 t1;
	T6 R = 0;
	t1 = (T6f20(ac, C, a1));
	if (t1) {
		R = *C;
	} else {
		R = a1;
	}
	return R;
}

/* INTEGER_32.is_less_equal */
T1 T6f20(GE_context* ac, T6* C, T6 a1)
{
	T1 t1;
	T1 R = 0;
	t1 = ((T1)((a1)<(*C)));
	R = ((T1)(!(t1)));
	return R;
}

/* [detachable] SPECIAL [CHARACTER_32].make_empty */
void T16f5(GE_context* ac, T0* C, T6 a1)
{
	{
	}
}

/* [detachable] CONSOLE.make_with_name */
void T76f15p1(GE_context* ac, T0* C, T0* a1)
{
	T76f18(ac, C, a1);
	((T76*)(C))->a3 = (T6)(GE_int32(0));
	((T76*)(C))->a1 = (T76f10(ac, C));
	((T76*)(C))->a4 = T17c21(ac);
}

/* [detachable] STRING_8.make_empty */
T0* T17c21(GE_context* ac)
{
	T0* C;
	C = GE_new17(EIF_TRUE);
	T17f15(ac, C, (T6)(GE_int32(0)));
	return C;
}

/* [detachable] STRING_8.make */
void T17f15(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	((T17*)(C))->a2 = (T6)(GE_int32(0));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	((T17*)(C))->a4 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T17*)(C))->a1 = T15c6(ac, (T2)('\000'), t1);
}

/* [detachable] STRING_8.make */
T0* T17c15(GE_context* ac, T6 a1)
{
	T0* C;
	T6 t1;
	C = GE_new17(EIF_TRUE);
	((T17*)(C))->a2 = (T6)(GE_int32(0));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	((T17*)(C))->a4 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T17*)(C))->a1 = T15c6(ac, (T2)('\000'), t1);
	return C;
}

/* [detachable] SPECIAL [CHARACTER_8].make_filled */
T0* T15c6(GE_context* ac, T2 a1, T6 a2)
{
	T0* C;
	T6 t1;
	C = GE_new15(a2, EIF_TRUE);
	T15f10(ac, C, a2);
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	T15f9(ac, C, a1, (T6)(GE_int32(0)), t1);
	return C;
}

/* [detachable] SPECIAL [CHARACTER_8].fill_with */
void T15f9(GE_context* ac, T0* C, T2 a1, T6 a2, T6 a3)
{
	T6 t1;
	T1 t2;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	l1 = a2;
	t1 = ((T6)((a3)+((T6)(GE_int32(1)))));
	l3 = (T6f18(ac, &(((T15*)(C))->a1), t1));
	l2 = l3;
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		((T15*)(C))->z2[l1] = (a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
	l1 = l3;
	l2 = ((T6)((a3)+((T6)(GE_int32(1)))));
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		T15f13(ac, C, a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
}

/* [detachable] SPECIAL [CHARACTER_8].extend */
void T15f13(GE_context* ac, T0* C, T2 a1)
{
	T6 t1;
	{
	t1 = ((T15*)(C))->a1;
	((T15*)(C))->a1 = t1 + 1 ;
	((T15*)(C))->z2[t1] = a1;
	}
}

/* [detachable] SPECIAL [CHARACTER_8].make_empty */
void T15f10(GE_context* ac, T0* C, T6 a1)
{
	{
	}
}

/* [detachable] SPECIAL [CHARACTER_8].make_empty */
T0* T15c10(GE_context* ac, T6 a1)
{
	T0* C;
	C = GE_new15(a1, EIF_TRUE);
	{
	}
	return C;
}

/* [detachable] CONSOLE.default_pointer */
T14 T76f10(GE_context* ac, T0* C)
{
	T14 R = 0;
	return R;
}

/* [detachable] CONSOLE.set_name */
void T76f18(GE_context* ac, T0* C, T0* a1)
{
	T0* t1;
	((T76*)(C))->a5 = a1;
	t1 = (T76f11(ac, C));
	((T76*)(C))->a6 = (T81f5(ac, GE_void(t1), a1, ((T76*)(C))->a6));
}

/* [detachable] FILE_INFO.file_name_to_pointer */
T0* T81f5(GE_context* ac, T0* C, T0* a1, T0* a2)
{
	T1 t1;
	T6 t2;
	T14 t3;
	T14 t4;
	T0* t5;
	T0* R = 0;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	R = a2;
	t1 = (T84s2(ac));
	if (t1) {
		t1 = EIF_FALSE;
		if (t1) {
			t1 = (R?(EIF_TRUE):EIF_FALSE);
			if (t1) {
				t2 = (((T17*)(a1))->a2);
				t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
				t2 = ((T6)((t2)*((T6)(GE_int32(2)))));
				T79f9(ac, GE_void(R), t2);
			} else {
				t2 = (((T17*)(a1))->a2);
				t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
				t2 = ((T6)((t2)*((T6)(GE_int32(2)))));
				R = T79c8(ac, t2);
			}
			t2 = (((T17*)(a1))->a2);
			T77f11(ac, (&l1), a1, (T6)(GE_int32(1)), t2, R, (T6)(GE_int32(0)), EIF_VOID);
		} else {
			l2 = T30c6(ac, a1);
			t1 = (R?(EIF_TRUE):EIF_FALSE);
			if (t1) {
				t3 = (T30f3(ac, GE_void(l2)));
				t4 = (T81f6(ac, C));
				t2 = (T81f7(ac, C, t3, t4, (T6)(GE_int32(0))));
				T79f9(ac, GE_void(R), t2);
			} else {
				t3 = (T30f3(ac, GE_void(l2)));
				t4 = (T81f6(ac, C));
				t2 = (T81f7(ac, C, t3, t4, (T6)(GE_int32(0))));
				R = T79c8(ac, t2);
			}
			t3 = (T30f3(ac, GE_void(l2)));
			t4 = (((T79*)(GE_void(R)))->a1);
			t2 = (((T79*)(GE_void(R)))->a2);
			t2 = (T81f7(ac, C, t3, t4, t2));
			T6f30(ac, &t2);
		}
	} else {
		t1 = (R?(EIF_TRUE):EIF_FALSE);
		if (t1) {
			t2 = (((T17*)(a1))->a2);
			t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
			T79f9(ac, GE_void(R), t2);
		} else {
			t2 = (((T17*)(a1))->a2);
			t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
			R = T79c8(ac, t2);
		}
		t1 = EIF_FALSE;
		if (t1) {
			t2 = (((T17*)(a1))->a2);
			T77f12(ac, (&l1), a1, (T6)(GE_int32(1)), t2, R, (T6)(GE_int32(0)), EIF_VOID);
		} else {
			t3 = (((T79*)(GE_void(R)))->a1);
			t2 = (((T17*)(a1))->a2);
			t5 = (T30c9(ac, t3, t2));
			T30f7(ac, t5, a1);
		}
	}
	return R;
}

/* detachable C_STRING.set_string */
void T30f7(GE_context* ac, T0* C, T0* a1)
{
	T6 t1;
	t1 = (((T17*)(GE_void(a1)))->a2);
	T30f8(ac, C, a1, (T6)(GE_int32(1)), t1);
}

/* detachable C_STRING.set_substring */
void T30f8(GE_context* ac, T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 t1;
	T1 t2;
	T10 t3;
	T8 t4;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	t1 = ((T6)((a3)-(a2)));
	l2 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T30*)(C))->a2 = l2;
	l3 = ((T6)((l2)+((T6)(GE_int32(1)))));
	t1 = (((T79*)(GE_void(((T30*)(C))->a1)))->a2);
	t2 = ((T1)((t1)<(l3)));
	if (t2) {
		T79f9(ac, GE_void(((T30*)(C))->a1), l3);
	}
	l1 = (T6)(GE_int32(0));
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		t1 = ((T6)((l1)+(a2)));
		t3 = (T17f11(ac, GE_void(a1), t1));
		t4 = (T10f4(ac, &t3));
		T79f10(ac, GE_void(((T30*)(C))->a1), t4, l1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
	T79f10(ac, GE_void(((T30*)(C))->a1), (T8)(GE_nat8(0)), l2);
}

/* [detachable] MANAGED_POINTER.put_natural_8 */
void T79f10(GE_context* ac, T0* C, T8 a1, T6 a2)
{
	T14 t1;
	T83 t2;
	T14 t3;
	t1 = ((T14)(((char*)(((T79*)(C))->a1))+(a2)));
	(t2).a1 = ((T14)&a1);
	t3 = ((t2).a1);
	T14f13(ac, &t1, t3, (T6)(GE_int32(1)));
}

/* POINTER.memory_copy */
void T14f13(GE_context* ac, T14* C, T14 a1, T6 a2)
{
	T14f17(ac, C, *C, a1, a2);
}

/* POINTER.c_memcpy */
void T14f17(GE_context* ac, T14* C, T14 a1, T14 a2, T6 a3)
{
	{
	memcpy((void *)a1,( const void *)a2,( size_t)a3);
	}
}

/* NATURAL_32.to_natural_8 */
T8 T10f4(GE_context* ac, T10* C)
{
	T8 R = 0;
	R = ((T8)(*C));
	return R;
}

/* [detachable] STRING_8.code */
T10 T17f11(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	T2 t2;
	T10 R = 0;
	t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
	t2 = (((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1]);
	t1 = ((T6)(t2));
	R = (T6f26(ac, &t1));
	return R;
}

/* INTEGER_32.to_natural_32 */
T10 T6f26(GE_context* ac, T6* C)
{
	T10 R = 0;
	R = ((T10)(*C));
	return R;
}

/* detachable C_STRING.make_shared_from_pointer_and_count */
T0* T30c9(GE_context* ac, T14 a1, T6 a2)
{
	T0* C;
	T6 t1;
	C = GE_new30(EIF_TRUE);
	((T30*)(C))->a2 = a2;
	t1 = ((T6)((a2)+((T6)(GE_int32(1)))));
	((T30*)(C))->a1 = T79c12(ac, a1, t1);
	return C;
}

/* [detachable] MANAGED_POINTER.share_from_pointer */
T0* T79c12(GE_context* ac, T14 a1, T6 a2)
{
	T0* C;
	C = GE_new79(EIF_TRUE);
	T79f11(ac, C);
	((T79*)(C))->a1 = a1;
	((T79*)(C))->a2 = a2;
	((T79*)(C))->a3 = EIF_TRUE;
	return C;
}

/* [detachable] MANAGED_POINTER.increment_counter */
void T79f11(GE_context* ac, T0* C)
{
}

/* UTF_CONVERTER.escaped_utf_32_substring_into_utf_8_0_pointer */
void T77f12(GE_context* ac, T77* C, T0* a1, T6 a2, T6 a3, T0* a4, T6 a5, T0* a6)
{
	T6 t1;
	T6 t2;
	T1 t3;
	T3 t4;
	T10 t5;
	T8 t6;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T10 l5 = 0;
	T0* l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	t1 = ((T6)((a3)-(a2)));
	l2 = ((T6)((t1)+((T6)(GE_int32(1)))));
	l4 = (((T79*)(GE_void(a4)))->a2);
	t1 = ((T6)((l4)-(a5)));
	t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
	t3 = ((T1)((t1)<(t2)));
	if (t3) {
		t1 = (T77f3(ac, C, a1, a2, a3));
		t1 = ((T6)((a5)+(t1)));
		l4 = ((T6)((t1)+((T6)(GE_int32(1)))));
		T79f9(ac, GE_void(a4), l4);
		l8 = EIF_TRUE;
	}
	l3 = a5;
	l1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	while (1) {
		t3 = (T6f13(ac, (&l1), a3));
		if (t3) {
			break;
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		l5 = (T17f11(ac, a1, l1));
		t4 = (T3)(GE_nat32(65533));
		t5 = ((T10)(t4));
		t3 = (T1)((l5) == (t5));
		if (t3) {
			t3 = ((T1)((l1)<(l2)));
			if (t3) {
				t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t4 = (T17f12(ac, a1, t1));
				t3 = (T1)((t4) == ((T3)(GE_nat32(65533))));
			}
			if (t3) {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			} else {
				t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t3 = ((T1)((t1)<(l2)));
				if (t3) {
					t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t2 = ((T6)((l1)+((T6)(GE_int32(2)))));
					l6 = (T17f13(ac, a1, t1, t2));
					t3 = (T77f6(ac, C, l6));
					if (t3) {
						l5 = (T77f7(ac, C, l6));
						t3 = (T10f5(ac, (&l5), (T10)(GE_nat32(127))));
						if (t3) {
							t4 = (T3)(GE_nat32(65533));
							l5 = ((T10)(t4));
						} else {
							l7 = EIF_TRUE;
							l1 = ((T6)((l1)+((T6)(GE_int32(2)))));
						}
					}
				}
			}
		}
		t3 = ((T1)(!(l7)));
		if (t3) {
			t3 = (T10f5(ac, (&l5), (T10)(GE_nat32(127))));
			if (t3) {
				t6 = (T10f4(ac, (&l5)));
				T79f10(ac, GE_void(a4), t6, l3);
				l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				t3 = ((T1)(!(l8)));
				if (t3) {
					t1 = ((T6)((l3)+((T6)(GE_int32(5)))));
					t2 = ((T6)((a3)-(l1)));
					t1 = ((T6)((t1)+(t2)));
					t3 = (T6f14(ac, &t1, l4));
				}
				if (t3) {
					t1 = (T77f3(ac, C, a1, l1, a3));
					t1 = ((T6)((l3)+(t1)));
					l4 = ((T6)((t1)+((T6)(GE_int32(1)))));
					T79f9(ac, GE_void(a4), l4);
					l8 = EIF_TRUE;
				}
				t3 = (T10f5(ac, (&l5), (T10)(GE_nat32(2047))));
				if (t3) {
					t5 = ((T10)((l5)>>((T6)(GE_int32(6)))));
					t5 = ((T10)((t5)|((T10)(GE_nat32(192)))));
					t6 = (T10f4(ac, &t5));
					T79f10(ac, GE_void(a4), t6, l3);
					t5 = ((T10)((l5)&((T10)(GE_nat32(63)))));
					t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
					t6 = (T10f4(ac, &t5));
					t1 = ((T6)((l3)+((T6)(GE_int32(1)))));
					T79f10(ac, GE_void(a4), t6, t1);
					l3 = ((T6)((l3)+((T6)(GE_int32(2)))));
				} else {
					t3 = (T10f5(ac, (&l5), (T10)(GE_nat32(65535))));
					if (t3) {
						t5 = ((T10)((l5)>>((T6)(GE_int32(12)))));
						t5 = ((T10)((t5)|((T10)(GE_nat32(224)))));
						t6 = (T10f4(ac, &t5));
						T79f10(ac, GE_void(a4), t6, l3);
						t5 = ((T10)((l5)>>((T6)(GE_int32(6)))));
						t5 = ((T10)((t5)&((T10)(GE_nat32(63)))));
						t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
						t6 = (T10f4(ac, &t5));
						t1 = ((T6)((l3)+((T6)(GE_int32(1)))));
						T79f10(ac, GE_void(a4), t6, t1);
						t5 = ((T10)((l5)&((T10)(GE_nat32(63)))));
						t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
						t6 = (T10f4(ac, &t5));
						t1 = ((T6)((l3)+((T6)(GE_int32(2)))));
						T79f10(ac, GE_void(a4), t6, t1);
						l3 = ((T6)((l3)+((T6)(GE_int32(3)))));
					} else {
						t5 = ((T10)((l5)>>((T6)(GE_int32(18)))));
						t5 = ((T10)((t5)|((T10)(GE_nat32(240)))));
						t6 = (T10f4(ac, &t5));
						T79f10(ac, GE_void(a4), t6, l3);
						t5 = ((T10)((l5)>>((T6)(GE_int32(12)))));
						t5 = ((T10)((t5)&((T10)(GE_nat32(63)))));
						t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
						t6 = (T10f4(ac, &t5));
						t1 = ((T6)((l3)+((T6)(GE_int32(1)))));
						T79f10(ac, GE_void(a4), t6, t1);
						t5 = ((T10)((l5)>>((T6)(GE_int32(6)))));
						t5 = ((T10)((t5)&((T10)(GE_nat32(63)))));
						t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
						t6 = (T10f4(ac, &t5));
						t1 = ((T6)((l3)+((T6)(GE_int32(2)))));
						T79f10(ac, GE_void(a4), t6, t1);
						t5 = ((T10)((l5)&((T10)(GE_nat32(63)))));
						t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
						t6 = (T10f4(ac, &t5));
						t1 = ((T6)((l3)+((T6)(GE_int32(3)))));
						T79f10(ac, GE_void(a4), t6, t1);
						l3 = ((T6)((l3)+((T6)(GE_int32(4)))));
					}
				}
			}
		} else {
			l7 = EIF_FALSE;
			t6 = (T10f4(ac, (&l5)));
			T79f10(ac, GE_void(a4), t6, l3);
			l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
		}
	}
	if (l8) {
		t1 = ((T6)((l3)+((T6)(GE_int32(1)))));
		T79f9(ac, GE_void(a4), t1);
	}
	T79f10(ac, GE_void(a4), (T8)(GE_nat8(0)), l3);
	t3 = EIF_FALSE;
	if (t3) {
		(GE_void(a6), l3);
	}
}

/* INTEGER_32.is_greater */
T1 T6f14(GE_context* ac, T6* C, T6 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* NATURAL_32.is_less_equal */
T1 T10f5(GE_context* ac, T10* C, T10 a1)
{
	T1 t1;
	T1 R = 0;
	t1 = ((T1)((a1)<(*C)));
	R = ((T1)(!(t1)));
	return R;
}

/* UTF_CONVERTER.to_natural_32 */
T10 T77f7(GE_context* ac, T77* C, T0* a1)
{
	T6 t1;
	T10 R = 0;
	T0* l1 = 0;
	l1 = (T77f8(ac, C));
	t1 = ((T6)(GE_int32(0)));
	T89f19(ac, GE_void(l1), a1, t1);
	R = (T89f12(ac, GE_void(l1)));
	return R;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.parsed_natural_32 */
T10 T89f12(GE_context* ac, T0* C)
{
	T11 t1;
	T10 R = 0;
	t1 = ((T11)((((T89*)(C))->a3)*((T11)(GE_nat64(16)))));
	t1 = ((T11)((t1)+(((T89*)(C))->a4)));
	R = ((T10)(t1));
	return R;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.parse_string_with_type */
void T89f19(GE_context* ac, T0* C, T0* a1, T6 a2)
{
	T1 t1;
	T0* m1 = 0;
	T6 t2;
	T2 t3;
	T0* m2 = 0;
	T3 t4;
	T10 t5;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T6 l4 = 0;
	T10 l5 = 0;
	T3 l6 = 0;
	T89f18(ac, C, a2);
	t1 = (a1?((m1 = a1, EIF_TRUE)):EIF_FALSE);
	if (t1) {
		l2 = (((T17*)(m1))->a1);
		l1 = (T17f9(ac, m1));
		t2 = (((T17*)(m1))->a2);
		l4 = ((T6)((l1)+(t2)));
		while (1) {
			t1 = (T1)((l1) == (l4));
			if (!(t1)) {
				t1 = (T6f13(ac, &(((T89*)(C))->a1), (T6)(GE_int32(4))));
			}
			if (t1) {
				break;
			}
			t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((T1)((t2)<(l4)));
			if (t1) {
				t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
				((T89*)(C))->a9 = (((T15*)(GE_void(l2)))->z2[t2]);
			} else {
				((T89*)(C))->a9 = (T2)(' ');
			}
			t3 = (((T15*)(GE_void(l2)))->z2[l1]);
			T89f22(ac, C, t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
	} else {
		t1 = EIF_FALSE;
		if (t1) {
			l3 = ((m2, (T0*)0));
			l1 = ((m2, (T6)0));
			t2 = ((m2, (T6)0));
			l4 = ((T6)((l1)+(t2)));
			while (1) {
				t1 = (T1)((l1) == (l4));
				if (!(t1)) {
					t1 = (T6f13(ac, &(((T89*)(C))->a1), (T6)(GE_int32(4))));
				}
				if (t1) {
					break;
				}
				t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = ((T1)((t2)<(l4)));
				if (t1) {
					t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t4 = ((GE_void(l3), t2, (T3)0));
					((T89*)(C))->a9 = ((T2)(t4));
				} else {
					((T89*)(C))->a9 = (T2)(' ');
				}
				l6 = ((GE_void(l3), l1, (T3)0));
				t1 = (T3f6(ac, (&l6)));
				if (t1) {
					t3 = ((T2)(l6));
					T89f22(ac, C, t3);
				} else {
					((T89*)(C))->a1 = (T6)(GE_int32(4));
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
		} else {
			l1 = (T6)(GE_int32(1));
			l4 = (((T17*)(GE_void(a1)))->a2);
			while (1) {
				t1 = (T6f14(ac, (&l1), l4));
				if (!(t1)) {
					t1 = (T6f13(ac, &(((T89*)(C))->a1), (T6)(GE_int32(4))));
				}
				if (t1) {
					break;
				}
				t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = ((T1)((t2)<(l4)));
				if (t1) {
					t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t5 = (T17f11(ac, GE_void(a1), t2));
					((T89*)(C))->a9 = ((T2)(t5));
				} else {
					((T89*)(C))->a9 = (T2)(' ');
				}
				l5 = (T17f11(ac, GE_void(a1), l1));
				t1 = (T10f17(ac, (&l5)));
				if (t1) {
					t3 = ((T2)(l5));
					T89f22(ac, C, t3);
				} else {
					((T89*)(C))->a1 = (T6)(GE_int32(4));
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
		}
	}
}

/* NATURAL_32.is_valid_character_8_code */
T1 T10f17(GE_context* ac, T10* C)
{
	T6 t1;
	T10 t2;
	T1 R = 0;
	t1 = ((T6)(GE_int32(255)));
	t2 = (T6f26(ac, &t1));
	R = (T10f5(ac, &(*C), t2));
	return R;
}

/* CHARACTER_32.is_character_8 */
T1 T3f6(GE_context* ac, T3* C)
{
	T10 t1;
	T6 t2;
	T10 t3;
	T1 R = 0;
	t1 = ((T10)(*C));
	t2 = ((T6)(GE_int32(255)));
	t3 = (T6f26(ac, &t2));
	R = (T10f5(ac, &t1, t3));
	return R;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.parse_character */
void T89f22(GE_context* ac, T0* C, T2 a1)
{
	T1 t1;
	T1 t2;
	T8 t3;
	T0* t4;
	T11 t5;
	T11 l1 = 0;
	T11 l2 = 0;
	T6 l3 = 0;
	l3 = ((T89*)(C))->a1;
	t1 = (T6f20(ac, (&l3), (T6)(GE_int32(5))));
	if (t1) {
		switch (l3) {
		case GE_int32(0):
			t1 = (T1)((a1) == ((T2)('0')));
			if (t1) {
				t2 = (T1)((((T89*)(C))->a9) == ((T2)('x')));
				if (!(t2)) {
					t1 = (T1)((((T89*)(C))->a9) == ((T2)('X')));
				} else {
					t1 = EIF_TRUE;
				}
			}
			if (!(t1)) {
				t1 = (T1)((a1) == ((T2)('&')));
			}
			if (t1) {
				l3 = (T6)(GE_int32(1));
			} else {
				t1 = (T1)((a1) == ((T2)('-')));
				if (!(t1)) {
					t1 = (T1)((a1) == ((T2)('+')));
				}
				if (t1) {
					l3 = (T6)(GE_int32(1));
					t1 = (T1)((a1) == ((T2)('-')));
					if (t1) {
						((T89*)(C))->a7 = (T6)(GE_int32(1));
					} else {
						((T89*)(C))->a7 = (T6)(GE_int32(0));
					}
				} else {
					t1 = (T2f8(ac, &a1));
					if (t1) {
						l3 = (T6)(GE_int32(3));
						((T89*)(C))->a3 = (T11)(GE_nat64(0));
						t3 = (T2f9(ac, &a1));
						((T89*)(C))->a4 = (T8f4(ac, &t3));
					} else {
						if (((T89*)(C))->a10) {
							t1 = (T17f14(ac, GE_void(((T89*)(C))->a5), a1));
						} else {
							t1 = EIF_FALSE;
						}
						if (t1) {
						} else {
							l3 = (T6)(GE_int32(4));
						}
					}
				}
			}
			break;
		case GE_int32(1):
			t1 = (T2f8(ac, &a1));
			if (t1) {
				((T89*)(C))->a3 = (T11)(GE_nat64(0));
				t3 = (T2f9(ac, &a1));
				((T89*)(C))->a4 = (T8f4(ac, &t3));
				l3 = (T6)(GE_int32(3));
				t1 = (T1)(!(T1)((((T89*)(C))->a8) == ((T6)(GE_int32(0)))));
				if (t1) {
					t4 = (T89f15(ac, C));
					t1 = (T93f7(ac, GE_void(t4), ((T89*)(C))->a3, ((T89*)(C))->a4, ((T89*)(C))->a8, ((T89*)(C))->a7));
				}
				if (t1) {
					((T89*)(C))->a2 = EIF_TRUE;
					((T89*)(C))->a4 = (T11)(GE_nat64(0));
					l3 = (T6)(GE_int32(6));
				}
			} else {
				t1 = (T1)((a1) == ((T2)('#')));
				if (t1) {
					l3 = (T6)(GE_int32(1));
				} else {
					t1 = (T1)((a1) == ((T2)('x')));
					if (!(t1)) {
						t1 = (T1)((a1) == ((T2)('X')));
					}
					if (t1) {
						l3 = (T6)(GE_int32(2));
					}
				}
			}
			break;
		case GE_int32(2):
			t1 = (T2f8(ac, &a1));
			if (t1) {
				((T89*)(C))->a3 = (T11)(GE_nat64(0));
				t3 = (T2f9(ac, &a1));
				((T89*)(C))->a4 = (T8f4(ac, &t3));
				l3 = (T6)(GE_int32(3));
				t1 = (T1)(!(T1)((((T89*)(C))->a8) == ((T6)(GE_int32(0)))));
				if (t1) {
					t4 = (T89f15(ac, C));
					t1 = (T93f7(ac, GE_void(t4), ((T89*)(C))->a3, ((T89*)(C))->a4, ((T89*)(C))->a8, ((T89*)(C))->a7));
				}
				if (t1) {
					((T89*)(C))->a2 = EIF_TRUE;
					((T89*)(C))->a4 = (T11)(GE_nat64(0));
					l3 = (T6)(GE_int32(6));
				}
			}
			break;
		case GE_int32(3):
			t1 = (T2f8(ac, &a1));
			if (t1) {
				l1 = ((T89*)(C))->a3;
				l2 = ((T89*)(C))->a4;
				t5 = ((T11)((((T89*)(C))->a3)*((T11)(GE_nat64(16)))));
				((T89*)(C))->a3 = ((T11)((t5)+(((T89*)(C))->a4)));
				t3 = (T2f9(ac, &a1));
				((T89*)(C))->a4 = (T8f4(ac, &t3));
				t1 = (T1)(!(T1)((((T89*)(C))->a8) == ((T6)(GE_int32(0)))));
				if (t1) {
					t4 = (T89f15(ac, C));
					((T89*)(C))->a2 = (T93f7(ac, GE_void(t4), ((T89*)(C))->a3, ((T89*)(C))->a4, ((T89*)(C))->a8, ((T89*)(C))->a7));
					t1 = (T89f16(ac, C));
					if (t1) {
						((T89*)(C))->a3 = l1;
						((T89*)(C))->a4 = l2;
						l3 = (T6)(GE_int32(6));
					}
				}
			} else {
				if (((T89*)(C))->a11) {
					t1 = (T17f14(ac, GE_void(((T89*)(C))->a6), a1));
				} else {
					t1 = EIF_FALSE;
				}
				if (t1) {
					l3 = (T6)(GE_int32(4));
				} else {
					l3 = (T6)(GE_int32(5));
				}
			}
			break;
		case GE_int32(4):
			t1 = ((T1)(!(((T89*)(C))->a11)));
			if (!(t1)) {
				t2 = (T17f14(ac, GE_void(((T89*)(C))->a6), a1));
				t1 = ((T1)(!(t2)));
			}
			if (t1) {
				l3 = (T6)(GE_int32(5));
			}
			break;
		default:
			GE_raise(GE_EX_WHEN);
			break;
		}
	}
	((T89*)(C))->a1 = l3;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.overflowed */
T1 T89f16(GE_context* ac, T0* C)
{
	T1 R = 0;
	if (((T89*)(C))->a2) {
		R = (T1)((((T89*)(C))->a7) == ((T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* [detachable] INTEGER_OVERFLOW_CHECKER.will_overflow */
T1 T93f7(GE_context* ac, T0* C, T11 a1, T11 a2, T6 a3, T6 a4)
{
	T1 t1;
	T6 t2;
	T11 t3;
	T1 R = 0;
	T6 l1 = 0;
	t1 = (T1)(!(T1)((a3) == ((T6)(GE_int32(0)))));
	if (t1) {
		t1 = (T1)((a3) == ((T6)(GE_int32(1))));
		if (!(t1)) {
			t1 = (T1)((a3) == ((T6)(GE_int32(2))));
		}
		if (!(t1)) {
			t1 = (T1)((a3) == ((T6)(GE_int32(3))));
		}
		if (!(t1)) {
			t1 = (T1)((a3) == ((T6)(GE_int32(4))));
		}
		if (t1) {
			t2 = ((T6)((a4)*((T6)(GE_int32(4)))));
			l1 = ((T6)((t2)+(a3)));
			t3 = (((T94*)(GE_void(((T93*)(C))->a1)))->z2[l1]);
			t1 = (T11f11(ac, &a1, t3));
			if (!(t1)) {
				t3 = (((T94*)(GE_void(((T93*)(C))->a1)))->z2[l1]);
				t1 = (T1)((a1) == (t3));
				if (t1) {
					t3 = (((T94*)(GE_void(((T93*)(C))->a2)))->z2[l1]);
					R = (T11f11(ac, &a2, t3));
				} else {
					R = EIF_FALSE;
				}
			} else {
				R = EIF_TRUE;
			}
		} else {
			t1 = (T1)((a4) == ((T6)(GE_int32(1))));
			if (t1) {
				t1 = (T11f11(ac, &a1, (T11)(GE_nat64(0))));
				if (!(t1)) {
					R = (T11f11(ac, &a2, (T11)(GE_nat64(0))));
				} else {
					R = EIF_TRUE;
				}
			} else {
				l1 = ((T6)((a3)-((T6)(GE_int32(10)))));
				t3 = (((T94*)(GE_void(((T93*)(C))->a3)))->z2[l1]);
				t1 = (T11f11(ac, &a1, t3));
				if (!(t1)) {
					t3 = (((T94*)(GE_void(((T93*)(C))->a3)))->z2[l1]);
					t1 = (T1)((a1) == (t3));
					if (t1) {
						t3 = (((T94*)(GE_void(((T93*)(C))->a4)))->z2[l1]);
						R = (T11f11(ac, &a2, t3));
					} else {
						R = EIF_FALSE;
					}
				} else {
					R = EIF_TRUE;
				}
			}
		}
	}
	return R;
}

/* NATURAL_64.is_greater */
T1 T11f11(GE_context* ac, T11* C, T11 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.overflow_checker */
T0* T89f15(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	if (GE_process_onces->reference_status[2]) {
		if (GE_process_onces->reference_exception[2]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[2]);
		}
		return GE_process_onces->reference_value[2];
	} else {
		GE_process_onces->reference_status[2] = '\1';
		GE_process_onces->reference_value[2] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[2] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T93c13(ac);
	GE_process_onces->reference_value[2] = R;
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] INTEGER_OVERFLOW_CHECKER.make */
T0* T93c13(GE_context* ac)
{
	T0* C;
	T6 t1;
	T4 t2;
	T11 t3;
	T5 t4;
	T7 t5;
	T8 t6;
	T9 t7;
	T10 t8;
	C = GE_new93(EIF_TRUE);
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)*((T6)(GE_int32(2)))));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T93*)(C))->a1 = T94c4(ac, t1);
	T94f5(ac, GE_void(((T93*)(C))->a1), (T11)(GE_nat64(0)));
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)*((T6)(GE_int32(2)))));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T93*)(C))->a2 = T94c4(ac, t1);
	T94f5(ac, GE_void(((T93*)(C))->a2), (T11)(GE_nat64(0)));
	t2 = ((T4)(GE_int8(127)));
	t2 = ((T4)((t2)/((T4)(GE_int8(10)))));
	t3 = (T4f9(ac, &t2));
	T94f5(ac, GE_void(((T93*)(C))->a1), t3);
	t2 = ((T4)(GE_int8(127)));
	t2 = ((T4)((t2)%((T4)(GE_int8(10)))));
	t3 = (T4f9(ac, &t2));
	T94f5(ac, GE_void(((T93*)(C))->a2), t3);
	t4 = ((T5)(GE_int16(32767)));
	t4 = ((T5)((t4)/((T5)(GE_int16(10)))));
	t3 = (T5f6(ac, &t4));
	T94f5(ac, GE_void(((T93*)(C))->a1), t3);
	t4 = ((T5)(GE_int16(32767)));
	t4 = ((T5)((t4)%((T5)(GE_int16(10)))));
	t3 = (T5f6(ac, &t4));
	T94f5(ac, GE_void(((T93*)(C))->a2), t3);
	t1 = ((T6)(GE_int32(2147483647)));
	t1 = ((T6)((t1)/((T6)(GE_int32(10)))));
	t3 = (T6f28(ac, &t1));
	T94f5(ac, GE_void(((T93*)(C))->a1), t3);
	t1 = ((T6)(GE_int32(2147483647)));
	t1 = ((T6)((t1)%((T6)(GE_int32(10)))));
	t3 = (T6f28(ac, &t1));
	T94f5(ac, GE_void(((T93*)(C))->a2), t3);
	t5 = ((T7)(GE_int64(9223372036854775807)));
	t5 = ((T7)((t5)/((T7)(GE_int64(10)))));
	t3 = (T7f6(ac, &t5));
	T94f5(ac, GE_void(((T93*)(C))->a1), t3);
	t5 = ((T7)(GE_int64(9223372036854775807)));
	t5 = ((T7)((t5)%((T7)(GE_int64(10)))));
	t3 = (T7f6(ac, &t5));
	T94f5(ac, GE_void(((T93*)(C))->a2), t3);
	t2 = ((T4)(GE_int8(-128)));
	t2 = ((T4)((t2)/((T4)(GE_int8(10)))));
	t2 = ((T4)(-(t2)));
	t3 = (T4f9(ac, &t2));
	T94f5(ac, GE_void(((T93*)(C))->a1), t3);
	t2 = ((T4)(GE_int8(-128)));
	t2 = ((T4)((t2)%((T4)(GE_int8(10)))));
	t2 = ((T4)(-(t2)));
	t3 = (T4f9(ac, &t2));
	T94f5(ac, GE_void(((T93*)(C))->a2), t3);
	t4 = ((T5)(GE_int16(-32768)));
	t4 = ((T5)((t4)/((T5)(GE_int16(10)))));
	t4 = ((T5)(-(t4)));
	t3 = (T5f6(ac, &t4));
	T94f5(ac, GE_void(((T93*)(C))->a1), t3);
	t4 = ((T5)(GE_int16(-32768)));
	t4 = ((T5)((t4)%((T5)(GE_int16(10)))));
	t4 = ((T5)(-(t4)));
	t3 = (T5f6(ac, &t4));
	T94f5(ac, GE_void(((T93*)(C))->a2), t3);
	t1 = ((T6)(GE_min_int32));
	t1 = ((T6)((t1)/((T6)(GE_int32(10)))));
	t1 = ((T6)(-(t1)));
	t3 = (T6f28(ac, &t1));
	T94f5(ac, GE_void(((T93*)(C))->a1), t3);
	t1 = ((T6)(GE_min_int32));
	t1 = ((T6)((t1)%((T6)(GE_int32(10)))));
	t1 = ((T6)(-(t1)));
	t3 = (T6f28(ac, &t1));
	T94f5(ac, GE_void(((T93*)(C))->a2), t3);
	t5 = ((T7)(GE_min_int64));
	t5 = ((T7)((t5)/((T7)(GE_int64(10)))));
	t5 = ((T7)(-(t5)));
	t3 = (T7f6(ac, &t5));
	T94f5(ac, GE_void(((T93*)(C))->a1), t3);
	t5 = ((T7)(GE_min_int64));
	t5 = ((T7)((t5)%((T7)(GE_int64(10)))));
	t5 = ((T7)(-(t5)));
	t3 = (T7f6(ac, &t5));
	T94f5(ac, GE_void(((T93*)(C))->a2), t3);
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T93*)(C))->a3 = T94c4(ac, t1);
	T94f5(ac, GE_void(((T93*)(C))->a3), (T11)(GE_nat64(0)));
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T93*)(C))->a4 = T94c4(ac, t1);
	T94f5(ac, GE_void(((T93*)(C))->a4), (T11)(GE_nat64(0)));
	t6 = ((T8)(GE_nat8(255)));
	t6 = ((T8)((t6)/((T8)(GE_nat8(10)))));
	t3 = (T8f4(ac, &t6));
	T94f5(ac, GE_void(((T93*)(C))->a3), t3);
	t6 = ((T8)(GE_nat8(255)));
	t6 = ((T8)((t6)%((T8)(GE_nat8(10)))));
	t3 = (T8f4(ac, &t6));
	T94f5(ac, GE_void(((T93*)(C))->a4), t3);
	t7 = ((T9)(GE_nat16(65535)));
	t7 = ((T9)((t7)/((T9)(GE_nat16(10)))));
	t3 = (T9f6(ac, &t7));
	T94f5(ac, GE_void(((T93*)(C))->a3), t3);
	t7 = ((T9)(GE_nat16(65535)));
	t7 = ((T9)((t7)%((T9)(GE_nat16(10)))));
	t3 = (T9f6(ac, &t7));
	T94f5(ac, GE_void(((T93*)(C))->a4), t3);
	t8 = ((T10)(GE_nat32(4294967295)));
	t8 = ((T10)((t8)/((T10)(GE_nat32(10)))));
	t3 = (T10f20(ac, &t8));
	T94f5(ac, GE_void(((T93*)(C))->a3), t3);
	t8 = ((T10)(GE_nat32(4294967295)));
	t8 = ((T10)((t8)%((T10)(GE_nat32(10)))));
	t3 = (T10f20(ac, &t8));
	T94f5(ac, GE_void(((T93*)(C))->a4), t3);
	t3 = ((T11)(GE_nat64(18446744073709551615)));
	t3 = ((T11)((t3)/((T11)(GE_nat64(10)))));
	t3 = (T11f14(ac, &t3));
	T94f5(ac, GE_void(((T93*)(C))->a3), t3);
	t3 = ((T11)(GE_nat64(18446744073709551615)));
	t3 = ((T11)((t3)%((T11)(GE_nat64(10)))));
	t3 = (T11f14(ac, &t3));
	T94f5(ac, GE_void(((T93*)(C))->a4), t3);
	return C;
}

/* NATURAL_64.to_natural_64 */
T11 T11f14(GE_context* ac, T11* C)
{
	T11 R = 0;
	R = *C;
	return R;
}

/* NATURAL_32.to_natural_64 */
T11 T10f20(GE_context* ac, T10* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* NATURAL_16.to_natural_64 */
T11 T9f6(GE_context* ac, T9* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_64.to_natural_64 */
T11 T7f6(GE_context* ac, T7* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_32.to_natural_64 */
T11 T6f28(GE_context* ac, T6* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_16.to_natural_64 */
T11 T5f6(GE_context* ac, T5* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_8.to_natural_64 */
T11 T4f9(GE_context* ac, T4* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* [detachable] SPECIAL [[attached] NATURAL_64].extend */
void T94f5(GE_context* ac, T0* C, T11 a1)
{
	T6 t1;
	{
	t1 = ((T94*)(C))->a1;
	((T94*)(C))->a1 = t1 + 1 ;
	((T94*)(C))->z2[t1] = a1;
	}
}

/* [detachable] SPECIAL [[attached] NATURAL_64].make_empty */
T0* T94c4(GE_context* ac, T6 a1)
{
	T0* C;
	C = GE_new94(a1, EIF_TRUE);
	{
	}
	return C;
}

/* [detachable] STRING_8.has */
T1 T17f14(GE_context* ac, T0* C, T2 a1)
{
	T1 t1;
	T2 t2;
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	l2 = ((T17*)(C))->a2;
	t1 = (T6f14(ac, (&l2), (T6)(GE_int32(0))));
	if (t1) {
		l1 = (T17f9(ac, C));
		l3 = ((T17*)(C))->a1;
		l2 = ((T6)((l2)+(l1)));
		while (1) {
			t1 = (T1)((l1) == (l2));
			if (!(t1)) {
				t2 = (((T15*)(GE_void(l3)))->z2[l1]);
				t1 = (T1)((t2) == (a1));
			}
			if (t1) {
				break;
			}
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		R = ((T1)((l1)<(l2)));
	}
	return R;
}

/* NATURAL_8.to_natural_64 */
T11 T8f4(GE_context* ac, T8* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* CHARACTER_8.to_hexa_digit */
T8 T2f9(GE_context* ac, T2* C)
{
	T10 t1;
	T8 t2;
	T4 t3;
	T8 t4;
	T8 R = 0;
	T8 l1 = 0;
	t1 = (T2f13(ac, C));
	t2 = (T10f4(ac, &t1));
	R = ((T8)((t2)&((T8)(GE_nat8(79)))));
	t2 = ((T8)((R)<<((T6)(GE_int32(1)))));
	t3 = (T8f9(ac, &t2));
	t3 = ((T4)((t3)>>((T6)(GE_int32(7)))));
	l1 = (T4f5(ac, &t3));
	t2 = ((T8)(~(l1)));
	t2 = ((T8)((R)&(t2)));
	t4 = ((T8)((R)-((T8)(GE_nat8(55)))));
	t4 = ((T8)((t4)&(l1)));
	R = ((T8)((t2)|(t4)));
	return R;
}

/* INTEGER_8.to_natural_8 */
T8 T4f5(GE_context* ac, T4* C)
{
	T8 R = 0;
	R = ((T8)(*C));
	return R;
}

/* NATURAL_8.to_integer_8 */
T4 T8f9(GE_context* ac, T8* C)
{
	T4 R = 0;
	R = ((T4)(*C));
	return R;
}

/* CHARACTER_8.natural_32_code */
T10 T2f13(GE_context* ac, T2* C)
{
	T6 t1;
	T10 R = 0;
	t1 = ((T6)(*C));
	R = (T6f26(ac, &t1));
	return R;
}

/* CHARACTER_8.is_hexa_digit */
T1 T2f8(GE_context* ac, T2* C)
{
	T6 t1;
	T8 t2;
	T8 t3;
	T1 R = 0;
	t1 = ((T6)(*C));
	t2 = (T2f10(ac, C, t1));
	t3 = (T8)(GE_nat8(64));
	t3 = ((T8)((t3)|((T8)(GE_nat8(4)))));
	t2 = ((T8)((t2)&(t3)));
	R = (T8f7(ac, &t2, (T8)(GE_nat8(0))));
	return R;
}

/* NATURAL_8.is_greater */
T1 T8f7(GE_context* ac, T8* C, T8 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* CHARACTER_8.character_types */
T8 T2f10(GE_context* ac, T2* C, T6 a1)
{
	T1 t1;
	T0* t2;
	T8 R = 0;
	t1 = ((T1)((a1)<((T6)(GE_int32(256)))));
	if (t1) {
		t2 = (T2f14(ac, C));
		R = (((T86*)(GE_void(t2)))->z2[a1]);
	}
	return R;
}

/* CHARACTER_8.internal_character_types */
T0* T2f14(GE_context* ac, T2* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T8 t1;
	T0* R = 0;
	if (GE_process_onces->reference_status[3]) {
		if (GE_process_onces->reference_exception[3]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[3]);
		}
		return GE_process_onces->reference_value[3];
	} else {
		GE_process_onces->reference_status[3] = '\1';
		GE_process_onces->reference_value[3] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[3] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T86c5(ac, (T6)(GE_int32(256)));
	GE_process_onces->reference_value[3] = R;
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(128));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(4)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	t1 = (T8)(GE_nat8(1));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(1));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(1));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(1));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(1));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(1));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	t1 = (T8)(GE_nat8(2));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(2));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(2));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(2));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(2));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	t1 = (T8)(GE_nat8(2));
	t1 = ((T8)((t1)|((T8)(GE_nat8(64)))));
	T86f8(ac, GE_void(R), t1);
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	t1 = (T8)(GE_nat8(32));
	t1 = ((T8)((t1)|((T8)(GE_nat8(128)))));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(32)));
	t1 = (T8)(GE_nat8(128));
	t1 = ((T8)((t1)|((T8)(GE_nat8(8)))));
	T86f8(ac, GE_void(R), t1);
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(16)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(1)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(0)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	T86f8(ac, GE_void(R), (T8)(GE_nat8(2)));
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] SPECIAL [[attached] NATURAL_8].extend */
void T86f8(GE_context* ac, T0* C, T8 a1)
{
	T6 t1;
	{
	t1 = ((T86*)(C))->a1;
	((T86*)(C))->a1 = t1 + 1 ;
	((T86*)(C))->z2[t1] = a1;
	}
}

/* [detachable] SPECIAL [[attached] NATURAL_8].make_empty */
void T86f5(GE_context* ac, T0* C, T6 a1)
{
	{
	}
}

/* [detachable] SPECIAL [[attached] NATURAL_8].make_empty */
T0* T86c5(GE_context* ac, T6 a1)
{
	T0* C;
	C = GE_new86(a1, EIF_TRUE);
	{
	}
	return C;
}

/* [detachable] STRING_8.area_lower */
T6 T17f9(GE_context* ac, T0* C)
{
	T6 R = 0;
	return R;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.reset */
void T89f18(GE_context* ac, T0* C, T6 a1)
{
	((T89*)(C))->a1 = (T6)(GE_int32(0));
	((T89*)(C))->a7 = (T6)(GE_int32(0));
	((T89*)(C))->a8 = a1;
	((T89*)(C))->a2 = EIF_FALSE;
}

/* UTF_CONVERTER.ctoi_convertor */
T0* T77f8(GE_context* ac, T77* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	if (GE_process_onces->reference_status[4]) {
		if (GE_process_onces->reference_exception[4]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[4]);
		}
		return GE_process_onces->reference_value[4];
	} else {
		GE_process_onces->reference_status[4] = '\1';
		GE_process_onces->reference_value[4] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[4] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T89c17(ac);
	GE_process_onces->reference_value[4] = R;
	T89f20(ac, GE_void(R), EIF_FALSE);
	T89f21(ac, GE_void(R), EIF_FALSE);
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.set_trailing_separators_acceptable */
void T89f21(GE_context* ac, T0* C, T1 a1)
{
	((T89*)(C))->a11 = a1;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.set_leading_separators_acceptable */
void T89f20(GE_context* ac, T0* C, T1 a1)
{
	((T89*)(C))->a10 = a1;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.make */
T0* T89c17(GE_context* ac)
{
	T0* C;
	C = GE_new89(EIF_TRUE);
	T89f18(ac, C, (T6)(GE_int32(0)));
	((T89*)(C))->a5 = T17c26(ac, GE_ms8(" ", 1));
	((T89*)(C))->a6 = T17c26(ac, GE_ms8(" ", 1));
	return C;
}

/* [detachable] STRING_8.make_from_string */
T0* T17c26(GE_context* ac, T0* a1)
{
	T0* C;
	T1 t1;
	T6 t2;
	T0* t3;
	T6 t4;
	C = GE_new17(EIF_TRUE);
	((T17*)(C))->a1 = (((T17*)(a1))->a1);
	((T17*)(C))->a2 = (((T17*)(a1))->a2);
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	((T17*)(C))->a4 = (T6)(GE_int32(0));
	t1 = (T1)(C!=a1);
	if (t1) {
		t2 = ((T6)((((T17*)(C))->a2)+((T6)(GE_int32(1)))));
		((T17*)(C))->a1 = T15c10(ac, t2);
		t3 = (((T17*)(a1))->a1);
		t2 = (T17f9(ac, a1));
		t4 = ((T6)((((T17*)(C))->a2)+((T6)(GE_int32(1)))));
		T15f8(ac, GE_void(((T17*)(C))->a1), t3, t2, (T6)(GE_int32(0)), t4);
	}
	return C;
}

/* [detachable] SPECIAL [CHARACTER_8].copy_data */
void T15f8(GE_context* ac, T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T1 t1;
	T2 t2;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	t1 = (T1)(a1==C);
	if (t1) {
		T15f11(ac, C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		while (1) {
			t1 = (T1)((l1) == (l3));
			if (t1) {
				break;
			}
			t2 = (((T15*)(GE_void(a1)))->z2[l1]);
			T15f12(ac, C, t2, l2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		}
	}
}

/* [detachable] SPECIAL [CHARACTER_8].force */
void T15f12(GE_context* ac, T0* C, T2 a1, T6 a2)
{
	T1 t1;
	t1 = ((T1)((a2)<(((T15*)(C))->a1)));
	if (t1) {
		((T15*)(C))->z2[a2] = (a1);
	} else {
		T15f13(ac, C, a1);
	}
}

/* [detachable] SPECIAL [CHARACTER_8].move_data */
void T15f11(GE_context* ac, T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = (T1)((a1) == (a2));
	if (t1) {
	} else {
		t1 = (T6f14(ac, &a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T15f14(ac, C, a1, a2, a3);
			} else {
				T15f15(ac, C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T15f14(ac, C, a1, a2, a3);
			} else {
				T15f15(ac, C, a1, a2, a3);
			}
		}
	}
}

/* [detachable] SPECIAL [CHARACTER_8].overlapping_move */
void T15f15(GE_context* ac, T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	T2 t3;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t2 = ((T6)((a2)+(a3)));
		t1 = (T6f13(ac, &t2, ((T15*)(C))->a1));
		if (t1) {
			t3 = (((T15*)(C))->z2[a1]);
			t2 = ((T6)((a2)+(a3)));
			t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
			T15f9(ac, C, t3, ((T15*)(C))->a1, t2);
		}
		while (1) {
			t1 = (T1)((l1) == (l2));
			if (t1) {
				break;
			}
			t3 = (((T15*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T15*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		while (1) {
			t1 = (T1)((l1) == (l2));
			if (t1) {
				break;
			}
			t3 = (((T15*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			T15f12(ac, C, t3, t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
	}
}

/* [detachable] SPECIAL [CHARACTER_8].non_overlapping_move */
void T15f14(GE_context* ac, T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T2 t2;
	T6 t3;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	while (1) {
		t1 = (T1)((l1) == (l2));
		if (t1) {
			break;
		}
		t2 = (((T15*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		T15f12(ac, C, t2, t3);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
}

/* UTF_CONVERTER.is_hexa_decimal */
T1 T77f6(GE_context* ac, T77* C, T0* a1)
{
	T6 t1;
	T1 R = 0;
	T0* l1 = 0;
	l1 = (T77f8(ac, C));
	t1 = ((T6)(GE_int32(13)));
	T89f18(ac, GE_void(l1), t1);
	t1 = ((T6)(GE_int32(13)));
	T89f19(ac, GE_void(l1), a1, t1);
	R = (T89f14(ac, GE_void(l1)));
	return R;
}

/* [detachable] HEXADECIMAL_STRING_TO_INTEGER_CONVERTER.is_integral_integer */
T1 T89f14(GE_context* ac, T0* C)
{
	T1 t1;
	T1 R = 0;
	t1 = (T1)((((T89*)(C))->a1) == ((T6)(GE_int32(2))));
	if (!(t1)) {
		t1 = (T1)((((T89*)(C))->a1) == ((T6)(GE_int32(3))));
	}
	if (t1) {
		R = ((T1)(!(((T89*)(C))->a2)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* [detachable] STRING_8.substring */
T0* T17f13(GE_context* ac, T0* C, T6 a1, T6 a2)
{
	T6 t1;
	T1 t2;
	T0* t3;
	T6 t4;
	T0* R = 0;
	t1 = (T6)(GE_int32(1));
	t2 = (T6f20(ac, &t1, a1));
	if (t2) {
		t2 = (T6f20(ac, &a1, a2));
	}
	if (t2) {
		t2 = (T6f20(ac, &a2, ((T17*)(C))->a2));
	}
	if (t2) {
		t1 = ((T6)((a2)-(a1)));
		t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
		R = (T17f6(ac, C, t1));
		t3 = (((T17*)(GE_void(R)))->a1);
		t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
		t4 = ((T6)((a2)-(a1)));
		t4 = ((T6)((t4)+((T6)(GE_int32(1)))));
		T15f8(ac, GE_void(t3), ((T17*)(C))->a1, t1, (T6)(GE_int32(0)), t4);
		t1 = ((T6)((a2)-(a1)));
		t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
		T17f25(ac, GE_void(R), t1);
	} else {
		R = (T17f6(ac, C, (T6)(GE_int32(0))));
	}
	return R;
}

/* [detachable] STRING_8.set_count */
void T17f25(GE_context* ac, T0* C, T6 a1)
{
	((T17*)(C))->a2 = a1;
	T17f20(ac, C);
}

/* [detachable] STRING_8.reset_hash_codes */
void T17f20(GE_context* ac, T0* C)
{
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	((T17*)(C))->a4 = (T6)(GE_int32(0));
}

/* [detachable] STRING_8.new_string */
T0* T17f6(GE_context* ac, T0* C, T6 a1)
{
	T0* R = 0;
	R = T17c15(ac, a1);
	return R;
}

/* [detachable] STRING_8.character_32_item */
T3 T17f12(GE_context* ac, T0* C, T6 a1)
{
	T10 t1;
	T3 R = 0;
	t1 = (T17f11(ac, C, a1));
	R = ((T3)(t1));
	return R;
}

/* INTEGER_32.is_greater_equal */
T1 T6f13(GE_context* ac, T6* C, T6 a1)
{
	T1 t1;
	T1 R = 0;
	t1 = ((T1)((*C)<(a1)));
	R = ((T1)(!(t1)));
	return R;
}

/* UTF_CONVERTER.utf_8_bytes_count */
T6 T77f3(GE_context* ac, T77* C, T0* a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 R = 0;
	T6 l1 = 0;
	T10 l2 = 0;
	l1 = a2;
	while (1) {
		t1 = (T6f14(ac, (&l1), a3));
		if (t1) {
			break;
		}
		l2 = (T17f11(ac, GE_void(a1), l1));
		t1 = (T10f5(ac, (&l2), (T10)(GE_nat32(127))));
		if (t1) {
			R = ((T6)((R)+((T6)(GE_int32(1)))));
		} else {
			t1 = (T10f5(ac, (&l2), (T10)(GE_nat32(2047))));
			if (t1) {
				R = ((T6)((R)+((T6)(GE_int32(2)))));
			} else {
				t1 = (T10f5(ac, (&l2), (T10)(GE_nat32(65535))));
				if (t1) {
					R = ((T6)((R)+((T6)(GE_int32(3)))));
				} else {
					R = ((T6)((R)+((T6)(GE_int32(4)))));
				}
			}
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
	return R;
}

/* INTEGER_32.do_nothing */
void T6f30(GE_context* ac, T6* C)
{
}

/* [detachable] FILE_INFO.multi_byte_to_utf_16 */
T6 T81f7(GE_context* ac, T0* C, T14 a1, T14 a2, T6 a3)
{
	{
			#ifdef EIF_WINDOWS
				return (EIF_INTEGER) MultiByteToWideChar(CP_ACP, 0, (LPSTR) a1, -1, (LPWSTR) a2, (int) a3) * sizeof(wchar_t);
			#else
				return a3;
			#endif
	}
}

/* [detachable] FILE_INFO.default_pointer */
T14 T81f6(GE_context* ac, T0* C)
{
	T14 R = 0;
	return R;
}

/* detachable C_STRING.item */
T14 T30f3(GE_context* ac, T0* C)
{
	T14 R = 0;
	R = (((T79*)(GE_void(((T30*)(C))->a1)))->a1);
	return R;
}

/* detachable C_STRING.make */
T0* T30c6(GE_context* ac, T0* a1)
{
	T0* C;
	T6 t1;
	C = GE_new30(EIF_TRUE);
	t1 = (((T17*)(GE_void(a1)))->a2);
	T30f4(ac, C, t1);
	T30f7(ac, C, a1);
	return C;
}

/* detachable C_STRING.make_empty */
void T30f4(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T30*)(C))->a1 = T79c8(ac, t1);
	((T30*)(C))->a2 = (T6)(GE_int32(0));
}

/* detachable C_STRING.make_empty */
T0* T30c4(GE_context* ac, T6 a1)
{
	T0* C;
	T6 t1;
	C = GE_new30(EIF_TRUE);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T30*)(C))->a1 = T79c8(ac, t1);
	((T30*)(C))->a2 = (T6)(GE_int32(0));
	return C;
}

/* UTF_CONVERTER.escaped_utf_32_substring_into_utf_16_0_pointer */
void T77f11(GE_context* ac, T77* C, T0* a1, T6 a2, T6 a3, T0* a4, T6 a5, T0* a6)
{
	T6 t1;
	T6 t2;
	T1 t3;
	T3 t4;
	T10 t5;
	T2 t6;
	T3 t7;
	T9 t8;
	T10 t9;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T10 l5 = 0;
	T0* l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	t1 = ((T6)((a3)-(a2)));
	l2 = ((T6)((t1)+((T6)(GE_int32(1)))));
	l4 = (((T79*)(GE_void(a4)))->a2);
	t1 = ((T6)((l4)-(a5)));
	t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
	t2 = ((T6)((t2)*((T6)(GE_int32(2)))));
	t3 = ((T1)((t1)<(t2)));
	if (t3) {
		t1 = (T77f4(ac, C, a1, a2, a3));
		t1 = ((T6)((a5)+(t1)));
		l4 = ((T6)((t1)+((T6)(GE_int32(2)))));
		T79f9(ac, GE_void(a4), l4);
		l8 = EIF_TRUE;
	}
	l1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	l3 = a5;
	while (1) {
		t3 = (T6f13(ac, (&l1), a3));
		if (t3) {
			break;
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		l5 = (T17f11(ac, a1, l1));
		t4 = (T3)(GE_nat32(65533));
		t5 = ((T10)(t4));
		t3 = (T1)((l5) == (t5));
		if (t3) {
			t3 = ((T1)((l1)<(l2)));
			if (t3) {
				t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t4 = (T17f12(ac, a1, t1));
				t3 = (T1)((t4) == ((T3)(GE_nat32(65533))));
				if (t3) {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				} else {
					t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t4 = (T17f12(ac, a1, t1));
					t6 = (T2)('u');
					t7 = ((T3)(t6));
					t3 = (T1)((t4) == (t7));
					if (t3) {
						t1 = ((T6)((l1)+((T6)(GE_int32(4)))));
						t3 = ((T1)((t1)<(l2)));
						if (t3) {
							t1 = ((T6)((l1)+((T6)(GE_int32(2)))));
							t2 = ((T6)((l1)+((T6)(GE_int32(5)))));
							l6 = (T17f13(ac, a1, t1, t2));
							t3 = (T77f6(ac, C, l6));
							if (t3) {
								l5 = (T77f7(ac, C, l6));
								t3 = ((T1)((l5)<((T10)(GE_nat32(55296)))));
								if (!(t3)) {
									t3 = (T10f11(ac, (&l5), (T10)(GE_nat32(57343))));
								}
								if (t3) {
									t4 = (T3)(GE_nat32(65533));
									l5 = ((T10)(t4));
								} else {
									l7 = EIF_TRUE;
									l1 = ((T6)((l1)+((T6)(GE_int32(5)))));
								}
							}
						}
					}
				}
			}
		}
		t3 = ((T1)(!(l7)));
		if (t3) {
			t3 = (T10f5(ac, (&l5), (T10)(GE_nat32(65535))));
			if (t3) {
				t8 = (T10f12(ac, (&l5)));
				T79f13(ac, GE_void(a4), t8, l3);
				l3 = ((T6)((l3)+((T6)(GE_int32(2)))));
			} else {
				t3 = ((T1)(!(l8)));
				if (t3) {
					t1 = ((T6)((l3)+((T6)(GE_int32(6)))));
					t2 = ((T6)((a3)-(l1)));
					t2 = ((T6)((t2)*((T6)(GE_int32(2)))));
					t1 = ((T6)((t1)+(t2)));
					t3 = (T6f14(ac, &t1, l4));
				}
				if (t3) {
					t1 = (T77f4(ac, C, a1, l1, a3));
					t1 = ((T6)((l3)+(t1)));
					l4 = ((T6)((t1)+((T6)(GE_int32(2)))));
					T79f9(ac, GE_void(a4), l4);
					l8 = EIF_TRUE;
				}
				t5 = ((T10)((T6)(GE_int32(55232))));
				t9 = ((T10)((l5)>>((T6)(GE_int32(10)))));
				t5 = ((T10)((t5)+(t9)));
				t8 = (T10f12(ac, &t5));
				T79f13(ac, GE_void(a4), t8, l3);
				t5 = ((T10)((T6)(GE_int32(56320))));
				t9 = ((T10)((l5)&((T10)(GE_nat32(1023)))));
				t5 = ((T10)((t5)+(t9)));
				t8 = (T10f12(ac, &t5));
				t1 = ((T6)((l3)+((T6)(GE_int32(2)))));
				T79f13(ac, GE_void(a4), t8, t1);
				l3 = ((T6)((l3)+((T6)(GE_int32(4)))));
			}
		} else {
			l7 = EIF_FALSE;
			t8 = (T10f12(ac, (&l5)));
			T79f13(ac, GE_void(a4), t8, l3);
			l3 = ((T6)((l3)+((T6)(GE_int32(2)))));
		}
	}
	if (l8) {
		t1 = ((T6)((l3)+((T6)(GE_int32(2)))));
		T79f9(ac, GE_void(a4), t1);
	}
	T79f13(ac, GE_void(a4), (T9)(GE_nat16(0)), l3);
	t3 = EIF_FALSE;
	if (t3) {
		(GE_void(a6), l3);
	}
}

/* [detachable] MANAGED_POINTER.put_natural_16 */
void T79f13(GE_context* ac, T0* C, T9 a1, T6 a2)
{
	T14 t1;
	T88 t2;
	T14 t3;
	t1 = ((T14)(((char*)(((T79*)(C))->a1))+(a2)));
	(t2).a1 = ((T14)&a1);
	t3 = ((t2).a1);
	T14f13(ac, &t1, t3, (T6)(GE_int32(2)));
}

/* NATURAL_32.to_natural_16 */
T9 T10f12(GE_context* ac, T10* C)
{
	T9 R = 0;
	R = ((T9)(*C));
	return R;
}

/* NATURAL_32.is_greater */
T1 T10f11(GE_context* ac, T10* C, T10 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* UTF_CONVERTER.utf_16_bytes_count */
T6 T77f4(GE_context* ac, T77* C, T0* a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 R = 0;
	T6 l1 = 0;
	T10 l2 = 0;
	l1 = a2;
	while (1) {
		t1 = (T6f14(ac, (&l1), a3));
		if (t1) {
			break;
		}
		l2 = (T17f11(ac, a1, l1));
		t1 = (T10f5(ac, (&l2), (T10)(GE_nat32(65535))));
		if (t1) {
			R = ((T6)((R)+((T6)(GE_int32(2)))));
		} else {
			R = ((T6)((R)+((T6)(GE_int32(4)))));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
	return R;
}

/* [detachable] MANAGED_POINTER.make */
T0* T79c8(GE_context* ac, T6 a1)
{
	T0* C;
	T6 t1;
	T14 t2;
	T1 t3;
	T0* t4;
	C = GE_new79(EIF_TRUE);
	T79f11(ac, C);
	t1 = (T6f17(ac, &a1, (T6)(GE_int32(1))));
	((T79*)(C))->a1 = (T14f4(ac, &(((T79*)(C))->a1), t1, (T6)(GE_int32(1))));
	t2 = (T79f4(ac, C));
	t3 = (T1)((((T79*)(C))->a1) == (t2));
	if (t3) {
		t4 = (T82c1(ac));
		T82f2(ac, t4, GE_ms8("No more memory", 14));
	}
	((T79*)(C))->a2 = a1;
	((T79*)(C))->a3 = EIF_FALSE;
	return C;
}

/* [detachable] EXCEPTIONS.raise */
void T82f2(GE_context* ac, T0* C, T0* a1)
{
	T0* l1 = 0;
	l1 = T67c10(ac);
	T67f13(ac, GE_void(l1), a1);
	T67f16(ac, GE_void(l1));
}

/* [detachable] DEVELOPER_EXCEPTION.raise */
void T67f16(GE_context* ac, T0* C)
{
	T0* t1;
	t1 = (T67f6(ac, C));
	T21f19(ac, t1, C);
}

/* [detachable] ISE_EXCEPTION_MANAGER.raise */
void T21f19(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	T0* m1 = 0;
	T6 t3;
	T14 l1 = 0;
	T14 l2 = 0;
	t1 = (T67f7(ac, a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t1 = (T21f8(ac, C));
		if (t1) {
			t2 = (T21f1(ac, C));
			T67f11(ac, a1, t2);
		}
		T21f17(ac, C, a1);
		l1 = (T21f9(ac, C));
		t2 = (((T67*)(a1))->a3);
		t1 = (t2?((m1 = t2, EIF_TRUE)):EIF_FALSE);
		if (t1) {
			l2 = (T30f3(ac, m1));
		} else {
			l2 = (T21f9(ac, C));
		}
		t3 = (T67f8(ac, a1));
		GE_developer_raise((t3), (l1), (l2));
	}
}

/* [detachable] DEVELOPER_EXCEPTION.code */
T6 T67f8(GE_context* ac, T0* C)
{
	T6 R = 0;
	R = ((T6)(GE_int32(24)));
	return R;
}

/* [detachable] ISE_EXCEPTION_MANAGER.default_pointer */
T14 T21f9(GE_context* ac, T0* C)
{
	T14 R = 0;
	return R;
}

/* [detachable] ISE_EXCEPTION_MANAGER.set_last_exception */
void T21f17(GE_context* ac, T0* C, T0* a1)
{
	T0* t1;
	t1 = (T21f2(ac, C));
	T26f2(ac, GE_void(t1), a1);
}

/* [detachable] CELL [detachable EXCEPTION].put */
void T26f2(GE_context* ac, T0* C, T0* a1)
{
	((T26*)(C))->a1 = a1;
}

/* [detachable] CELL [detachable EXCEPTION].put */
T0* T26c2(GE_context* ac, T0* a1)
{
	T0* C;
	C = GE_new26(EIF_TRUE);
	((T26*)(C))->a1 = a1;
	return C;
}

/* [detachable] ISE_EXCEPTION_MANAGER.last_exception_cell */
T0* T21f2(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	if (GE_process_onces->reference_status[5]) {
		if (GE_process_onces->reference_exception[5]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[5]);
		}
		return GE_process_onces->reference_value[5];
	} else {
		GE_process_onces->reference_status[5] = '\1';
		GE_process_onces->reference_value[5] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[5] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T26c2(ac, EIF_VOID);
	GE_process_onces->reference_value[5] = R;
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] DEVELOPER_EXCEPTION.set_throwing_exception */
void T67f11(GE_context* ac, T0* C, T0* a1)
{
	((T67*)(C))->a1 = a1;
}

/* [detachable] ISE_EXCEPTION_MANAGER.in_rescue */
T1 T21f8(GE_context* ac, T0* C)
{
	T1 R = 0;
	{
	R = EIF_TEST(eif_is_in_rescue());
	}
	return R;
}

/* [detachable] DEVELOPER_EXCEPTION.is_ignored */
T1 T67f7(GE_context* ac, T0* C)
{
	T0* t1;
	T0* t2;
	T1 R = 0;
	t1 = (T67f6(ac, C));
	t2 = ((T0*)&(GE_types[67][0]));
	R = (T21f13(ac, t1, t2));
	return R;
}

/* [detachable] ISE_EXCEPTION_MANAGER.is_ignored */
T1 T21f13(GE_context* ac, T0* C, T0* a1)
{
	T0* t1;
	T6 t2;
	T1 R = 0;
	t1 = (T21f3(ac, C));
	t2 = (((EIF_TYPE_OBJ*)(a1))->type_id);
	R = (T27f34(ac, GE_void(t1), t2));
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].has */
T1 T27f34(GE_context* ac, T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T6 t3;
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T0* l11 = 0;
	T6 l12 = 0;
	l7 = (T6)(GE_int32(-1));
	t1 = (T1)((a1) == (l1));
	if (!(t1)) {
		t1 = EIF_FALSE;
	}
	if (t1) {
		if (((T27*)(C))->a11) {
			R = EIF_TRUE;
		}
	} else {
		l9 = ((T27*)(C))->a3;
		l10 = ((T27*)(C))->a5;
		l11 = ((T27*)(C))->a4;
		l6 = ((T27*)(C))->a1;
		l8 = l6;
		l2 = (T27f25(ac, C, a1));
		t2 = (T6)(GE_int32(1));
		t3 = ((T6)((l6)-((T6)(GE_int32(1)))));
		t3 = ((T6)((l2)%(t3)));
		l3 = ((T6)((t2)+(t3)));
		t2 = ((T6)((l2)%(l6)));
		l5 = ((T6)((t2)-(l3)));
		while (1) {
			t1 = (T1)((l8) == ((T6)(GE_int32(0))));
			if (t1) {
				break;
			}
			t2 = ((T6)((l5)+(l3)));
			l5 = ((T6)((t2)%(l6)));
			l4 = (((T73*)(GE_void(l10)))->z2[l5]);
			t1 = (T6f13(ac, (&l4), (T6)(GE_int32(0))));
			if (t1) {
				l12 = (((T73*)(GE_void(l9)))->z2[l4]);
				t1 = (T27f26(ac, C, l12, a1));
				if (t1) {
					l8 = (T6)(GE_int32(1));
					R = EIF_TRUE;
				}
			} else {
				t1 = (T1)((l4) == ((T6)(GE_int32(-1))));
				if (t1) {
					l8 = (T6)(GE_int32(1));
				} else {
					t1 = (T1)((l7) == ((T6)(GE_int32(-1))));
					if (t1) {
						t2 = ((T6)(-(l4)));
						l4 = ((T6)((t2)+((T6)(GE_int32(-2)))));
						t1 = (((T74*)(GE_void(l11)))->z2[l4]);
						t1 = ((T1)(!(t1)));
						if (t1) {
							l8 = (T6)(GE_int32(1));
						} else {
							l7 = l5;
						}
					}
				}
			}
			l8 = ((T6)((l8)-((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].same_keys */
T1 T27f26(GE_context* ac, T0* C, T6 a1, T6 a2)
{
	T1 R = 0;
	R = (T1)((a1) == (a2));
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].hash_code_of */
T6 T27f25(GE_context* ac, T0* C, T6 a1)
{
	T6 R = 0;
	R = (T6f19(ac, &a1));
	return R;
}

/* INTEGER_32.hash_code */
T6 T6f19(GE_context* ac, T6* C)
{
	T6 R = 0;
	R = ((T6)((*C)&((T6)(GE_int32(2147483647)))));
	return R;
}

/* [detachable] ISE_EXCEPTION_MANAGER.ignored_exceptions */
T0* T21f3(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	if (GE_process_onces->reference_status[6]) {
		if (GE_process_onces->reference_exception[6]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[6]);
		}
		return GE_process_onces->reference_value[6];
	} else {
		GE_process_onces->reference_status[6] = '\1';
		GE_process_onces->reference_value[6] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[6] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T27c35(ac, (T6)(GE_int32(0)));
	GE_process_onces->reference_value[6] = R;
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].make */
T0* T27c35(GE_context* ac, T6 a1)
{
	T0* C;
	T6 t1;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	C = GE_new27(EIF_TRUE);
	l1 = T72c5(ac);
	l4 = (T6f17(ac, &a1, (T6)(GE_int32(2))));
	t1 = ((T6)((l4)/((T6)(GE_int32(2)))));
	t1 = ((T6)((l4)+(t1)));
	l4 = ((T6)((t1)+((T6)(GE_int32(1)))));
	l4 = (T72f1(ac, GE_void(l1), l4));
	((T27*)(C))->a1 = l4;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T27*)(C))->a2 = T73c4(ac, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T27*)(C))->a3 = T73c4(ac, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T27*)(C))->a4 = T74c4(ac, EIF_FALSE, t1);
	t1 = ((T6)((l4)+((T6)(GE_int32(1)))));
	((T27*)(C))->a5 = T73c5(ac, (T6)(GE_int32(-1)), t1);
	((T27*)(C))->a6 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T27*)(C))->a7 = (T6)(GE_int32(0));
	((T27*)(C))->a8 = (T6)(GE_int32(-1));
	((T27*)(C))->a9 = (T6)(GE_int32(0));
	((T27*)(C))->a10 = l2;
	((T27*)(C))->a11 = EIF_FALSE;
	((T27*)(C))->a12 = (T6)(GE_int32(0));
	((T27*)(C))->a13 = (T6)(GE_int32(2147483645));
	((T27*)(C))->a14 = l2;
	((T27*)(C))->a15 = l3;
	return C;
}

/* [detachable] SPECIAL [[attached] INTEGER_32].make_filled */
T0* T73c5(GE_context* ac, T6 a1, T6 a2)
{
	T0* C;
	T6 t1;
	C = GE_new73(a2, EIF_TRUE);
	T73f4(ac, C, a2);
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	T73f8(ac, C, a1, (T6)(GE_int32(0)), t1);
	return C;
}

/* [detachable] SPECIAL [[attached] INTEGER_32].fill_with */
void T73f8(GE_context* ac, T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 t1;
	T1 t2;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	l1 = a2;
	t1 = ((T6)((a3)+((T6)(GE_int32(1)))));
	l3 = (T6f18(ac, &(((T73*)(C))->a1), t1));
	l2 = l3;
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		((T73*)(C))->z2[l1] = (a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
	l1 = l3;
	l2 = ((T6)((a3)+((T6)(GE_int32(1)))));
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		T73f9(ac, C, a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
}

/* [detachable] SPECIAL [[attached] INTEGER_32].extend */
void T73f9(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	{
	t1 = ((T73*)(C))->a1;
	((T73*)(C))->a1 = t1 + 1 ;
	((T73*)(C))->z2[t1] = a1;
	}
}

/* [detachable] SPECIAL [[attached] BOOLEAN].make_filled */
T0* T74c4(GE_context* ac, T1 a1, T6 a2)
{
	T0* C;
	T6 t1;
	C = GE_new74(a2, EIF_TRUE);
	T74f6(ac, C, a2);
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	T74f7(ac, C, a1, (T6)(GE_int32(0)), t1);
	return C;
}

/* [detachable] SPECIAL [[attached] BOOLEAN].fill_with */
void T74f7(GE_context* ac, T0* C, T1 a1, T6 a2, T6 a3)
{
	T6 t1;
	T1 t2;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	l1 = a2;
	t1 = ((T6)((a3)+((T6)(GE_int32(1)))));
	l3 = (T6f18(ac, &(((T74*)(C))->a1), t1));
	l2 = l3;
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		((T74*)(C))->z2[l1] = (a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
	l1 = l3;
	l2 = ((T6)((a3)+((T6)(GE_int32(1)))));
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		T74f9(ac, C, a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
}

/* [detachable] SPECIAL [[attached] BOOLEAN].extend */
void T74f9(GE_context* ac, T0* C, T1 a1)
{
	T6 t1;
	{
	t1 = ((T74*)(C))->a1;
	((T74*)(C))->a1 = t1 + 1 ;
	((T74*)(C))->z2[t1] = a1;
	}
}

/* [detachable] SPECIAL [[attached] BOOLEAN].make_empty */
void T74f6(GE_context* ac, T0* C, T6 a1)
{
	{
	}
}

/* [detachable] SPECIAL [[attached] INTEGER_32].make_empty */
void T73f4(GE_context* ac, T0* C, T6 a1)
{
	{
	}
}

/* [detachable] SPECIAL [[attached] INTEGER_32].make_empty */
T0* T73c4(GE_context* ac, T6 a1)
{
	T0* C;
	C = GE_new73(a1, EIF_TRUE);
	{
	}
	return C;
}

/* [detachable] PRIMES.higher_prime */
T6 T72f1(GE_context* ac, T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T6 R = 0;
	t1 = (T6f20(ac, &a1, (T6)(GE_int32(2))));
	if (t1) {
		R = (T6)(GE_int32(2));
	} else {
		t2 = ((T6)((a1)%((T6)(GE_int32(2)))));
		t1 = (T1)((t2) == ((T6)(GE_int32(0))));
		if (t1) {
			R = ((T6)((a1)+((T6)(GE_int32(1)))));
		} else {
			R = a1;
		}
		while (1) {
			t1 = (T72f3(ac, C, R));
			if (t1) {
				break;
			}
			R = ((T6)((R)+((T6)(GE_int32(2)))));
		}
	}
	return R;
}

/* [detachable] PRIMES.is_prime */
T1 T72f3(GE_context* ac, T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T1 R = 0;
	T6 l1 = 0;
	t1 = (T6f20(ac, &a1, (T6)(GE_int32(1))));
	if (t1) {
		R = EIF_FALSE;
	} else {
		t1 = (T1)((a1) == ((T6)(GE_int32(2))));
		if (t1) {
			R = EIF_TRUE;
		} else {
			t2 = ((T6)((a1)%((T6)(GE_int32(2)))));
			t1 = (T1)(!(T1)((t2) == ((T6)(GE_int32(0)))));
			if (t1) {
				l1 = (T6)(GE_int32(3));
				while (1) {
					t2 = ((T6)((a1)%(l1)));
					t1 = (T1)((t2) == ((T6)(GE_int32(0))));
					if (!(t1)) {
						t2 = ((T6)((l1)*(l1)));
						t1 = (T6f13(ac, &t2, a1));
					}
					if (t1) {
						break;
					}
					l1 = ((T6)((l1)+((T6)(GE_int32(2)))));
				}
				t2 = ((T6)((l1)*(l1)));
				t1 = (T6f14(ac, &t2, a1));
				if (t1) {
					R = EIF_TRUE;
				}
			}
		}
	}
	return R;
}

/* [detachable] PRIMES.default_create */
T0* T72c5(GE_context* ac)
{
	T0* C;
	C = GE_new72(EIF_TRUE);
	return C;
}

/* [detachable] DEVELOPER_EXCEPTION.exception_manager */
T0* T67f6(GE_context* ac, T0* C)
{
	T0* R = 0;
	{
	R = ac->exception_manager;
	}
	return R;
}

/* [detachable] DEVELOPER_EXCEPTION.set_description */
void T67f13(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = (T1)(a1!=EIF_VOID);
	if (t1) {
		t2 = (((T17*)(GE_void(a1)))->a2);
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T67*)(C))->a3 = l3;
	} else {
		((T67*)(C))->a3 = EIF_VOID;
	}
}

/* detachable C_STRING.set_count */
void T30f5(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	T1 t2;
	T6 l1 = 0;
	l1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = (((T79*)(GE_void(((T30*)(C))->a1)))->a2);
	t2 = ((T1)((t1)<(l1)));
	if (t2) {
		T79f9(ac, GE_void(((T30*)(C))->a1), l1);
	}
	((T30*)(C))->a2 = a1;
}

/* UTF_CONVERTER.utf_32_string_into_utf_8_0_pointer */
void T77f9(GE_context* ac, T77* C, T0* a1, T0* a2, T6 a3, T0* a4)
{
	T6 t1;
	T6 t2;
	T1 t3;
	T8 t4;
	T10 t5;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T10 l5 = 0;
	T1 l6 = 0;
	l3 = (((T17*)(GE_void(a1)))->a2);
	l4 = (((T79*)(GE_void(a2)))->a2);
	t1 = ((T6)((l4)-(a3)));
	t2 = ((T6)((l3)+((T6)(GE_int32(1)))));
	t3 = ((T1)((t1)<(t2)));
	if (t3) {
		t1 = (T77f3(ac, C, a1, (T6)(GE_int32(1)), l3));
		t1 = ((T6)((a3)+(t1)));
		l4 = ((T6)((t1)+((T6)(GE_int32(1)))));
		T79f9(ac, GE_void(a2), l4);
		l6 = EIF_TRUE;
	}
	l2 = (T6)(GE_int32(0));
	l1 = a3;
	while (1) {
		t3 = (T6f13(ac, (&l2), l3));
		if (t3) {
			break;
		}
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		l5 = (T17f11(ac, GE_void(a1), l2));
		t3 = (T10f5(ac, (&l5), (T10)(GE_nat32(127))));
		if (t3) {
			t4 = (T10f4(ac, (&l5)));
			T79f10(ac, GE_void(a2), t4, l1);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		} else {
			t3 = ((T1)(!(l6)));
			if (t3) {
				t1 = ((T6)((l1)+((T6)(GE_int32(5)))));
				t2 = ((T6)((l3)-(l2)));
				t1 = ((T6)((t1)+(t2)));
				t3 = (T6f14(ac, &t1, l4));
			}
			if (t3) {
				t1 = (T77f3(ac, C, a1, l2, l3));
				t1 = ((T6)((l1)+(t1)));
				l4 = ((T6)((t1)+((T6)(GE_int32(1)))));
				T79f9(ac, GE_void(a2), l4);
				l6 = EIF_TRUE;
			}
			t3 = (T10f5(ac, (&l5), (T10)(GE_nat32(2047))));
			if (t3) {
				t5 = ((T10)((l5)>>((T6)(GE_int32(6)))));
				t5 = ((T10)((t5)|((T10)(GE_nat32(192)))));
				t4 = (T10f4(ac, &t5));
				T79f10(ac, GE_void(a2), t4, l1);
				t5 = ((T10)((l5)&((T10)(GE_nat32(63)))));
				t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
				t4 = (T10f4(ac, &t5));
				t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				T79f10(ac, GE_void(a2), t4, t1);
				l1 = ((T6)((l1)+((T6)(GE_int32(2)))));
			} else {
				t3 = (T10f5(ac, (&l5), (T10)(GE_nat32(65535))));
				if (t3) {
					t5 = ((T10)((l5)>>((T6)(GE_int32(12)))));
					t5 = ((T10)((t5)|((T10)(GE_nat32(224)))));
					t4 = (T10f4(ac, &t5));
					T79f10(ac, GE_void(a2), t4, l1);
					t5 = ((T10)((l5)>>((T6)(GE_int32(6)))));
					t5 = ((T10)((t5)&((T10)(GE_nat32(63)))));
					t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
					t4 = (T10f4(ac, &t5));
					t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					T79f10(ac, GE_void(a2), t4, t1);
					t5 = ((T10)((l5)&((T10)(GE_nat32(63)))));
					t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
					t4 = (T10f4(ac, &t5));
					t1 = ((T6)((l1)+((T6)(GE_int32(2)))));
					T79f10(ac, GE_void(a2), t4, t1);
					l1 = ((T6)((l1)+((T6)(GE_int32(3)))));
				} else {
					t5 = ((T10)((l5)>>((T6)(GE_int32(18)))));
					t5 = ((T10)((t5)|((T10)(GE_nat32(240)))));
					t4 = (T10f4(ac, &t5));
					T79f10(ac, GE_void(a2), t4, l1);
					t5 = ((T10)((l5)>>((T6)(GE_int32(12)))));
					t5 = ((T10)((t5)&((T10)(GE_nat32(63)))));
					t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
					t4 = (T10f4(ac, &t5));
					t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					T79f10(ac, GE_void(a2), t4, t1);
					t5 = ((T10)((l5)>>((T6)(GE_int32(6)))));
					t5 = ((T10)((t5)&((T10)(GE_nat32(63)))));
					t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
					t4 = (T10f4(ac, &t5));
					t1 = ((T6)((l1)+((T6)(GE_int32(2)))));
					T79f10(ac, GE_void(a2), t4, t1);
					t5 = ((T10)((l5)&((T10)(GE_nat32(63)))));
					t5 = ((T10)((t5)|((T10)(GE_nat32(128)))));
					t4 = (T10f4(ac, &t5));
					t1 = ((T6)((l1)+((T6)(GE_int32(3)))));
					T79f10(ac, GE_void(a2), t4, t1);
					l1 = ((T6)((l1)+((T6)(GE_int32(4)))));
				}
			}
		}
	}
	if (l6) {
		t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		T79f9(ac, GE_void(a2), t1);
	}
	T79f10(ac, GE_void(a2), (T8)(GE_nat8(0)), l1);
	t3 = (T1)(a4!=EIF_VOID);
	if (t3) {
		T78f2(ac, GE_void(a4), l1);
	}
}

/* [detachable] CELL [[attached] INTEGER_32].put */
void T78f2(GE_context* ac, T0* C, T6 a1)
{
	((T78*)(C))->a1 = a1;
}

/* [detachable] CELL [[attached] INTEGER_32].put */
T0* T78c2(GE_context* ac, T6 a1)
{
	T0* C;
	C = GE_new78(EIF_TRUE);
	((T78*)(C))->a1 = a1;
	return C;
}

/* [detachable] DEVELOPER_EXCEPTION.default_create */
T0* T67c10(GE_context* ac)
{
	T0* C;
	C = GE_new67(EIF_TRUE);
	return C;
}

/* [detachable] EXCEPTIONS.default_create */
T0* T82c1(GE_context* ac)
{
	T0* C;
	C = GE_new82(EIF_TRUE);
	return C;
}

/* [detachable] MANAGED_POINTER.default_pointer */
T14 T79f4(GE_context* ac, T0* C)
{
	T14 R = 0;
	return R;
}

/* POINTER.memory_calloc */
T14 T14f4(GE_context* ac, T14* C, T6 a1, T6 a2)
{
	T14 R = 0;
	R = (T14f7(ac, C, a1, a2));
	return R;
}

/* POINTER.c_calloc */
T14 T14f7(GE_context* ac, T14* C, T6 a1, T6 a2)
{
	T14 R = 0;
	{
	R = (T14)(calloc((size_t)a1,( size_t)a2));
	}
	return R;
}

/* INTEGER_32.max */
T6 T6f17(GE_context* ac, T6* C, T6 a1)
{
	T1 t1;
	T6 R = 0;
	t1 = (T6f13(ac, C, a1));
	if (t1) {
		R = *C;
	} else {
		R = a1;
	}
	return R;
}

/* [detachable] MANAGED_POINTER.resize */
void T79f9(GE_context* ac, T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T14 t3;
	T0* t4;
	t1 = (T1)(!(T1)((a1) == (((T79*)(C))->a2)));
	if (t1) {
		t2 = (T6f17(ac, &a1, (T6)(GE_int32(1))));
		((T79*)(C))->a1 = (T14f5(ac, &(((T79*)(C))->a1), t2));
		t3 = (T79f4(ac, C));
		t1 = (T1)((((T79*)(C))->a1) == (t3));
		if (t1) {
			t4 = (T82c1(ac));
			T82f2(ac, t4, GE_ms8("No more memory", 14));
		}
	}
	t1 = (T6f14(ac, &a1, ((T79*)(C))->a2));
	if (t1) {
		t3 = ((T14)(((char*)(((T79*)(C))->a1))+(((T79*)(C))->a2)));
		t2 = ((T6)((a1)-(((T79*)(C))->a2)));
		T14f12(ac, &t3, (T6)(GE_int32(0)), t2);
	}
	((T79*)(C))->a2 = a1;
}

/* POINTER.memory_set */
void T14f12(GE_context* ac, T14* C, T6 a1, T6 a2)
{
	T14f16(ac, C, *C, a1, a2);
}

/* POINTER.c_memset */
void T14f16(GE_context* ac, T14* C, T14 a1, T6 a2, T6 a3)
{
	{
	memset((void *)a1,( int)a2,( size_t)a3);
	}
}

/* POINTER.memory_realloc */
T14 T14f5(GE_context* ac, T14* C, T6 a1)
{
	T14 R = 0;
	R = (T14f8(ac, C, *C, a1));
	return R;
}

/* POINTER.c_realloc */
T14 T14f8(GE_context* ac, T14* C, T14 a1, T6 a2)
{
	T14 R = 0;
	{
	R = (T14)(realloc((void *)a1,( size_t)a2));
	}
	return R;
}

/* [detachable] CONSOLE.buffered_file_info */
T0* T76f11(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	if (GE_process_onces->reference_status[7]) {
		if (GE_process_onces->reference_exception[7]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[7]);
		}
		return GE_process_onces->reference_value[7];
	} else {
		GE_process_onces->reference_status[7] = '\1';
		GE_process_onces->reference_value[7] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[7] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T81c8(ac);
	GE_process_onces->reference_value[7] = R;
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] FILE_INFO.make */
T0* T81c8(GE_context* ac)
{
	T0* C;
	T6 t1;
	C = GE_new81(EIF_TRUE);
	t1 = (T81f4(ac, C));
	T81f9(ac, C, (T8)(GE_nat8(0)), t1);
	((T81*)(C))->a1 = EIF_TRUE;
	((T81*)(C))->a2 = EIF_FALSE;
	return C;
}

/* [detachable] FILE_INFO.make_filled_area */
void T81f9(GE_context* ac, T0* C, T8 a1, T6 a2)
{
	((T81*)(C))->a3 = T86c4(ac, a1, a2);
}

/* [detachable] SPECIAL [[attached] NATURAL_8].make_filled */
T0* T86c4(GE_context* ac, T8 a1, T6 a2)
{
	T0* C;
	T6 t1;
	C = GE_new86(a2, EIF_TRUE);
	T86f5(ac, C, a2);
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	T86f6(ac, C, a1, (T6)(GE_int32(0)), t1);
	return C;
}

/* [detachable] SPECIAL [[attached] NATURAL_8].fill_with */
void T86f6(GE_context* ac, T0* C, T8 a1, T6 a2, T6 a3)
{
	T6 t1;
	T1 t2;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	l1 = a2;
	t1 = ((T6)((a3)+((T6)(GE_int32(1)))));
	l3 = (T6f18(ac, &(((T86*)(C))->a1), t1));
	l2 = l3;
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		((T86*)(C))->z2[l1] = (a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
	l1 = l3;
	l2 = ((T6)((a3)+((T6)(GE_int32(1)))));
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		T86f8(ac, C, a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
}

/* [detachable] FILE_INFO.stat_size */
T6 T81f4(GE_context* ac, T0* C)
{
	T6 R = 0;
	{
	R = (T6)(stat_size());
	}
	return R;
}

/* [detachable] STD_FILES.default_create */
T0* T36c4(GE_context* ac)
{
	T0* C;
	C = GE_new36(EIF_TRUE);
	return C;
}

/* [detachable] RESEARCH_ASSISTANT.do_benchwork */
void T35f10(GE_context* ac, T0* C)
{
	T0* t1;
	T0* t2;
	T0* t3;
	t1 = (T35f7(ac, C));
	t2 = (T17f5(ac, GE_void(((T35*)(C))->a4), GE_ms8(" do_benchwork in the: ", 22)));
	t3 = (T35f6(ac, C));
	t2 = (T17f5(ac, GE_void(t2), t3));
	t2 = (T17f5(ac, GE_void(t2), GE_ms8("\n", 1)));
	T36f5(ac, GE_void(t1), t2);
}

/* [detachable] STD_FILES.put_string */
void T36f5(GE_context* ac, T0* C, T0* a1)
{
	T0* t1;
	t1 = (T36f2(ac, C));
	T76f14(ac, GE_void(t1), a1);
}

/* [detachable] CONSOLE.put_string */
void T76f14(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T70 t2;
	T14 t3;
	T6 l1 = 0;
	T0* l2 = 0;
	l1 = (((T17*)(GE_void(a1)))->a2);
	t1 = (T6f14(ac, (&l1), (T6)(GE_int32(0))));
	if (t1) {
		l2 = (((T17*)(GE_void(a1)))->a1);
		(t2).a1 = ((l2?(T14)(GE_types[((T0*)(l2))->id][0].is_special?(T14)((T15*)(l2))->z2:(T14)l2):(T14)0));
		t3 = ((t2).a1);
		T76f17(ac, C, ((T76*)(C))->a1, t3, l1);
	}
}

/* [detachable] CONSOLE.console_ps */
void T76f17(GE_context* ac, T0* C, T14 a1, T14 a2, T6 a3)
{
	{
	console_ps((FILE *)a1,( char *)a2,( EIF_INTEGER)a3);
	}
}

/* [detachable] STD_FILES.standard_default */
T0* T36f2(GE_context* ac, T0* C)
{
	T1 t1;
	T0* R = 0;
	R = ((T36*)(C))->a1;
	t1 = (T1)(R==EIF_VOID);
	if (t1) {
		R = (T36f3(ac, C));
	}
	return R;
}

/* [detachable] STRING_8.plus */
T0* T17f5(GE_context* ac, T0* C, T0* a1)
{
	T6 t1;
	T0* R = 0;
	t1 = (((T17*)(GE_void(a1)))->a2);
	t1 = ((T6)((((T17*)(C))->a2)+(t1)));
	R = (T17f6(ac, C, t1));
	T17f17(ac, GE_void(R), C);
	T17f17(ac, GE_void(R), a1);
	return R;
}

/* [detachable] STRING_8.append */
void T17f17(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	l2 = (((T17*)(GE_void(a1)))->a2);
	t1 = (T6f14(ac, (&l2), (T6)(GE_int32(0))));
	if (t1) {
		l1 = ((T17*)(C))->a2;
		l3 = ((T6)((l2)+(l1)));
		t2 = (T17f7(ac, C));
		t1 = (T6f14(ac, (&l3), t2));
		if (t1) {
			t2 = (T17f8(ac, C));
			t2 = ((T6)((l3)+(t2)));
			T17f19(ac, C, t2);
		}
		t3 = (((T17*)(GE_void(a1)))->a1);
		t2 = (T17f9(ac, GE_void(a1)));
		T15f8(ac, GE_void(((T17*)(C))->a1), t3, t2, l1, l2);
		((T17*)(C))->a2 = l3;
		T17f20(ac, C);
	}
}

/* [detachable] STRING_8.resize */
void T17f19(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T17*)(C))->a1 = (T15f4(ac, GE_void(((T17*)(C))->a1), (T2)('\000'), t1));
}

/* [detachable] SPECIAL [CHARACTER_8].aliased_resized_area_with_default */
T0* T15f4(GE_context* ac, T0* C, T2 a1, T6 a2)
{
	T6 t1;
	T6 t2;
	T0* R = 0;
	R = (T15f5(ac, C, a2));
	t1 = (((T15*)(GE_void(R)))->a1);
	t2 = ((T6)((a2)-((T6)(GE_int32(1)))));
	T15f9(ac, GE_void(R), a1, t1, t2);
	return R;
}

/* [detachable] SPECIAL [CHARACTER_8].aliased_resized_area */
T0* T15f5(GE_context* ac, T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T6 t3;
	{
	t1 = ((T15*)(C))->a2;
	if (a1 > t1) {
		R = GE_new15(a1, EIF_TRUE);
		((T15*)(R))->a1 = ((T15*)(C))->a1;
		t2 = ((T15*)(C))->a1;
		t1 = ((T15*)(R))->a1;
		if (t2 > t1) {
			t2 = t1;
		}
		if (t2 > 0) {
			uint16_t f1 = ((T0*)(R))->flags;
			t3 = ((T15*)(R))->a2;
			memcpy(R, C, ((T15*)(R))->offset + t2 * sizeof(T2));
			((T0*)(R))->flags = f1;
			((T15*)(R))->a1 = t1;
			((T15*)(R))->a2 = t3;
		}
	} else {
		R = C;
		t1 = ((T15*)(R))->a1;
		if (t1 > a1) {
			((T15*)(R))->a1 = a1;
#ifndef GE_malloc_atomic_cleared
			memset(((T15*)(R))->z2 + a1, 0, (t1 - a1) * sizeof(T2));
#endif
		}
	}
	((T15*)(R))->a2 = a1;
	}
	return R;
}

/* [detachable] STRING_8.additional_space */
T6 T17f8(GE_context* ac, T0* C)
{
	T6 t1;
	T6 R = 0;
	t1 = (T17f7(ac, C));
	t1 = ((T6)((t1)/((T6)(GE_int32(2)))));
	R = (T6f17(ac, &t1, (T6)(GE_int32(5))));
	return R;
}

/* [detachable] STRING_8.capacity */
T6 T17f7(GE_context* ac, T0* C)
{
	T6 t1;
	T6 R = 0;
	t1 = (((T15*)(GE_void(((T17*)(C))->a1)))->a1);
	R = ((T6)((t1)-((T6)(GE_int32(1)))));
	return R;
}

/* INTEGER_32.out */
T0* T6f4(GE_context* ac, T6* C)
{
	T0* R = 0;
	R = T17c15(ac, (T6)(GE_int32(11)));
	T17f16(ac, GE_void(R), *C);
	return R;
}

/* [detachable] STRING_8.append_integer */
void T17f16(GE_context* ac, T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T2 t3;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T2 l4 = 0;
	T0* l5 = 0;
	t1 = (T1)((a1) == ((T6)(GE_int32(0))));
	if (t1) {
		T17f18(ac, C, (T2)('0'));
	} else {
		l2 = ((T17*)(C))->a2;
		t1 = ((T1)((a1)<((T6)(GE_int32(0)))));
		if (t1) {
			T17f18(ac, C, (T2)('-'));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t2 = ((T6)(GE_min_int32));
			t1 = (T1)((a1) == (t2));
			if (t1) {
				T17f18(ac, C, (T2)('8'));
				t2 = ((T6)((a1)/((T6)(GE_int32(10)))));
				l1 = ((T6)(-(t2)));
			} else {
				l1 = ((T6)(-(a1)));
			}
		} else {
			l1 = a1;
		}
		while (1) {
			t1 = (T1)((l1) == ((T6)(GE_int32(0))));
			if (t1) {
				break;
			}
			t2 = ((T6)((l1)%((T6)(GE_int32(10)))));
			t2 = ((T6)((t2)+((T6)(GE_int32(48)))));
			t3 = ((T2)(t2));
			T17f18(ac, C, t3);
			l1 = ((T6)((l1)/((T6)(GE_int32(10)))));
		}
		l3 = ((T6)((((T17*)(C))->a2)-((T6)(GE_int32(1)))));
		l5 = ((T17*)(C))->a1;
		while (1) {
			t1 = (T6f13(ac, (&l2), l3));
			if (t1) {
				break;
			}
			l4 = (((T15*)(GE_void(l5)))->z2[l2]);
			t3 = (((T15*)(GE_void(l5)))->z2[l3]);
			((T15*)(GE_void(l5)))->z2[l2] = (t3);
			((T15*)(GE_void(l5)))->z2[l3] = (l4);
			l3 = ((T6)((l3)-((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		}
	}
}

/* [detachable] STRING_8.append_character */
void T17f18(GE_context* ac, T0* C, T2 a1)
{
	T6 t1;
	T1 t2;
	T6 l1 = 0;
	l1 = ((T17*)(C))->a2;
	t1 = (T17f7(ac, C));
	t2 = (T1)((l1) == (t1));
	if (t2) {
		t1 = (T17f8(ac, C));
		t1 = ((T6)((l1)+(t1)));
		T17f19(ac, C, t1);
	}
	((T15*)(GE_void(((T17*)(C))->a1)))->z2[l1] = (a1);
	((T17*)(C))->a2 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T17f20(ac, C);
}

/* [detachable] APP.physical_size */
T6 T25f6(GE_context* ac, T0* C, T0* a1)
{
	T70 t1;
	T14 t2;
	T6 t3;
	T11 t4;
	T6 R = 0;
	T11 l1 = 0;
	(t1).a1 = ((T14)a1);
	t2 = ((t1).a1);
	l1 = (T71s1(ac, t2));
	t3 = ((T6)(GE_int32(2147483647)));
	t4 = ((T11)(t3));
	t4 = (T11f4(ac, (&l1), t4));
	R = ((T6)(t4));
	return R;
}

/* NATURAL_64.min */
T11 T11f4(GE_context* ac, T11* C, T11 a1)
{
	T1 t1;
	T11 R = 0;
	t1 = (T11f6(ac, C, a1));
	if (t1) {
		R = *C;
	} else {
		R = a1;
	}
	return R;
}

/* NATURAL_64.is_less_equal */
T1 T11f6(GE_context* ac, T11* C, T11 a1)
{
	T1 t1;
	T1 R = 0;
	t1 = ((T1)((a1)<(*C)));
	R = ((T1)(!(t1)));
	return R;
}

/* [detachable] APP.io */
T0* T25f5(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	if (GE_process_onces->reference_status[0]) {
		if (GE_process_onces->reference_exception[0]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[0]);
		}
		return GE_process_onces->reference_value[0];
	} else {
		GE_process_onces->reference_status[0] = '\1';
		GE_process_onces->reference_value[0] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[0] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T36c4(ac);
	GE_process_onces->reference_value[0] = R;
	T36f6(ac, GE_void(R));
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] RESEARCH_ASSISTANT.print_ra */
void T35f9(GE_context* ac, T0* C)
{
	T0* t1;
	T0* t2;
	t1 = (T35f7(ac, C));
	t2 = (T17f5(ac, GE_void(((T35*)(C))->a4), GE_ms8(" has 3 addresses: <", 19)));
	t2 = (T17f5(ac, GE_void(t2), ((T35*)(C))->a1));
	t2 = (T17f5(ac, GE_void(t2), GE_ms8(", ", 2)));
	t2 = (T17f5(ac, GE_void(t2), ((T35*)(C))->a3));
	t2 = (T17f5(ac, GE_void(t2), GE_ms8(", ", 2)));
	t2 = (T17f5(ac, GE_void(t2), ((T35*)(C))->a2));
	t2 = (T17f5(ac, GE_void(t2), GE_ms8(">\n", 2)));
	T36f5(ac, GE_void(t1), t2);
}

/* [detachable] RESEARCH_ASSISTANT.make */
T0* T35c8(GE_context* ac)
{
	T0* C;
	C = GE_new35(EIF_TRUE);
	((T35*)(C))->a4 = GE_ms8("ResAssis", 8);
	((T35*)(C))->a1 = GE_ms8("home", 4);
	T35f13(ac, C, GE_ms8("dorm", 4));
	T35f12(ac, C, GE_ms8("lab", 3));
	return C;
}

/* [detachable] FACULTY.default_create */
T0* T34c3(GE_context* ac)
{
	T0* C;
	C = GE_new34(EIF_TRUE);
	((T34*)(C))->a1 = GE_ms8("name", 4);
	((T34*)(C))->a2 = GE_ms8("addr", 4);
	return C;
}

/* [detachable] STUDENT.default_create */
T0* T33c3(GE_context* ac)
{
	T0* C;
	C = GE_new33(EIF_TRUE);
	((T33*)(C))->a1 = GE_ms8("name", 4);
	((T33*)(C))->a2 = GE_ms8("addr", 4);
	return C;
}

/* [detachable] PERSON.default_create */
T0* T32c3(GE_context* ac)
{
	T0* C;
	C = GE_new32(EIF_TRUE);
	((T32*)(C))->a1 = GE_ms8("name", 4);
	((T32*)(C))->a2 = GE_ms8("addr", 4);
	return C;
}

/* [detachable] ISE_EXCEPTION_MANAGER.set_exception_data */
void T21f16(GE_context* ac, T0* C, T6 a1, T1 a2, T6 a3, T6 a4, T0* a5, T0* a6, T0* a7, T0* a8, T0* a9, T0* a10, T6 a11, T1 a12)
{
	T0* t1;
	T0* t2;
	T1 t3;
	T0* m1 = 0;
	T0* m2 = 0;
	t1 = (T21f6(ac, C));
	t2 = GE_mt31(a1,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);
	T28f2(ac, GE_void(t1), t2);
	if (a2) {
		t1 = (T21f10(ac, C));
		t3 = (t1?((m1 = t1, EIF_TRUE)):EIF_FALSE);
		if (t3) {
			T21f17(ac, C, m1);
		}
	} else {
		{
			t1 = (T21f1(ac, C));
			t3 = (t1?((m2 = t1, EIF_TRUE)):EIF_FALSE);
			if (!(t3)) {
				GE_raise(GE_EX_CHECK);
			}
			T22x4276247T0(ac, m2, a10);
			T22x4276251T0(ac, m2, a6);
			T22x4276248T0(ac, m2, a7);
		}
	}
}

/* [detachable] NO_MORE_MEMORY.set_type_name */
void T44f14(GE_context* ac, T0* C, T0* a1)
{
	((T44*)(C))->a6 = a1;
}

/* [detachable] SERIALIZATION_FAILURE.set_type_name */
void T69f11(GE_context* ac, T0* C, T0* a1)
{
	((T69*)(C))->a5 = a1;
}

/* [detachable] OLD_VIOLATION.set_type_name */
void T42f11(GE_context* ac, T0* C, T0* a1)
{
	((T42*)(C))->a5 = a1;
}

/* [detachable] COM_FAILURE.set_type_name */
void T49f19(GE_context* ac, T0* C, T0* a1)
{
	((T49*)(C))->a8 = a1;
}

/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_type_name */
void T68f11(GE_context* ac, T0* C, T0* a1)
{
	((T68*)(C))->a5 = a1;
}

/* [detachable] DEVELOPER_EXCEPTION.set_type_name */
void T67f15(GE_context* ac, T0* C, T0* a1)
{
	((T67*)(C))->a5 = a1;
}

/* [detachable] MISMATCH_FAILURE.set_type_name */
void T66f11(GE_context* ac, T0* C, T0* a1)
{
	((T66*)(C))->a5 = a1;
}

/* [detachable] OPERATING_SYSTEM_FAILURE.set_type_name */
void T48f13(GE_context* ac, T0* C, T0* a1)
{
	((T48*)(C))->a6 = a1;
}

/* [detachable] IO_FAILURE.set_type_name */
void T47f15(GE_context* ac, T0* C, T0* a1)
{
	((T47*)(C))->a7 = a1;
}

/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_type_name */
void T65f11(GE_context* ac, T0* C, T0* a1)
{
	((T65*)(C))->a5 = a1;
}

/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_type_name */
void T64f11(GE_context* ac, T0* C, T0* a1)
{
	((T64*)(C))->a5 = a1;
}

/* [detachable] EXTERNAL_FAILURE.set_type_name */
void T63f11(GE_context* ac, T0* C, T0* a1)
{
	((T63*)(C))->a5 = a1;
}

/* [detachable] CREATE_ON_DEFERRED.set_type_name */
void T62f11(GE_context* ac, T0* C, T0* a1)
{
	((T62*)(C))->a5 = a1;
}

/* [detachable] RESUMPTION_FAILURE.set_type_name */
void T61f11(GE_context* ac, T0* C, T0* a1)
{
	((T61*)(C))->a5 = a1;
}

/* [detachable] RESCUE_FAILURE.set_type_name */
void T60f11(GE_context* ac, T0* C, T0* a1)
{
	((T60*)(C))->a5 = a1;
}

/* [detachable] EIFFEL_RUNTIME_PANIC.set_type_name */
void T50f14(GE_context* ac, T0* C, T0* a1)
{
	((T50*)(C))->a6 = a1;
}

/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_type_name */
void T46f13(GE_context* ac, T0* C, T0* a1)
{
	((T46*)(C))->a6 = a1;
}

/* [detachable] LOOP_INVARIANT_VIOLATION.set_type_name */
void T59f11(GE_context* ac, T0* C, T0* a1)
{
	((T59*)(C))->a5 = a1;
}

/* [detachable] VARIANT_VIOLATION.set_type_name */
void T58f11(GE_context* ac, T0* C, T0* a1)
{
	((T58*)(C))->a5 = a1;
}

/* [detachable] BAD_INSPECT_VALUE.set_type_name */
void T57f11(GE_context* ac, T0* C, T0* a1)
{
	((T57*)(C))->a5 = a1;
}

/* [detachable] ROUTINE_FAILURE.set_type_name */
void T40f15(GE_context* ac, T0* C, T0* a1)
{
	((T40*)(C))->a7 = a1;
}

/* [detachable] CHECK_VIOLATION.set_type_name */
void T56f11(GE_context* ac, T0* C, T0* a1)
{
	((T56*)(C))->a5 = a1;
}

/* [detachable] INVARIANT_VIOLATION.set_type_name */
void T45f13(GE_context* ac, T0* C, T0* a1)
{
	((T45*)(C))->a6 = a1;
}

/* [detachable] FLOATING_POINT_FAILURE.set_type_name */
void T55f11(GE_context* ac, T0* C, T0* a1)
{
	((T55*)(C))->a5 = a1;
}

/* [detachable] POSTCONDITION_VIOLATION.set_type_name */
void T54f11(GE_context* ac, T0* C, T0* a1)
{
	((T54*)(C))->a5 = a1;
}

/* [detachable] PRECONDITION_VIOLATION.set_type_name */
void T53f11(GE_context* ac, T0* C, T0* a1)
{
	((T53*)(C))->a5 = a1;
}

/* [detachable] VOID_TARGET.set_type_name */
void T38f11(GE_context* ac, T0* C, T0* a1)
{
	((T38*)(C))->a5 = a1;
}

/* [detachable] NO_MORE_MEMORY.set_recipient_name */
void T44f13(GE_context* ac, T0* C, T0* a1)
{
	((T44*)(C))->a5 = a1;
}

/* [detachable] SERIALIZATION_FAILURE.set_recipient_name */
void T69f10(GE_context* ac, T0* C, T0* a1)
{
	((T69*)(C))->a4 = a1;
}

/* [detachable] OLD_VIOLATION.set_recipient_name */
void T42f10(GE_context* ac, T0* C, T0* a1)
{
	((T42*)(C))->a4 = a1;
}

/* [detachable] COM_FAILURE.set_recipient_name */
void T49f18(GE_context* ac, T0* C, T0* a1)
{
	((T49*)(C))->a7 = a1;
}

/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_recipient_name */
void T68f10(GE_context* ac, T0* C, T0* a1)
{
	((T68*)(C))->a4 = a1;
}

/* [detachable] DEVELOPER_EXCEPTION.set_recipient_name */
void T67f14(GE_context* ac, T0* C, T0* a1)
{
	((T67*)(C))->a4 = a1;
}

/* [detachable] MISMATCH_FAILURE.set_recipient_name */
void T66f10(GE_context* ac, T0* C, T0* a1)
{
	((T66*)(C))->a4 = a1;
}

/* [detachable] OPERATING_SYSTEM_FAILURE.set_recipient_name */
void T48f12(GE_context* ac, T0* C, T0* a1)
{
	((T48*)(C))->a5 = a1;
}

/* [detachable] IO_FAILURE.set_recipient_name */
void T47f14(GE_context* ac, T0* C, T0* a1)
{
	((T47*)(C))->a6 = a1;
}

/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_recipient_name */
void T65f10(GE_context* ac, T0* C, T0* a1)
{
	((T65*)(C))->a4 = a1;
}

/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_recipient_name */
void T64f10(GE_context* ac, T0* C, T0* a1)
{
	((T64*)(C))->a4 = a1;
}

/* [detachable] EXTERNAL_FAILURE.set_recipient_name */
void T63f10(GE_context* ac, T0* C, T0* a1)
{
	((T63*)(C))->a4 = a1;
}

/* [detachable] CREATE_ON_DEFERRED.set_recipient_name */
void T62f10(GE_context* ac, T0* C, T0* a1)
{
	((T62*)(C))->a4 = a1;
}

/* [detachable] RESUMPTION_FAILURE.set_recipient_name */
void T61f10(GE_context* ac, T0* C, T0* a1)
{
	((T61*)(C))->a4 = a1;
}

/* [detachable] RESCUE_FAILURE.set_recipient_name */
void T60f10(GE_context* ac, T0* C, T0* a1)
{
	((T60*)(C))->a4 = a1;
}

/* [detachable] EIFFEL_RUNTIME_PANIC.set_recipient_name */
void T50f13(GE_context* ac, T0* C, T0* a1)
{
	((T50*)(C))->a5 = a1;
}

/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_recipient_name */
void T46f12(GE_context* ac, T0* C, T0* a1)
{
	((T46*)(C))->a5 = a1;
}

/* [detachable] LOOP_INVARIANT_VIOLATION.set_recipient_name */
void T59f10(GE_context* ac, T0* C, T0* a1)
{
	((T59*)(C))->a4 = a1;
}

/* [detachable] VARIANT_VIOLATION.set_recipient_name */
void T58f10(GE_context* ac, T0* C, T0* a1)
{
	((T58*)(C))->a4 = a1;
}

/* [detachable] BAD_INSPECT_VALUE.set_recipient_name */
void T57f10(GE_context* ac, T0* C, T0* a1)
{
	((T57*)(C))->a4 = a1;
}

/* [detachable] ROUTINE_FAILURE.set_recipient_name */
void T40f14(GE_context* ac, T0* C, T0* a1)
{
	((T40*)(C))->a6 = a1;
}

/* [detachable] CHECK_VIOLATION.set_recipient_name */
void T56f10(GE_context* ac, T0* C, T0* a1)
{
	((T56*)(C))->a4 = a1;
}

/* [detachable] INVARIANT_VIOLATION.set_recipient_name */
void T45f12(GE_context* ac, T0* C, T0* a1)
{
	((T45*)(C))->a5 = a1;
}

/* [detachable] FLOATING_POINT_FAILURE.set_recipient_name */
void T55f10(GE_context* ac, T0* C, T0* a1)
{
	((T55*)(C))->a4 = a1;
}

/* [detachable] POSTCONDITION_VIOLATION.set_recipient_name */
void T54f10(GE_context* ac, T0* C, T0* a1)
{
	((T54*)(C))->a4 = a1;
}

/* [detachable] PRECONDITION_VIOLATION.set_recipient_name */
void T53f10(GE_context* ac, T0* C, T0* a1)
{
	((T53*)(C))->a4 = a1;
}

/* [detachable] VOID_TARGET.set_recipient_name */
void T38f10(GE_context* ac, T0* C, T0* a1)
{
	((T38*)(C))->a4 = a1;
}

/* [detachable] NO_MORE_MEMORY.set_exception_trace */
void T44f9(GE_context* ac, T0* C, T0* a1)
{
	((T44*)(C))->a1 = a1;
}

/* [detachable] SERIALIZATION_FAILURE.set_exception_trace */
void T69f8(GE_context* ac, T0* C, T0* a1)
{
	((T69*)(C))->a2 = a1;
}

/* [detachable] OLD_VIOLATION.set_exception_trace */
void T42f8(GE_context* ac, T0* C, T0* a1)
{
	((T42*)(C))->a2 = a1;
}

/* [detachable] COM_FAILURE.set_exception_trace */
void T49f16(GE_context* ac, T0* C, T0* a1)
{
	((T49*)(C))->a5 = a1;
}

/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_exception_trace */
void T68f8(GE_context* ac, T0* C, T0* a1)
{
	((T68*)(C))->a2 = a1;
}

/* [detachable] DEVELOPER_EXCEPTION.set_exception_trace */
void T67f12(GE_context* ac, T0* C, T0* a1)
{
	((T67*)(C))->a2 = a1;
}

/* [detachable] MISMATCH_FAILURE.set_exception_trace */
void T66f8(GE_context* ac, T0* C, T0* a1)
{
	((T66*)(C))->a2 = a1;
}

/* [detachable] OPERATING_SYSTEM_FAILURE.set_exception_trace */
void T48f10(GE_context* ac, T0* C, T0* a1)
{
	((T48*)(C))->a3 = a1;
}

/* [detachable] IO_FAILURE.set_exception_trace */
void T47f12(GE_context* ac, T0* C, T0* a1)
{
	((T47*)(C))->a4 = a1;
}

/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_exception_trace */
void T65f8(GE_context* ac, T0* C, T0* a1)
{
	((T65*)(C))->a2 = a1;
}

/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_exception_trace */
void T64f8(GE_context* ac, T0* C, T0* a1)
{
	((T64*)(C))->a2 = a1;
}

/* [detachable] EXTERNAL_FAILURE.set_exception_trace */
void T63f8(GE_context* ac, T0* C, T0* a1)
{
	((T63*)(C))->a2 = a1;
}

/* [detachable] CREATE_ON_DEFERRED.set_exception_trace */
void T62f8(GE_context* ac, T0* C, T0* a1)
{
	((T62*)(C))->a2 = a1;
}

/* [detachable] RESUMPTION_FAILURE.set_exception_trace */
void T61f8(GE_context* ac, T0* C, T0* a1)
{
	((T61*)(C))->a2 = a1;
}

/* [detachable] RESCUE_FAILURE.set_exception_trace */
void T60f8(GE_context* ac, T0* C, T0* a1)
{
	((T60*)(C))->a2 = a1;
}

/* [detachable] EIFFEL_RUNTIME_PANIC.set_exception_trace */
void T50f11(GE_context* ac, T0* C, T0* a1)
{
	((T50*)(C))->a3 = a1;
}

/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_exception_trace */
void T46f10(GE_context* ac, T0* C, T0* a1)
{
	((T46*)(C))->a3 = a1;
}

/* [detachable] LOOP_INVARIANT_VIOLATION.set_exception_trace */
void T59f8(GE_context* ac, T0* C, T0* a1)
{
	((T59*)(C))->a2 = a1;
}

/* [detachable] VARIANT_VIOLATION.set_exception_trace */
void T58f8(GE_context* ac, T0* C, T0* a1)
{
	((T58*)(C))->a2 = a1;
}

/* [detachable] BAD_INSPECT_VALUE.set_exception_trace */
void T57f8(GE_context* ac, T0* C, T0* a1)
{
	((T57*)(C))->a2 = a1;
}

/* [detachable] ROUTINE_FAILURE.set_exception_trace */
void T40f12(GE_context* ac, T0* C, T0* a1)
{
	((T40*)(C))->a4 = a1;
}

/* [detachable] CHECK_VIOLATION.set_exception_trace */
void T56f8(GE_context* ac, T0* C, T0* a1)
{
	((T56*)(C))->a2 = a1;
}

/* [detachable] INVARIANT_VIOLATION.set_exception_trace */
void T45f10(GE_context* ac, T0* C, T0* a1)
{
	((T45*)(C))->a3 = a1;
}

/* [detachable] FLOATING_POINT_FAILURE.set_exception_trace */
void T55f8(GE_context* ac, T0* C, T0* a1)
{
	((T55*)(C))->a2 = a1;
}

/* [detachable] POSTCONDITION_VIOLATION.set_exception_trace */
void T54f8(GE_context* ac, T0* C, T0* a1)
{
	((T54*)(C))->a2 = a1;
}

/* [detachable] PRECONDITION_VIOLATION.set_exception_trace */
void T53f8(GE_context* ac, T0* C, T0* a1)
{
	((T53*)(C))->a2 = a1;
}

/* [detachable] VOID_TARGET.set_exception_trace */
void T38f8(GE_context* ac, T0* C, T0* a1)
{
	((T38*)(C))->a2 = a1;
}

/* [detachable] ISE_EXCEPTION_MANAGER.exception_from_data */
T0* T21f10(GE_context* ac, T0* C)
{
	T0* t1;
	T1 t2;
	T0* m1 = 0;
	T6 t3;
	T0* m2 = 0;
	T0* m3 = 0;
	T0* m4 = 0;
	T0* m5 = 0;
	T0* m6 = 0;
	T0* m7 = 0;
	T0* m8 = 0;
	T0* m9 = 0;
	T0* R = 0;
	T0* l1 = 0;
	t1 = (T21f11(ac, C));
	t2 = (t1?((m1 = t1, EIF_TRUE)):EIF_FALSE);
	if (t2) {
		t3 = (((T31*)(m1))->z1);
		t1 = (T21f12(ac, C, t3));
		t2 = (t1?((m2 = t1, EIF_TRUE)):EIF_FALSE);
	}
	if (t2) {
		t2 = T21f10ot1(m2, &m3);
		if (t2) {
			l1 = (T21f1(ac, C));
			t2 = (T1)(l1!=EIF_VOID);
			if (t2) {
				T22x4276252T0(ac, m2, l1);
			}
			t1 = (((T31*)(m1))->z7);
			T40f9(ac, m3, t1);
			t1 = (((T31*)(m1))->z8);
			T40f10(ac, m3, t1);
		} else {
			t2 = T21f10ot2(m2, &m4);
			if (t2) {
				l1 = (T21f1(ac, C));
				t2 = (T1)(l1!=EIF_VOID);
				if (t2) {
					T22x4276252T0(ac, m2, l1);
				}
			} else {
				t2 = T21f10ot3(m2, &m5);
				if (t2) {
					t2 = (((T31*)(m1))->z11);
					T45f9(ac, m5, t2);
				} else {
					t2 = T21f10ot4(m2, &m6);
					if (t2) {
						t3 = (((T31*)(m1))->z2);
						T46f9(ac, m6, t3);
					} else {
						t2 = T21f10ot5(m2, &m7);
						if (t2) {
							t3 = (((T31*)(m1))->z3);
							T47f11(ac, m7, t3);
						} else {
							t2 = T21f10ot6(m2, &m8);
							if (t2) {
								t3 = (((T31*)(m1))->z3);
								T48f9(ac, m8, t3);
							} else {
								t2 = T21f10ot7(m2, &m9);
								if (t2) {
									t3 = (((T31*)(m1))->z2);
									T49f14(ac, m9, t3);
									t1 = (((T31*)(m1))->z4);
									T49f15(ac, m9, t1);
								}
							}
						}
					}
				}
				t2 = (T21f8(ac, C));
				if (t2) {
					l1 = (T21f1(ac, C));
				}
				t2 = (T1)(l1==EIF_VOID);
				if (t2) {
					l1 = m2;
				}
				T22x4276252T0(ac, m2, l1);
			}
		}
		t1 = (((T31*)(m1))->z9);
		T22x4276247T0(ac, m2, t1);
		t1 = (((T31*)(m1))->z4);
		T22x4276253T0(ac, m2, t1);
		t1 = (((T31*)(m1))->z5);
		T22x4276251T0(ac, m2, t1);
		t1 = (((T31*)(m1))->z6);
		T22x4276248T0(ac, m2, t1);
		R = m2;
	}
	return R;
}

T1 T21f10ot1(T0* a1, T0** a2)
{
	if ((a1)==EIF_VOID) {
		return EIF_FALSE;
	} else {
		switch (((T0*)(a1))->id) {
		case 40:
			*a2 = a1;
			return EIF_TRUE;
		default:
			return EIF_FALSE;
		}
	}
}

T1 T21f10ot2(T0* a1, T0** a2)
{
	if ((a1)==EIF_VOID) {
		return EIF_FALSE;
	} else {
		switch (((T0*)(a1))->id) {
		case 42:
			*a2 = a1;
			return EIF_TRUE;
		default:
			return EIF_FALSE;
		}
	}
}

T1 T21f10ot3(T0* a1, T0** a2)
{
	if ((a1)==EIF_VOID) {
		return EIF_FALSE;
	} else {
		switch (((T0*)(a1))->id) {
		case 45:
			*a2 = a1;
			return EIF_TRUE;
		default:
			return EIF_FALSE;
		}
	}
}

T1 T21f10ot4(T0* a1, T0** a2)
{
	if ((a1)==EIF_VOID) {
		return EIF_FALSE;
	} else {
		switch (((T0*)(a1))->id) {
		case 46:
			*a2 = a1;
			return EIF_TRUE;
		default:
			return EIF_FALSE;
		}
	}
}

T1 T21f10ot5(T0* a1, T0** a2)
{
	if ((a1)==EIF_VOID) {
		return EIF_FALSE;
	} else {
		switch (((T0*)(a1))->id) {
		case 47:
			*a2 = a1;
			return EIF_TRUE;
		default:
			return EIF_FALSE;
		}
	}
}

T1 T21f10ot6(T0* a1, T0** a2)
{
	if ((a1)==EIF_VOID) {
		return EIF_FALSE;
	} else {
		switch (((T0*)(a1))->id) {
		case 48:
			*a2 = a1;
			return EIF_TRUE;
		default:
			return EIF_FALSE;
		}
	}
}

T1 T21f10ot7(T0* a1, T0** a2)
{
	if ((a1)==EIF_VOID) {
		return EIF_FALSE;
	} else {
		switch (((T0*)(a1))->id) {
		case 49:
			*a2 = a1;
			return EIF_TRUE;
		default:
			return EIF_FALSE;
		}
	}
}

/* [detachable] NO_MORE_MEMORY.set_description */
void T44f12(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T44*)(C))->a4 = l3;
	} else {
		((T44*)(C))->a4 = EIF_VOID;
	}
}

/* [detachable] SERIALIZATION_FAILURE.set_description */
void T69f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T69*)(C))->a3 = l3;
	} else {
		((T69*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] OLD_VIOLATION.set_description */
void T42f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T42*)(C))->a3 = l3;
	} else {
		((T42*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] COM_FAILURE.set_description */
void T49f17(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T49*)(C))->a6 = l3;
	} else {
		((T49*)(C))->a6 = EIF_VOID;
	}
}

/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_description */
void T68f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T68*)(C))->a3 = l3;
	} else {
		((T68*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] MISMATCH_FAILURE.set_description */
void T66f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T66*)(C))->a3 = l3;
	} else {
		((T66*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] OPERATING_SYSTEM_FAILURE.set_description */
void T48f11(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T48*)(C))->a4 = l3;
	} else {
		((T48*)(C))->a4 = EIF_VOID;
	}
}

/* [detachable] IO_FAILURE.set_description */
void T47f13(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T47*)(C))->a5 = l3;
	} else {
		((T47*)(C))->a5 = EIF_VOID;
	}
}

/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_description */
void T65f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T65*)(C))->a3 = l3;
	} else {
		((T65*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_description */
void T64f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T64*)(C))->a3 = l3;
	} else {
		((T64*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] EXTERNAL_FAILURE.set_description */
void T63f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T63*)(C))->a3 = l3;
	} else {
		((T63*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] CREATE_ON_DEFERRED.set_description */
void T62f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T62*)(C))->a3 = l3;
	} else {
		((T62*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] RESUMPTION_FAILURE.set_description */
void T61f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T61*)(C))->a3 = l3;
	} else {
		((T61*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] RESCUE_FAILURE.set_description */
void T60f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T60*)(C))->a3 = l3;
	} else {
		((T60*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] EIFFEL_RUNTIME_PANIC.set_description */
void T50f12(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T50*)(C))->a4 = l3;
	} else {
		((T50*)(C))->a4 = EIF_VOID;
	}
}

/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_description */
void T46f11(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T46*)(C))->a4 = l3;
	} else {
		((T46*)(C))->a4 = EIF_VOID;
	}
}

/* [detachable] LOOP_INVARIANT_VIOLATION.set_description */
void T59f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T59*)(C))->a3 = l3;
	} else {
		((T59*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] VARIANT_VIOLATION.set_description */
void T58f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T58*)(C))->a3 = l3;
	} else {
		((T58*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] BAD_INSPECT_VALUE.set_description */
void T57f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T57*)(C))->a3 = l3;
	} else {
		((T57*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] ROUTINE_FAILURE.set_description */
void T40f13(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T40*)(C))->a5 = l3;
	} else {
		((T40*)(C))->a5 = EIF_VOID;
	}
}

/* [detachable] CHECK_VIOLATION.set_description */
void T56f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T56*)(C))->a3 = l3;
	} else {
		((T56*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] INVARIANT_VIOLATION.set_description */
void T45f11(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T45*)(C))->a4 = l3;
	} else {
		((T45*)(C))->a4 = EIF_VOID;
	}
}

/* [detachable] FLOATING_POINT_FAILURE.set_description */
void T55f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T55*)(C))->a3 = l3;
	} else {
		((T55*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] POSTCONDITION_VIOLATION.set_description */
void T54f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T54*)(C))->a3 = l3;
	} else {
		((T54*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] PRECONDITION_VIOLATION.set_description */
void T53f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T53*)(C))->a3 = l3;
	} else {
		((T53*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] VOID_TARGET.set_description */
void T38f9(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	T0* t3;
	T77 l1 = GE_default77;
	T0* l2 = 0;
	T0* l3 = 0;
	t1 = EIF_FALSE;
	if (t1) {
		t2 = ((GE_void(a1), (T6)0));
		l3 = T30c4(ac, t2);
		l2 = T78c2(ac, (T6)(GE_int32(0)));
		t3 = (((T30*)(GE_void(l3)))->a1);
		T77f9(ac, (&l1), a1, t3, (T6)(GE_int32(0)), l2);
		t2 = (((T78*)(GE_void(l2)))->a1);
		T30f5(ac, GE_void(l3), t2);
		((T38*)(C))->a3 = l3;
	} else {
		((T38*)(C))->a3 = EIF_VOID;
	}
}

/* [detachable] COM_FAILURE.set_exception_information */
void T49f15(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	T14 t3;
	T0* l1 = 0;
	((T49*)(C))->a3 = a1;
	t1 = (T6f14(ac, &(((T49*)(C))->a2), (T6)(GE_int32(0))));
	if (t1) {
		t2 = (T49f11(ac, C, ((T49*)(C))->a2));
		l1 = T30c6(ac, t2);
		t3 = (T30f3(ac, GE_void(l1)));
		((T49*)(C))->a4 = ((T6)GE_ccom_hresult(t3));
	} else {
		l1 = T30c6(ac, a1);
		t3 = (T30f3(ac, GE_void(l1)));
		((T49*)(C))->a4 = ((T6)GE_ccom_hresult(t3));
		((T49*)(C))->a2 = ((T6)GE_ccom_hresult_code(((T49*)(C))->a4));
	}
}

/* [detachable] COM_FAILURE.ccom_hresult_to_string */
T0* T49f11(GE_context* ac, T0* C, T6 a1)
{
	T0* R = 0;
	R = (T6f23(ac, &a1));
	R = (T17f5(ac, GE_ms8("0x", 2), R));
	return R;
}

/* INTEGER_32.to_hex_string */
T0* T6f23(GE_context* ac, T6* C)
{
	T6 t1;
	T1 t2;
	T2 t3;
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	t1 = ((T6)(GE_int32(32)));
	l1 = ((T6)((t1)/((T6)(GE_int32(4)))));
	R = T17c22(ac, (T2)('0'), l1);
	l2 = *C;
	while (1) {
		t2 = (T1)((l1) == ((T6)(GE_int32(0))));
		if (t2) {
			break;
		}
		t1 = ((T6)((l2)&((T6)(GE_int32(15)))));
		t3 = (T6f24(ac, &t1));
		T17f23(ac, GE_void(R), t3, l1);
		l2 = ((T6)((l2)>>((T6)(GE_int32(4)))));
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
	}
	return R;
}

/* [detachable] STRING_8.put */
void T17f23(GE_context* ac, T0* C, T2 a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1] = (a1);
	T17f20(ac, C);
}

/* INTEGER_32.to_hex_character */
T2 T6f24(GE_context* ac, T6* C)
{
	T2 t1;
	T1 t2;
	T2 t3;
	T2 R = 0;
	T6 l1 = 0;
	l1 = *C;
	t2 = (T6f20(ac, (&l1), (T6)(GE_int32(9))));
	if (t2) {
		t1 = (T2)('0');
	} else {
		t3 = (T2)('A');
		t1 = (T2f4(ac, &t3, (T6)(GE_int32(10))));
	}
	R = (T2f5(ac, &t1, l1));
	return R;
}

/* CHARACTER_8.plus */
T2 T2f5(GE_context* ac, T2* C, T6 a1)
{
	T6 t1;
	T2 R = 0;
	t1 = ((T6)(*C));
	t1 = ((T6)((t1)+(a1)));
	R = ((T2)(t1));
	return R;
}

/* CHARACTER_8.minus */
T2 T2f4(GE_context* ac, T2* C, T6 a1)
{
	T6 t1;
	T2 R = 0;
	t1 = ((T6)(*C));
	t1 = ((T6)((t1)-(a1)));
	R = ((T2)(t1));
	return R;
}

/* [detachable] STRING_8.make_filled */
T0* T17c22(GE_context* ac, T2 a1, T6 a2)
{
	T0* C;
	C = GE_new17(EIF_TRUE);
	T17f15(ac, C, a2);
	T17f24(ac, C, a1);
	return C;
}

/* [detachable] STRING_8.fill_character */
void T17f24(GE_context* ac, T0* C, T2 a1)
{
	T1 t1;
	T6 t2;
	T6 l1 = 0;
	l1 = (T17f7(ac, C));
	t1 = (T1)(!(T1)((l1) == ((T6)(GE_int32(0)))));
	if (t1) {
		t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
		T15f9(ac, GE_void(((T17*)(C))->a1), a1, (T6)(GE_int32(0)), t2);
		((T17*)(C))->a2 = l1;
		((T17*)(C))->a3 = (T6)(GE_int32(0));
		((T17*)(C))->a4 = (T6)(GE_int32(0));
	}
}

/* [detachable] COM_FAILURE.set_hresult_code */
void T49f14(GE_context* ac, T0* C, T6 a1)
{
	((T49*)(C))->a2 = a1;
}

/* [detachable] OPERATING_SYSTEM_FAILURE.set_error_code */
void T48f9(GE_context* ac, T0* C, T6 a1)
{
	((T48*)(C))->a2 = a1;
}

/* [detachable] IO_FAILURE.set_error_code */
void T47f11(GE_context* ac, T0* C, T6 a1)
{
	((T47*)(C))->a3 = a1;
}

/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_signal_code */
void T46f9(GE_context* ac, T0* C, T6 a1)
{
	((T46*)(C))->a2 = a1;
}

/* [detachable] INVARIANT_VIOLATION.set_is_entry */
void T45f9(GE_context* ac, T0* C, T1 a1)
{
	((T45*)(C))->a2 = a1;
}

/* [detachable] ROUTINE_FAILURE.set_class_name */
void T40f10(GE_context* ac, T0* C, T0* a1)
{
	((T40*)(C))->a2 = a1;
}

/* [detachable] ROUTINE_FAILURE.set_routine_name */
void T40f9(GE_context* ac, T0* C, T0* a1)
{
	((T40*)(C))->a1 = a1;
}

/* [detachable] NO_MORE_MEMORY.set_throwing_exception */
void T44f11(GE_context* ac, T0* C, T0* a1)
{
	((T44*)(C))->a3 = a1;
}

/* [detachable] SERIALIZATION_FAILURE.set_throwing_exception */
void T69f7(GE_context* ac, T0* C, T0* a1)
{
	((T69*)(C))->a1 = a1;
}

/* [detachable] OLD_VIOLATION.set_throwing_exception */
void T42f7(GE_context* ac, T0* C, T0* a1)
{
	((T42*)(C))->a1 = a1;
}

/* [detachable] COM_FAILURE.set_throwing_exception */
void T49f13(GE_context* ac, T0* C, T0* a1)
{
	((T49*)(C))->a1 = a1;
}

/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.set_throwing_exception */
void T68f7(GE_context* ac, T0* C, T0* a1)
{
	((T68*)(C))->a1 = a1;
}

/* [detachable] MISMATCH_FAILURE.set_throwing_exception */
void T66f7(GE_context* ac, T0* C, T0* a1)
{
	((T66*)(C))->a1 = a1;
}

/* [detachable] OPERATING_SYSTEM_FAILURE.set_throwing_exception */
void T48f8(GE_context* ac, T0* C, T0* a1)
{
	((T48*)(C))->a1 = a1;
}

/* [detachable] IO_FAILURE.set_throwing_exception */
void T47f10(GE_context* ac, T0* C, T0* a1)
{
	((T47*)(C))->a2 = a1;
}

/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.set_throwing_exception */
void T65f7(GE_context* ac, T0* C, T0* a1)
{
	((T65*)(C))->a1 = a1;
}

/* [detachable] VOID_ASSIGNED_TO_EXPANDED.set_throwing_exception */
void T64f7(GE_context* ac, T0* C, T0* a1)
{
	((T64*)(C))->a1 = a1;
}

/* [detachable] EXTERNAL_FAILURE.set_throwing_exception */
void T63f7(GE_context* ac, T0* C, T0* a1)
{
	((T63*)(C))->a1 = a1;
}

/* [detachable] CREATE_ON_DEFERRED.set_throwing_exception */
void T62f7(GE_context* ac, T0* C, T0* a1)
{
	((T62*)(C))->a1 = a1;
}

/* [detachable] RESUMPTION_FAILURE.set_throwing_exception */
void T61f7(GE_context* ac, T0* C, T0* a1)
{
	((T61*)(C))->a1 = a1;
}

/* [detachable] RESCUE_FAILURE.set_throwing_exception */
void T60f7(GE_context* ac, T0* C, T0* a1)
{
	((T60*)(C))->a1 = a1;
}

/* [detachable] EIFFEL_RUNTIME_PANIC.set_throwing_exception */
void T50f10(GE_context* ac, T0* C, T0* a1)
{
	((T50*)(C))->a2 = a1;
}

/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.set_throwing_exception */
void T46f8(GE_context* ac, T0* C, T0* a1)
{
	((T46*)(C))->a1 = a1;
}

/* [detachable] LOOP_INVARIANT_VIOLATION.set_throwing_exception */
void T59f7(GE_context* ac, T0* C, T0* a1)
{
	((T59*)(C))->a1 = a1;
}

/* [detachable] VARIANT_VIOLATION.set_throwing_exception */
void T58f7(GE_context* ac, T0* C, T0* a1)
{
	((T58*)(C))->a1 = a1;
}

/* [detachable] BAD_INSPECT_VALUE.set_throwing_exception */
void T57f7(GE_context* ac, T0* C, T0* a1)
{
	((T57*)(C))->a1 = a1;
}

/* [detachable] ROUTINE_FAILURE.set_throwing_exception */
void T40f11(GE_context* ac, T0* C, T0* a1)
{
	((T40*)(C))->a3 = a1;
}

/* [detachable] CHECK_VIOLATION.set_throwing_exception */
void T56f7(GE_context* ac, T0* C, T0* a1)
{
	((T56*)(C))->a1 = a1;
}

/* [detachable] INVARIANT_VIOLATION.set_throwing_exception */
void T45f8(GE_context* ac, T0* C, T0* a1)
{
	((T45*)(C))->a1 = a1;
}

/* [detachable] FLOATING_POINT_FAILURE.set_throwing_exception */
void T55f7(GE_context* ac, T0* C, T0* a1)
{
	((T55*)(C))->a1 = a1;
}

/* [detachable] POSTCONDITION_VIOLATION.set_throwing_exception */
void T54f7(GE_context* ac, T0* C, T0* a1)
{
	((T54*)(C))->a1 = a1;
}

/* [detachable] PRECONDITION_VIOLATION.set_throwing_exception */
void T53f7(GE_context* ac, T0* C, T0* a1)
{
	((T53*)(C))->a1 = a1;
}

/* [detachable] VOID_TARGET.set_throwing_exception */
void T38f7(GE_context* ac, T0* C, T0* a1)
{
	((T38*)(C))->a1 = a1;
}

/* [detachable] ISE_EXCEPTION_MANAGER.exception_from_code */
T0* T21f12(GE_context* ac, T0* C, T6 a1)
{
	T0* t1;
	T6 t2;
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	switch (a1) {
	case GE_int32(1):
		R = T38c6(ac);
		break;
	case GE_int32(2):
		t1 = (T21f7(ac, C));
		l3 = (((T29*)(GE_void(t1)))->a1);
		t2 = ((T6)(GE_int32(2)));
		T44f10(ac, GE_void(l3), t2);
		R = l3;
		break;
	case GE_int32(3):
		R = T53c6(ac);
		break;
	case GE_int32(4):
		R = T54c6(ac);
		break;
	case GE_int32(5):
		R = T55c6(ac);
		break;
	case GE_int32(6):
		R = T45c7(ac);
		break;
	case GE_int32(7):
		R = T56c6(ac);
		break;
	case GE_int32(8):
		R = T40c8(ac);
		break;
	case GE_int32(9):
		R = T57c6(ac);
		break;
	case GE_int32(10):
		R = T58c6(ac);
		break;
	case GE_int32(11):
		R = T59c6(ac);
		break;
	case GE_int32(12):
		R = T46c7(ac);
		break;
	case GE_int32(13):
		l1 = T50c8(ac);
		t2 = ((T6)(GE_int32(13)));
		T50f9(ac, GE_void(l1), t2);
		R = l1;
		break;
	case GE_int32(14):
		R = T60c6(ac);
		break;
	case GE_int32(15):
		t1 = (T21f7(ac, C));
		l3 = (((T29*)(GE_void(t1)))->a1);
		t2 = ((T6)(GE_int32(15)));
		T44f10(ac, GE_void(l3), t2);
		R = l3;
		break;
	case GE_int32(16):
		R = T61c6(ac);
		break;
	case GE_int32(17):
		R = T62c6(ac);
		break;
	case GE_int32(18):
		R = T63c6(ac);
		break;
	case GE_int32(19):
		R = T64c6(ac);
		break;
	case GE_int32(20):
		R = T65c6(ac);
		break;
	case GE_int32(21):
		l2 = T47c8(ac);
		t2 = ((T6)(GE_int32(21)));
		T47f9(ac, GE_void(l2), t2);
		R = l2;
		break;
	case GE_int32(22):
		R = T48c7(ac);
		break;
	case GE_int32(23):
		R = T66c6(ac);
		break;
	case GE_int32(24):
		R = T67c10(ac);
		break;
	case GE_int32(25):
		l1 = T50c8(ac);
		t2 = ((T6)(GE_int32(25)));
		T50f9(ac, GE_void(l1), t2);
		R = l1;
		break;
	case GE_int32(26):
		R = T68c6(ac);
		break;
	case GE_int32(27):
		l2 = T47c8(ac);
		t2 = ((T6)(GE_int32(27)));
		T47f9(ac, GE_void(l2), t2);
		R = l2;
		break;
	case GE_int32(28):
		R = T49c12(ac);
		break;
	case GE_int32(29):
		R = T56c6(ac);
		break;
	case GE_int32(30):
		R = T42c6(ac);
		break;
	case GE_int32(31):
		R = T69c6(ac);
		break;
	default:
		break;
	}
	return R;
}

/* [detachable] SERIALIZATION_FAILURE.default_create */
T0* T69c6(GE_context* ac)
{
	T0* C;
	C = GE_new69(EIF_TRUE);
	return C;
}

/* [detachable] OLD_VIOLATION.default_create */
T0* T42c6(GE_context* ac)
{
	T0* C;
	C = GE_new42(EIF_TRUE);
	return C;
}

/* [detachable] COM_FAILURE.default_create */
T0* T49c12(GE_context* ac)
{
	T0* C;
	C = GE_new49(EIF_TRUE);
	return C;
}

/* [detachable] ADDRESS_APPLIED_TO_MELTED_FEATURE.default_create */
T0* T68c6(GE_context* ac)
{
	T0* C;
	C = GE_new68(EIF_TRUE);
	return C;
}

/* [detachable] MISMATCH_FAILURE.default_create */
T0* T66c6(GE_context* ac)
{
	T0* C;
	C = GE_new66(EIF_TRUE);
	return C;
}

/* [detachable] OPERATING_SYSTEM_FAILURE.default_create */
T0* T48c7(GE_context* ac)
{
	T0* C;
	C = GE_new48(EIF_TRUE);
	return C;
}

/* [detachable] IO_FAILURE.set_code */
void T47f9(GE_context* ac, T0* C, T6 a1)
{
	((T47*)(C))->a1 = a1;
}

/* [detachable] IO_FAILURE.default_create */
T0* T47c8(GE_context* ac)
{
	T0* C;
	C = GE_new47(EIF_TRUE);
	return C;
}

/* [detachable] EXCEPTION_IN_SIGNAL_HANDLER_FAILURE.default_create */
T0* T65c6(GE_context* ac)
{
	T0* C;
	C = GE_new65(EIF_TRUE);
	return C;
}

/* [detachable] VOID_ASSIGNED_TO_EXPANDED.default_create */
T0* T64c6(GE_context* ac)
{
	T0* C;
	C = GE_new64(EIF_TRUE);
	return C;
}

/* [detachable] EXTERNAL_FAILURE.default_create */
T0* T63c6(GE_context* ac)
{
	T0* C;
	C = GE_new63(EIF_TRUE);
	return C;
}

/* [detachable] CREATE_ON_DEFERRED.default_create */
T0* T62c6(GE_context* ac)
{
	T0* C;
	C = GE_new62(EIF_TRUE);
	return C;
}

/* [detachable] RESUMPTION_FAILURE.default_create */
T0* T61c6(GE_context* ac)
{
	T0* C;
	C = GE_new61(EIF_TRUE);
	return C;
}

/* [detachable] RESCUE_FAILURE.default_create */
T0* T60c6(GE_context* ac)
{
	T0* C;
	C = GE_new60(EIF_TRUE);
	return C;
}

/* [detachable] EIFFEL_RUNTIME_PANIC.set_code */
void T50f9(GE_context* ac, T0* C, T6 a1)
{
	((T50*)(C))->a1 = (T50f7(ac, C));
}

/* [detachable] EIFFEL_RUNTIME_PANIC.code */
T6 T50f7(GE_context* ac, T0* C)
{
	T6 t1;
	T1 t2;
	T6 R = 0;
	t1 = ((T6)(GE_int32(25)));
	t2 = (T1)((((T50*)(C))->a1) == (t1));
	if (t2) {
		R = ((T50*)(C))->a1;
	} else {
		R = ((T6)(GE_int32(13)));
	}
	return R;
}

/* [detachable] EIFFEL_RUNTIME_PANIC.default_create */
T0* T50c8(GE_context* ac)
{
	T0* C;
	C = GE_new50(EIF_TRUE);
	return C;
}

/* [detachable] OPERATING_SYSTEM_SIGNAL_FAILURE.default_create */
T0* T46c7(GE_context* ac)
{
	T0* C;
	C = GE_new46(EIF_TRUE);
	return C;
}

/* [detachable] LOOP_INVARIANT_VIOLATION.default_create */
T0* T59c6(GE_context* ac)
{
	T0* C;
	C = GE_new59(EIF_TRUE);
	return C;
}

/* [detachable] VARIANT_VIOLATION.default_create */
T0* T58c6(GE_context* ac)
{
	T0* C;
	C = GE_new58(EIF_TRUE);
	return C;
}

/* [detachable] BAD_INSPECT_VALUE.default_create */
T0* T57c6(GE_context* ac)
{
	T0* C;
	C = GE_new57(EIF_TRUE);
	return C;
}

/* [detachable] ROUTINE_FAILURE.default_create */
T0* T40c8(GE_context* ac)
{
	T0* C;
	C = GE_new40(EIF_TRUE);
	return C;
}

/* [detachable] CHECK_VIOLATION.default_create */
T0* T56c6(GE_context* ac)
{
	T0* C;
	C = GE_new56(EIF_TRUE);
	return C;
}

/* [detachable] INVARIANT_VIOLATION.default_create */
T0* T45c7(GE_context* ac)
{
	T0* C;
	C = GE_new45(EIF_TRUE);
	return C;
}

/* [detachable] FLOATING_POINT_FAILURE.default_create */
T0* T55c6(GE_context* ac)
{
	T0* C;
	C = GE_new55(EIF_TRUE);
	return C;
}

/* [detachable] POSTCONDITION_VIOLATION.default_create */
T0* T54c6(GE_context* ac)
{
	T0* C;
	C = GE_new54(EIF_TRUE);
	return C;
}

/* [detachable] PRECONDITION_VIOLATION.default_create */
T0* T53c6(GE_context* ac)
{
	T0* C;
	C = GE_new53(EIF_TRUE);
	return C;
}

/* [detachable] NO_MORE_MEMORY.set_code */
void T44f10(GE_context* ac, T0* C, T6 a1)
{
	((T44*)(C))->a2 = (T44f7(ac, C));
}

/* [detachable] NO_MORE_MEMORY.code */
T6 T44f7(GE_context* ac, T0* C)
{
	T6 t1;
	T1 t2;
	T6 R = 0;
	t1 = ((T6)(GE_int32(15)));
	t2 = (T1)((((T44*)(C))->a2) == (t1));
	if (t2) {
		R = ((T44*)(C))->a2;
	} else {
		R = ((T6)(GE_int32(2)));
	}
	return R;
}

/* [detachable] ISE_EXCEPTION_MANAGER.no_memory_exception_object_cell */
T0* T21f7(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* t1;
	T0* R = 0;
	T0* l1 = 0;
	if (GE_process_onces->reference_status[8]) {
		if (GE_process_onces->reference_exception[8]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[8]);
		}
		return GE_process_onces->reference_value[8];
	} else {
		GE_process_onces->reference_status[8] = '\1';
		GE_process_onces->reference_value[8] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[8] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	l1 = T44c8(ac);
	t1 = (T17c15(ac, (T6)(GE_int32(4096))));
	T44f9(ac, GE_void(l1), t1);
	R = T29c2(ac, l1);
	GE_process_onces->reference_value[8] = R;
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] CELL [[attached] NO_MORE_MEMORY].put */
T0* T29c2(GE_context* ac, T0* a1)
{
	T0* C;
	C = GE_new29(EIF_TRUE);
	((T29*)(C))->a1 = a1;
	return C;
}

/* [detachable] NO_MORE_MEMORY.default_create */
T0* T44c8(GE_context* ac)
{
	T0* C;
	C = GE_new44(EIF_TRUE);
	return C;
}

/* [detachable] VOID_TARGET.default_create */
T0* T38c6(GE_context* ac)
{
	T0* C;
	C = GE_new38(EIF_TRUE);
	return C;
}

/* [detachable] ISE_EXCEPTION_MANAGER.exception_data */
T0* T21f11(GE_context* ac, T0* C)
{
	T0* t1;
	T0* R = 0;
	t1 = (T21f6(ac, C));
	R = (((T28*)(GE_void(t1)))->a1);
	return R;
}

/* [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]].put */
void T28f2(GE_context* ac, T0* C, T0* a1)
{
	((T28*)(C))->a1 = a1;
}

/* [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]].put */
T0* T28c2(GE_context* ac, T0* a1)
{
	T0* C;
	C = GE_new28(EIF_TRUE);
	((T28*)(C))->a1 = a1;
	return C;
}

/* [detachable] ISE_EXCEPTION_MANAGER.exception_data_cell */
T0* T21f6(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	if (GE_process_onces->reference_status[9]) {
		if (GE_process_onces->reference_exception[9]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[9]);
		}
		return GE_process_onces->reference_value[9];
	} else {
		GE_process_onces->reference_status[9] = '\1';
		GE_process_onces->reference_value[9] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[9] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T28c2(ac, EIF_VOID);
	GE_process_onces->reference_value[9] = R;
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] ISE_EXCEPTION_MANAGER.once_raise */
void T21f15(GE_context* ac, T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	T0* t3;
	T0* m1 = 0;
	T6 t4;
	T14 l1 = 0;
	T14 l2 = 0;
	t1 = ((GE_void(a1), (T1)0));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t1 = (T21f8(ac, C));
		if (t1) {
			t2 = ((GE_void(a1), (T0*)0));
			t3 = (T21f1(ac, C));
			(GE_void(t2), t3);
		}
		T21f17(ac, C, a1);
		l1 = (T21f9(ac, C));
		t2 = ((GE_void(a1), (T0*)0));
		t1 = (t2?((m1 = t2, EIF_TRUE)):EIF_FALSE);
		if (t1) {
			l2 = ((m1, (T14)0));
		} else {
			l2 = (T21f9(ac, C));
		}
		t4 = ((GE_void(a1), (T6)0));
		GE_developer_raise((t4), (l1), (l2));
	}
}

/* [detachable] ISE_EXCEPTION_MANAGER.last_exception */
T0* T21f1(GE_context* ac, T0* C)
{
	T0* t1;
	T0* R = 0;
	t1 = (T21f2(ac, C));
	R = (((T26*)(GE_void(t1)))->a1);
	return R;
}

/* [detachable] ISE_EXCEPTION_MANAGER.init_exception_manager */
void T21f14(GE_context* ac, T0* C)
{
	T0* t1;
	t1 = (T21f3(ac, C));
	T27f36(ac, GE_void(t1));
	t1 = (T21f4(ac, C));
	T27f36(ac, GE_void(t1));
	t1 = (T21f5(ac, C));
	T27f36(ac, GE_void(t1));
	t1 = (T21f6(ac, C));
	T28f3(ac, GE_void(t1));
	t1 = (T21f2(ac, C));
	T26f3(ac, GE_void(t1));
	t1 = (T21f7(ac, C));
	T29f3(ac, GE_void(t1));
}

/* [detachable] CELL [[attached] NO_MORE_MEMORY].do_nothing */
void T29f3(GE_context* ac, T0* C)
{
}

/* [detachable] CELL [detachable EXCEPTION].do_nothing */
void T26f3(GE_context* ac, T0* C)
{
}

/* [detachable] CELL [detachable TUPLE [[attached] INTEGER_32, [attached] INTEGER_32, [attached] INTEGER_32, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] STRING_8, [attached] INTEGER_32, [attached] BOOLEAN]].do_nothing */
void T28f3(GE_context* ac, T0* C)
{
}

/* [detachable] ISE_EXCEPTION_MANAGER.unraisable_exceptions */
T0* T21f5(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	T6 l1 = 0;
	if (GE_process_onces->reference_status[10]) {
		if (GE_process_onces->reference_exception[10]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[10]);
		}
		return GE_process_onces->reference_value[10];
	} else {
		GE_process_onces->reference_status[10] = '\1';
		GE_process_onces->reference_value[10] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[10] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T27c35(ac, (T6)(GE_int32(2)));
	GE_process_onces->reference_value[10] = R;
	l1 = (((EIF_TYPE_OBJ*)(((T0*)&(GE_types[40][1]))))->type_id);
	T27f37(ac, GE_void(R), l1, l1);
	l1 = (((EIF_TYPE_OBJ*)(((T0*)&(GE_types[42][1]))))->type_id);
	T27f37(ac, GE_void(R), l1, l1);
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].force */
void T27f37(GE_context* ac, T0* C, T6 a1, T6 a2)
{
	T1 t1;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T27f38(ac, C, a2);
	t1 = (T27f19(ac, C));
	if (t1) {
		t1 = (T27f20(ac, C));
		if (t1) {
			T27f39(ac, C);
			T27f38(ac, C, a2);
		}
		t1 = (T1)((((T27*)(C))->a8) == ((T6)(GE_int32(-1))));
		if (t1) {
			l3 = (((T73*)(GE_void(((T27*)(C))->a3)))->a1);
			l4 = ((T27*)(C))->a12;
		} else {
			l3 = (T27f21(ac, C, ((T27*)(C))->a8));
			l4 = ((T27*)(C))->a8;
			T74f5(ac, GE_void(((T27*)(C))->a4), EIF_FALSE, l3);
		}
		((T73*)(GE_void(((T27*)(C))->a5)))->z2[l4] = (l3);
		T73f7(ac, GE_void(((T27*)(C))->a3), a2, l3);
		t1 = (T1)((a2) == (l1));
		if (t1) {
			((T27*)(C))->a11 = EIF_TRUE;
		}
		((T27*)(C))->a7 = ((T6)((((T27*)(C))->a7)+((T6)(GE_int32(1)))));
		((T27*)(C))->a10 = l2;
	} else {
		l3 = (T27f22(ac, C));
		((T27*)(C))->a10 = (((T73*)(GE_void(((T27*)(C))->a2)))->z2[l3]);
	}
	T73f7(ac, GE_void(((T27*)(C))->a2), a1, l3);
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].position */
T6 T27f22(GE_context* ac, T0* C)
{
	T6 R = 0;
	R = (((T73*)(GE_void(((T27*)(C))->a5)))->z2[((T27*)(C))->a12]);
	return R;
}

/* [detachable] SPECIAL [[attached] INTEGER_32].force */
void T73f7(GE_context* ac, T0* C, T6 a1, T6 a2)
{
	T1 t1;
	t1 = ((T1)((a2)<(((T73*)(C))->a1)));
	if (t1) {
		((T73*)(C))->z2[a2] = (a1);
	} else {
		T73f9(ac, C, a1);
	}
}

/* [detachable] SPECIAL [[attached] BOOLEAN].force */
void T74f5(GE_context* ac, T0* C, T1 a1, T6 a2)
{
	T1 t1;
	t1 = ((T1)((a2)<(((T74*)(C))->a1)));
	if (t1) {
		((T74*)(C))->z2[a2] = (a1);
	} else {
		T74f9(ac, C, a1);
	}
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].deleted_position */
T6 T27f21(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	T6 R = 0;
	t1 = (((T73*)(GE_void(((T27*)(C))->a5)))->z2[a1]);
	t1 = ((T6)(-(t1)));
	R = ((T6)((t1)+((T6)(GE_int32(-2)))));
	t1 = (((T73*)(GE_void(((T27*)(C))->a3)))->a1);
	R = (T6f18(ac, (&R), t1));
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].add_space */
void T27f39(GE_context* ac, T0* C)
{
	T6 t1;
	t1 = ((T6)((((T27*)(C))->a7)/((T6)(GE_int32(2)))));
	t1 = ((T6)((((T27*)(C))->a7)+(t1)));
	T27f40(ac, C, t1);
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].accommodate */
void T27f40(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	T1 t2;
	T6 t3;
	T0* t4;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	t1 = (((T73*)(GE_void(((T27*)(C))->a3)))->a1);
	t1 = (T6f17(ac, &t1, a1));
	l3 = (T27f28(ac, C, t1));
	l4 = ((T27*)(C))->a2;
	l5 = ((T27*)(C))->a3;
	l2 = (((T73*)(GE_void(l5)))->a1);
	while (1) {
		t2 = (T1)((l1) == (l2));
		if (t2) {
			break;
		}
		t2 = (T27f29(ac, C, l1));
		if (t2) {
			t1 = (((T73*)(GE_void(l4)))->z2[l1]);
			t3 = (((T73*)(GE_void(l5)))->z2[l1]);
			T27f45(ac, GE_void(l3), t1, t3);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	}
	if (((T27*)(C))->a11) {
		l1 = (((T73*)(GE_void(((T27*)(C))->a5)))->z2[((T27*)(C))->a1]);
		t1 = (((T73*)(GE_void(l4)))->z2[l1]);
		t3 = (((T73*)(GE_void(((T27*)(C))->a3)))->z2[l1]);
		T27f45(ac, GE_void(l3), t1, t3);
	}
	t4 = (((T27*)(GE_void(l3)))->a2);
	T27f41(ac, C, t4);
	t4 = (((T27*)(GE_void(l3)))->a3);
	T27f42(ac, C, t4);
	t4 = (((T27*)(GE_void(l3)))->a4);
	T27f43(ac, C, t4);
	t4 = (((T27*)(GE_void(l3)))->a5);
	T27f44(ac, C, t4);
	((T27*)(C))->a1 = (((T27*)(GE_void(l3)))->a1);
	((T27*)(C))->a6 = (((T27*)(GE_void(l3)))->a6);
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_indexes_map */
void T27f44(GE_context* ac, T0* C, T0* a1)
{
	((T27*)(C))->a5 = a1;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_deleted_marks */
void T27f43(GE_context* ac, T0* C, T0* a1)
{
	((T27*)(C))->a4 = a1;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_keys */
void T27f42(GE_context* ac, T0* C, T0* a1)
{
	((T27*)(C))->a3 = a1;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_content */
void T27f41(GE_context* ac, T0* C, T0* a1)
{
	((T27*)(C))->a2 = a1;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].put */
void T27f45(GE_context* ac, T0* C, T6 a1, T6 a2)
{
	T1 t1;
	T6 t2;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T27f38(ac, C, a2);
	t1 = (T27f31(ac, C));
	if (t1) {
		T27f47(ac, C);
		t2 = (T27f22(ac, C));
		((T27*)(C))->a10 = (((T73*)(GE_void(((T27*)(C))->a2)))->z2[t2]);
	} else {
		t1 = (T27f20(ac, C));
		if (t1) {
			T27f39(ac, C);
			T27f38(ac, C, a2);
		}
		t1 = (T1)((((T27*)(C))->a8) == ((T6)(GE_int32(-1))));
		if (t1) {
			l2 = (((T73*)(GE_void(((T27*)(C))->a3)))->a1);
			l3 = ((T27*)(C))->a12;
		} else {
			l2 = (T27f21(ac, C, ((T27*)(C))->a8));
			l3 = ((T27*)(C))->a8;
			T74f5(ac, GE_void(((T27*)(C))->a4), EIF_FALSE, l2);
		}
		((T73*)(GE_void(((T27*)(C))->a5)))->z2[l3] = (l2);
		T73f7(ac, GE_void(((T27*)(C))->a2), a1, l2);
		T73f7(ac, GE_void(((T27*)(C))->a3), a2, l2);
		t1 = (T1)((a2) == (l1));
		if (t1) {
			((T27*)(C))->a11 = EIF_TRUE;
		}
		((T27*)(C))->a7 = ((T6)((((T27*)(C))->a7)+((T6)(GE_int32(1)))));
		((T27*)(C))->a10 = a1;
		((T27*)(C))->a9 = (T6)(GE_int32(4));
	}
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].set_conflict */
void T27f47(GE_context* ac, T0* C)
{
	((T27*)(C))->a9 = (T6)(GE_int32(1));
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].found */
T1 T27f31(GE_context* ac, T0* C)
{
	T1 R = 0;
	R = (T1)((((T27*)(C))->a9) == ((T6)(GE_int32(2))));
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].occupied */
T1 T27f29(GE_context* ac, T0* C, T6 a1)
{
	T6 t1;
	T1 t2;
	T1 R = 0;
	if (((T27*)(C))->a11) {
		t1 = (((T73*)(GE_void(((T27*)(C))->a5)))->z2[((T27*)(C))->a1]);
		t2 = (T1)(!(T1)((a1) == (t1)));
		if (t2) {
			t2 = (((T74*)(GE_void(((T27*)(C))->a4)))->z2[a1]);
			R = ((T1)(!(t2)));
		} else {
			R = EIF_FALSE;
		}
	} else {
		t2 = (((T74*)(GE_void(((T27*)(C))->a4)))->z2[a1]);
		R = ((T1)(!(t2)));
	}
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].empty_duplicate */
T0* T27f28(GE_context* ac, T0* C, T6 a1)
{
	T0* R = 0;
	R = T27c35(ac, a1);
	if (((T27*)(C))->a16) {
		T27f46(ac, GE_void(R));
	}
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].compare_objects */
void T27f46(GE_context* ac, T0* C)
{
	((T27*)(C))->a16 = EIF_TRUE;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].soon_full */
T1 T27f20(GE_context* ac, T0* C)
{
	T6 t1;
	T6 t2;
	T1 R = 0;
	t1 = (((T73*)(GE_void(((T27*)(C))->a3)))->a1);
	t2 = (((T73*)(GE_void(((T27*)(C))->a3)))->a2);
	R = (T1)((t1) == (t2));
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].not_found */
T1 T27f19(GE_context* ac, T0* C)
{
	T1 R = 0;
	R = (T1)((((T27*)(C))->a9) == ((T6)(GE_int32(8))));
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].internal_search */
void T27f38(GE_context* ac, T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T6 t3;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T0* l11 = 0;
	T6 l12 = 0;
	l7 = (T6)(GE_int32(-1));
	t1 = (T1)((a1) == (l1));
	if (!(t1)) {
		t1 = EIF_FALSE;
	}
	if (t1) {
		((T27*)(C))->a12 = ((T27*)(C))->a1;
		if (((T27*)(C))->a11) {
			((T27*)(C))->a9 = (T6)(GE_int32(2));
		} else {
			((T27*)(C))->a9 = (T6)(GE_int32(8));
		}
	} else {
		l9 = ((T27*)(C))->a3;
		l10 = ((T27*)(C))->a5;
		l11 = ((T27*)(C))->a4;
		l6 = ((T27*)(C))->a1;
		l8 = l6;
		l2 = (T27f25(ac, C, a1));
		t2 = (T6)(GE_int32(1));
		t3 = ((T6)((l6)-((T6)(GE_int32(1)))));
		t3 = ((T6)((l2)%(t3)));
		l3 = ((T6)((t2)+(t3)));
		t2 = ((T6)((l2)%(l6)));
		l5 = ((T6)((t2)-(l3)));
		((T27*)(C))->a9 = (T6)(GE_int32(8));
		while (1) {
			t1 = (T1)((l8) == ((T6)(GE_int32(0))));
			if (t1) {
				break;
			}
			t2 = ((T6)((l5)+(l3)));
			l5 = ((T6)((t2)%(l6)));
			l4 = (((T73*)(GE_void(l10)))->z2[l5]);
			t1 = (T6f13(ac, (&l4), (T6)(GE_int32(0))));
			if (t1) {
				l12 = (((T73*)(GE_void(l9)))->z2[l4]);
				t1 = (T27f26(ac, C, l12, a1));
				if (t1) {
					l8 = (T6)(GE_int32(1));
					((T27*)(C))->a9 = (T6)(GE_int32(2));
				}
			} else {
				t1 = (T1)((l4) == ((T6)(GE_int32(-1))));
				if (t1) {
					l8 = (T6)(GE_int32(1));
				} else {
					t1 = (T1)((l7) == ((T6)(GE_int32(-1))));
					if (t1) {
						t2 = ((T6)(-(l4)));
						l4 = ((T6)((t2)+((T6)(GE_int32(-2)))));
						t1 = (((T74*)(GE_void(l11)))->z2[l4]);
						t1 = ((T1)(!(t1)));
						if (t1) {
							l8 = (T6)(GE_int32(1));
						} else {
							l7 = l5;
						}
					}
				}
			}
			l8 = ((T6)((l8)-((T6)(GE_int32(1)))));
		}
		((T27*)(C))->a12 = l5;
	}
	((T27*)(C))->a8 = l7;
}

/* [detachable] ISE_EXCEPTION_MANAGER.unignorable_exceptions */
T0* T21f4(GE_context* ac, T0* C)
{
	GE_rescue r;
	uint32_t tr = ac->in_rescue;
	T0* R = 0;
	T6 l1 = 0;
	if (GE_process_onces->reference_status[11]) {
		if (GE_process_onces->reference_exception[11]) {
			GE_raise_once_exception(ac, GE_process_onces->reference_exception[11]);
		}
		return GE_process_onces->reference_value[11];
	} else {
		GE_process_onces->reference_status[11] = '\1';
		GE_process_onces->reference_value[11] = R;
	}
	if (GE_setjmp(r.jb) != 0) {
		ac->in_rescue = tr + 1;
		GE_process_onces->reference_exception[11] = GE_last_exception_raised(ac);
		GE_jump_to_last_rescue(ac);
	}
GE_retry:
	r.previous = ac->last_rescue;
	ac->last_rescue = &r;
	R = T27c35(ac, (T6)(GE_int32(1)));
	GE_process_onces->reference_value[11] = R;
	l1 = (((EIF_TYPE_OBJ*)(((T0*)&(GE_types[38][1]))))->type_id);
	T27f37(ac, GE_void(R), l1, l1);
	ac->last_rescue = r.previous;
	return R;
}

/* [detachable] HASH_TABLE [[attached] INTEGER_32, [attached] INTEGER_32].do_nothing */
void T27f36(GE_context* ac, T0* C)
{
}

/* [detachable] MANAGED_POINTER.dispose */
void T79f7(GE_context* ac, T0* C)
{
	T1 t1;
	T14 l1 = 0;
	t1 = ((T1)(!(((T79*)(C))->a3)));
	if (t1) {
		T14f11(ac, &(((T79*)(C))->a1));
	}
	((T79*)(C))->a1 = l1;
	((T79*)(C))->a3 = EIF_FALSE;
}

/* POINTER.memory_free */
void T14f11(GE_context* ac, T14* C)
{
	T14 t1;
	T14f14(ac, C, *C);
	t1 = (T14f9(ac, C));
	*C = (t1);
}

/* POINTER.default_pointer */
T14 T14f9(GE_context* ac, T14* C)
{
	T14 R = 0;
	return R;
}

/* POINTER.c_free */
void T14f14(GE_context* ac, T14* C, T14 a1)
{
	{
	free((void *)a1);
	}
}

/* [detachable] ISE_RUNTIME.object_size */
T11 T71s1(GE_context* ac, T14 a1)
{
	T11 R = 0;
	{
	R = (T11)(GE_object_size((a1)));
	}
	return R;
}

/* [detachable] PLATFORM.is_windows */
T1 T84s2(GE_context* ac)
{
	T1 R = 0;
	{
	R = EIF_IS_WINDOWS;
	}
	return R;
}

/* Call to detachable EXCEPTION.set_type_name */
void T22x4276248T0(GE_context* ac, T0* C, T0* a1)
{
	switch (((T0*)(C))->id) {
	case 38:
		T38f11(ac, C, a1);
		break;
	case 40:
		T40f15(ac, C, a1);
		break;
	case 42:
		T42f11(ac, C, a1);
		break;
	case 44:
		T44f14(ac, C, a1);
		break;
	case 45:
		T45f13(ac, C, a1);
		break;
	case 46:
		T46f13(ac, C, a1);
		break;
	case 47:
		T47f15(ac, C, a1);
		break;
	case 48:
		T48f13(ac, C, a1);
		break;
	case 49:
		T49f19(ac, C, a1);
		break;
	case 50:
		T50f14(ac, C, a1);
		break;
	case 53:
		T53f11(ac, C, a1);
		break;
	case 54:
		T54f11(ac, C, a1);
		break;
	case 55:
		T55f11(ac, C, a1);
		break;
	case 56:
		T56f11(ac, C, a1);
		break;
	case 57:
		T57f11(ac, C, a1);
		break;
	case 58:
		T58f11(ac, C, a1);
		break;
	case 59:
		T59f11(ac, C, a1);
		break;
	case 60:
		T60f11(ac, C, a1);
		break;
	case 61:
		T61f11(ac, C, a1);
		break;
	case 62:
		T62f11(ac, C, a1);
		break;
	case 63:
		T63f11(ac, C, a1);
		break;
	case 64:
		T64f11(ac, C, a1);
		break;
	case 65:
		T65f11(ac, C, a1);
		break;
	case 66:
		T66f11(ac, C, a1);
		break;
	case 67:
		T67f15(ac, C, a1);
		break;
	case 68:
		T68f11(ac, C, a1);
		break;
	case 69:
		T69f11(ac, C, a1);
		break;
	}
}

/* Call to detachable EXCEPTION.set_recipient_name */
void T22x4276251T0(GE_context* ac, T0* C, T0* a1)
{
	switch (((T0*)(C))->id) {
	case 38:
		T38f10(ac, C, a1);
		break;
	case 40:
		T40f14(ac, C, a1);
		break;
	case 42:
		T42f10(ac, C, a1);
		break;
	case 44:
		T44f13(ac, C, a1);
		break;
	case 45:
		T45f12(ac, C, a1);
		break;
	case 46:
		T46f12(ac, C, a1);
		break;
	case 47:
		T47f14(ac, C, a1);
		break;
	case 48:
		T48f12(ac, C, a1);
		break;
	case 49:
		T49f18(ac, C, a1);
		break;
	case 50:
		T50f13(ac, C, a1);
		break;
	case 53:
		T53f10(ac, C, a1);
		break;
	case 54:
		T54f10(ac, C, a1);
		break;
	case 55:
		T55f10(ac, C, a1);
		break;
	case 56:
		T56f10(ac, C, a1);
		break;
	case 57:
		T57f10(ac, C, a1);
		break;
	case 58:
		T58f10(ac, C, a1);
		break;
	case 59:
		T59f10(ac, C, a1);
		break;
	case 60:
		T60f10(ac, C, a1);
		break;
	case 61:
		T61f10(ac, C, a1);
		break;
	case 62:
		T62f10(ac, C, a1);
		break;
	case 63:
		T63f10(ac, C, a1);
		break;
	case 64:
		T64f10(ac, C, a1);
		break;
	case 65:
		T65f10(ac, C, a1);
		break;
	case 66:
		T66f10(ac, C, a1);
		break;
	case 67:
		T67f14(ac, C, a1);
		break;
	case 68:
		T68f10(ac, C, a1);
		break;
	case 69:
		T69f10(ac, C, a1);
		break;
	}
}

/* Call to detachable EXCEPTION.set_description */
void T22x4276253T0(GE_context* ac, T0* C, T0* a1)
{
	switch (((T0*)(C))->id) {
	case 38:
		T38f9(ac, C, a1);
		break;
	case 40:
		T40f13(ac, C, a1);
		break;
	case 42:
		T42f9(ac, C, a1);
		break;
	case 44:
		T44f12(ac, C, a1);
		break;
	case 45:
		T45f11(ac, C, a1);
		break;
	case 46:
		T46f11(ac, C, a1);
		break;
	case 47:
		T47f13(ac, C, a1);
		break;
	case 48:
		T48f11(ac, C, a1);
		break;
	case 49:
		T49f17(ac, C, a1);
		break;
	case 50:
		T50f12(ac, C, a1);
		break;
	case 53:
		T53f9(ac, C, a1);
		break;
	case 54:
		T54f9(ac, C, a1);
		break;
	case 55:
		T55f9(ac, C, a1);
		break;
	case 56:
		T56f9(ac, C, a1);
		break;
	case 57:
		T57f9(ac, C, a1);
		break;
	case 58:
		T58f9(ac, C, a1);
		break;
	case 59:
		T59f9(ac, C, a1);
		break;
	case 60:
		T60f9(ac, C, a1);
		break;
	case 61:
		T61f9(ac, C, a1);
		break;
	case 62:
		T62f9(ac, C, a1);
		break;
	case 63:
		T63f9(ac, C, a1);
		break;
	case 64:
		T64f9(ac, C, a1);
		break;
	case 65:
		T65f9(ac, C, a1);
		break;
	case 66:
		T66f9(ac, C, a1);
		break;
	case 67:
		T67f13(ac, C, a1);
		break;
	case 68:
		T68f9(ac, C, a1);
		break;
	case 69:
		T69f9(ac, C, a1);
		break;
	}
}

/* Call to detachable EXCEPTION.set_exception_trace */
void T22x4276247T0(GE_context* ac, T0* C, T0* a1)
{
	switch (((T0*)(C))->id) {
	case 38:
		T38f8(ac, C, a1);
		break;
	case 40:
		T40f12(ac, C, a1);
		break;
	case 42:
		T42f8(ac, C, a1);
		break;
	case 44:
		T44f9(ac, C, a1);
		break;
	case 45:
		T45f10(ac, C, a1);
		break;
	case 46:
		T46f10(ac, C, a1);
		break;
	case 47:
		T47f12(ac, C, a1);
		break;
	case 48:
		T48f10(ac, C, a1);
		break;
	case 49:
		T49f16(ac, C, a1);
		break;
	case 50:
		T50f11(ac, C, a1);
		break;
	case 53:
		T53f8(ac, C, a1);
		break;
	case 54:
		T54f8(ac, C, a1);
		break;
	case 55:
		T55f8(ac, C, a1);
		break;
	case 56:
		T56f8(ac, C, a1);
		break;
	case 57:
		T57f8(ac, C, a1);
		break;
	case 58:
		T58f8(ac, C, a1);
		break;
	case 59:
		T59f8(ac, C, a1);
		break;
	case 60:
		T60f8(ac, C, a1);
		break;
	case 61:
		T61f8(ac, C, a1);
		break;
	case 62:
		T62f8(ac, C, a1);
		break;
	case 63:
		T63f8(ac, C, a1);
		break;
	case 64:
		T64f8(ac, C, a1);
		break;
	case 65:
		T65f8(ac, C, a1);
		break;
	case 66:
		T66f8(ac, C, a1);
		break;
	case 67:
		T67f12(ac, C, a1);
		break;
	case 68:
		T68f8(ac, C, a1);
		break;
	case 69:
		T69f8(ac, C, a1);
		break;
	}
}

/* Call to detachable EXCEPTION.set_throwing_exception */
void T22x4276252T0(GE_context* ac, T0* C, T0* a1)
{
	switch (((T0*)(C))->id) {
	case 38:
		T38f7(ac, C, a1);
		break;
	case 40:
		T40f11(ac, C, a1);
		break;
	case 42:
		T42f7(ac, C, a1);
		break;
	case 44:
		T44f11(ac, C, a1);
		break;
	case 45:
		T45f8(ac, C, a1);
		break;
	case 46:
		T46f8(ac, C, a1);
		break;
	case 47:
		T47f10(ac, C, a1);
		break;
	case 48:
		T48f8(ac, C, a1);
		break;
	case 49:
		T49f13(ac, C, a1);
		break;
	case 50:
		T50f10(ac, C, a1);
		break;
	case 53:
		T53f7(ac, C, a1);
		break;
	case 54:
		T54f7(ac, C, a1);
		break;
	case 55:
		T55f7(ac, C, a1);
		break;
	case 56:
		T56f7(ac, C, a1);
		break;
	case 57:
		T57f7(ac, C, a1);
		break;
	case 58:
		T58f7(ac, C, a1);
		break;
	case 59:
		T59f7(ac, C, a1);
		break;
	case 60:
		T60f7(ac, C, a1);
		break;
	case 61:
		T61f7(ac, C, a1);
		break;
	case 62:
		T62f7(ac, C, a1);
		break;
	case 63:
		T63f7(ac, C, a1);
		break;
	case 64:
		T64f7(ac, C, a1);
		break;
	case 65:
		T65f7(ac, C, a1);
		break;
	case 66:
		T66f7(ac, C, a1);
		break;
	case 67:
		T67f11(ac, C, a1);
		break;
	case 68:
		T68f7(ac, C, a1);
		break;
	case 69:
		T69f7(ac, C, a1);
		break;
	}
}

T0* GE_mt31(T6 a1, T6 a2, T6 a3, T0* a4, T0* a5, T0* a6, T0* a7, T0* a8, T0* a9, T6 a10, T1 a11)
{
	T0* R;
	R = GE_new31(EIF_TRUE);
	((T31*)(R))->z1 = a1;
	((T31*)(R))->z2 = a2;
	((T31*)(R))->z3 = a3;
	((T31*)(R))->z4 = a4;
	((T31*)(R))->z5 = a5;
	((T31*)(R))->z6 = a6;
	((T31*)(R))->z7 = a7;
	((T31*)(R))->z8 = a8;
	((T31*)(R))->z9 = a9;
	((T31*)(R))->z10 = a10;
	((T31*)(R))->z11 = a11;
	return R;
}


void GE_init_const1()
{
}

void GE_init_const()
{
	GE_init_const1();
}

EIF_TYPE_OBJ GE_types[95][2] = {
{{0, 0, EIF_FALSE, 0, 0, 0},{0, 0, EIF_FALSE, 0, 0, 0}},
{{0, 1, EIF_FALSE, 0, 0, 0},{0, 65537, EIF_FALSE, 0, 0, 0}},
{{0, 2, EIF_FALSE, 0, 0, 0},{0, 65538, EIF_FALSE, 0, 0, 0}},
{{0, 3, EIF_FALSE, 0, 0, 0},{0, 65539, EIF_FALSE, 0, 0, 0}},
{{0, 4, EIF_FALSE, 0, 0, 0},{0, 65540, EIF_FALSE, 0, 0, 0}},
{{0, 5, EIF_FALSE, 0, 0, 0},{0, 65541, EIF_FALSE, 0, 0, 0}},
{{0, 6, EIF_FALSE, 0, 0, 0},{0, 65542, EIF_FALSE, 0, 0, 0}},
{{0, 7, EIF_FALSE, 0, 0, 0},{0, 65543, EIF_FALSE, 0, 0, 0}},
{{0, 8, EIF_FALSE, 0, 0, 0},{0, 65544, EIF_FALSE, 0, 0, 0}},
{{0, 9, EIF_FALSE, 0, 0, 0},{0, 65545, EIF_FALSE, 0, 0, 0}},
{{0, 10, EIF_FALSE, 0, 0, 0},{0, 65546, EIF_FALSE, 0, 0, 0}},
{{0, 11, EIF_FALSE, 0, 0, 0},{0, 65547, EIF_FALSE, 0, 0, 0}},
{{0, 12, EIF_FALSE, 0, 0, 0},{0, 65548, EIF_FALSE, 0, 0, 0}},
{{0, 13, EIF_FALSE, 0, 0, 0},{0, 65549, EIF_FALSE, 0, 0, 0}},
{{0, 14, EIF_FALSE, 0, 0, 0},{0, 65550, EIF_FALSE, 0, 0, 0}},
{{0, 15, EIF_TRUE, 0, 0, 0},{0, 65551, EIF_TRUE, 0, 0, 0}},
{{0, 16, EIF_TRUE, 0, 0, 0},{0, 65552, EIF_TRUE, 0, 0, 0}},
{{0, 17, EIF_FALSE, 0, 0, 0},{0, 65553, EIF_FALSE, 0, 0, 0}},
{{0, 18, EIF_FALSE, 0, 0, 0},{0, 65554, EIF_FALSE, 0, 0, 0}},
{{0, 19, EIF_FALSE, 0, 0, 0},{0, 65555, EIF_FALSE, 0, 0, 0}},
{{0, 20, EIF_FALSE, 0, 0, 0},{0, 65556, EIF_FALSE, 0, 0, 0}},
{{0, 21, EIF_FALSE, 0, 0, 0},{0, 65557, EIF_FALSE, 0, 0, 0}},
{{92, 22, EIF_FALSE, 0, 0, 0},{0, 65558, EIF_FALSE, 0, 0, 0}},
{{0, 23, EIF_FALSE, 0, 0, 0},{0, 65559, EIF_FALSE, 0, 0, 0}},
{{0, 24, EIF_FALSE, 0, 0, 0},{0, 65560, EIF_FALSE, 0, 0, 0}},
{{0, 25, EIF_FALSE, 0, 0, 0},{0, 65561, EIF_FALSE, 0, 0, 0}},
{{0, 26, EIF_FALSE, 0, 0, 0},{0, 65562, EIF_FALSE, 0, 0, 0}},
{{0, 27, EIF_FALSE, 0, 0, 0},{0, 65563, EIF_FALSE, 0, 0, 0}},
{{0, 28, EIF_FALSE, 0, 0, 0},{0, 65564, EIF_FALSE, 0, 0, 0}},
{{0, 29, EIF_FALSE, 0, 0, 0},{0, 65565, EIF_FALSE, 0, 0, 0}},
{{0, 30, EIF_FALSE, 0, 0, 0},{0, 65566, EIF_FALSE, 0, 0, 0}},
{{0, 31, EIF_FALSE, 0, 0, 0},{0, 65567, EIF_FALSE, 0, 0, 0}},
{{0, 32, EIF_FALSE, 0, 0, 0},{0, 65568, EIF_FALSE, 0, 0, 0}},
{{0, 33, EIF_FALSE, 0, 0, 0},{0, 65569, EIF_FALSE, 0, 0, 0}},
{{0, 34, EIF_FALSE, 0, 0, 0},{0, 65570, EIF_FALSE, 0, 0, 0}},
{{0, 35, EIF_FALSE, 0, 0, 0},{0, 65571, EIF_FALSE, 0, 0, 0}},
{{0, 36, EIF_FALSE, 0, 0, 0},{0, 65572, EIF_FALSE, 0, 0, 0}},
{{0, 37, EIF_FALSE, 0, 0, 0},{0, 65573, EIF_FALSE, 0, 0, 0}},
{{0, 38, EIF_FALSE, 0, 0, 0},{39, 65574, EIF_FALSE, 0, 0, 0}},
{{0, 39, EIF_FALSE, 0, 0, 0},{0, 65575, EIF_FALSE, 0, 0, 0}},
{{0, 40, EIF_FALSE, 0, 0, 0},{41, 65576, EIF_FALSE, 0, 0, 0}},
{{0, 41, EIF_FALSE, 0, 0, 0},{0, 65577, EIF_FALSE, 0, 0, 0}},
{{0, 42, EIF_FALSE, 0, 0, 0},{43, 65578, EIF_FALSE, 0, 0, 0}},
{{0, 43, EIF_FALSE, 0, 0, 0},{0, 65579, EIF_FALSE, 0, 0, 0}},
{{0, 44, EIF_FALSE, 0, 0, 0},{0, 65580, EIF_FALSE, 0, 0, 0}},
{{0, 45, EIF_FALSE, 0, 0, 0},{0, 65581, EIF_FALSE, 0, 0, 0}},
{{0, 46, EIF_FALSE, 0, 0, 0},{0, 65582, EIF_FALSE, 0, 0, 0}},
{{0, 47, EIF_FALSE, 0, 0, 0},{0, 65583, EIF_FALSE, 0, 0, 0}},
{{0, 48, EIF_FALSE, 0, 0, 0},{0, 65584, EIF_FALSE, 0, 0, 0}},
{{0, 49, EIF_FALSE, 0, 0, 0},{0, 65585, EIF_FALSE, 0, 0, 0}},
{{0, 50, EIF_FALSE, 0, 0, 0},{0, 65586, EIF_FALSE, 0, 0, 0}},
{{0, 51, EIF_FALSE, 0, 0, 0},{0, 65587, EIF_FALSE, 0, 0, 0}},
{{0, 52, EIF_FALSE, 0, 0, 0},{0, 65588, EIF_FALSE, 0, 0, 0}},
{{0, 53, EIF_FALSE, 0, 0, 0},{0, 65589, EIF_FALSE, 0, 0, 0}},
{{0, 54, EIF_FALSE, 0, 0, 0},{0, 65590, EIF_FALSE, 0, 0, 0}},
{{0, 55, EIF_FALSE, 0, 0, 0},{0, 65591, EIF_FALSE, 0, 0, 0}},
{{0, 56, EIF_FALSE, 0, 0, 0},{0, 65592, EIF_FALSE, 0, 0, 0}},
{{0, 57, EIF_FALSE, 0, 0, 0},{0, 65593, EIF_FALSE, 0, 0, 0}},
{{0, 58, EIF_FALSE, 0, 0, 0},{0, 65594, EIF_FALSE, 0, 0, 0}},
{{0, 59, EIF_FALSE, 0, 0, 0},{0, 65595, EIF_FALSE, 0, 0, 0}},
{{0, 60, EIF_FALSE, 0, 0, 0},{0, 65596, EIF_FALSE, 0, 0, 0}},
{{0, 61, EIF_FALSE, 0, 0, 0},{0, 65597, EIF_FALSE, 0, 0, 0}},
{{0, 62, EIF_FALSE, 0, 0, 0},{0, 65598, EIF_FALSE, 0, 0, 0}},
{{0, 63, EIF_FALSE, 0, 0, 0},{0, 65599, EIF_FALSE, 0, 0, 0}},
{{0, 64, EIF_FALSE, 0, 0, 0},{0, 65600, EIF_FALSE, 0, 0, 0}},
{{0, 65, EIF_FALSE, 0, 0, 0},{0, 65601, EIF_FALSE, 0, 0, 0}},
{{0, 66, EIF_FALSE, 0, 0, 0},{0, 65602, EIF_FALSE, 0, 0, 0}},
{{91, 67, EIF_FALSE, 0, 0, 0},{0, 65603, EIF_FALSE, 0, 0, 0}},
{{0, 68, EIF_FALSE, 0, 0, 0},{0, 65604, EIF_FALSE, 0, 0, 0}},
{{0, 69, EIF_FALSE, 0, 0, 0},{0, 65605, EIF_FALSE, 0, 0, 0}},
{{0, 70, EIF_FALSE, 0, 0, 0},{0, 65606, EIF_FALSE, 0, 0, 0}},
{{0, 71, EIF_FALSE, 0, 0, 0},{0, 65607, EIF_FALSE, 0, 0, 0}},
{{0, 72, EIF_FALSE, 0, 0, 0},{0, 65608, EIF_FALSE, 0, 0, 0}},
{{0, 73, EIF_TRUE, 0, 0, 0},{0, 65609, EIF_TRUE, 0, 0, 0}},
{{0, 74, EIF_TRUE, 0, 0, 0},{0, 65610, EIF_TRUE, 0, 0, 0}},
{{0, 75, EIF_FALSE, 0, 0, 0},{0, 65611, EIF_FALSE, 0, 0, 0}},
{{0, 76, EIF_FALSE, 0, 0, 0},{0, 65612, EIF_FALSE, 0, 0, 0}},
{{0, 77, EIF_FALSE, 0, 0, 0},{0, 65613, EIF_FALSE, 0, 0, 0}},
{{0, 78, EIF_FALSE, 0, 0, 0},{0, 65614, EIF_FALSE, 0, 0, 0}},
{{0, 79, EIF_FALSE, &T79f7, 0, 0},{0, 65615, EIF_FALSE, &T79f7, 0, 0}},
{{0, 80, EIF_FALSE, 0, 0, 0},{0, 65616, EIF_FALSE, 0, 0, 0}},
{{0, 81, EIF_FALSE, 0, 0, 0},{0, 65617, EIF_FALSE, 0, 0, 0}},
{{0, 82, EIF_FALSE, 0, 0, 0},{0, 65618, EIF_FALSE, 0, 0, 0}},
{{0, 83, EIF_FALSE, 0, 0, 0},{0, 65619, EIF_FALSE, 0, 0, 0}},
{{0, 84, EIF_FALSE, 0, 0, 0},{0, 65620, EIF_FALSE, 0, 0, 0}},
{{0, 85, EIF_FALSE, 0, 0, 0},{0, 65621, EIF_FALSE, 0, 0, 0}},
{{0, 86, EIF_TRUE, 0, 0, 0},{0, 65622, EIF_TRUE, 0, 0, 0}},
{{0, 87, EIF_FALSE, 0, 0, 0},{0, 65623, EIF_FALSE, 0, 0, 0}},
{{0, 88, EIF_FALSE, 0, 0, 0},{0, 65624, EIF_FALSE, 0, 0, 0}},
{{0, 89, EIF_FALSE, 0, 0, 0},{0, 65625, EIF_FALSE, 0, 0, 0}},
{{0, 90, EIF_FALSE, 0, 0, 0},{0, 65626, EIF_FALSE, 0, 0, 0}},
{{0, 91, EIF_FALSE, 0, 0, 0},{0, 65627, EIF_FALSE, 0, 0, 0}},
{{0, 92, EIF_FALSE, 0, 0, 0},{0, 65628, EIF_FALSE, 0, 0, 0}},
{{0, 93, EIF_FALSE, 0, 0, 0},{0, 65629, EIF_FALSE, 0, 0, 0}},
{{0, 94, EIF_TRUE, 0, 0, 0},{0, 65630, EIF_TRUE, 0, 0, 0}}
};

EIF_ENCODED_TYPE T15gen[1] = {2};
EIF_ENCODED_TYPE T16gen[1] = {3};
EIF_ENCODED_TYPE T26gen[1] = {22};
EIF_ENCODED_TYPE T27gen[2] = {6, 6};
EIF_ENCODED_TYPE T28gen[1] = {31};
EIF_ENCODED_TYPE T29gen[1] = {65580};
EIF_ENCODED_TYPE T31gen[11] = {6, 6, 6, 65553, 65553, 65553, 65553, 65553, 65553, 6, 1};
EIF_ENCODED_TYPE T39gen[1] = {65574};
EIF_ENCODED_TYPE T41gen[1] = {65576};
EIF_ENCODED_TYPE T43gen[1] = {65578};
EIF_ENCODED_TYPE T70gen[1] = {65559};
EIF_ENCODED_TYPE T73gen[1] = {6};
EIF_ENCODED_TYPE T74gen[1] = {1};
EIF_ENCODED_TYPE T78gen[1] = {6};
EIF_ENCODED_TYPE T83gen[1] = {8};
EIF_ENCODED_TYPE T86gen[1] = {8};
EIF_ENCODED_TYPE T88gen[1] = {9};
EIF_ENCODED_TYPE T91gen[1] = {67};
EIF_ENCODED_TYPE T92gen[1] = {22};
EIF_ENCODED_TYPE T94gen[1] = {11};

GE_type_info GE_type_infos[95] = {
{0, 0, 0, 0, 0, 0, 0},
{1, GE_TYPE_FLAG_BOOLEAN|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb1), 0, 0},
{2, GE_TYPE_FLAG_CHARACTER_8|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb2), 0, 0},
{3, GE_TYPE_FLAG_CHARACTER_32|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb3), 0, 0},
{4, GE_TYPE_FLAG_INTEGER_8|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb4), 0, 0},
{5, GE_TYPE_FLAG_INTEGER_16|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb5), 0, 0},
{6, GE_TYPE_FLAG_INTEGER_32|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb6), 0, 0},
{7, GE_TYPE_FLAG_INTEGER_64|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb7), 0, 0},
{8, GE_TYPE_FLAG_NATURAL_8|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb8), 0, 0},
{9, GE_TYPE_FLAG_NATURAL_16|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb9), 0, 0},
{10, GE_TYPE_FLAG_NATURAL_32|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb10), 0, 0},
{11, GE_TYPE_FLAG_NATURAL_64|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb11), 0, 0},
{12, GE_TYPE_FLAG_REAL_32|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb12), 0, 0},
{13, GE_TYPE_FLAG_REAL_64|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb13), 0, 0},
{14, GE_TYPE_FLAG_POINTER|GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(Tb14), 0, 0},
{15, GE_TYPE_FLAG_SPECIAL, T15gen, 1, sizeof(T15), (EIF_REFERENCE (*)())&GE_new15, 0},
{16, GE_TYPE_FLAG_SPECIAL, T16gen, 1, sizeof(T16), (EIF_REFERENCE (*)())&GE_new16, 0},
{17, 0, 0, 0, sizeof(T17), (EIF_REFERENCE (*)())&GE_new17, 0},
{18, 0, 0, 0, sizeof(T18), (EIF_REFERENCE (*)())&GE_new18, 0},
{19, 0, 0, 0, 0, 0, 0},
{20, 0, 0, 0, 0, 0, 0},
{21, 0, 0, 0, sizeof(T21), (EIF_REFERENCE (*)())&GE_new21, 0},
{22, 0, 0, 0, 0, 0, 0},
{23, 0, 0, 0, 0, 0, 0},
{24, GE_TYPE_FLAG_NONE, 0, 0, 0, 0, 0},
{25, 0, 0, 0, sizeof(T25), (EIF_REFERENCE (*)())&GE_new25, 0},
{26, 0, T26gen, 1, sizeof(T26), (EIF_REFERENCE (*)())&GE_new26, 0},
{27, 0, T27gen, 2, sizeof(T27), (EIF_REFERENCE (*)())&GE_new27, 0},
{28, 0, T28gen, 1, sizeof(T28), (EIF_REFERENCE (*)())&GE_new28, 0},
{29, 0, T29gen, 1, sizeof(T29), (EIF_REFERENCE (*)())&GE_new29, 0},
{30, 0, 0, 0, sizeof(T30), (EIF_REFERENCE (*)())&GE_new30, 0},
{31, GE_TYPE_FLAG_TUPLE, T31gen, 11, sizeof(T31), (EIF_REFERENCE (*)())&GE_new31, 0},
{32, 0, 0, 0, sizeof(T32), (EIF_REFERENCE (*)())&GE_new32, 0},
{33, 0, 0, 0, sizeof(T33), (EIF_REFERENCE (*)())&GE_new33, 0},
{34, 0, 0, 0, sizeof(T34), (EIF_REFERENCE (*)())&GE_new34, 0},
{35, 0, 0, 0, sizeof(T35), (EIF_REFERENCE (*)())&GE_new35, 0},
{36, 0, 0, 0, sizeof(T36), (EIF_REFERENCE (*)())&GE_new36, 0},
{37, GE_TYPE_FLAG_DEFERRED, 0, 0, 0, 0, 0},
{38, 0, 0, 0, sizeof(T38), (EIF_REFERENCE (*)())&GE_new38, 0},
{39, 0, T39gen, 1, sizeof(T39), 0, 0},
{40, 0, 0, 0, sizeof(T40), (EIF_REFERENCE (*)())&GE_new40, 0},
{41, 0, T41gen, 1, sizeof(T41), 0, 0},
{42, 0, 0, 0, sizeof(T42), (EIF_REFERENCE (*)())&GE_new42, 0},
{43, 0, T43gen, 1, sizeof(T43), 0, 0},
{44, 0, 0, 0, sizeof(T44), (EIF_REFERENCE (*)())&GE_new44, 0},
{45, 0, 0, 0, sizeof(T45), (EIF_REFERENCE (*)())&GE_new45, 0},
{46, 0, 0, 0, sizeof(T46), (EIF_REFERENCE (*)())&GE_new46, 0},
{47, 0, 0, 0, sizeof(T47), (EIF_REFERENCE (*)())&GE_new47, 0},
{48, 0, 0, 0, sizeof(T48), (EIF_REFERENCE (*)())&GE_new48, 0},
{49, 0, 0, 0, sizeof(T49), (EIF_REFERENCE (*)())&GE_new49, 0},
{50, 0, 0, 0, sizeof(T50), (EIF_REFERENCE (*)())&GE_new50, 0},
{51, 0, 0, 0, 0, 0, 0},
{52, GE_TYPE_FLAG_DEFERRED, 0, 0, 0, 0, 0},
{53, 0, 0, 0, sizeof(T53), (EIF_REFERENCE (*)())&GE_new53, 0},
{54, 0, 0, 0, sizeof(T54), (EIF_REFERENCE (*)())&GE_new54, 0},
{55, 0, 0, 0, sizeof(T55), (EIF_REFERENCE (*)())&GE_new55, 0},
{56, 0, 0, 0, sizeof(T56), (EIF_REFERENCE (*)())&GE_new56, 0},
{57, 0, 0, 0, sizeof(T57), (EIF_REFERENCE (*)())&GE_new57, 0},
{58, 0, 0, 0, sizeof(T58), (EIF_REFERENCE (*)())&GE_new58, 0},
{59, 0, 0, 0, sizeof(T59), (EIF_REFERENCE (*)())&GE_new59, 0},
{60, 0, 0, 0, sizeof(T60), (EIF_REFERENCE (*)())&GE_new60, 0},
{61, 0, 0, 0, sizeof(T61), (EIF_REFERENCE (*)())&GE_new61, 0},
{62, 0, 0, 0, sizeof(T62), (EIF_REFERENCE (*)())&GE_new62, 0},
{63, 0, 0, 0, sizeof(T63), (EIF_REFERENCE (*)())&GE_new63, 0},
{64, 0, 0, 0, sizeof(T64), (EIF_REFERENCE (*)())&GE_new64, 0},
{65, 0, 0, 0, sizeof(T65), (EIF_REFERENCE (*)())&GE_new65, 0},
{66, 0, 0, 0, sizeof(T66), (EIF_REFERENCE (*)())&GE_new66, 0},
{67, 0, 0, 0, sizeof(T67), (EIF_REFERENCE (*)())&GE_new67, 0},
{68, 0, 0, 0, sizeof(T68), (EIF_REFERENCE (*)())&GE_new68, 0},
{69, 0, 0, 0, sizeof(T69), (EIF_REFERENCE (*)())&GE_new69, 0},
{70, GE_TYPE_FLAG_EXPANDED, T70gen, 1, sizeof(T70), 0, 0},
{71, 0, 0, 0, 0, 0, 0},
{72, 0, 0, 0, sizeof(T72), (EIF_REFERENCE (*)())&GE_new72, 0},
{73, GE_TYPE_FLAG_SPECIAL, T73gen, 1, sizeof(T73), (EIF_REFERENCE (*)())&GE_new73, 0},
{74, GE_TYPE_FLAG_SPECIAL, T74gen, 1, sizeof(T74), (EIF_REFERENCE (*)())&GE_new74, 0},
{75, 0, 0, 0, 0, 0, 0},
{76, 0, 0, 0, sizeof(T76), (EIF_REFERENCE (*)())&GE_new76, 0},
{77, GE_TYPE_FLAG_EXPANDED, 0, 0, sizeof(T77), 0, 0},
{78, 0, T78gen, 1, sizeof(T78), (EIF_REFERENCE (*)())&GE_new78, 0},
{79, 0, 0, 0, sizeof(T79), (EIF_REFERENCE (*)())&GE_new79, &T79f7},
{80, GE_TYPE_FLAG_DEFERRED, 0, 0, 0, 0, 0},
{81, 0, 0, 0, sizeof(T81), (EIF_REFERENCE (*)())&GE_new81, 0},
{82, 0, 0, 0, sizeof(T82), (EIF_REFERENCE (*)())&GE_new82, 0},
{83, GE_TYPE_FLAG_EXPANDED, T83gen, 1, sizeof(T83), 0, 0},
{84, 0, 0, 0, 0, 0, 0},
{85, GE_TYPE_FLAG_DEFERRED, 0, 0, 0, 0, 0},
{86, GE_TYPE_FLAG_SPECIAL, T86gen, 1, sizeof(T86), (EIF_REFERENCE (*)())&GE_new86, 0},
{87, 0, 0, 0, 0, 0, 0},
{88, GE_TYPE_FLAG_EXPANDED, T88gen, 1, sizeof(T88), 0, 0},
{89, 0, 0, 0, sizeof(T89), (EIF_REFERENCE (*)())&GE_new89, 0},
{90, 0, 0, 0, 0, 0, 0},
{91, 0, T91gen, 1, sizeof(T91), 0, 0},
{92, 0, T92gen, 1, 0, 0, 0},
{93, 0, 0, 0, sizeof(T93), (EIF_REFERENCE (*)())&GE_new93, 0},
{94, GE_TYPE_FLAG_SPECIAL, T94gen, 1, sizeof(T94), (EIF_REFERENCE (*)())&GE_new94, 0}
};

int GE_main(int argc, EIF_NATIVE_CHAR** argv)
{
	T0* t1;
	GE_context tc = GE_default_context;
	GE_context* ac = &tc;
	GE_type_info_count = 94;
	GE_argc = argc;
	GE_argv = argv;
	GE_main_context = ac;
	GE_system_name = "app";
	GE_root_class_name = "APP";
	GE_init_gc();
	GE_new_exception_manager = &GE_new21;
	GE_init_exception_manager = &T21f14;
	GE_last_exception = &T21f1;
	GE_once_raise = &T21f15;
	GE_set_exception_data = &T21f16;
	GE_init_onces(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0);
	GE_init_exception(ac);
	GE_init_console();
	GE_init_identified();
	GE_init_const();
	t1 = T25c7(ac);
	return 0;
}


#ifdef __cplusplus
}
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

#ifndef GE_STRING_C
#define GE_STRING_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_STRING_H
#include "ge_string.h"
#endif
#ifndef GE_NATIVE_STRING_H
#include "ge_native_string.h"
#endif
#ifndef GE_GC_H
#include "ge_gc.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Number of EIF_CHARACTER_32 characters which can be read from
 * the first `n' native characters in native string `s'.
 * Invalid native characters are escaped.
 */
static int GE_nstr_str32len(EIF_NATIVE_CHAR* s, EIF_INTEGER n)
{
	int i, j;
#ifdef EIF_WINDOWS
	uint16_t c1, c2;
#else
	uint8_t c1, c2, c3, c4;
#endif

	j = 0;
	for (i = 0; i < n; i++) {
#ifdef EIF_WINDOWS
		c1 = (uint16_t)s[i];
		if (c1 == 0) {
			return j;
		} else if (c1 < 0xD800 || c1 >= 0xE000) {
				/* Codepoint from Basic Multilingual Plane: one 16-bit code unit. */
			j++;
		} else if (c1 <= 0xDBFF && i + 1 < n) {
				/* Check if a lead surrogate (value between 0xD800 and 0xDBFF) is followed by a trail surrogate. */
			c2 = (uint16_t)s[i + 1];
			if (c2 >= 0xDC00 && c2 <= 0xDFFF) {
				/* Supplementary Planes: surrogate pair with lead and trail surrogates. */
				i++;
				j++;
			} else {
				j += 6;
			}
		} else {
			j += 6;
		}
#else
		c1 = (uint8_t)s[i];
		if (c1 == 0) {
			return j;
		} else if (c1 <= 0x7F) {
			j++;
		} else if ((c1 & 0xE0) == 0xC0) {
			if (i + 1 < n) {
				c2 = (uint8_t)s[i + 1];
				if ((c2 & 0xC0) == 0x80) {
					j++;
					i++;
				} else {
					j += 3;
				}
			} else {
				j += 3;
			}
		} else if ((c1 & 0xF0) == 0xE0) {
			if (i + 2 < n) {
				c2 = (uint8_t)s[i + 1];
				c3 = (uint8_t)s[i + 2];
				if ((c2 & 0xC0) == 0x80 && (c3 & 0xC0) == 0x80) {
					j++;
					i +=2;
				} else {
					j += 3;
				}
			} else {
				j += 3;
			}
		} else if ((c1 & 0xF8) == 0xF0) {
			if (i + 3 < n) {
				c2 = (uint8_t)s[i + 1];
				c3 = (uint8_t)s[i + 2];
				c4 = (uint8_t)s[i + 3];
				if ((c2 & 0xC0) == 0x80 && (c3 & 0xC0) == 0x80 && (c4 & 0xC0) == 0x80) {
					j++;
					i +=3;
				} else {
					j += 3;
				}
			} else {
				j += 3;
			}
		} else {
			j += 3;
		}
#endif
	}
	return j;
}

/*
 * Hexadecimal representation of `a_code'.
 * `a_code' is expected to be between 0 and 15.
 */
static char GE_to_hex(uint16_t a_code)
{
	switch (a_code) {
	case 0:
		return '0';
	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	case 10:
		return 'A';
	case 11:
		return 'B';
	case 12:
		return 'C';
	case 13:
		return 'D';
	case 14:
		return 'E';
	default:
		return 'F';
	}
}

/*
 * Copy escaped version of `c' to `a_buffer'.
 * `a_buffer' is expected to have enough space for 6 characters.
 */
static void GE_uint16_to_escaped_str32(uint16_t c, EIF_CHARACTER_32* a_buffer)
{
	int i = 0;

	a_buffer[i] = (EIF_CHARACTER_32)0x0000FFFD;
	i++;
	a_buffer[i] = (EIF_CHARACTER_32)'u';
	i++;
	a_buffer[i] = (EIF_CHARACTER_32)GE_to_hex((c & 0xF000) >> 12);
	i++;
	a_buffer[i] = (EIF_CHARACTER_32)GE_to_hex((c & 0x0F00) >> 8);
	i++;
	a_buffer[i] = (EIF_CHARACTER_32)GE_to_hex((c & 0x00F0) >> 4);
	i++;
	a_buffer[i] = (EIF_CHARACTER_32)GE_to_hex(c & 0x000F);
}

#ifndef __LCC__
/* lcc-win32 complains about this used static function. */

/*
 * Copy escaped version of `c' to `a_buffer'.
 * `a_buffer' is expected to have enough space for 3 characters.
 */
static void GE_uint8_to_escaped_str32(uint8_t c, EIF_CHARACTER_32* a_buffer)
{
	int i = 0;

	a_buffer[i] = (EIF_CHARACTER_32)0x0000FFFD;
	i++;
	a_buffer[i] = (EIF_CHARACTER_32)GE_to_hex((uint16_t)((c & 0xF0) >> 4));
	i++;
	a_buffer[i] = (EIF_CHARACTER_32)GE_to_hex((uint16_t)(c & 0x0F));
}
#endif

/*
 * Copy to `a_buffer' the EIF_CHARACTER_32 characters corresponding to the
 * first `n' native characters in the native string `s'.
 * `a_buffer' is expected to have enough space.
 * Invalid native characters are escaped.
 */
static void GE_nstr_to_str32(EIF_NATIVE_CHAR* s, EIF_CHARACTER_32* a_buffer, EIF_INTEGER n)
{
	int i, j;
#ifdef EIF_WINDOWS
	uint16_t c1, c2;
#else
	uint8_t c1, c2, c3, c4;
#endif

	j = 0;
	for (i = 0; i < n; i++) {
#ifdef EIF_WINDOWS
		c1 = (uint16_t)s[i];
		if (c1 < 0xD800 || c1 >= 0xE000) {
				/* Codepoint from Basic Multilingual Plane: one 16-bit code unit. */
			a_buffer[j] = (EIF_CHARACTER_32)(c1);
			j++;
		} else if (c1 <= 0xDBFF && i + 1 < n) {
				/* Check if a lead surrogate (value between 0xD800 and 0xDBFF) is followed by a trail surrogate. */
			c2 = (uint16_t)s[i + 1];
			if (c2 >= 0xDC00 && c2 <= 0xDFFF) {
					/* Supplementary Planes: surrogate pair with lead and trail surrogates. */
				a_buffer[j] = (EIF_CHARACTER_32)(((uint32_t)c1 << 10) + (uint32_t)c2 - 0x035FDC00);
				j++;
				i++;
			} else {
				GE_uint16_to_escaped_str32(c1, a_buffer + j);
				j += 6;
			}
		} else {
			GE_uint16_to_escaped_str32(c1, a_buffer + j);
			j += 6;
		}
#else
		c1 = (uint8_t)s[i];
		if (c1 <= 0x7F) {
			a_buffer[j] = (EIF_CHARACTER_32)(c1);
			j++;
		} else if ((c1 & 0xE0) == 0xC0) {
			if (i + 1 < n) {
				c2 = (uint8_t)s[i + 1];
				if ((c2 & 0xC0) == 0x80) {
					a_buffer[j] = (EIF_CHARACTER_32)((((uint32_t)c1 & 0x0000001F) << 6) | ((uint32_t)c2 & 0x0000003F));
					j++;
					i++;
				} else {
					GE_uint8_to_escaped_str32(c1, a_buffer + j);
					j += 3;
				}
			} else {
				GE_uint8_to_escaped_str32(c1, a_buffer + j);
				j += 3;
			}
		} else if ((c1 & 0xF0) == 0xE0) {
			if (i + 2 < n) {
				c2 = (uint8_t)s[i + 1];
				c3 = (uint8_t)s[i + 2];
				if ((c2 & 0xC0) == 0x80 && (c3 & 0xC0) == 0x80) {
					a_buffer[j] = (EIF_CHARACTER_32)((((uint32_t)c1 & 0x0000000F) << 12) | (((uint32_t)c2 & 0x0000003F) << 6) | ((uint32_t)c3 & 0x0000003F));
					j++;
					i +=2;
				} else {
					GE_uint8_to_escaped_str32(c1, a_buffer + j);
					j += 3;
				}
			} else {
				GE_uint8_to_escaped_str32(c1, a_buffer + j);
				j += 3;
			}
		} else if ((c1 & 0xF8) == 0xF0) {
			if (i + 3 < n) {
				c2 = (uint8_t)s[i + 1];
				c3 = (uint8_t)s[i + 2];
				c4 = (uint8_t)s[i + 3];
				if ((c2 & 0xC0) == 0x80 && (c3 & 0xC0) == 0x80 && (c4 & 0xC0) == 0x80) {
					a_buffer[j] = (EIF_CHARACTER_32)((((uint32_t)c1 & 0x00000007) << 18) | (((uint32_t)c2 & 0x0000003F) << 12) | (((uint32_t)c3 & 0x0000003F) << 6) | ((uint32_t)c4 & 0x0000003F));
					j++;
					i +=3;
				} else {
					GE_uint8_to_escaped_str32(c1, a_buffer + j);
					j += 3;
				}
			} else {
				GE_uint8_to_escaped_str32(c1, a_buffer + j);
				j += 3;
			}
		} else {
			GE_uint8_to_escaped_str32(c1, a_buffer + j);
			j += 3;
		}
#endif
	}
}

/*
 * Copy to `a_buffer' the EIF_CHARACTER_32 characters corresponding to the
 * first `n' characters in the ISO 8859-1 string `s'.
 * `a_buffer' is expected to have enough space for `n' characters.
 */
static void GE_str8_to_str32(const char* s, EIF_CHARACTER_32* a_buffer, EIF_INTEGER n)
{
	int i;
	for (i = 0; i < n; i++) {
		a_buffer[i] = (EIF_CHARACTER_32)s[i];
	}
}

/*
 * New Eiffel string of type "STRING_8" containing the
 * first `c' characters found in ISO 8859-1 string `s'.
 */
EIF_REFERENCE GE_ms8(const char* s, EIF_INTEGER c)
{
	EIF_STRING* l_string;
	EIF_SPECIAL* l_area;
	EIF_CHARACTER_8* l_area_base_address;

	l_string = (EIF_STRING*)GE_new_str8(c);
	l_area = (EIF_SPECIAL*)(l_string->area);
	l_area_base_address = (EIF_CHARACTER_8*)((char*)l_area + l_area->offset);
	memcpy((char*)l_area_base_address, s, c);
#ifndef GE_alloc_atomic_cleared
	*(l_area_base_address + c) = (EIF_CHARACTER_8)'\0';
#endif
	l_area->count = (c + 1);
	l_string->count = c;
	return (EIF_REFERENCE)l_string;
}

/*
 * New Eiffel string of type "STRING_8" containing all
 * characters found in the null-terminated ISO 8859-1 string `s'.
 */
EIF_REFERENCE GE_str8(const char* s)
{
	return GE_ms8(s, strlen(s));
}

/*
 * New Eiffel string of type "IMMUTABLE_STRING_8" containing the
 * first `c' characters found in ISO 8859-1 string `s'.
 */
EIF_REFERENCE GE_ims8(const char* s, EIF_INTEGER c)
{
	EIF_STRING* l_string;
	EIF_SPECIAL* l_area;
	EIF_CHARACTER_8* l_area_base_address;

	l_string = (EIF_STRING*)GE_new_istr8(c);
	l_area = (EIF_SPECIAL*)(l_string->area);
	l_area_base_address = (EIF_CHARACTER_8*)((char*)l_area + l_area->offset);
	memcpy((char*)l_area_base_address, s, c);
#ifndef GE_alloc_atomic_cleared
	*(l_area_base_address + c) = (EIF_CHARACTER_8)'\0';
#endif
	l_area->count = (c + 1);
	l_string->count = c;
	return (EIF_REFERENCE)l_string;
}

/*
 * New Eiffel string of type "STRING_32" containing the
 * first `c' characters found in ISO 8859-1 string `s'.
 */
EIF_REFERENCE GE_ms32(const char* s, EIF_INTEGER c)
{
	EIF_STRING* l_string;
	EIF_SPECIAL* l_area;
	EIF_CHARACTER_32* l_area_base_address;

	l_string = (EIF_STRING*)GE_new_str32(c);
	l_area = (EIF_SPECIAL*)(l_string->area);
	l_area_base_address = (EIF_CHARACTER_32*)((char*)l_area + l_area->offset);
	GE_str8_to_str32(s, l_area_base_address, c);
#ifndef GE_alloc_atomic_cleared
	*(l_area_base_address + c) = (EIF_CHARACTER_32)'\0';
#endif
	l_area->count = (c + 1);
	l_string->count = c;
	return (EIF_REFERENCE)l_string;
}

/*
 * New Eiffel string of type "STRING_32" containing the
 * first `c' 32-bit characters built from `s' by reading
 * groups of four bytes with little-endian byte order.
 */
EIF_REFERENCE GE_ms32_from_utf32le(const char* s, EIF_INTEGER c)
{
	EIF_STRING* l_string;
	EIF_SPECIAL* l_area;
	EIF_CHARACTER_32* l_area_base_address;

	l_string = (EIF_STRING*)GE_new_str32(c);
	l_area = (EIF_SPECIAL*)(l_string->area);
	l_area_base_address = (EIF_CHARACTER_32*)((char*)l_area + l_area->offset);
#if BYTEORDER == 0x1234
	memcpy((EIF_CHARACTER_32*)l_area_base_address, s, c * 4);
#else
	{
		int i;
		EIF_CHARACTER_32 l_little, l_big;
		for (i = 0; i < c ; i++) {
			memcpy(&l_little, s + (i * 4), 4);
				/* Convert our little endian to big endian. */
			l_big = ((l_little >> 24) & 0xFF) |
				((l_little >> 8) & 0xFF00) |
			   	((l_little << 8) & 0xFF0000) |
			   	((l_little << 24) & 0xFF000000);
			l_area_base_address[i] = l_big;
		}
	}
#endif
#ifndef GE_alloc_atomic_cleared
	*(l_area_base_address + c) = (EIF_CHARACTER_32)'\0';
#endif
	l_area->count = (c + 1);
	l_string->count = c;
	return (EIF_REFERENCE)l_string;
}

/*
 * New Eiffel string of type "STRING_32" containing all
 * characters found in the null-terminated ISO 8859-1 string `s'.
 */
EIF_REFERENCE GE_str32(const char* s)
{
	return GE_ms32(s, strlen(s));
}

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing
 * the first `c' characters found in ISO 8859-1 string `s'.
 */
EIF_REFERENCE GE_ims32(const char* s, EIF_INTEGER c)
{
	EIF_STRING* l_string;
	EIF_SPECIAL* l_area;
	EIF_CHARACTER_32* l_area_base_address;

	l_string = (EIF_STRING*)GE_new_istr32(c);
	l_area = (EIF_SPECIAL*)(l_string->area);
	l_area_base_address = (EIF_CHARACTER_32*)((char*)l_area + l_area->offset);
	GE_str8_to_str32(s, l_area_base_address, c);
#ifndef GE_alloc_atomic_cleared
	*(l_area_base_address + c) = (EIF_CHARACTER_32)'\0';
#endif
	l_area->count = (c + 1);
	l_string->count = c;
	return (EIF_REFERENCE)l_string;
}

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing the
 * first `c' 32-bit characters built from `s' by reading
 * groups of four bytes with little-endian byte order.
 */
EIF_REFERENCE GE_ims32_from_utf32le(const char* s, EIF_INTEGER c)
{
	EIF_STRING* l_string;
	EIF_SPECIAL* l_area;
	EIF_CHARACTER_32* l_area_base_address;

	l_string = (EIF_STRING*)GE_new_istr32(c);
	l_area = (EIF_SPECIAL*)(l_string->area);
	l_area_base_address = (EIF_CHARACTER_32*)((char*)l_area + l_area->offset);
#if BYTEORDER == 0x1234
	memcpy((EIF_CHARACTER_32*)l_area_base_address, s, c * 4);
#else
	{
		int i;
		EIF_CHARACTER_32 l_little, l_big;
		for (i = 0; i < c ; i++) {
			memcpy(&l_little, s + (i * 4), 4);
				/* Convert our little endian to big endian. */
			l_big = ((l_little >> 24) & 0xFF) |
				((l_little >> 8) & 0xFF00) |
			   	((l_little << 8) & 0xFF0000) |
			   	((l_little << 24) & 0xFF000000);
			l_area_base_address[i] = l_big;
		}
	}
#endif
#ifndef GE_alloc_atomic_cleared
	*(l_area_base_address + c) = (EIF_CHARACTER_32)'\0';
#endif
	l_area->count = (c + 1);
	l_string->count = c;
	return (EIF_REFERENCE)l_string;
}

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing all
 * characters found in the null-terminated ISO 8859-1 string `s'.
 */
EIF_REFERENCE GE_istr32(const char* s)
{
	return GE_ims32(s, strlen(s));
}

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing the
 * first `n' native characters found in native string `s'.
 * Invalid native characters are escaped.
 */
EIF_REFERENCE GE_ims32_from_nstr(EIF_NATIVE_CHAR* s, EIF_INTEGER n)
{
	EIF_STRING* l_string;
	EIF_SPECIAL* l_area;
	EIF_CHARACTER_32* l_area_base_address;
	EIF_INTEGER c;

	c = GE_nstr_str32len(s, n);
	l_string = (EIF_STRING*)GE_new_istr32(c);
	l_area = (EIF_SPECIAL*)(l_string->area);
	l_area_base_address = (EIF_CHARACTER_32*)((char*)l_area + l_area->offset);
	GE_nstr_to_str32(s, l_area_base_address, n);
#ifndef GE_alloc_atomic_cleared
	*(l_area_base_address + c) = (EIF_CHARACTER_32)'\0';
#endif
	l_area->count = (c + 1);
	l_string->count = c;
	return (EIF_REFERENCE)l_string;
}

/*
 * New Eiffel string of type "IMMUTABLE_STRING_32" containing all
 * characters found in the null-terminated native string `s'.
 * Invalid native characters are escaped.
 */
EIF_REFERENCE GE_istr32_from_nstr(EIF_NATIVE_CHAR* s)
{
	return GE_ims32_from_nstr(s, GE_nstrlen(s));
}

/*
 * New Eiffel string of type "STRING" containing all
 * characters found in the null-terminated ISO 8859-1 string `s'
 */
EIF_REFERENCE GE_str(const char* s)
{
	return GE_ms(s, strlen(s));
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
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

#ifndef GE_TYPES_C
#define GE_TYPES_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_TYPES_H
#include "ge_types.h"
#endif
#ifndef GE_STRING_H
#include "ge_string.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Number of type infos in `GE_type_infos'.
 * Do not take into account the fake item at index 0.
 */
int GE_type_info_count;

/*
 * Encode a EIF_TYPE into a EIF_ENCODED_TYPE.
 * The lower part of EIF_ENCODED_TYPE contains the .id field,
 * and the upper part the .annotations.
 */
EIF_ENCODED_TYPE GE_encoded_type(EIF_TYPE a_type)
{
	EIF_ENCODED_TYPE l_result;

#if defined(_MSC_VER)
		/* This code below is just optimized as one move by cl on x86 platforms.
		 * The else-part below generates non-optimal code with cl.
		 */
	memcpy(&l_result, &a_type, sizeof(EIF_ENCODED_TYPE));
#else
		/* This code below is just optimized as one move by gcc/clang on x86 platforms. */
	l_result = a_type.annotations;
	l_result = (l_result << 16) | a_type.id;
#endif
	return l_result;
}

/*
 * Decode a EIF_ENCODED_TYPE into a EIF_TYPE.
 * The lower part of EIF_ENCODED_TYPE contains the .id field,
 * and the upper part the .annotations.
 */
EIF_TYPE GE_decoded_type(EIF_ENCODED_TYPE a_type)
{
	EIF_TYPE l_result;

#if defined(_MSC_VER)
		/* This code below is just optimized as one move by cl on x86 platforms.
		 * The else-part below generates non-optimal code with cl.
		 */
	memcpy(&l_result, &a_type, sizeof(EIF_TYPE));
#else
		/* This code below is just optimized as one move by gcc/clang on x86 platforms. */
	l_result.id = a_type & 0x0000FFFF;
	l_result.annotations = a_type >> 16;
#endif
	return l_result;
}

/*
 * Type with `a_id' and `a_annotations'.
 */
EIF_TYPE GE_new_type(EIF_TYPE_INDEX a_id, EIF_TYPE_INDEX a_annotations)
{
	EIF_TYPE l_result;
	l_result.id = a_id;
	l_result.annotations = a_annotations;
	return l_result;
}

/*
 * Associated detachable type of `a_type' if any,
 * otherwise `a_type'.
 */
EIF_TYPE GE_non_attached_type(EIF_TYPE a_type)
{
		/* Since types are by default detachable, we simply remove
		 * all attachment marks. */
	a_type.annotations &= ~(ATTACHED_FLAG | DETACHABLE_FLAG);
	return a_type;
}

/*
 * Associated attached type of `a_type' if any,
 * otherwise `a_type'.
 */
EIF_TYPE GE_attached_type(EIF_TYPE a_type)
{
	if (!GE_is_expanded_type_index(a_type.id)) {
		a_type.annotations &= ~DETACHABLE_FLAG;
		a_type.annotations |= ATTACHED_FLAG;
	}
	return a_type;
}

/*
 * Is `a_type' a SPECIAL type of user-defined expanded type?
 */
EIF_BOOLEAN GE_is_special_of_expanded_type_index(EIF_TYPE_INDEX a_type)
{
	EIF_BOOLEAN l_result = EIF_FALSE;
#ifdef GE_USE_TYPE_GENERIC_PARAMETERS
	EIF_TYPE_INDEX l_generic_parameter;
	uint32_t l_flags;

	if ((GE_type_infos[a_type].flags & GE_TYPE_FLAG_SPECIAL)) {
		l_generic_parameter = GE_decoded_type(GE_type_infos[a_type].generic_parameters[0]).id;
		l_flags = GE_type_infos[l_generic_parameter].flags;
		l_result = EIF_TEST((l_flags & GE_TYPE_FLAG_EXPANDED) && !(l_flags & GE_TYPE_FLAG_BASIC_MASK));
	}
#endif
	return l_result;
}

/*
 * Is `a_type' a SPECIAL type of reference type?
 */
EIF_BOOLEAN GE_is_special_of_reference_type_index(EIF_TYPE_INDEX a_type)
{
	EIF_BOOLEAN l_result = EIF_FALSE;
#ifdef GE_USE_TYPE_GENERIC_PARAMETERS
	EIF_TYPE_INDEX l_generic_parameter;
	uint32_t l_flags;

	if ((GE_type_infos[a_type].flags & GE_TYPE_FLAG_SPECIAL)) {
		l_generic_parameter = GE_decoded_type(GE_type_infos[a_type].generic_parameters[0]).id;
		l_flags = GE_type_infos[l_generic_parameter].flags;
		l_result = EIF_TEST(!(l_flags & GE_TYPE_FLAG_EXPANDED));
	}
#endif
	return l_result;
}

/*
 * Is `a_type' a SPECIAL type of reference type or basic expanded type?
 * (Note that user-defined expanded types are excluded.)
 */
EIF_BOOLEAN GE_is_special_of_reference_or_basic_expanded_type_index(EIF_TYPE_INDEX a_type)
{
	EIF_BOOLEAN l_result = EIF_FALSE;
#ifdef GE_USE_TYPE_GENERIC_PARAMETERS
	EIF_TYPE_INDEX l_generic_parameter;
	uint32_t l_flags;

	if ((GE_type_infos[a_type].flags & GE_TYPE_FLAG_SPECIAL)) {
		l_generic_parameter = GE_decoded_type(GE_type_infos[a_type].generic_parameters[0]).id;
		l_flags = GE_type_infos[l_generic_parameter].flags;
		l_result = EIF_TEST(!(l_flags & GE_TYPE_FLAG_EXPANDED) || (l_flags & GE_TYPE_FLAG_BASIC_MASK));
	}
#endif
	return l_result;
}

/*
 * Does `i'-th field of `a_object + a_physical_offset' (which is expected to be reference)
 * denote a reference with copy semantics?
 */
EIF_BOOLEAN GE_is_copy_semantics_field(EIF_INTEGER i, EIF_POINTER a_object, EIF_INTEGER a_physical_offset)
{
	EIF_REFERENCE l_object;

	l_object = GE_reference_field(i, a_object, a_physical_offset);
	if (l_object) {
		return GE_is_expanded_object(l_object);
	} else {
		return EIF_FALSE;
	}
}

/*
 * Does `i'-th item of special `a_object' (which is expected to be reference)
 * denote a reference with copy semantics?
 */
EIF_BOOLEAN GE_is_special_copy_semantics_item(EIF_INTEGER i, EIF_POINTER a_object)
{
#if defined(GE_USE_ATTRIBUTES) && defined(GE_USE_ATTRIBUTE_OFFSET)
	EIF_REFERENCE l_object;
	GE_type_info l_type_info;

	l_type_info = GE_type_infos[((EIF_REFERENCE)a_object)->id];
		/* The last pseudo attribute is the item at index 0 in the special object */
	l_object = *(EIF_REFERENCE*)((char*)a_object + l_type_info.attributes[l_type_info.attribute_count - 1]->offset + i * sizeof(EIF_REFERENCE));
	if (l_object) {
		return GE_is_expanded_object(l_object);
	} else {
		return EIF_FALSE;
	}
#else
	return EIF_FALSE;
#endif
}

/*
 * Generator class name of `a_type'.
 */
EIF_REFERENCE GE_generator_of_type_index(EIF_TYPE_INDEX a_type)
{
	const char* l_generator;
#ifdef GE_USE_TYPE_GENERATOR
/* TODO: check that `a_type' is valid. */
	l_generator = GE_type_infos[a_type].generator;
#else
	l_generator = "";
#endif
	return GE_str(l_generator);
}

EIF_REFERENCE GE_generator_8_of_type_index(EIF_TYPE_INDEX a_type)
{
	const char* l_generator;
#ifdef GE_USE_TYPE_GENERATOR
/* TODO: check that `a_type' is valid. */
	l_generator = GE_type_infos[a_type].generator;
#else
	l_generator = "";
#endif
	return GE_str8(l_generator);
}

/*
 * Full name of `a_type'.
 */
EIF_REFERENCE GE_generating_type_of_encoded_type(EIF_ENCODED_TYPE a_type)
{
	const char* l_name;
#ifdef GE_USE_TYPE_NAME
/* TODO: check that `a_type' is valid. */
	EIF_TYPE l_decoded_type;

	l_decoded_type = GE_decoded_type(a_type);
	l_name = GE_type_infos[l_decoded_type.id].name;
	if (!l_decoded_type.annotations) {
		l_name++;
	}
#else
	l_name = "";
#endif
	return GE_str(l_name);
}

EIF_REFERENCE GE_generating_type_8_of_encoded_type(EIF_ENCODED_TYPE a_type)
{
	const char* l_name;
#ifdef GE_USE_TYPE_NAME
/* TODO: check that `a_type' is valid. */
	EIF_TYPE l_decoded_type;

	l_decoded_type = GE_decoded_type(a_type);
	l_name = GE_type_infos[l_decoded_type.id].name;
	if (!l_decoded_type.annotations) {
		l_name++;
	}
#else
	l_name = "";
#endif
	return GE_str8(l_name);
}

/*
 * Encoded type whose name is `a_name'.
 * -1 if no such type.
 */
EIF_ENCODED_TYPE GE_encoded_type_from_name(EIF_POINTER a_name)
{
#ifdef GE_USE_TYPE_NAME
/* TODO: check that `a_type' is valid. */
	int i;
	const char* l_name;

	for (i = 1; i <= GE_type_info_count; i++) {
		l_name = GE_type_infos[i].name;
		if (strcmp((char*)a_name, l_name + 1) == 0) {
			return (EIF_INTEGER)GE_encoded_type(GE_new_type(i, 0x0));
		} else if (strcmp((char*)a_name, l_name) == 0) {
			return (EIF_INTEGER)GE_encoded_type(GE_new_type(i, ATTACHED_FLAG));
		}
	}
#endif
	return EIF_NO_TYPE;
}

/*
 * Does `a_type_1' conform to `a_type_2'?
 */
EIF_BOOLEAN GE_encoded_type_conforms_to(EIF_ENCODED_TYPE a_type_1, EIF_ENCODED_TYPE a_type_2)
{
#ifdef GE_USE_ANCESTORS
	GE_type_info l_type_info_1, l_type_info_2;
	GE_ancestor** l_ancestors;
	uint32_t l_ancestor_count, i;
	EIF_TYPE l_decoded_type_1, l_decoded_type_2;
	EIF_TYPE_INDEX l_type_index_1, l_type_index_2, l_ancestor_type_index;
	uint32_t l_flags_1, l_flags_2;

	l_decoded_type_1 = GE_decoded_type(a_type_1);
	l_decoded_type_2 = GE_decoded_type(a_type_2);
	l_type_index_1 = l_decoded_type_1.id;
	l_type_index_2 = l_decoded_type_2.id;
	l_type_info_1 = GE_type_infos[l_type_index_1];
	l_type_info_2 = GE_type_infos[l_type_index_2];
	l_flags_1 = l_type_info_1.flags;
	l_flags_2 = l_type_info_2.flags;
	if (!(l_flags_1 & GE_TYPE_FLAG_EXPANDED || l_decoded_type_1.annotations & ATTACHED_FLAG) && (l_flags_2 & GE_TYPE_FLAG_EXPANDED || l_decoded_type_2.annotations & ATTACHED_FLAG)) {
		return EIF_FALSE;
	} else if (l_flags_1 & GE_TYPE_FLAG_NONE) {
		return EIF_TEST(!(l_flags_2 & GE_TYPE_FLAG_EXPANDED));
	} else if (l_type_index_1 == l_type_index_2) {
		return EIF_TRUE;
	} else if (l_type_index_1 < l_type_index_2) {
		return EIF_FALSE;
	} else {
		l_ancestors = l_type_info_1.ancestors;
		l_ancestor_count = l_type_info_1.ancestor_count;
		for (i = 0; i < l_ancestor_count; i++) {
			l_ancestor_type_index = l_ancestors[i]->type_id;
			if (l_ancestor_type_index == l_type_index_2) {
				return EIF_TRUE;
			} else if (l_ancestor_type_index > l_type_index_2) {
				return EIF_FALSE;
			}
		}
	}
#endif
	return EIF_FALSE;
}

/*
 * Number of generic parameters.
 */
EIF_INTEGER GE_generic_parameter_count_of_type_index(EIF_TYPE_INDEX a_type)
{
#ifdef GE_USE_TYPE_GENERIC_PARAMETERS
	return (EIF_INTEGER)GE_type_infos[a_type].generic_parameter_count;
#else
	return (EIF_INTEGER)0;
#endif
}

/*
 * Type of `i'-th generic parameter of `a_type'.
 */
EIF_INTEGER GE_generic_parameter_of_type_index(EIF_TYPE_INDEX a_type, EIF_INTEGER i)
{
#ifdef GE_USE_TYPE_GENERIC_PARAMETERS
/* TODO: check that `a_type' and `i' are valid. */
	return (EIF_INTEGER)GE_type_infos[a_type].generic_parameters[i - 1];
#else
	return (EIF_INTEGER)0;
#endif
}

/*
 * Number of fields of an object of dynamic type `a_type'.
 */
EIF_INTEGER GE_field_count_of_type_index(EIF_TYPE_INDEX a_type)
{
#if defined(GE_USE_ATTRIBUTES) && defined(GE_USE_ATTRIBUTE_OFFSET)
/* TODO: check that `a_type' is valid. */
	return (EIF_INTEGER)GE_type_infos[a_type].attribute_count;
#else
	return (EIF_INTEGER)0;
#endif
}

/*
 * Physical offset of the `i'-th field for an object of dynamic type `a_type'.
 */
EIF_INTEGER GE_field_offset_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type)
{
#if defined(GE_USE_ATTRIBUTES) && defined(GE_USE_ATTRIBUTE_OFFSET)
/* TODO: check that `a_type' and `i' are valid. */
	return (EIF_INTEGER)GE_type_infos[a_type].attributes[i - 1]->offset;
#else
	return (EIF_INTEGER)0;
#endif
}

/*
 * Name of the `i'-th field for an object of dynamic type `a_type'.
 */
EIF_POINTER GE_field_name_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type)
{
#if defined(GE_USE_ATTRIBUTES) && defined(GE_USE_ATTRIBUTE_NAME)
/* TODO: check that `a_type' and `i' are valid. */
	return (EIF_POINTER)GE_type_infos[a_type].attributes[i - 1]->name;
#else
	return (EIF_POINTER)0;
#endif
}

/*
 * Static type of the `i'-th field for an object of dynamic type `a_type'.
 */
EIF_INTEGER GE_field_static_type_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type)
{
#if defined(GE_USE_ATTRIBUTES) && defined(GE_USE_ATTRIBUTE_TYPE_ID)
/* TODO: check that `a_type' and `i' are valid. */
	return (EIF_INTEGER)GE_type_infos[a_type].attributes[i - 1]->type_id;
#else
	return (EIF_INTEGER)0;
#endif
}

/*
 * Kind of type of the `i'-th field for an object of dynamic type `a_type'.
 */
EIF_INTEGER GE_field_type_kind_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type)
{
#if defined(GE_USE_ATTRIBUTES) && defined(GE_USE_ATTRIBUTE_TYPE_ID)
	uint32_t l_flags = GE_type_infos[GE_decoded_type(GE_type_infos[a_type].attributes[i - 1]->type_id).id].flags;
	if (l_flags & GE_TYPE_FLAG_BASIC_MASK) {
		switch (l_flags & GE_TYPE_FLAG_BASIC_MASK) {
		case GE_TYPE_FLAG_BOOLEAN:
			return (EIF_INTEGER)GE_TYPE_KIND_BOOLEAN;
		case GE_TYPE_FLAG_CHARACTER_8:
			return (EIF_INTEGER)GE_TYPE_KIND_CHARACTER_8;
		case GE_TYPE_FLAG_CHARACTER_32:
			return (EIF_INTEGER)GE_TYPE_KIND_CHARACTER_32;
		case GE_TYPE_FLAG_INTEGER_8:
			return (EIF_INTEGER)GE_TYPE_KIND_INTEGER_8;
		case GE_TYPE_FLAG_INTEGER_16:
			return (EIF_INTEGER)GE_TYPE_KIND_INTEGER_16;
		case GE_TYPE_FLAG_INTEGER_32:
			return (EIF_INTEGER)GE_TYPE_KIND_INTEGER_32;
		case GE_TYPE_FLAG_INTEGER_64:
			return (EIF_INTEGER)GE_TYPE_KIND_INTEGER_64;
		case GE_TYPE_FLAG_NATURAL_8:
			return (EIF_INTEGER)GE_TYPE_KIND_NATURAL_8;
		case GE_TYPE_FLAG_NATURAL_16:
			return (EIF_INTEGER)GE_TYPE_KIND_NATURAL_16;
		case GE_TYPE_FLAG_NATURAL_32:
			return (EIF_INTEGER)GE_TYPE_KIND_NATURAL_32;
		case GE_TYPE_FLAG_NATURAL_64:
			return (EIF_INTEGER)GE_TYPE_KIND_NATURAL_64;
		case GE_TYPE_FLAG_POINTER:
			return (EIF_INTEGER)GE_TYPE_KIND_POINTER;
		case GE_TYPE_FLAG_REAL_32:
			return (EIF_INTEGER)GE_TYPE_KIND_REAL_32;
		case GE_TYPE_FLAG_REAL_64:
			return (EIF_INTEGER)GE_TYPE_KIND_REAL_64;
		default:
			return (EIF_INTEGER)GE_TYPE_KIND_INVALID;
		}
	} else if (l_flags & GE_TYPE_FLAG_EXPANDED) {
		return (EIF_INTEGER)GE_TYPE_KIND_EXPANDED;
	} else {
		return (EIF_INTEGER)GE_TYPE_KIND_REFERENCE;
	}
#else
	return (EIF_INTEGER)GE_TYPE_KIND_INVALID;
#endif
}

/*
 * Physical size of `a_object'.
 */
EIF_NATURAL_64 GE_object_size(EIF_POINTER a_object)
{
#ifdef GE_USE_TYPE_OBJECT_SIZE
	EIF_TYPE_INDEX l_type_index = ((EIF_REFERENCE)(a_object))->id;
	uint64_t l_size = GE_type_infos[l_type_index].object_size;
#ifdef GE_USE_TYPE_GENERIC_PARAMETERS
	if (GE_is_special_type_index(l_type_index)) {
		EIF_TYPE_INDEX l_generic_parameter = GE_decoded_type(GE_type_infos[l_type_index].generic_parameters[0]).id;
		uint32_t l_flags = GE_type_infos[l_generic_parameter].flags;
		EIF_INTEGER l_capacity = ((EIF_SPECIAL*)a_object)->capacity;
		uint64_t l_item_size;

		if (l_flags & GE_TYPE_FLAG_BASIC_MASK) {
			switch (l_flags & GE_TYPE_FLAG_BASIC_MASK) {
			case GE_TYPE_FLAG_BOOLEAN:
				l_item_size = sizeof(EIF_BOOLEAN);
				break;
			case GE_TYPE_FLAG_CHARACTER_8:
				l_item_size = sizeof(EIF_CHARACTER_8);
				break;
			case GE_TYPE_FLAG_CHARACTER_32:
				l_item_size = sizeof(EIF_CHARACTER_32);
				break;
			case GE_TYPE_FLAG_INTEGER_8:
				l_item_size = sizeof(EIF_INTEGER_8);
				break;
			case GE_TYPE_FLAG_INTEGER_16:
				l_item_size = sizeof(EIF_INTEGER_16);
				break;
			case GE_TYPE_FLAG_INTEGER_32:
				l_item_size = sizeof(EIF_INTEGER_32);
				break;
			case GE_TYPE_FLAG_INTEGER_64:
				l_item_size = sizeof(EIF_INTEGER_64);
				break;
			case GE_TYPE_FLAG_NATURAL_8:
				l_item_size = sizeof(EIF_NATURAL_8);
				break;
			case GE_TYPE_FLAG_NATURAL_16:
				l_item_size = sizeof(EIF_NATURAL_16);
				break;
			case GE_TYPE_FLAG_NATURAL_32:
				l_item_size = sizeof(EIF_NATURAL_32);
				break;
			case GE_TYPE_FLAG_NATURAL_64:
				l_item_size = sizeof(EIF_NATURAL_64);
				break;
			case GE_TYPE_FLAG_POINTER:
				l_item_size = sizeof(EIF_POINTER);
				break;
			case GE_TYPE_FLAG_REAL_32:
				l_item_size = sizeof(EIF_REAL_32);
				break;
			case GE_TYPE_FLAG_REAL_64:
				l_item_size = sizeof(EIF_REAL_64);
				break;
			default:
				l_item_size = 0;
			}
		} else if (l_flags & GE_TYPE_FLAG_EXPANDED) {
			l_item_size = GE_type_infos[l_generic_parameter].object_size;
		} else {
			l_item_size = sizeof(EIF_REFERENCE);
		}
		l_size += l_capacity * l_item_size;
	}
#endif
	return (EIF_NATURAL_64)l_size;
#else
	return (EIF_NATURAL_64)0;
#endif
}

/*
 * Is `i'-th field of objects of type `a_type' a user-defined expanded attribute?
 */
EIF_BOOLEAN GE_is_field_expanded_of_type_index(EIF_INTEGER i, EIF_TYPE_INDEX a_type)
{
#if defined(GE_USE_ATTRIBUTES) && defined(GE_USE_ATTRIBUTE_TYPE_ID)
	uint32_t l_flags = GE_type_infos[GE_decoded_type(GE_type_infos[a_type].attributes[i - 1]->type_id).id].flags;
	return EIF_TEST((l_flags & GE_TYPE_FLAG_EXPANDED) && !(l_flags & GE_TYPE_FLAG_BASIC_MASK));
#else
	return EIF_FALSE;
#endif
}

/*
 * Get a lock on `GE_mark_object' and `GE_unmark_object' routines so that
 * 2 threads cannot `GE_mark_object' and `GE_unmark_object' at the same time.
 */
void GE_lock_marking(void)
{
#ifdef GE_USE_THREADS
/* TODO */
#endif
}

/*
 * Release a lock on `GE_mark_object' and `GE_unmark_object', so that another
 * thread can use `GE_mark_object' and `GE_unmark_object'.
 */
void GE_unlock_marking(void)
{
#ifdef GE_USE_THREADS
/* TODO */
#endif
}

/*
 * Is `obj' marked?
 */
EIF_BOOLEAN GE_is_object_marked(EIF_POINTER obj)
{
	return EIF_TEST(((EIF_REFERENCE)obj)->flags & GE_OBJECT_FLAG_MARKED);
}

/*
 * Mark `obj'.
 */
void GE_mark_object(EIF_POINTER obj)
{
	((EIF_REFERENCE)obj)->flags |= GE_OBJECT_FLAG_MARKED;
}

/*
 * Unmark `obj'.
 */
void GE_unmark_object(EIF_POINTER obj)
{
	((EIF_REFERENCE)obj)->flags &= ~GE_OBJECT_FLAG_MARKED;
}

/*
 * New instance of dynamic `a_type'.
 * Note: returned object is not initialized and may
 * hence violate its invariant.
 * `a_type' cannot represent a SPECIAL type, use
 * `GE_new_special_of_reference_instance_of_type_index' instead.
 */
EIF_REFERENCE GE_new_instance_of_type_index(EIF_TYPE_INDEX a_type)
{
	EIF_REFERENCE (*l_new)(EIF_BOOLEAN);

	l_new = (EIF_REFERENCE (*)(EIF_BOOLEAN))GE_type_infos[a_type].new_instance;
	if (l_new) {
		return l_new(EIF_TRUE);
	} else {
		return EIF_VOID;
	}
}

/*
 * New instance of dynamic `a_type' that represents
 * a SPECIAL with can contain `a_capacity' elements of reference type.
 * To create a SPECIAL of basic type, use class SPECIAL directly.
 */
EIF_REFERENCE GE_new_special_of_reference_instance_of_type_index(EIF_TYPE_INDEX a_type, EIF_INTEGER a_capacity)
{
	EIF_REFERENCE (*l_new)(EIF_INTEGER,EIF_BOOLEAN);

	l_new = (EIF_REFERENCE (*)(EIF_INTEGER,EIF_BOOLEAN))GE_type_infos[a_type].new_instance;
	if (l_new) {
		return l_new(a_capacity, EIF_TRUE);
	} else {
		return EIF_VOID;
	}
}

/*
 * New instance of TYPE for object of type `a_type'.
 */
EIF_REFERENCE GE_new_type_instance_of_encoded_type(EIF_ENCODED_TYPE a_type)
{
	EIF_TYPE l_decoded_type;
	EIF_TYPE_INDEX l_type_index;
	EIF_TYPE_INDEX l_annotations;
	EIF_REFERENCE l_result;

	l_decoded_type = GE_decoded_type(a_type);
	l_type_index = l_decoded_type.id;
	l_annotations = l_decoded_type.annotations;
	l_result = (EIF_REFERENCE)&(GE_types[l_type_index][l_annotations]);
	if (l_result->id == 0) {
		l_result = EIF_VOID;
		GE_raise(GE_EX_PROG);
	}
	return l_result;
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif
/*
	description:

		"C functions used to access garbage collector facilities"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_GC_C
#define GE_GC_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_GC_H
#include "ge_gc.h"
#endif
#ifndef GE_TYPES_H
#include "ge_types.h"
#endif

/*
 * Allocate memory that does not contain pointers to collectable objects.
 * The allocated memory is zeroed.
 * The allocated object is itself not collectable.
 * Do not raise an exception when no-more-memory.
 */
#ifdef GE_USE_BOEHM_GC
void* GE_unprotected_calloc_atomic_uncollectable(size_t nelem, size_t elsize)
{
	void* new_p;

	new_p = GC_malloc_atomic_uncollectable(nelem * elsize);
	if (new_p) {
		memset(new_p, 0, nelem * elsize);
	}
	return new_p;
}
#endif

/*
 * Allocate more memory for the given pointer.
 * The reallocated pointer keeps the same properties (e.g. atomic or not, collectable or not).
 * The extra allocated memory is zeroed.
 * Raise an exception when no-more-memory.
 */
void* GE_recalloc(void* p, size_t old_nelem, size_t new_nelem, size_t elsize)
{
	void* new_p;
#ifdef GE_USE_BOEHM_GC
	new_p = GE_null(GC_REALLOC(p, new_nelem * elsize));
#else /* No GC */
	new_p = GE_null(realloc(p, new_nelem * elsize));
#endif
	memset(((char*)new_p) + (old_nelem * elsize), 0, (new_nelem - old_nelem) * elsize);
	return new_p;
}

/*
 * Allocate more memory for the given pointer.
 * The reallocated pointer keeps the same properties (e.g. atomic or not, collectable or not).
 * The extra allocated memory is zeroed.
 * Do not raise an exception when no-more-memory.
 */
void* GE_unprotected_recalloc(void* p, size_t old_nelem, size_t new_nelem, size_t elsize)
{
	void* new_p;
#ifdef GE_USE_BOEHM_GC
	new_p = GC_REALLOC(p, new_nelem * elsize);
#else /* No GC */
	new_p = realloc(p, new_nelem * elsize);
#endif
	if (new_p) {
		memset(((char*)new_p) + (old_nelem * elsize), 0, (new_nelem - old_nelem) * elsize);
	}
	return new_p;
}

#ifdef GE_USE_BOEHM_GC
/*
 * Call dispose routine on object `C'.
 */
void GE_boehm_dispose(void* C, void* disp) {
	((GE_types[((EIF_REFERENCE)C)->id][0]).dispose)(GE_current_context(), (EIF_REFERENCE) C);
}

/*
 * Call dispose routine `disp' on once-per-object data `data'.
 */
void GE_boehm_dispose_once_per_object_data(void* data, void* disp) {
	((void (*) (void*)) disp)(data);
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif
/*
	description:

		"C functions used to implement class CONSOLE"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_CONSOLE_C
#define GE_CONSOLE_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_CONSOLE_H
#include "ge_console.h"
#endif
#ifndef GE_EIFFEL_H
#include "ge_eiffel.h"
#endif
#ifndef GE_EXCEPTION_H
#include "ge_exception.h"
#endif
#ifdef GE_USE_THREADS
#ifndef GE_THREAD_H
#include "ge_thread.h"
#endif
#endif

#ifdef EIF_WINDOWS
#include <stdio.h>
#include <windows.h>
#include <io.h>
#include <fcntl.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef EIF_WINDOWS

static EIF_BOOLEAN GE_console_allocated = EIF_FALSE;
#ifdef GE_USE_THREADS
static EIF_POINTER GE_console_mutex = 0;
#endif

/*
 * Initialize mutex to determine whether a new
 * console needs to be created.
 */
void GE_init_console(void)
{
#ifdef GE_USE_THREADS
	GE_console_mutex = GE_mutex_create();
#endif
}

/*
 * Create a new DOS console if needed (i.e. in case of a Windows application).
 */
void GE_show_console(void)
{
#ifdef GE_USE_THREADS
	if (GE_console_mutex) {
		GE_mutex_lock(GE_console_mutex);
#endif
	if (!GE_console_allocated) {
		HANDLE hconin, hconout, hconerr;
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		BOOL bLaunched;
		BOOL bSuccess;
		int hCrt;
#ifdef __LCC__
extern FILE * __cdecl _fdopen(int, const char *);
extern int _open_osfhandle(long, int);
#elif !defined EIF_BORLAND
		FILE *hf;
#endif

		bSuccess = AllocConsole();
			/* Get all Std handles and raise an IO exception if we fail getting one. */
		hconout = GetStdHandle(STD_OUTPUT_HANDLE);
		if (hconout == INVALID_HANDLE_VALUE) {
#ifdef GE_USE_THREADS
			GE_mutex_unlock(GE_console_mutex);
#endif
			GE_raise(GE_EX_PROG);
		}
		hconerr = GetStdHandle(STD_ERROR_HANDLE);
		if (hconerr == INVALID_HANDLE_VALUE) {
#ifdef GE_USE_THREADS
			GE_mutex_unlock(GE_console_mutex);
#endif
			GE_raise(GE_EX_PROG);
		}
		hconin = GetStdHandle(STD_INPUT_HANDLE);
		if (hconin == INVALID_HANDLE_VALUE) {
#ifdef GE_USE_THREADS
			GE_mutex_unlock(GE_console_mutex);
#endif
			GE_raise(GE_EX_PROG);
		}
		if (bSuccess) {
				/*
					Console was manually created, we are most likely in
					a Windows application that tries to output something.
					Therefore we need to correctly associated all standard
					handles `stdin', `stdout' and `stderr' to the new created console.
					Code was taken from http://codeguru.earthweb.com/console/Console.html
					But also checkout Microsoft support web site:
					http://support.microsoft.com/default.aspx?scid=kb;EN-US;q105305
					Note: For Borland, the above trick does not work, one has to
					duplicate the handle, unfortunately the solution does not work
					with Microsoft which explains the ifdef statement.
				*/
			hCrt = _open_osfhandle((intptr_t)hconout, _O_TEXT);
#if defined(__LCC__) || defined(EIF_BORLAND)
			dup2(hCrt, _fileno(stdout));
#else
			hf = _fdopen (hCrt, "w");
			*stdout = *hf;
#endif
			setvbuf(stdout, NULL, _IONBF, 0);
			hCrt = _open_osfhandle((intptr_t)hconerr, _O_TEXT);
#if defined(__LCC__) || defined(EIF_BORLAND)
			dup2(hCrt, _fileno(stderr));
#else
			hf = _fdopen(hCrt, "w");
			*stderr = *hf;
#endif
			setvbuf(stderr, NULL, _IONBF, 0);
			hCrt = _open_osfhandle((intptr_t)hconin, _O_TEXT | _O_RDONLY);
#if defined(__LCC__) || defined(EIF_BORLAND)
			dup2(hCrt, _fileno(stdin));
#else
			hf = _fdopen(hCrt, "r");
			*stdin = *hf;
#endif
		}
			/*
				We are computing the cursor position to figure out, if the application
				has been launched from a DOS console or from the Windows Shell.
			*/
		GetConsoleScreenBufferInfo(hconout, &csbi);
		bLaunched = ((csbi.dwCursorPosition.X == 0) && (csbi.dwCursorPosition.Y == 0));
		if ((csbi.dwSize.X <= 0) || (csbi.dwSize.Y <= 0))
			bLaunched = FALSE;
/*
		if (bLaunched == TRUE)
			eif_register_cleanup (eif_console_cleanup);
*/

		GE_console_allocated = EIF_TRUE;
	}
#ifdef GE_USE_THREADS
		GE_mutex_unlock(GE_console_mutex);
	}
#endif
}

#endif

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
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

#ifndef GE_EXCEPTION_C
#define GE_EXCEPTION_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_EXCEPTION_H
#include "ge_exception.h"
#endif
#ifndef GE_GC_H
#include "ge_gc.h"
#endif
#ifndef GE_STRING_H
#include "ge_string.h"
#endif
#ifndef GE_CONSOLE_H
#include "ge_console.h"
#endif
#ifdef GE_USE_THREADS
#ifndef GE_THREAD_H
#include "ge_thread.h"
#endif
#endif

#ifdef EIF_WINDOWS
#ifdef __LCC__
#include <windows.h>
#else
#include <winbase.h>
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Pre-defined exception tags. No restriction on size.
 */
static char* GE_exception_tags[] = {
	(char *) 0,							/* Nothing */
	"Feature call on void target.",		/* GE_EX_VOID */
	"No more memory.",					/* GE_EX_MEM */
	"Precondition violated.",			/* GE_EX_PRE */
	"Postcondition violated.",			/* GE_EX_POST */
	"Floating point exception.",		/* GE_EX_FLOAT */
	"Class invariant violated.",		/* GE_EX_CINV */
	"Assertion violated.",				/* GE_EX_CHECK */
	"Routine failure.",					/* GE_EX_FAIL */
	"Unmatched inspect value.",			/* GE_EX_WHEN */
	"Non-decreasing loop variant or negative value reached.",		/* GE_EX_VAR */
	"Loop invariant violated.",			/* GE_EX_LINV */
	"Operating system signal.",			/* GE_EX_SIG */
	"Eiffel run-time panic.",			/* GE_EX_BYE */
	"Exception in rescue clause.",		/* GE_EX_RESC */
	"Out of memory.",					/* GE_EX_OMEM */
	"Resumption attempt failed.",		/* GE_EX_RES */
	"Create on deferred.",				/* GE_EX_CDEF */
	"External event.",					/* GE_EX_EXT */
	"Void assigned to expanded.",		/* GE_EX_VEXP */
	"Exception in signal handler.",		/* GE_EX_HDLR */
	"I/O error.",						/* GE_EX_IO */
	"Operating system error.",			/* GE_EX_SYS */
	"Retrieval error.",					/* GE_EX_RETR */
	"Developer exception.",				/* GE_EX_PROG */
	"Eiffel run-time fatal error.",		/* GE_EX_FATAL */
	"CECIL cannot call melted code",	/* GE_EX_DOL */
	"Runtime I/O error.",				/* GE_EX_ISE_IO */
	"COM error.",						/* GE_EX_COM */
	"Runtime check violated.",			/* GE_EX_RT_CHECK */
	"Old expression evaluation failed.",/* GE_EX_OLD */
	"Serialization failed."				/* GE_EX_SEL */
	"SCOOP processor dirty."			/* GE_EX_DIRTY */
};

/*
 * Exception tag associated with `a_code'.
 */
char* GE_exception_tag(long a_code)
{
	if (a_code < 0) {
		return "User-defined exception.";
	} else if (a_code < 1 || a_code > GE_EX_NEX) {
		return "Unknown exception.";
	} else {
		return GE_exception_tags[a_code];
	}
}

/*
 * Initialize `a_trace'.
 */
static void GE_init_exception_trace_buffer(GE_exception_trace_buffer* a_trace)
{
	a_trace->count = 0;
	a_trace->capacity = 0;
	a_trace->area = (char*)GE_unprotected_calloc_atomic_uncollectable(4096, 1);
	if (a_trace->area) {
		a_trace->capacity = 4096;
	}
}

/*
 * Free memory allocated in `a_trace'.
 */
static void GE_free_exception_trace_buffer(GE_exception_trace_buffer* a_trace)
{
	a_trace->count = 0;
	a_trace->capacity = 0;
	if (a_trace->area) {
	 GE_free(a_trace->area);
	}
}

/*
 * Append `a_string' to `a_trace'.
 * Resize area if needed.
 */
static void GE_append_to_exception_trace_buffer(GE_exception_trace_buffer* a_trace, char* a_string)
{
	int l_length = strlen(a_string);
	uint32_t l_new_capacity;
	char* l_new_area;

	if (a_trace->area) {
		if ((a_trace->capacity - a_trace->count) <= l_length) {
			l_new_capacity = a_trace->capacity + l_length + 512;
			l_new_area = (char*)GE_unprotected_recalloc(a_trace->area, a_trace->capacity, l_new_capacity, 1);
			if (l_new_area) {
				a_trace->area = l_new_area;
				a_trace->capacity = l_new_capacity;
			}
		}
	} else {
		GE_init_exception_trace_buffer(a_trace);
	}
	if ((a_trace->capacity - a_trace->count) > l_length) {
		strcpy(a_trace->area + a_trace->count, a_string);
		a_trace->count += l_length;
	}
}

/*
 * Wipe out `a_trace'.
 */
static void GE_wipe_out_exception_trace_buffer(GE_exception_trace_buffer* a_trace)
{
	char* l_area = a_trace->area;

	if (l_area) {
		memset(l_area, 0, a_trace->count);
		a_trace->count = 0;
	}
}

/*
 * Print first line of exception which contains `a_class_name', `a_feature_name'
 * and `a_tag_name' to `a_trace'.
 */
static void GE_print_class_feature_tag(GE_exception_trace_buffer* a_trace, const char* a_class_name, const char* a_feature_name, const char* a_tag_name)
{
	char buffer[256];
	int l_class_count, l_feature_count, l_tag_count;

		/* We are trying to provide the best format possible so that we can see all the useful
		 * information about the location and the reason of the crash.
		 * Note that the C format `%width[.precision]s' means that we will display `width'
		 * characters on the screen and only `precision' characters from `s' will be displayed,
		 * meaning that if `precision' is smaller than `width' the text is right aligned.
		 *
		 * Note: because `buffer' has a fixed size of 256, we need to use `precision' to avoid
		 * writting more than `buffer' can hold. And for `sprintf', a null character is appended
		 * after the last character written, which should be taken into account.
		 */
	l_class_count = (int)strlen(a_class_name);
	l_feature_count = (int)strlen(a_feature_name);
	l_tag_count = (int)strlen(a_tag_name);

		/* 1 - precision of 211 = 254 - 43, 43 being number of characters written
		 *      for `a_class_name' and `a_feature_name'. */
		/* 2 - precision of 234 = 254 - 20, 20 being number of characters written
		 *      for `a_class_name'.*/
		/* 3 - precision of 254, 254 being number of characters written
		 *      excluding `\n' and null character appended at the end */
		/* 4 - precision of 251, 231 and 208 being number of characters written
		 *      excluding eclipse from above numbers. */
	if (l_class_count > 19) {
		if (l_class_count > 251) {
			sprintf(buffer, "%.251s...\n", a_class_name);
		} else {
			sprintf(buffer, "%*.254s\n", l_class_count, a_class_name);
		}
		GE_append_to_exception_trace_buffer(a_trace, buffer);
		if (l_feature_count > 22) {
			if (l_feature_count > 231) {
				sprintf(buffer, "%.231s...\n", a_feature_name);
			} else {
				sprintf(buffer, "%*.234s\n", 20 + l_feature_count, a_feature_name);
			}
			GE_append_to_exception_trace_buffer(a_trace, buffer);
			if (l_tag_count > 0) {
				if (l_tag_count > 208) {
					sprintf(buffer, "%.208s...\n", a_tag_name);
				} else {
					sprintf(buffer, "%*.211s\n", 43 + l_tag_count, a_tag_name);
				}
				GE_append_to_exception_trace_buffer(a_trace, buffer);
			}
		} else {
			if (l_tag_count > 208) {
				sprintf(buffer, "%*.22s %.208s...\n", 20 + l_feature_count, a_feature_name, a_tag_name);
			} else {
				sprintf(buffer, "%*.22s %*.211s\n", 20 + l_feature_count, a_feature_name, (43 + l_tag_count) - (20 + l_feature_count + 1), a_tag_name);
			}
			GE_append_to_exception_trace_buffer(a_trace, buffer);
		}
	} else {
		if (l_feature_count > 22) {
			if (l_feature_count > 208) {
				sprintf(buffer, "%-19.19s %.208s...\n", a_class_name, a_feature_name);
			} else {
				sprintf(buffer, "%-19.19s %*.211s\n", a_class_name, l_feature_count, a_feature_name);
			}
			GE_append_to_exception_trace_buffer(a_trace, buffer);
			if (l_tag_count > 0) {
				if (l_tag_count > 208) {
					sprintf(buffer, "%.208s...\n", a_tag_name);
				} else {
					sprintf(buffer, "%*.211s\n", 43 + l_tag_count, a_tag_name);
				}
				GE_append_to_exception_trace_buffer(a_trace, buffer);
			}
		} else {
			if (l_tag_count > 208) {
				sprintf(buffer, "%-19.19s %-22.22s %-29.208s...\n", a_class_name, a_feature_name, a_tag_name);
			} else {
				sprintf(buffer, "%-19.19s %-22.22s %-29.211s\n", a_class_name, a_feature_name, a_tag_name);
			}
			GE_append_to_exception_trace_buffer(a_trace, buffer);
		}
	}
}

/*
 * Print second line of exception which contains `a_object_addr', `a_location',
 * `a_reason' and `a_effect' to `a_trace'.
 */
static void GE_print_object_location_reason_effect(GE_exception_trace_buffer* a_trace, void* a_object_addr, char* a_location, char* a_reason, char* a_effect)
{
	char buffer[256];
	int l_location_count, l_reason_count, l_effect_count;

		/* We are trying to provide the best format possible so that we can see all the useful
		 * information about the location and the reason of the crash.
		 * Note that the C format `%width[.precision]s' means that we will display `width'
		 * characters on the screen and only `precision' characters from `s' will be displayed,
		 * meaning that if `precision' is smaller than `width' the text is right aligned.
		 *
		 * Note: because `buffer' has a fixed size of 256, we need to use `precision' to avoid
		 * writting more than `buffer' can hold.
		 */

	l_location_count = (int)strlen(a_location);
	l_reason_count = (int)strlen(a_reason);
	l_effect_count = (int)strlen(a_effect);

		/* 1 - precision of 211 = 254 - 43, 43 being number of characters written
			   for `a_object_addr' and `a_location'.
		 * 2 - precision of 181 = 254 - 73, 73 being number of characters written
			   for `a_object_addr', `a_location' and `a_reason'.
		 * 3 - 22, number of characters written for `a_location'
		 * 4 - 29, number of characters written for `a_reason' */

		/* Check this for formatting using `printf':
		 * http://en.wikipedia.org/wiki/Printf#printf_format_placeholders */

		/* Print object address with 16 digits to be ready when pointers
		 * will be on 64 bits on all platform. */
	sprintf(buffer, "<%016" EIF_POINTER_DISPLAY ">  ", (unsigned long)(intptr_t)a_object_addr);
	GE_append_to_exception_trace_buffer(a_trace, buffer);

	if (l_location_count > 22) {
		sprintf(buffer, "%*.254s\n", l_location_count, a_location);
		GE_append_to_exception_trace_buffer(a_trace, buffer);
		if (l_reason_count > 29) {
			sprintf(buffer, "%*.211s\n", 43 + l_reason_count, a_reason);
			GE_append_to_exception_trace_buffer(a_trace, buffer);
			sprintf(buffer, "%*.181s\n", 73 + l_effect_count, a_effect);
			GE_append_to_exception_trace_buffer(a_trace, buffer);
		} else {
			sprintf(buffer, "%*.29s %*.181s\n", 43 + l_reason_count, a_reason, (73 + l_effect_count) - (43 + l_reason_count + 1), a_effect);
			GE_append_to_exception_trace_buffer(a_trace, buffer);
		}
	} else {
		if (l_reason_count > 29) {
			sprintf(buffer,"%-22.22s %*.211s\n", a_location, l_reason_count, a_reason);
			GE_append_to_exception_trace_buffer(a_trace, buffer);
			sprintf(buffer, "%*.181s\n", 73 + l_effect_count, a_effect);
			GE_append_to_exception_trace_buffer(a_trace, buffer);
		} else {
			sprintf(buffer,"%-22.22s %-29.29s %*.181s\n", a_location, a_reason, l_effect_count, a_effect);
			GE_append_to_exception_trace_buffer(a_trace, buffer);
		}
	}
}

/*
 * Print to `a_trace' the exception trace corresponding to `a_context'.
 */
static void GE_print_exception_trace(GE_context* a_context, long a_code, const char* a_tag, GE_exception_trace_buffer* a_trace)
{
	char buffer[1024];
	GE_call* l_call;
	char* l_tag;
	char l_tag_buf[256];
	void* l_object = NULL;
	char* l_location = "";
	char* l_reason;
	char* l_effect;
	char* l_root_class;
	char* l_root_feature = "root's creation";
	const char* l_class_name;
	const char* l_feature_name;

#ifdef GE_USE_THREADS
	sprintf(buffer, "%s\n", "******************************** Thread exception *****************************");
	GE_append_to_exception_trace_buffer(a_trace, buffer);
	if (a_context == GE_main_context) {
			/* Main thread. */
		sprintf(buffer,"%-19.19s %-22.22s 0x%" EIF_POINTER_DISPLAY " %s\n", "In thread", "Root thread", (unsigned long)0, "(thread id)");
	} else {
		sprintf(buffer,"%-19.19s %-22.22s 0x%" EIF_POINTER_DISPLAY " %s\n", "In thread", "Child thread", (unsigned long)(uint64_t)a_context->thread->thread_id, "(thread id)");
	}
	GE_append_to_exception_trace_buffer(a_trace, buffer);
	sprintf(buffer, "%s\n", "*******************************************************************************");
	GE_append_to_exception_trace_buffer(a_trace, buffer);
#endif
	sprintf(buffer, "%s\n", "-------------------------------------------------------------------------------");
	GE_append_to_exception_trace_buffer(a_trace, buffer);
	sprintf(buffer, "%-19.19s %-22.22s %-29.29s %-6.6s\n", "Class / Object", "Routine", "Nature of exception", "Effect");
	GE_append_to_exception_trace_buffer(a_trace, buffer);
	sprintf(buffer, "%s\n", "-------------------------------------------------------------------------------");
	GE_append_to_exception_trace_buffer(a_trace, buffer);
	if (GE_root_class_name) {
		l_root_class = GE_root_class_name;
	} else {
		l_root_class = "ROOT CLASS";
	}
	l_call = a_context->call;
	if (l_call) {
		l_class_name = l_call->class_name;
		l_feature_name = l_call->feature_name;
#ifdef GE_USE_CURRENT_IN_EXCEPTION_TRACE
		l_object = l_call->object;
#endif
	} else {
		l_class_name = l_root_class;
		l_feature_name = l_root_feature;
	}
	if (a_tag) {
		sprintf(l_tag_buf, "%.254s:", a_tag);
		l_tag = l_tag_buf;
	} else {
		l_tag = "";
	}
	GE_print_class_feature_tag(a_trace, l_class_name, l_feature_name, l_tag);
	l_reason = GE_exception_tag(a_code);
	l_effect = "Fail";
	GE_print_object_location_reason_effect(a_trace, l_object, l_location, l_reason, l_effect);
	sprintf(buffer, "%s\n", "-------------------------------------------------------------------------------");
	GE_append_to_exception_trace_buffer(a_trace, buffer);
	while (l_call) {
		l_tag = "";
		GE_print_class_feature_tag(a_trace, l_call->class_name, l_call->feature_name, l_tag);
#ifdef GE_USE_CURRENT_IN_EXCEPTION_TRACE
		l_object = l_call->object;
#endif
		l_reason = "Routine failure.";
		l_effect = "Fail";
		GE_print_object_location_reason_effect(a_trace, l_object, l_location, l_reason, l_effect);
		sprintf(buffer, "%s\n", "-------------------------------------------------------------------------------");
		GE_append_to_exception_trace_buffer(a_trace, buffer);
		l_call = l_call->caller;
	}
	l_tag = "";
	GE_print_class_feature_tag(a_trace, l_root_class, l_root_feature, l_tag);
#ifdef GE_USE_CURRENT_IN_EXCEPTION_TRACE
	l_object = NULL;
#endif
	l_reason = "Routine failure.";
	l_effect = "Exit";
	GE_print_object_location_reason_effect(a_trace, l_object, l_location, l_reason, l_effect);
	sprintf(buffer, "%s\n", "-------------------------------------------------------------------------------");
	GE_append_to_exception_trace_buffer(a_trace, buffer);
}

/*
 * Default initialization for `GE_context'.
 */
GE_context GE_default_context = {0, 0, 0, 0, 0, 0, '\1', 0, 0, {0, 0, 0}, {0, 0, 0}, 1
#ifdef GE_USE_THREADS
	, 0, 0, 0, 0
#endif
	};

/*
 * Execution context of main thread.
 * Should be used from the main thread only.
 */
GE_context* GE_main_context;

/*
 * Execution context of current thread.
 */
GE_context* GE_current_context(void)
{
#ifdef GE_USE_THREADS
	return GE_thread_current_context();
#else
	return GE_main_context;
#endif
}

/*
 * Initialization of exception handling.
 */
void GE_init_exception(GE_context* a_context)
{
	EIF_REFERENCE l_exception_manager;

	GE_init_exception_trace_buffer(&a_context->exception_trace_buffer);
	GE_init_exception_trace_buffer(&a_context->last_exception_trace);
	l_exception_manager = GE_new_exception_manager(EIF_TRUE);
	a_context->exception_manager = l_exception_manager;
	GE_init_exception_manager(a_context, l_exception_manager);
}

/*
 * Free memory allocated in `a_context' for exception handling.
 */
void GE_free_exception(GE_context* a_context)
{
	GE_free_exception_trace_buffer(&a_context->exception_trace_buffer);
	GE_free_exception_trace_buffer(&a_context->last_exception_trace);
	a_context->exception_manager = EIF_VOID;
}

/*
 * Pointer to function to create a new exception manager object
 * (of type ISE_EXCEPTION_MANAGER).
 */
EIF_REFERENCE (*GE_new_exception_manager)(EIF_BOOLEAN);

/*
 * Pointer to Eiffel routine ISE_EXCEPTION_MANAGER.init_exception_manager.
 */
void (*GE_init_exception_manager)(GE_context*, EIF_REFERENCE);

/*
 * Pointer to Eiffel routine ISE_EXCEPTION_MANAGER.last_exception.
 */
EIF_REFERENCE (*GE_last_exception)(GE_context*, EIF_REFERENCE);

/*
 * Pointer to Eiffel routine ISE_EXCEPTION_MANAGER.once_raise.
 */
void (*GE_once_raise)(GE_context*, EIF_REFERENCE, EIF_REFERENCE);

/*
 * Pointer to Eiffel routine ISE_EXCEPTION_MANAGER.set_exception_data.
 */
void (*GE_set_exception_data)(GE_context*, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN, EIF_INTEGER_32, EIF_INTEGER_32, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_BOOLEAN);

/*
 * Jump to execute the rescue of the last routine with a rescue
 * in the call stack.
 */
void GE_jump_to_last_rescue(GE_context* a_context)
{
	char* l_exception_trace;

	GE_rescue* r = a_context->last_rescue;
	if (r != 0) {
		a_context->last_rescue = r->previous;
		a_context->raising_exception = '\0';
		GE_longjmp(r->jb, 1);
	}
	if (a_context->exception_trace_enabled) {
		GE_show_console();
		if (GE_system_name) {
			fprintf(stderr, "\n%s: system execution failed.\n", GE_system_name);
		} else {
			fprintf(stderr, "\nsystem execution failed.\n");
		}
		l_exception_trace = a_context->last_exception_trace.area;
		if (l_exception_trace) {
			fprintf(stderr, "Following is the set of recorded exceptions:\n\n");
			fprintf(stderr, "%s", l_exception_trace);
		} else {
			fprintf(stderr, "No exception trace found.\n");
		}
	}
	exit(1);
}

/*
 * Call feature EXCEPTION_MANAGER.set_exception_data.
 */
static void GE_call_set_exception_data(GE_context* a_context, long code, int new_obj, int signal_code, int error_code, const char* tag, char* recipient, char* eclass, char* rf_routine, char* rf_class, char* trace, int line_number, int is_invariant_entry)
{
	EIF_REFERENCE l_tag;
	EIF_REFERENCE l_recipient;
	EIF_REFERENCE l_eclass;
	EIF_REFERENCE l_rf_routine;
	EIF_REFERENCE l_rf_class;
	EIF_REFERENCE l_trace;
	EIF_REFERENCE l_exception_manager;

	l_exception_manager = a_context->exception_manager;
	if (!l_exception_manager) {
		GE_init_exception(a_context);
		l_exception_manager = a_context->exception_manager;
	}
	if (tag) {
		l_tag = GE_str(tag);
	} else {
		l_tag = GE_ms("", 0);
	}
	if (recipient) {
		l_recipient = GE_str(recipient);
	} else {
		l_recipient = GE_ms("", 0);
	}
	if (eclass) {
		l_eclass = GE_str(eclass);
	} else {
		l_eclass = GE_ms("", 0);
	}
	if (rf_routine) {
		l_rf_routine = GE_str(rf_routine);
	} else {
		l_rf_routine = GE_ms("", 0);
	}
	if (rf_class) {
		l_rf_class = GE_str(rf_class);
	} else {
		l_rf_class = GE_ms("", 0);
	}
	if (trace && a_context->exception_trace_enabled) {
		l_trace = GE_str(trace);
	} else {
		l_trace = GE_ms("", 0);
	}
	GE_set_exception_data(a_context, l_exception_manager, (EIF_INTEGER_32) code, EIF_TEST(new_obj), (EIF_INTEGER_32) signal_code, (EIF_INTEGER_32) error_code, l_tag, l_recipient, l_eclass, l_rf_routine, l_rf_class, l_trace, (EIF_INTEGER_32) line_number, EIF_TEST(is_invariant_entry));
}

/*
 * Raise an exception.
 */
static void GE_raise_exception(long code, int new_obj, int signal_code, int error_code, const char* tag, char* recipient, char* eclass, char* rf_routine, char* rf_class, char* trace, int line_number, int is_invariant_entry)
{
	char* l_trace;
	GE_exception_trace_buffer* l_trace_buffer;
	GE_context* l_context;

	l_context = GE_current_context();
	if (!l_context) {
		GE_show_console();
		if (GE_system_name) {
			fprintf(stderr, "\n%s: system execution failed.\n", GE_system_name);
		} else {
			fprintf(stderr, "\nsystem execution failed.\n");
		}
		fprintf(stderr, "Panic: No execution context found.\n");
		exit(1);
	} else if (l_context->raising_exception) {
		GE_show_console();
		if (GE_system_name) {
			fprintf(stderr, "\n%s: system execution failed.\n", GE_system_name);
		} else {
			fprintf(stderr, "\nsystem execution failed.\n");
		}
		fprintf(stderr, "Panic: A crash occurred while processing exceptions.\n");
		l_trace = l_context->last_exception_trace.area;
		if (l_trace) {
			fprintf(stderr, "Following is the set of recorded exceptions\n");
			fprintf(stderr, "NB: The raised panic may have induced completely inconsistent information:\n\n");
			fprintf(stderr, "%s", l_trace);
		} else {
			fprintf(stderr, "No exception trace found.\n");
		}
		exit(1);
	} else {
		l_context->raising_exception = '\1';
		l_context->exception_code = code;
		l_context->exception_tag = tag;
		if (code != GE_EX_FAIL) {
			GE_wipe_out_exception_trace_buffer(&l_context->last_exception_trace);
		}
		l_trace = trace;
		if (l_context->exception_trace_enabled && !l_trace) {
			l_trace_buffer = &l_context->exception_trace_buffer;
			GE_wipe_out_exception_trace_buffer(l_trace_buffer);
			GE_print_exception_trace(l_context, code, tag, l_trace_buffer);
			l_trace = l_trace_buffer->area;
		}
		if ((code != GE_EX_FAIL) && l_trace) {
			GE_append_to_exception_trace_buffer(&l_context->last_exception_trace, l_trace);
		}
		GE_call_set_exception_data(l_context, code, new_obj, signal_code, error_code, tag, recipient, eclass, rf_routine, rf_class, l_trace, line_number, is_invariant_entry);
		l_context->raising_exception = '\0';
		l_context->exception_code = 0;
		l_context->exception_tag = (char*)0;
		GE_jump_to_last_rescue(l_context);
	}
}

/*
 * Raise an exception with code `a_code'.
 */
void GE_raise(long a_code)
{
	GE_raise_with_message(a_code, NULL);
}

/*
 * Raise an exception with code `a_code' and message `msg'.
 */
void GE_raise_with_message(long a_code, const char* msg)
{
	GE_raise_exception(a_code, 1, -1, -1, msg, NULL, NULL, NULL, NULL, NULL, -1, 0);
}

/*
 * Raise an exception from EXCEPTION_MANAGER.
 */
void GE_developer_raise(long a_code, char* a_meaning, char* a_message)
{
	GE_raise_exception(a_code, 0, -1, -1, a_message, NULL, NULL, NULL, NULL, NULL, -1, 0);
}

/*
 * Raise exception which was raised the first time a once routine
 * was executed when executing it again.
 */
void GE_raise_once_exception(GE_context* a_context, EIF_REFERENCE a_exception)
{
	EIF_REFERENCE l_exception_manager;

	l_exception_manager = a_context->exception_manager;
	if (l_exception_manager) {
		GE_once_raise(a_context, l_exception_manager, a_exception);
	}
}

/*
 * Exception, if any, which was last raised in `a_context'.
 */
EIF_REFERENCE GE_last_exception_raised(GE_context* a_context)
{
	EIF_REFERENCE l_exception_manager;

	l_exception_manager = a_context->exception_manager;
	if (l_exception_manager) {
		return GE_last_exception(a_context, l_exception_manager);
	}
	return EIF_VOID;
}

/*
 * Set `in_assertion' to 'not b'.
 * Return the opposite of previous value.
 */
EIF_BOOLEAN GE_check_assert(EIF_BOOLEAN b)
{
	EIF_BOOLEAN l_old_value;
	GE_context* l_context;

	l_context = GE_current_context();
	l_old_value = EIF_TEST(!(l_context->in_assertion));
	l_context->in_assertion = (b?0:1);
	return l_old_value;
}

/*
 * Check whether the type id of `obj' is not in `type_ids'.
 * If it is, then raise a CAT-call exception. Don't do anything if `obj' is Void.
 * `nb' is the number of ids in `type_ids' and is expected to be >0.
 * `type_ids' is sorted in increasing order.
 * Return `obj'.
 */
EIF_REFERENCE GE_check_catcall(EIF_REFERENCE obj, EIF_TYPE_INDEX type_ids[], int nb)
{
	if (obj) {
		int type_id = obj->id;
		if (type_id < type_ids[0]) {
			/* Done */
		} else if (type_id > type_ids[nb-1]) {
			/* Done */
		} else {
			int i;
			for (i = 0; i < nb; i++) {
				if (type_id == type_ids[i]) {
					GE_show_console();
					fprintf(stderr, "CAT-call error!\n");
#ifdef EIF_DEBUG
					{
						char c;
						fprintf(stderr, "Press Enter...\n");
						scanf("%c", &c);
					}
#endif
					GE_raise_with_message(GE_EX_PROG, "CAT-call error.");
					break;
				} else if (type_id < type_ids[i]) {
						/* type-ids are sorted in increasing order. */
					break;
				}
			}
		}
	}
	return (obj);
}

/*
 * Check whether `obj' is Void.
 * If it is, then raise a call-on-void-target exception.
 * Return `obj'.
 */
EIF_REFERENCE GE_check_void(EIF_REFERENCE obj)
{
	if (!obj) {
		GE_show_console();
		fprintf(stderr, "Call on Void target!\n");
#ifdef EIF_DEBUG
		{
			char c;
			fprintf(stderr, "Press Enter...\n");
			scanf("%c", &c);
		}
#endif
		GE_raise(GE_EX_VOID);
	}
	return (obj);
}

/*
 * Check whether `ptr' is a null pointer.
 * If it is, then raise a no-more-memory exception.
 * Return `ptr'.
 */
void* GE_check_null(void* ptr)
{
	if (!ptr) {
		GE_show_console();
		fprintf(stderr, "No more memory!\n");
#ifdef EIF_DEBUG
		{
			char c;
			fprintf(stderr, "Press Enter...\n");
			scanf("%c", &c);
		}
#endif
		GE_raise(GE_EX_MEM);
	}
	return (ptr);
}

#ifdef EIF_WINDOWS
static LONG WINAPI GE_windows_exception_filter(LPEXCEPTION_POINTERS a_exception)
{
		/* In order to be able to catch exceptions that cannot be caught by
		 * just using signals on Windows, we need to set `windows_exception_filter'
		 * as an unhandled exception filter.
		 */

	switch (a_exception->ExceptionRecord->ExceptionCode) {
		case STATUS_STACK_OVERFLOW:
			GE_raise_with_message(GE_EX_EXT, "Stack overflow");
			break;

		case STATUS_INTEGER_DIVIDE_BY_ZERO:
			GE_raise_with_message(GE_EX_FLOAT, "Integer division by Zero");
			break;

		default:
			GE_raise_with_message(GE_EX_EXT, "Unhandled exception");
			break;
	}

		/* Possible return values include:
		 * EXCEPTION_CONTINUE_EXECUTION : Returns to the statement that caused the exception
		 *    and re-executes that statement. (Causes an infinite loop of calling the exception
		 *    handler if the handler does not fix the problem)
		 * EXCEPTION_EXECUTE_HANDLER: Passes the exception to default handler, in our case
		 *    none, since `windows_exception_filter' is the default one now.
		 * EXCEPTION_CONTINUE_SEARCH: Continue to search up the stack for a handle
		 */
	return EXCEPTION_EXECUTE_HANDLER;
}

/*
 * Set default exception handler.
 */
void GE_set_windows_exception_filter(void)
{
	LPTOP_LEVEL_EXCEPTION_FILTER old_exception_handler = NULL;
	old_exception_handler = SetUnhandledExceptionFilter (GE_windows_exception_filter);
}
#endif

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
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

#ifndef GE_ONCE_C
#define GE_ONCE_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_ONCE_H
#include "ge_once.h"
#endif
#ifndef GE_GC_H
#include "ge_gc.h"
#endif
#ifdef GE_USE_THREADS
#ifndef GE_THREAD_H
#include "ge_thread.h"
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Variable to keep track of the call status
 * and results of once-per-process features.
 */
GE_onces* GE_process_onces;

/*
 * Initialize `GE_process_onces'.
 */
void GE_init_onces(
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
	unsigned int a_procedure_count)
{
	GE_process_onces = GE_new_onces(
		a_boolean_count,
		a_character_8_count,
		a_character_32_count,
		a_integer_8_count,
		a_integer_16_count,
		a_integer_32_count,
		a_integer_64_count,
		a_natural_8_count,
		a_natural_16_count,
		a_natural_32_count,
		a_natural_64_count,
		a_pointer_count,
		a_real_32_count,
		a_real_64_count,
		a_reference_count,
		a_procedure_count);
#ifdef GE_USE_THREADS
	GE_process_once_mutexes = GE_new_once_mutexes(
		a_boolean_count,
		a_character_8_count,
		a_character_32_count,
		a_integer_8_count,
		a_integer_16_count,
		a_integer_32_count,
		a_integer_64_count,
		a_natural_8_count,
		a_natural_16_count,
		a_natural_32_count,
		a_natural_64_count,
		a_pointer_count,
		a_real_32_count,
		a_real_64_count,
		a_reference_count,
		a_procedure_count);
#endif
}

/*
 * Create a new 'GE_onces' struct which can deal with the
 * numbers of once features passed as argument.
 */
GE_onces* GE_new_onces(
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
	unsigned int a_procedure_count)
{
	GE_onces* l_onces;

	l_onces = (GE_onces*)GE_calloc_atomic_uncollectable(1, sizeof(GE_onces));
	if (a_boolean_count > 0) {
		l_onces->boolean_value = (EIF_BOOLEAN*)GE_calloc_atomic_uncollectable(a_boolean_count, sizeof(EIF_BOOLEAN));
		l_onces->boolean_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_boolean_count, sizeof(EIF_REFERENCE));
		l_onces->boolean_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_boolean_count, sizeof(unsigned char));
		l_onces->boolean_count = a_boolean_count;
	}
	if (a_character_8_count > 0) {
		l_onces->character_8_value = (EIF_CHARACTER_8*)GE_calloc_atomic_uncollectable(a_character_8_count, sizeof(EIF_CHARACTER_8));
		l_onces->character_8_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_character_8_count, sizeof(EIF_REFERENCE));
		l_onces->character_8_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_character_8_count, sizeof(unsigned char));
		l_onces->character_8_count = a_character_8_count;
	}
	if (a_character_32_count > 0) {
		l_onces->character_32_value = (EIF_CHARACTER_32*)GE_calloc_atomic_uncollectable(a_character_32_count, sizeof(EIF_CHARACTER_32));
		l_onces->character_32_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_character_32_count, sizeof(EIF_REFERENCE));
		l_onces->character_32_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_character_32_count, sizeof(unsigned char));
		l_onces->character_32_count = a_character_32_count;
	}
	if (a_integer_8_count > 0) {
		l_onces->integer_8_value = (EIF_INTEGER_8*)GE_calloc_atomic_uncollectable(a_integer_8_count, sizeof(EIF_INTEGER_8));
		l_onces->integer_8_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_integer_8_count, sizeof(EIF_REFERENCE));
		l_onces->integer_8_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_integer_8_count, sizeof(unsigned char));
		l_onces->integer_8_count = a_integer_8_count;
	}
	if (a_integer_16_count > 0) {
		l_onces->integer_16_value = (EIF_INTEGER_16*)GE_calloc_atomic_uncollectable(a_integer_16_count, sizeof(EIF_INTEGER_16));
		l_onces->integer_16_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_integer_16_count, sizeof(EIF_REFERENCE));
		l_onces->integer_16_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_integer_16_count, sizeof(unsigned char));
		l_onces->integer_16_count = a_integer_16_count;
	}
	if (a_integer_32_count > 0) {
		l_onces->integer_32_value = (EIF_INTEGER_32*)GE_calloc_atomic_uncollectable(a_integer_32_count, sizeof(EIF_INTEGER_32));
		l_onces->integer_32_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_integer_32_count, sizeof(EIF_REFERENCE));
		l_onces->integer_32_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_integer_32_count, sizeof(unsigned char));
		l_onces->integer_32_count = a_integer_32_count;
	}
	if (a_integer_64_count > 0) {
		l_onces->integer_64_value = (EIF_INTEGER_64*)GE_calloc_atomic_uncollectable(a_integer_64_count, sizeof(EIF_INTEGER_64));
		l_onces->integer_64_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_integer_64_count, sizeof(EIF_REFERENCE));
		l_onces->integer_64_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_integer_64_count, sizeof(unsigned char));
		l_onces->integer_64_count = a_integer_64_count;
	}
	if (a_natural_8_count > 0) {
		l_onces->natural_8_value = (EIF_NATURAL_8*)GE_calloc_atomic_uncollectable(a_natural_8_count, sizeof(EIF_NATURAL_8));
		l_onces->natural_8_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_natural_8_count, sizeof(EIF_REFERENCE));
		l_onces->natural_8_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_natural_8_count, sizeof(unsigned char));
		l_onces->natural_8_count = a_natural_8_count;
	}
	if (a_natural_16_count > 0) {
		l_onces->natural_16_value = (EIF_NATURAL_16*)GE_calloc_atomic_uncollectable(a_natural_16_count, sizeof(EIF_NATURAL_16));
		l_onces->natural_16_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_natural_16_count, sizeof(EIF_REFERENCE));
		l_onces->natural_16_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_natural_16_count, sizeof(unsigned char));
		l_onces->natural_16_count = a_natural_16_count;
	}
	if (a_natural_32_count > 0) {
		l_onces->natural_32_value = (EIF_NATURAL_32*)GE_calloc_atomic_uncollectable(a_natural_32_count, sizeof(EIF_NATURAL_32));
		l_onces->natural_32_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_natural_32_count, sizeof(EIF_REFERENCE));
		l_onces->natural_32_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_natural_32_count, sizeof(unsigned char));
		l_onces->natural_32_count = a_natural_32_count;
	}
	if (a_natural_64_count > 0) {
		l_onces->natural_64_value = (EIF_NATURAL_64*)GE_calloc_atomic_uncollectable(a_natural_64_count, sizeof(EIF_NATURAL_64));
		l_onces->natural_64_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_natural_64_count, sizeof(EIF_REFERENCE));
		l_onces->natural_64_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_natural_64_count, sizeof(unsigned char));
		l_onces->natural_64_count = a_natural_64_count;
	}
	if (a_pointer_count > 0) {
		l_onces->pointer_value = (EIF_POINTER*)GE_calloc_atomic_uncollectable(a_pointer_count, sizeof(EIF_POINTER));
		l_onces->pointer_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_pointer_count, sizeof(EIF_REFERENCE));
		l_onces->pointer_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_pointer_count, sizeof(unsigned char));
		l_onces->pointer_count = a_pointer_count;
	}
	if (a_real_32_count > 0) {
		l_onces->real_32_value = (EIF_REAL_32*)GE_calloc_atomic_uncollectable(a_real_32_count, sizeof(EIF_REAL_32));
		l_onces->real_32_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_real_32_count, sizeof(EIF_REFERENCE));
		l_onces->real_32_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_real_32_count, sizeof(unsigned char));
		l_onces->real_32_count = a_real_32_count;
	}
	if (a_real_64_count > 0) {
		l_onces->real_64_value = (EIF_REAL_64*)GE_calloc_atomic_uncollectable(a_real_64_count, sizeof(EIF_REAL_64));
		l_onces->real_64_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_real_64_count, sizeof(EIF_REFERENCE));
		l_onces->real_64_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_real_64_count, sizeof(unsigned char));
		l_onces->real_64_count = a_real_64_count;
	}
	if (a_reference_count > 0) {
		l_onces->reference_value = (EIF_REFERENCE*)GE_calloc_uncollectable(a_reference_count, sizeof(EIF_REFERENCE));
		l_onces->reference_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_reference_count, sizeof(EIF_REFERENCE));
		l_onces->reference_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_reference_count, sizeof(unsigned char));
		l_onces->reference_count = a_reference_count;
	}
	if (a_procedure_count > 0) {
		l_onces->procedure_exception = (EIF_REFERENCE*)GE_calloc_uncollectable(a_procedure_count, sizeof(EIF_REFERENCE));
		l_onces->procedure_status = (unsigned char*)GE_calloc_atomic_uncollectable(a_procedure_count, sizeof(unsigned char));
		l_onces->procedure_count = a_procedure_count;
	}
	return l_onces;
}

/*
 * Free memory allocated by `a_onces'.
 */
void GE_free_onces(GE_onces* a_onces)
{
	if (a_onces->boolean_value) {
		GE_free(a_onces->boolean_value);
	}
	if (a_onces->boolean_exception) {
		GE_free(a_onces->boolean_exception);
	}
	if (a_onces->boolean_status) {
		GE_free(a_onces->boolean_status);
	}
	if (a_onces->character_8_value) {
		GE_free(a_onces->character_8_value);
	}
	if (a_onces->character_8_exception) {
		GE_free(a_onces->character_8_exception);
	}
	if (a_onces->character_8_status) {
		GE_free(a_onces->character_8_status);
	}
	if (a_onces->character_32_value) {
		GE_free(a_onces->character_32_value);
	}
	if (a_onces->character_32_exception) {
		GE_free(a_onces->character_32_exception);
	}
	if (a_onces->character_32_status) {
		GE_free(a_onces->character_32_status);
	}
	if (a_onces->integer_8_value) {
		GE_free(a_onces->integer_8_value);
	}
	if (a_onces->integer_8_exception) {
		GE_free(a_onces->integer_8_exception);
	}
	if (a_onces->integer_8_status) {
		GE_free(a_onces->integer_8_status);
	}
	if (a_onces->integer_16_value) {
		GE_free(a_onces->integer_16_value);
	}
	if (a_onces->integer_16_exception) {
		GE_free(a_onces->integer_16_exception);
	}
	if (a_onces->integer_16_status) {
		GE_free(a_onces->integer_16_status);
	}
	if (a_onces->integer_32_value) {
		GE_free(a_onces->integer_32_value);
	}
	if (a_onces->integer_32_exception) {
		GE_free(a_onces->integer_32_exception);
	}
	if (a_onces->integer_32_status) {
		GE_free(a_onces->integer_32_status);
	}
	if (a_onces->integer_64_value) {
		GE_free(a_onces->integer_64_value);
	}
	if (a_onces->integer_64_exception) {
		GE_free(a_onces->integer_64_exception);
	}
	if (a_onces->integer_64_status) {
		GE_free(a_onces->integer_64_status);
	}
	if (a_onces->natural_8_value) {
		GE_free(a_onces->natural_8_value);
	}
	if (a_onces->natural_8_exception) {
		GE_free(a_onces->natural_8_exception);
	}
	if (a_onces->natural_8_status) {
		GE_free(a_onces->natural_8_status);
	}
	if (a_onces->natural_16_value) {
		GE_free(a_onces->natural_16_value);
	}
	if (a_onces->natural_16_exception) {
		GE_free(a_onces->natural_16_exception);
	}
	if (a_onces->natural_16_status) {
		GE_free(a_onces->natural_16_status);
	}
	if (a_onces->natural_32_value) {
		GE_free(a_onces->natural_32_value);
	}
	if (a_onces->natural_32_exception) {
		GE_free(a_onces->natural_32_exception);
	}
	if (a_onces->natural_32_status) {
		GE_free(a_onces->natural_32_status);
	}
	if (a_onces->natural_64_value) {
		GE_free(a_onces->natural_64_value);
	}
	if (a_onces->natural_64_exception) {
		GE_free(a_onces->natural_64_exception);
	}
	if (a_onces->natural_64_status) {
		GE_free(a_onces->natural_64_status);
	}
	if (a_onces->pointer_value) {
		GE_free(a_onces->pointer_value);
	}
	if (a_onces->pointer_exception) {
		GE_free(a_onces->pointer_exception);
	}
	if (a_onces->pointer_status) {
		GE_free(a_onces->pointer_status);
	}
	if (a_onces->real_32_value) {
		GE_free(a_onces->real_32_value);
	}
	if (a_onces->real_32_exception) {
		GE_free(a_onces->real_32_exception);
	}
	if (a_onces->real_32_status) {
		GE_free(a_onces->real_32_status);
	}
	if (a_onces->real_64_value) {
		GE_free(a_onces->real_64_value);
	}
	if (a_onces->real_64_exception) {
		GE_free(a_onces->real_64_exception);
	}
	if (a_onces->real_64_status) {
		GE_free(a_onces->real_64_status);
	}
	if (a_onces->reference_value) {
		GE_free(a_onces->reference_value);
	}
	if (a_onces->reference_exception) {
		GE_free(a_onces->reference_exception);
	}
	if (a_onces->reference_status) {
		GE_free(a_onces->reference_status);
	}
	if (a_onces->procedure_exception) {
		GE_free(a_onces->procedure_exception);
	}
	if (a_onces->procedure_status) {
		GE_free(a_onces->procedure_status);
	}
	GE_free(a_onces);
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
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

#ifndef GE_ARGUMENTS_C
#define GE_ARGUMENTS_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_ARGUMENTS_H
#include "ge_arguments.h"
#endif
#ifndef GE_CONSOLE_H
#include "ge_console.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

int GE_argc;
EIF_NATIVE_CHAR** GE_argv;

	/* Clean up function */
typedef void (* EIF_CLEANUP)(EIF_BOOLEAN);
void eif_register_cleanup(EIF_CLEANUP f)
{
	/* TODO: Needed to compile some code at AXAR */
	GE_show_console();
	fprintf(stderr, "'eif_register_cleanup' in 'ge_arguments.h' not implemented\n");
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
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

#ifndef GE_MAIN_C
#define GE_MAIN_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_MAIN_H
#include "ge_main.h"
#endif
#ifndef GE_ARGUMENTS_H
#include "ge_arguments.h"
#endif
#ifndef GE_NATIVE_STRING_H
#include "ge_native_string.h"
#endif
#ifndef GE_GC_H
#include "ge_gc.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * System name.
 */
char* GE_system_name = NULL;

/*
 * Root class name.
 */
char* GE_root_class_name = NULL;

#ifdef EIF_WINDOWS

/*
 * Used in WEL.
 */
HINSTANCE eif_hInstance;
HINSTANCE eif_hPrevInstance;
LPWSTR eif_lpCmdLine;
int eif_nCmdShow;

/*
 * Break the shell command held in `cmd', putting each shell word
 * in a separate array entry, hence building an argument
 * suitable for the 'main'. Note that `cmd' will be altered
 * and `argvp' will point to some chunks of it.
 */
void GE_get_argcargv(EIF_NATIVE_CHAR* cmd, int* argc, EIF_NATIVE_CHAR*** argvp)
{
	int quoted = 0; /* parsing inside a quoted string? */
	int nbs; /* number of backspaces */
	int i;
	EIF_NATIVE_CHAR *p = NULL, *pe = NULL; /* pointers in `cmd' */
	EIF_NATIVE_CHAR *qb = NULL, *q = NULL; /* pointers in arguments */

	*argc = 0;
	/* Remove leading and trailing white spaces */
	for (p = cmd; *p == L' ' || *p == L'\t'; p++)
		; /* empty */
	for (pe = p + GE_nstrlen(p) - 1; pe >= p && (*pe == L' ' || *pe == L'\t'); pe--)
		; /* empty */
	if (p <= pe) {
		*argc = *argc + 1; /* at least one argument */
		qb = q = GE_unprotected_malloc_atomic_uncollectable((pe - p + 2) * sizeof(EIF_NATIVE_CHAR));
		if (!qb) {
			return;
		}
		do {
			switch(*p) {
				case L' ':
				case L'\t':
					if (quoted) {
						do {
							*q++ = *p++;
						} while(*p == L' ' || *p == L'\t');
					} else {
						do {
							p++;
						} while(*p == L' ' || *p == L'\t');
						*q++ = L'\0';
						*argc = *argc + 1;
					}
					break;
				case L'\"':
					quoted = ! quoted;
					p++;
					break;
				case L'\\':
					for (nbs = 0; *p == L'\\'; nbs++)
						*q++ = *p++;
					if (*p == L'\"') {
						if (nbs % 2) { /* odd number of backslashes */
							q -= (nbs + 1) / 2;
							*q++ = *p++;
						} else { /* even number of backslashes */
							quoted = ! quoted;
							q -= nbs / 2;
							p++;
						}
					}
					break;
				default:
					*q++ = *p++;
			}
		} while (p <= pe);
		*q++ = L'\0';
	}

	if (!argvp) {
		GE_free(qb);
		return;
	}

	*argvp = (EIF_NATIVE_CHAR**)GE_unprotected_malloc_atomic_uncollectable((*argc+1)*sizeof(EIF_NATIVE_CHAR*));
	if (!(*argvp)) {
		GE_free(qb);
		return;
	}

	for (i = 0; i < *argc; i++) {
		(*argvp)[i] = qb;
		qb += GE_nstrlen(qb) + 1;
	}
	(*argvp)[i] = (EIF_NATIVE_CHAR*)0;
}

int main(int dummy_arg1, char** dummy_argv)
{
	int code;
	int argc;
	EIF_NATIVE_CHAR** argv;
	EIF_NATIVE_CHAR* cmd;

	GE_set_windows_exception_filter();
		/* Variables used in WEL. */
	eif_hInstance = GetModuleHandle(NULL);
	eif_hPrevInstance = NULL;
	eif_lpCmdLine = GetCommandLineW();
	eif_nCmdShow = SW_SHOW;
	cmd = GE_nstrdup(GetCommandLineW());
	GE_get_argcargv(cmd, &argc, &argv);
	code = GE_main(argc, argv);
	free(cmd);
	if (argc > 0) {
		GE_free(argv[0]);
	}
	GE_free(argv);
	return code;
}

/*
 * Main entry point when compiling a Windows application.
 * See:
 *    http://en.wikipedia.org/wiki/WinMain
 *    http://msdn2.microsoft.com/en-us/library/ms633559.aspx
 */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	return main(0, NULL);
}

#else

int main(int argc, char** argv)
{
	return GE_main(argc, argv);
}

#endif

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif
/*
	description:

		"C functions used to implement class IDENTIFIED"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_IDENTIFIED_C
#define GE_IDENTIFIED_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_IDENTIFIED_H
#include "ge_identified.h"
#endif
#ifndef GE_GC_H
#include "ge_gc.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Weak pointers.
 */

/*
 * Weak pointer structure.
 */
typedef struct GE_weak_pointer {
	EIF_REFERENCE object;
} GE_weak_pointer;

/*
 * Create a new weak pointer to `object'.
 */
GE_weak_pointer* GE_new_weak_pointer(EIF_REFERENCE object)
{
	GE_weak_pointer* wp;

	if (object == 0) {
		return (GE_weak_pointer*)0;
	} else {
		wp = (GE_weak_pointer*)GE_malloc_atomic(sizeof(GE_weak_pointer));
		wp->object = object;
#ifdef GE_USE_BOEHM_GC
		GC_GENERAL_REGISTER_DISAPPEARING_LINK((void**)(&wp->object), GC_base(object));
#endif
		return wp;
	}
}

/*
 * Direct access to the object held in the weak pointer.
 */
EIF_REFERENCE GE_weak_pointer_object_without_lock(GE_weak_pointer* wp)
{
	if (wp == 0) {
		return (EIF_REFERENCE)0;
	} else {
		return (wp->object);
	}
}

/*
 * Access to the object held in the weak pointer.
 */
#ifdef GE_USE_BOEHM_GC
EIF_REFERENCE GE_weak_pointer_object(GE_weak_pointer* wp)
{
	return (EIF_REFERENCE)GC_call_with_alloc_lock((GC_fn_type)GE_weak_pointer_object_without_lock, wp);
}
#else /* No GC */
#define GE_weak_pointer_object(wp) GE_weak_pointer_object_without_lock(wp)
#endif


/*
 * Identified data structures and functions.
 */

/*
 * Size of inner arrays in `GE_id_objects'.
 */
#define GE_ID_OBJECT_CHUNK_SIZE 512

/*
 * Number of slots to be added to the outer array of
 * `GE_id_objects' when resizing it.
 */
#define GE_ID_OBJECT_CAPACITY_INCREMENT 512

/*
 * Array of arrays of weak pointers. Each inner array has the same size
 * (GE_ID_OBJECT_CHUNK_SIZE). Given an id, the weak pointer associated
 * the object, if any, is at index (id % GE_ID_OBJECT_CHUNK_SIZE) in the
 * inner array located at index (id / GE_ID_OBJECT_CHUNK_SIZE) in the
 * outer array.
 */
GE_weak_pointer*** GE_id_objects;

/*
 * Capacity of the outer array of `GE_id_objects'.
 */
EIF_INTEGER_32 GE_id_objects_capacity;

/*
 * Last id associated with an object.
 */
EIF_INTEGER_32 GE_last_object_id;

/*
 * Initialize data to keep track of object ids.
 */
void GE_init_identified(void)
{
	GE_id_objects = (GE_weak_pointer***)0;
	GE_id_objects_capacity = 0;
	GE_last_object_id = 0;
}

/*
 * Get a new id for `object', assuming it is NOT in the stack.
 */
EIF_INTEGER_32 GE_object_id(EIF_OBJECT object)
{
	GE_weak_pointer** id_object_chunk;
	EIF_INTEGER_32 i;
	EIF_INTEGER_32 l_old_capacity;

	GE_last_object_id++;
	i = GE_last_object_id / GE_ID_OBJECT_CHUNK_SIZE;
	if (i >= GE_id_objects_capacity) {
		l_old_capacity = GE_id_objects_capacity;
		GE_id_objects_capacity = GE_id_objects_capacity + GE_ID_OBJECT_CAPACITY_INCREMENT;
		if (GE_id_objects == 0) {
			GE_id_objects = GE_calloc_atomic_uncollectable(GE_id_objects_capacity, sizeof(GE_weak_pointer**));
		} else {
			GE_id_objects = GE_recalloc(GE_id_objects, l_old_capacity, GE_id_objects_capacity, sizeof(GE_weak_pointer**));
		}
	}
	id_object_chunk = GE_id_objects[i];
	if (id_object_chunk == 0) {
		id_object_chunk = GE_calloc_uncollectable(GE_ID_OBJECT_CHUNK_SIZE, sizeof(GE_weak_pointer*));
		GE_id_objects[i] = id_object_chunk;
	}
	i = GE_last_object_id % GE_ID_OBJECT_CHUNK_SIZE;
	id_object_chunk[i] = GE_new_weak_pointer(object);
	return GE_last_object_id;
}

/*
 * Return the object associated with `id'.
 */
EIF_REFERENCE GE_id_object(EIF_INTEGER_32 id)
{
	GE_weak_pointer** id_object_chunk;
	GE_weak_pointer* wp;
	EIF_REFERENCE object;
	EIF_INTEGER_32 i;

	i = id / GE_ID_OBJECT_CHUNK_SIZE;
	if (i >= GE_id_objects_capacity) {
		return (EIF_REFERENCE) 0;
	} else {
		id_object_chunk = GE_id_objects[i];
		if (id_object_chunk == 0) {
			return (EIF_REFERENCE)0;
		} else {
			i = id % GE_ID_OBJECT_CHUNK_SIZE;
			wp = id_object_chunk[i];
			if (wp == 0) {
				return (EIF_REFERENCE)0;
			} else {
				object = GE_weak_pointer_object(wp);
				if (object == 0) {
					id_object_chunk[i] = (GE_weak_pointer*)0;
#ifdef GE_USE_BOEHM_GC
					GC_unregister_disappearing_link((void**)(&wp->object));
#endif
					GE_free(wp);
					return (EIF_REFERENCE)0;
				} else {
					return object;
				}
			}
		}
	}
}

/*
 * Remove the object associated with `id' from the stack.
 */
void GE_object_id_free(EIF_INTEGER_32 id)
{
	GE_weak_pointer** id_object_chunk;
	GE_weak_pointer* wp;
	EIF_REFERENCE object;
	EIF_INTEGER_32 i;

	i = id / GE_ID_OBJECT_CHUNK_SIZE;
	if (i < GE_id_objects_capacity) {
		id_object_chunk = GE_id_objects[i];
		if (id_object_chunk != 0) {
			i = id % GE_ID_OBJECT_CHUNK_SIZE;
			wp = id_object_chunk[i];
			if (wp != 0) {
				object = GE_weak_pointer_object(wp);
				if (object != 0) {
#ifdef GE_USE_BOEHM_GC
					GC_unregister_disappearing_link((void**)(&wp->object));
#endif
				}
				id_object_chunk[i] = (GE_weak_pointer*)0;
				GE_free(wp);
			}
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


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

#ifndef EIF_CECIL_C
#define EIF_CECIL_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef EIF_CECIL_H
#include "eif_cecil.h"
#endif
#ifndef GE_CONSOLE_H
#include "ge_console.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

EIF_PROCEDURE eif_procedure(char* rout, EIF_TYPE_ID cid)
{
	/* TODO */
	GE_show_console();
	fprintf(stderr, "'eif_procedure' in 'eif_cecil.c' not implemented\n");
	return (EIF_PROCEDURE)0;
}

EIF_INTEGER_FUNCTION eif_integer_function(char* rout, EIF_TYPE_ID cid)
{
	/* TODO */
	GE_show_console();
	fprintf(stderr, "'eif_integer_function' in 'eif_cecil.c' not implemented\n");
	return (EIF_INTEGER_FUNCTION)0;
}

EIF_REFERENCE_FUNCTION eif_reference_function(char* rout, EIF_TYPE_ID cid)
{
	/* TODO */
	GE_show_console();
	fprintf(stderr, "'eif_reference_function' in 'eif_cecil.c' not implemented\n");
	return (EIF_REFERENCE_FUNCTION)0;
}

EIF_POINTER_FUNCTION eif_pointer_function(char* rout, EIF_TYPE_ID cid)
{
	/* TODO */
	GE_show_console();
	fprintf(stderr, "'eif_pointer_function' in 'eif_cecil.c' not implemented\n");
	return (EIF_POINTER_FUNCTION)0;
}

EIF_BOOLEAN_FUNCTION eif_boolean_function(char* rout, EIF_TYPE_ID cid)
{
	/* TODO */
	GE_show_console();
	fprintf(stderr, "'eif_boolean_function' in 'eif_cecil.c' not implemented\n");
	return (EIF_BOOLEAN_FUNCTION)0;
}

EIF_REAL_32_FUNCTION eif_real_32_function(char* rout, EIF_TYPE_ID cid)
{
	/* TODO */
	GE_show_console();
	fprintf(stderr, "'eif_real_32_function' in 'eif_cecil.c' not implemented\n");
	return (EIF_REAL_32_FUNCTION)0;
}

EIF_REAL_64_FUNCTION eif_real_64_function(char* rout, EIF_TYPE_ID cid)
{
	/* TODO */
	GE_show_console();
	fprintf(stderr, "'eif_real_64_function' in 'eif_cecil.c' not implemented\n");
	return (EIF_REAL_64_FUNCTION)0;
}

EIF_CHARACTER_8_FUNCTION eif_character_8_function(char* rout, EIF_TYPE_ID cid)
{
	/* TODO */
	GE_show_console();
	fprintf(stderr, "'eif_character_8_function' in 'eif_cecil.c' not implemented\n");
	return (EIF_CHARACTER_8_FUNCTION)0;
}

EIF_OBJECT eif_create(EIF_TYPE_ID cid)
{
	/* TODO */
	GE_show_console();
	fprintf(stderr, "'eif_create' in 'eif_cecil.c' not implemented\n");
	return (EIF_OBJECT)0;
}

EIF_TYPE_ID eif_type_id(char* type_string)
{
	GE_show_console();
	fprintf(stderr, "'eif_type_id' in 'eif_cecil.c' not implemented\n");
	return EIF_NO_TYPE;
}

extern EIF_INTEGER eifaddr_offset(EIF_REFERENCE object, char *name, int * const ret)
{
	GE_show_console();
	fprintf(stderr, "'eifaddr_offset' in 'eif_cecil.c' not implemented\n");
	return 0;
}

EIF_TYPE_ID eiftype(EIF_OBJECT object)
{
		/* Obsolete. Use "eif_type_by_reference" instead.
		 * Return the Type id of the specified object.
		 */
	return (EIF_TYPE_ID)object->id;
}

EIF_TYPE_ID eif_type_by_reference(EIF_REFERENCE object)
{
		/* Return type id of the direct reference "object" */
	return (EIF_TYPE_ID)object->id;
}

EIF_TYPE_INDEX eif_gen_param_id(EIF_TYPE_INDEX dftype, uint32_t pos)
{
	GE_show_console();
	fprintf(stderr, "'eif_gen_param_id' in 'eif_cecil.c' not implemented\n");
	return 0;
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
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

#ifndef EIF_PLUG_C
#define EIF_PLUG_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef EIF_PLUG_H
#include "eif_plug.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

int nstcall = 0;

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif
/*
	description:

		"C functions used to implement class EXCEPTIONS"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2007-2018, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef EIF_EXCEPT_C
#define EIF_EXCEPT_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef EIF_EXCEPT_H
#include "eif_except.h"
#endif
#ifndef GE_STRING_H
#include "ge_string.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Raise an Eiffel exception.
 */
void eraise(const char* name, long code)
{
	GE_raise_with_message(code, name);
}

/*
 * Raise an Eiffel exception of the given code with no associated tag.
 */
void xraise(int code)
{
	GE_raise((long)code);
}

/*
 * Raise an "Operating system error" exception.
 */
void esys(void)
{
	if (errno == 0) {
			/* External event */
		GE_raise(GE_EX_EXT);
	} else {
			/* Operating system error */
		GE_raise(GE_EX_SYS);
	}
}

/*
 * As a special case, an I/O error is raised when a system call which is I/O bound fails.
 */
void eise_io(const char* tag)
{
	GE_raise_with_message(GE_EX_ISE_IO, tag);
}

/*
 * Raise a "No more memory" exception.
 */
 void enomem(void) {
	GE_raise(GE_EX_OMEM);
 }

/*
 * Raise EiffelCOM exception.
 */
void com_eraise(const char* tag, long num)
{
	GE_raise_with_message(num, tag);
}

/*
 * Terminate execution with exit status `code',
 * without triggering an exception.
 */
void esdie(int code)
{
/* TODO: check that the Boehm GC triggers the 'dispose' routines. */
	exit(code);
}

/*
 * Exception tag associated with `code'.
 * This is a duplication from Eiffel classes, but still used for trace printing and in EiffelCom.
 */
EIF_REFERENCE eename(long code)
{
	return GE_str(GE_exception_tag(code));
}

/*
 * Is exception `ex' defined?
 * Used in EiffelCOM.
 */
char eedefined(long ex)
{
	return (char)((ex > 0 && ex <= GE_EX_NEX)? 1 : 0);
}

/*
 * Enable/diable printing of the exception trace.
 * Per thead information.
 */
void eetrace(char b)
{
	GE_context* context;

	context = GE_current_context();
	context->exception_trace_enabled = b;
}

/*
 * Is current execution during rescue?
 */
EIF_BOOLEAN eif_is_in_rescue(void)
{
	GE_context* context;

	context = GE_current_context();
	return (EIF_TEST(context->in_rescue > 0));
}

#ifdef EIF_WINDOWS
/*
 * Set default exception handler.
 */
void set_windows_exception_filter(void)
{
	GE_set_windows_exception_filter();
}
#endif

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif
/*
	description:

		"C functions used to implement class REAL"

	system: "Gobo Eiffel Compiler"
	copyright: "Copyright (c) 2013-2017, Eric Bezault and others"
	license: "MIT License"
	date: "$Date$"
	revision: "$Revision$"
*/

#ifndef GE_REAL_C
#define GE_REAL_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_REAL_H
#include "ge_real.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Bit representation of `v'.
 */
EIF_NATURAL_32 GE_real_32_to_bits(EIF_REAL_32 v)
{
	return *(EIF_NATURAL_32*)&v;
}

/*
 * Bit representation of `v'.
 */
EIF_NATURAL_64 GE_real_64_to_bits(EIF_REAL_64 v)
{
	return *(EIF_NATURAL_64*)&v;
}

/*
 * Real value with `v' as bit representation.
 */
EIF_REAL_32 GE_real_32_from_bits(EIF_NATURAL_32 v)
{
	return *(EIF_REAL_32*)&v;
}

/*
 * Real value with `v' as bit representation.
 */
EIF_REAL_64 GE_real_64_from_bits(EIF_NATURAL_64 v)
{
	return *(EIF_REAL_64*)&v;
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
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

#ifndef EIF_FILE_C
#define EIF_FILE_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef EIF_FILE_H
#include "eif_file.h"
#endif
#ifndef EIF_EXCEPT_H
#include "eif_except.h"
#endif
#ifndef GE_STRING_H
#include "ge_string.h"
#endif
#ifndef GE_REAL_H
#include "ge_real.h"
#endif

/* HAS_CHOWN:
 *	This symbol, if defined, indicates that the chown routine is
 *	available.
 */
#ifndef EIF_WINDOWS
#define HAS_CHOWN
#endif

/* HAS_GETEUID:
 *	This symbol, if defined, indicates that the geteuid system call is
 *	available
 */
#ifndef EIF_WINDOWS
#define  HAS_GETEUID
#endif

/* HAS_GETGRGID:
 *	This symbol, if defined, indicates that the getgrgid system call is
 *	available
 */
#ifndef EIF_WINDOWS
#define  HAS_GETGRGID
#endif

/* HAS_GETGROUPS:
 *	This symbol, if defined, indicates that the getgroups() routine is
 *	available to get the list of process groups.  If unavailable, multiple
 *	groups are probably not supported.
 */
#ifndef EIF_WINDOWS
#define HAS_GETGROUPS
#define Groups_t gid_t	/* Type for 2nd arg to getgroups() */
#endif

/* HAS_GETPWUID:
 *	This symbol, if defined, indicates that the getpwuid system call is
 *	available
 */
#ifndef EIF_WINDOWS
#define  HAS_GETPWUID
#endif

/* HAS_LINK:
 *	This symbol, if defined, indicates that the link routine is
 *	available to create hard links.
 */
#ifndef EIF_WINDOWS
#define HAS_LINK
#endif

/* HAS_LSTAT:
 *	This symbol, if defined, indicates that the lstat routine is
 *	available to do file stats on symbolic links.
 */
#ifndef EIF_WINDOWS
#define HAS_LSTAT
#endif


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#ifdef EIF_WINDOWS
#if defined(__BORLANDC__) && (__BORLANDC__ < 0x600) /* Borland before 6.0 */
#include <utime.h>
#else
#include <sys/utime.h>
#ifdef __LCC__
extern int utime(const char *, struct utimbuf *);
#include <sys/stat.h>
#endif
#endif
#include <io.h> /* for access, chmod */
#include <direct.h> /* for (ch|mk|rm)dir */
#include <share.h>  /* added for temporary file */
#include <fcntl.h>  /* added for temporary file */
#include <wchar.h>
#else
#include <utime.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>
#endif

#ifndef NAME_MAX
#define NAME_MAX 10 /* Maximum length for user/group name */
#endif

#ifndef FILE_TYPE_MAX
#define FILE_TYPE_MAX 5		/* max size of fopen type string (like "a+b") */
#endif

#ifndef S_IRUSR
#define S_IRUSR 0000400
#endif
#ifndef S_IWUSR
#define S_IWUSR 0000200
#endif
#ifndef S_IXUSR
#define S_IXUSR 0000100
#endif
#ifndef S_IRGRP
#define S_IRGRP 0000040
#endif
#ifndef S_IWGRP
#define S_IWGRP 0000020
#endif
#ifndef S_IXGRP
#define S_IXGRP 0000010
#endif
#ifndef S_IROTH
#define S_IROTH 0000004
#endif
#ifndef S_IWOTH
#define S_IWOTH 0000002
#endif
#ifndef S_IXOTH
#define S_IXOTH 0000001
#endif
#ifndef S_IFDIR
#define S_IFDIR 0040000
#endif
#ifndef S_IFCHR
#define S_IFCHR 0020000
#endif
#ifdef __LCC__
#ifndef _S_IFCHR
#define _S_IFCHR S_IFCHR
#endif
#endif
#ifndef S_IFBLK
#define S_IFBLK 0060000
#endif
#ifndef S_IFREG
#define S_IFREG 0100000
#endif
#ifndef S_IFIFO
#define S_IFIFO 0010000
#endif
#ifndef S_IFLNK
#define S_IFLNK 0120000
#endif
#ifndef S_IFSOCK
#define S_IFSOCK 0140000
#endif
#ifndef S_IFMT
#define S_IFMT 0170000
#endif
#ifndef S_ISREG
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#endif
#ifndef S_ISDIR
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#endif
#ifndef S_ISCHR
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#endif
#ifndef S_ISBLK
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#endif
#ifndef S_ISLNK
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#endif
#ifndef S_ISFIFO
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#endif
#ifndef S_ISSOCK
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#endif

/* The following access constants seems to be universally accepeted. And
 * anyway, it's only after BSD 4.1 that the symbolic constants appeared.
 */
#ifndef R_OK
#define R_OK 4
#define W_OK 2
#define X_OK 1
#define F_OK 0
#endif

#define FS_START	0			/* Beginning of file for `fseek' */
#define FS_CUR		1			/* Current position for `fseek' */
#define FS_END		2			/* End of file for `fseek' */
/* Keep only permission mode */
#ifndef ST_MODE
#define ST_MODE 0x0fff
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef EIF_WINDOWS
#	ifdef __LCC__
#		define rt_stat		_wstat
#		define rt_fstat		fstat
#	elif defined(EIF_64_BITS)
#		define rt_stat		_wstat64
#		define rt_fstat		_fstat64
#	else
#		define rt_stat		_wstat64i32
#		define rt_fstat		_fstat64i32
#	endif
#	define rt_access		_waccess
#else
#	define rt_stat			stat
#	define rt_lstat			lstat
#	define rt_fstat			fstat
#	define rt_access		access
#endif

static int rt_mkdir(EIF_FILENAME path, int mode)
{
#ifdef EIF_WINDOWS
	return _wmkdir(path);
#else
	return mkdir(path, mode);
#endif
}

static int rt_rename(EIF_FILENAME from, EIF_FILENAME to)
{
#ifdef EIF_WINDOWS
	return _wrename(from, to);
#else
	return rename(from, to);
#endif
}

static int rt_rmdir(EIF_FILENAME path)
{
#ifdef EIF_WINDOWS
	return _wrmdir(path);
#else
	return rmdir(path);
#endif
}

static int rt_unlink(EIF_FILENAME path)
{
#ifdef EIF_WINDOWS
	return _wunlink(path);
#else
	return unlink(path);
#endif
}

static FILE* rt_file_fopen(EIF_FILENAME name, EIF_FILENAME type)
{
#ifdef EIF_WINDOWS
	return _wfopen(name, type);
#else
	return fopen(name, type);
#endif
}

static FILE* rt_file_fdopen(int fd, EIF_FILENAME type)
{
#ifdef EIF_WINDOWS
	return _wfdopen(fd, type);
#else
	return fdopen(fd, type);
#endif
}

static FILE* rt_file_freopen(EIF_FILENAME name, EIF_FILENAME type, FILE* stream)
{
#ifdef EIF_WINDOWS
	return _wfreopen(name, type, stream);
#else
	return freopen(name, type, stream);
#endif
}

static int rt_utime(EIF_FILENAME path, struct utimbuf* times)
{
#ifdef EIF_WINDOWS
	return _wutime(path, (struct _utimbuf*)times);
#else
	return utime(path, times);
#endif
}

/*
 * Swallow next character if it is a new line.
 */
static void rt_swallow_nl(FILE* f)
{
		/* getc() cannot be used as it doesn't set the EOF flag */

	if (f != stdin) {
		if (fscanf(f, "\n") == EOF && ferror(f)) {
			eise_io("FILE: error during reading the end of the file,");
		}
	} else {
		int c;

		errno = 0;
		c = getc(f);
		if (c == EOF && ferror(f))
			eise_io("FILE: error during reading the end of the file.");

		if (c != '\n' && EOF == ungetc(c, f))
			eise_io("FILE: End of file.");
	}
}

static void rt_file_stat(EIF_FILENAME path, rt_stat_buf* buf)
{
		/* To preserve compatibility we always follow symbolic links and raise an exception upon failure. */
	if (eif_file_stat(path, buf, 1) == -1) {
		esys();
	}
}

/*
 * Set `file_type', given `how' the file is being opened and a `mode' create a platform specific character
 * string (UTF-16 encoding on Windows and a byte sequence otherwise) that can be used by
 * the underlying OS system call to open the mode in the proper mode (e.g. open append,
 * read-write mode, ....).
 */
static void rt_file_set_open_mode(EIF_NATIVE_CHAR file_type[FILE_TYPE_MAX], int how, char mode)
{
	file_type[4] = '\0';
	file_type[3] = '\0';
	file_type[2] = '\0';
	if (how >= 10) how -= 10;
	switch (how) {
		case 0:
		case 3: file_type[0] = 'r'; break;
		case 1:
		case 4: file_type[0] = 'w'; break;
		case 2:
		case 5: file_type[0] = 'a'; break;
		default: file_type[0] = 'r'; break;
	}
	file_type[1] = mode;
	switch (how) {
		case 3:
		case 4:
		case 5:
			if (mode == '\0') {
				file_type[1] = '+';
			} else {
				file_type[2] = '+';
			}
	}
#ifdef EIF_WINDOWS
	/* We make sure that files created in Eiffel are not inheritable
	 * by default as otherwise it makes things too complicated for the
	 * end user when spawing child processes. */
	if (file_type[1] == '\0') {
		file_type[1] = 'N';
	} else if (file_type[2] == '\0') {
		file_type[2] = 'N';
	} else {
		file_type[3] = 'N';
	}
#endif
}

/*
 * Create directory `dirname'.
 */
void eif_file_mkdir(EIF_FILENAME dirname)
{
	errno = 0;
	if (rt_mkdir(dirname, 0777) == -1) {
		esys(); /* Raise exception */
	}
}

/*
 * Rename file `from' into `to'.
 */
void eif_file_rename(EIF_FILENAME from, EIF_FILENAME to)
{
	for (;;) {
#ifdef EIF_WINDOWS
		if (eif_file_exists(to)) {
				/* To have the same behavior as Unix, we need to remove the destination file if it exists.
				 * Of course we can do this only if `from' and `to' do not represent the same file.
				 * To check this, we use `CreateFile' to open both file, and then using the information
				 * returned by `GetFileInformationByHandle' we can check whether or not they are indeed
				 * the same. */
			BY_HANDLE_FILE_INFORMATION l_to_info, l_from_info;
			HANDLE l_from_file = CreateFileW(from, GENERIC_READ, FILE_SHARE_READ, NULL,
				OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
			HANDLE l_to_file = CreateFileW(to, GENERIC_READ, FILE_SHARE_READ, NULL,
					OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

			if ((l_from_file == INVALID_HANDLE_VALUE) || (l_to_file == INVALID_HANDLE_VALUE)) {
					/* We do not need the handles anymore, simply close them. Since Microsoft
					 * API accepts INVALID_HANDLE_VALUE we don't check the validity of arguments. */
				CloseHandle(l_from_file);
				CloseHandle(l_to_file);

					/* For some reasons we cannot open the file. This should not happen, maybe the OS has
					 * removed `from' or `to'. In that case, we simply try to remove destination as we were
					 * doing in former revision of `file_rename'. */
				_wremove(to);
			} else {
				BOOL success = GetFileInformationByHandle(l_from_file, &l_from_info);
				if (success) {
					success = GetFileInformationByHandle(l_to_file, &l_to_info);
						/* We do not need the handles anymore, simply close them. */
					CloseHandle(l_from_file);
					CloseHandle(l_to_file);
					if (success) {
							/* Check that `from' and `to' do not represent the same file. */
						if
							((l_from_info.dwVolumeSerialNumber != l_to_info.dwVolumeSerialNumber) ||
							(l_from_info.nFileIndexLow != l_to_info.nFileIndexLow) ||
							(l_from_info.nFileIndexHigh != l_to_info.nFileIndexHigh))
						{
							_wremove(to);
						} else {
								/* Files are identical, nothing to be done apart from */
							break;
						}
					} else {
							/* An error occurred while retrieving the information about `from' and `to'. Like
							 * for the case where `l_from_file' and `l_to_file' are invalid, we try to remove
							 * the file. */
						_wremove(to);
					}
				} else {
						/* We do not need the handles anymore, simply close them. */
					CloseHandle(l_from_file);
					CloseHandle(l_to_file);
						/* An error occurred while retrieving the information about `from' and `to'. Like
						 * for the case where `l_from_file' and `l_to_file' are invalid, we try to remove
						 * the file. */
					_wremove(to);
				}
			}
		}
#endif
		errno = 0;
		if (rt_rename(from, to) == -1) {
			esys(); /* Raise exception */
		}
		break;
	}
}

/*
 * Link file `from' into `to'.
 */
void eif_file_link(EIF_FILENAME from, EIF_FILENAME to)
{
#ifdef HAS_LINK
	errno = 0;
	if (link(from, to) == -1) {
		esys(); /* Raise exception */
	}
#endif
}

/*
 * Delete file or directory `name'.
 */
void eif_file_unlink(EIF_FILENAME name)
{
	rt_stat_buf buf;				/* File statistics */
	int status;						/* Status from system call */

	status = eif_file_stat(name, &buf, 0);				/* Side effect: ensure file exists */
	if (status == -1) {				/* An error occurred */
		esys();
	} else {
		for (;;) {
			errno = 0;						/* Reset error condition */
			if (S_ISDIR(buf.st_mode))		/* Directory */
				status = rt_rmdir(name);		/* Remove only if empty */
			else
				status = rt_unlink(name);		/* Not a directory */
			if (status == -1) {				/* An error occurred */
				if (errno == EINTR)			/* Interrupted by signal */
					continue;				/* Re-issue system call */
				else
					esys();					/* Raise exception */
			}
			break;
		}
	}
}

/*
 * Open file `name' with the corresponding type `how'.
 */
EIF_POINTER eif_file_open(EIF_FILENAME name, int how)
{
	FILE* fp;
	EIF_NATIVE_CHAR l_mode[FILE_TYPE_MAX];
	errno = 0;
#if defined EIF_WINDOWS
	rt_file_set_open_mode(l_mode, how, (how < 10 ? 't' : 'b'));
#else
	rt_file_set_open_mode(l_mode, how, '\0');
#endif
	fp = (FILE*)rt_file_fopen(name, l_mode);
	if (fp == (FILE*)0) {
		esys(); /* Open failed, raise exception */
	}
	return (EIF_POINTER)fp;
}

/*
 * Open file `fd' with the corresponding type `how'.
 */
EIF_POINTER eif_file_dopen(int fd, int how)
{
	FILE* fp;
	EIF_NATIVE_CHAR l_mode[FILE_TYPE_MAX];
	errno = 0;
#ifdef EIF_WINDOWS
	rt_file_set_open_mode(l_mode, how, (how < 10 ? 't' : 'b'));
#else
	rt_file_set_open_mode(l_mode, how, '\0');
#endif
	fp = (FILE*)rt_file_fdopen(fd, l_mode);
	if (fp == (FILE*)0) {
		esys(); /* Open failed, raise exception */
	}
	return (EIF_POINTER)fp;
}

/*
 * Reopen file `name' with the corresponding type `how' and substitute that
 * to the old stream described by `old'. This is useful to redirect 'stdout'
 * to another place, for instance.
 */
EIF_POINTER eif_file_reopen(EIF_FILENAME name, int how, FILE *old)
{
	FILE* fp;
	EIF_NATIVE_CHAR l_mode[FILE_TYPE_MAX];
	errno = 0;
#ifdef EIF_WINDOWS
	rt_file_set_open_mode(l_mode, how, (how < 10 ? 't' : 'b'));
#else
	rt_file_set_open_mode(l_mode, how, '\0');
#endif
	fp = (FILE*)rt_file_freopen(name, l_mode, old);
	if (fp == (FILE*)0) {
		esys(); /* Open failed, raise exception */
	}
	return (EIF_POINTER)fp;
}

/*
 * Close the file.
 */
void eif_file_close(FILE* fp)
{
	errno = 0;
	if (fclose(fp) != 0) {
		esys(); /* Close failed, raise exception */
	}
}

/*
 * Flush data held in stdio buffer.
 */
void eif_file_flush(FILE* fp)
{
	errno = 0;
	if (fflush(fp) != 0) {
	    esys(); /* Flush failed, raise exception */
	}
#ifdef EIF_WINDOWS
		/* On Windows, it does not write directly to disk, so we have to force it. See KB66052:
		 * http://support.microsoft.com/kb/66052
		 * We ignore bad file descriptor case, as it is most likely when calling it on one of the standard
		 * input/outputs. */
#ifdef __LCC__
extern int _commit(int);
#endif
	if ((0 != _commit(fileno(fp))) && (errno != EBADF)) {
		esys();
	}
#endif
}

/*
 * Return the associated file descriptor.
 */
EIF_INTEGER eif_file_fd(FILE* f)
{
	int res;
	if (!f) {
		res = 0;
		eraise("invalid file pointer", EN_EXT);
	} else {
		res = fileno(f);
		if (res == -1) {
			eraise("error occurred", EN_EXT);
		}
	}
	return (EIF_INTEGER)res;
}

/*
 * Get a character from `f'.
 */
EIF_CHARACTER_8 eif_file_gc(FILE* f)
{
	int c;
	errno = 0;
	c = getc(f);
	if (c == EOF && ferror(f)) {
		eise_io("FILE: unable to read CHARACTER value.");
	}
	return (EIF_CHARACTER_8)c;
}

/*
 * Get a string from `f' and fill it into `s' (at most `bound' characters),
 * with `start' being the amount of bytes already stored within s. This
 * means we really have to read (bound - start) characters.
 */
EIF_INTEGER eif_file_gs(FILE* f, char* s, EIF_INTEGER bound, EIF_INTEGER start)
{
	EIF_INTEGER amount;
	int c = '\0';
	EIF_INTEGER read;

	amount = bound - start;
	s += start;
	errno = 0;
	read = 0;
	while (amount-- > 0) {
		if ((c = getc(f)) == '\n' || c == EOF)
			break;
		*s++ = c;
		read++;
	}
	if (c == EOF && ferror(f)) {
			/* An I/O error occurred */
			/* Raise exception */
		eise_io("FILE: unable to read current line.");
	}
	if (c == EOF || c == '\n')
#ifdef EIF_WINDOWS
		if ((read > 0) && (*(s-1) == '\r'))
			return read - 1;
		else
			return read;
#else
		return read;
#endif
	if (amount == -1)
		return (read + 1);
	return bound - start + 1;
}

/*
 * Read min (bound, remaining bytes in file) characters into `s' and
 * return the number of characters read.
 */
EIF_INTEGER eif_file_gss(FILE* f, char* s, EIF_INTEGER bound)
{
	size_t amount = fread(s, sizeof(char), (size_t)bound, f);

	if (ferror(f)) {	/* An I/O error occurred */
		eise_io("FILE: unable to read stream.");					/* Raise exception */
	}

	return (EIF_INTEGER)amount;	/* Number of characters read */
}

/*
 * Get a word from `f' and fill it into `s' (at most `bound' characters),
 * with `start' being the amount of bytes already stored within s. This
 * means we really have to read (bound - start) characters. Any leading
 * spaces are skipped.
 */
EIF_INTEGER eif_file_gw(FILE* f, char* s, EIF_INTEGER bound, EIF_INTEGER start)
{
	EIF_INTEGER amount;	/* Amount of bytes to be read */
	int c = 0;			/* Last char read */

	amount = bound - start;		/* Characters to be read */
	s += start;					/* Where read characters are written */
	errno = 0;					/* No error, a priori */

	if (start == 0)	{			/* First call */
		while ((c = getc(f)) != EOF)
			if (!isspace(c))
				break;
		if (c == EOF && ferror(f))	/* An I/O error occurred */
			eise_io("FILE: unable to read word.");					/* Raise exception */
		if (c == EOF)
			return (EIF_INTEGER)0;				/* Reached EOF before word */
		else if (EOF == ungetc(c, f))
			eise_io("FILE: unable to read word.");
	}

	while (amount-- > 0) {
		c = getc(f);
		if (c == EOF)
			break;
		if (isspace(c)) {
			if (EOF == ungetc(c, f))
				eise_io("FILE: unable to read word.");
			break;
		}
		*s++ = (char)c;
	}

	if (c == EOF && ferror(f))	/* An I/O error occurred */
		eise_io("FILE: unable to read word.");					/* Raise exception */

	/* If we managed to get the whole string, return the number of characters
	 * read. Otherwise, return (bound - start + 1) to indicate an error
	 * condition.
	 */

	if (c == EOF || isspace(c))
		return bound - start - amount - 1;	/* Number of characters read */

	return bound - start + 1;			/* Error condition */
}

/*
 * Look ahead one character. If EOF, return 0.
 */
EIF_CHARACTER_8 eif_file_lh(FILE* f)
{
	int c;

	errno = 0;
	c = getc(f);
	if (c == EOF && ferror(f))
		eise_io("FILE: error when reading a character ahead.");

	if (c != EOF && EOF == ungetc(c, f))
		eise_io("FILE: error when reading a character ahead.");

	return (EIF_CHARACTER_8)(c == EOF ? (char)0 : (char)c);
}

/*
 * Size of file `fp'.
 */
EIF_INTEGER eif_file_size(FILE* fp)
{
	rt_stat_buf buf;

	errno = 0;
	if (fflush(fp) != 0) {
		esys();
	}
	if (rt_fstat(fileno(fp), &buf) == -1)
		esys();		/* An error occurred: raise exception */
		/* FIXME: This code should be upgraded to use 64-bit */
	return (EIF_INTEGER)buf.st_size;
}

/*
 * Read upto next input line.
 */
void eif_file_tnil(FILE* f)
{
	int c;

	errno = 0;
	while ((c = getc(f)) != '\n' && c != EOF)
		;
	if (c == EOF && ferror(f))
		eise_io("FILE: error during reading the end of the file.");
}

/*
 * Current position within file.
 */
EIF_INTEGER eif_file_tell(FILE* f)
{
	long res;

	if (f == (FILE*)0) {
		eraise("invalid file pointer", EN_EXT);
	}

	res = ftell(f);
	if (res == -1) {
		eraise("error occurred", EN_EXT);
	}
	return (EIF_INTEGER)res;
}

/*
 * Touch file `name' by setting both access and modification time to the
 * current time stamp. This external function exists only because there
 * is no way within UNIX_FILE to get the current time stamp. Otherwise,
 * we could simply call file_utime.
 */
void eif_file_touch(EIF_FILENAME name)
{
	eif_file_utime(name, time((time_t*) 0), 2);
}

/*
 * Modify the modification and/or the access time stored in the file's
 * inode. The 'how' parameter tells which attributes should be set.
 */
void eif_file_utime(EIF_FILENAME name, time_t stamp, int how)
{
	struct utimbuf tp;	/* Time array */
	rt_stat_buf buf;	/* File statistics */
	int status;			/* System call status */

	if (how < 2) {				/* Need to fetch time from inode */
		rt_file_stat(name, &buf);
		switch (how) {
		case 0:					/* Change only access time */
			tp.actime = stamp;
			tp.modtime = buf.st_mtime;
			break;
		case 1:					/* Change only modification time */
			tp.actime = buf.st_atime;
			tp.modtime = stamp;
			break;
		}
	} else
		tp.actime = tp.modtime = stamp;	/* Change both access and modification times */
	errno = 0;

	if (rt_utime(name, &tp) == -1) {
			/* Raise exception */
		esys();
	}
}

/*
 * This is an encapsulation of the stat() system call. The routine either
 * succeeds and returns or fails and raises the appropriate exception.
 */
int eif_file_stat(EIF_FILENAME path, rt_stat_buf* buf, int follow)
{
	int status;			/* System call status */

	for (;;) {
		errno = 0;						/* Reset error condition */
#ifdef HAS_LSTAT
		status = rt_lstat(path, buf);
		if ((status == 0) && (follow) && (S_ISLNK(buf->st_mode))) {
				/* We found a file which is a symbolic link and we are asked to
				 * follow the link to fetch properties on the link location.
				 * We call `rt_stat' to make sure the link is valid. It is going to
				 * slow down current call by stating twice the info, but this
				 * case is quite rare and there is a benefit in using `lstat'
				 * over `rt_stat' the first time as more than 90% of the files
				 * we stat are not symlink. */
			status = rt_stat(path, buf);
		}
#else
		status = rt_stat(path, buf);		/* Get file statistics */
#endif
		if ((status == -1) && (errno == EINTR)) {
				/* Call was interrupted by a signal we re-issue it. */
			continue;
		}
		break;
	}
	return status;
}

/*
 * Change permissions of file `name', using an interface like chmod(1).
 * The flag is true if permissions are to be added, 0 to remove them.
 */
void eif_file_perm(EIF_FILENAME name, char* who, char* what, int flag)
{
	int fmode;					/* File mode to be altered */
	rt_stat_buf buf;			/* File statistics */

		/* We need to follow links since `chmod' does follow them to change the permissions. */
	if (eif_file_stat(name, &buf, 1)) {
		esys();
	} else {
		fmode = (int)buf.st_mode;	/* Fetch current file mode */

		switch (*who) {
		case 'u':
			while (*what)
				switch (*what++) {
#ifdef EIF_WINDOWS
				case 's': break;
				case 'r': break;
				case 'w': break;
				case 'x': break;
#else
				case 's':
					if (flag) fmode |= S_ISUID; else fmode &= ~S_ISUID;
					break;
				case 'r':
					if (flag) fmode |= S_IRUSR; else fmode &= ~S_IRUSR;
					break;
				case 'w':
					if (flag) fmode |= S_IWUSR; else fmode &= ~S_IWUSR;
					break;
				case 'x':
					if (flag) fmode |= S_IXUSR; else fmode &= ~S_IXUSR;
					break;
#endif
				default:
					eraise("invalid user permission", EN_EXT);
				}
			break;
		case 'g':
			while (*what)
				switch (*what++) {
				case 's':
#ifdef S_ISGID
					if (flag) fmode |= S_ISGID; else fmode &= ~S_ISGID;
#endif
					break;
				case 'r':
#ifdef S_IRGRP
					if (flag) fmode |= S_IRGRP; else fmode &= ~S_IRGRP;
#endif
					break;
				case 'w':
#ifdef S_IWGRP
					if (flag) fmode |= S_IWGRP; else fmode &= ~S_IWGRP;
#endif
					break;
				case 'x':
#ifdef S_IXGRP
					if (flag) fmode |= S_IXGRP; else fmode &= ~S_IXGRP;
#endif
					break;
				default:
					eraise("invalid group permission", EN_EXT);
				}
			break;
		case 'o':
			while (*what)
				switch (*what++) {
				case 't':
#ifdef S_ISVTX
					if (flag) fmode |= S_ISVTX; else fmode &= ~S_ISVTX;
#endif
					break;
				case 'r':
#ifdef S_IROTH
					if (flag) fmode |= S_IROTH; else fmode &= ~S_IROTH;
#endif
					break;
				case 'w':
#ifdef S_IWOTH
					if (flag) fmode |= S_IWOTH; else fmode &= ~S_IWOTH;
#endif
					break;
				case 'x':
#ifdef S_IXOTH
					if (flag) fmode |= S_IXOTH; else fmode &= ~S_IXOTH;
#endif
					break;
				default:
					eraise("invalid other permission", EN_EXT);
				}
			break;
		default:
			eraise("invalid permission target", EN_EXT);
		}
		eif_file_chmod(name, fmode);
	}
}

/*
 * Change permission mode on file `path'.
 */
void eif_file_chmod(EIF_FILENAME path, int mode)
{
	errno = 0;
#ifdef EIF_WINDOWS
	if (_wchmod(path, mode) == -1) {
#else
	if (chmod(path, mode) == -1) {
#endif
		esys();
	}
}

/*
 * Change the owner of the file to `uid'.
 */
void eif_file_chown(EIF_FILENAME name, int uid)
{
#ifdef HAS_CHOWN
	int gid;
	rt_stat_buf buf;

	rt_file_stat(name, &buf);
	gid = buf.st_gid;
	errno = 0;
	if (chown(name, uid, gid) == -1) {
		esys();
	}
#endif
}

/*
 * Change the group of the file to `gid'.
 */
void eif_file_chgrp(EIF_FILENAME name, int gid)
{
#ifdef HAS_CHOWN
	int uid;
	rt_stat_buf buf;

	rt_file_stat(name, &buf);
	uid = buf.st_uid;
	errno = 0;
	if (chown(name, uid, gid) == -1) {
		esys();
	}
#endif
}

/*
 * Put new_line onto `f'.
 */
void eif_file_tnwl(FILE *f)
{
	errno = 0;
	if (putc('\n', f) == EOF) {
		eise_io("FILE: unable to write new line.");
	}
}

/*
 * Append a copy of `other' to `f'.
 */
void eif_file_append(FILE* f, FILE* other, EIF_INTEGER l)
{
	size_t amount;
	char buffer[512];
	int bufsize = 512;

	errno = 0;
	if (fseek(other, 0, FS_START) != 0) {
		esys();
	}
	if (fseek(f, 0, FS_END) != 0) {
		esys();
	}
	while (l > 0) {
		amount = l;
		if (l < bufsize)
			amount = l;
		else
			amount = bufsize;
		if (amount != fread(buffer, sizeof(char), amount, other)) {
			eise_io("FILE: unable to read appended file.");
			break;
		}
		l -= (EIF_INTEGER)amount;
		if (amount != fwrite(buffer, sizeof(char), amount, f)) {
			eise_io("FILE: unable to write appended file.");
			break;
		}
	}
}

/*
 * Write string `str' on `f'.
 */
void eif_file_ps(FILE* f, char* str, EIF_INTEGER len)
{
	errno = 0;
	if (len == 0) {
		/* Nothing to be done. */
	} else if (fwrite(str, sizeof(char) * len, 1, f) != 1) {
		eise_io("FILE: unable to write STRING object.");
	}
}

/*
 * Write character `c' on `f'.
 */
void eif_file_pc(FILE* f, char c)
{
	errno = 0;
	if (putc(c, f) == EOF) {
		eise_io("FILE: unable to write CHARACTER value.");
	}
}

/*
 * Go to absolute position `pos' counted from start.
 */
void eif_file_go(FILE* f, EIF_INTEGER pos)
{
	errno = 0;
	if (fseek(f, pos, FS_START) != 0) {
		esys();
	}
	clearerr(f);
}

/*
 * Go to absolute position `pos' counted from end.
 */
void eif_file_recede(FILE* f, EIF_INTEGER pos)
{
	errno = 0;
	if (fseek(f, -pos, FS_END) != 0) {
		esys();
	}
	clearerr(f);
}

/*
 * Go to absolute position `pos' counted from current position.
 */
void eif_file_move(FILE* f, EIF_INTEGER pos)
{
	errno = 0;
	if (fseek(f, pos, FS_CUR) != 0) {
		esys();
	}
	clearerr(f);
}

/*
 * End of file.
 */
EIF_BOOLEAN eif_file_feof(FILE* fp)
{
	return (EIF_BOOLEAN)(feof(fp) != 0);
}

/*
 * Test whether file exists or not. If `name' represents a symbolic link,
 * it will check that pointed file does exist.
 */
EIF_BOOLEAN eif_file_exists(EIF_FILENAME name)
{
	int status;					/* System call status */
	rt_stat_buf buf;			/* Buffer to get file statistics */

	status = eif_file_stat(name, &buf, 1);

#ifdef EOVERFLOW
	if (status == -1) {
			/* If the file is larger than what our file routines can handle
			 * it does not mean that the file does not exist. It does but we
			 * cannot handle it.
			 * This is needed to be able to check existence of file bigger than 2GB.
			 */
		return (errno == EOVERFLOW ? EIF_TRUE : EIF_FALSE);
	} else {
		return EIF_TRUE;
	}
#else
	return (status == -1 ? EIF_FALSE : EIF_TRUE);
#endif
}

/*
 * Test whether file exists or not without following the symbolic link
 * if `name' represents one.
 */
EIF_BOOLEAN eif_file_path_exists(EIF_FILENAME name)
{
	int status;					/* System call status */
	rt_stat_buf buf;			/* Buffer to get file statistics */

	status = eif_file_stat(name, &buf, 0);

#ifdef EOVERFLOW
	if (status == -1) {
			/* If the file is larger than what our file routines can handle
			 * it does not mean that the file does not exist. It does but we
			 * cannot handle it.
			 * This is needed to be able to check existence of file bigger than 2GB.
			 */
		return (errno == EOVERFLOW ? EIF_TRUE : EIF_FALSE);
	} else {
		return EIF_TRUE;
	}
#else
	return (status == -1 ? EIF_FALSE : EIF_TRUE);
#endif
}

/*
 * Check whether access permission `op' are possible on file `name' using
 * real UID and real GID. This is probably only useful to setuid or setgid
 * programs.
 */
EIF_BOOLEAN eif_file_access(EIF_FILENAME name, EIF_INTEGER op)
{
	switch (op) {
	case 0: /* Does file exist? */
		return (EIF_BOOLEAN)((-1 != rt_access(name, F_OK)) ? '\01' : '\0');
	case 1: /* Test for search permission */
		return (EIF_BOOLEAN)((-1 != rt_access(name, X_OK)) ? '\01' : '\0');
	case 2: /* Test for write permission */
		return (EIF_BOOLEAN)((-1 != rt_access(name, W_OK)) ? '\01' : '\0');
	case 3: /* Test for read permission */
		return (EIF_BOOLEAN)((-1 != rt_access(name, R_OK)) ? '\01' : '\0');
	default:
		return EIF_FALSE;
	}
}

/*
 * Check whether the file `path' may be created: we need write permissions
 * in the parent directory and there must not be any file bearing that name
 * with no write permissions...
 */
EIF_BOOLEAN eif_file_creatable(EIF_FILENAME path, EIF_INTEGER nbytes)
{
	rt_stat_buf buf;			/* Buffer to get parent directory statistics */
	EIF_FILENAME temp = NULL;
	EIF_FILENAME ptr;
	size_t l_extra_bytes;

		/* Allocate one extra character, just to be sure since we might be appending characters. */
#ifdef EIF_WINDOWS
	l_extra_bytes = sizeof(wchar_t);
#else
	l_extra_bytes = sizeof(char);
#endif
	temp = (EIF_FILENAME)malloc(nbytes + l_extra_bytes);
	if (!temp) {
		enomem();
	} else {
			/* Search the directory separator. */
#ifdef EIF_WINDOWS
		memcpy(temp, path, nbytes);
		ptr = wcsrchr(temp, '\\');
		if (!ptr) {
				/* On Windows we can have a forward slash as separator. */
			ptr = wcsrchr(temp, '/');
		}
#else
		strcpy(temp, path);
		ptr = strrchr(temp, '/');
#endif
		if (ptr) {
			*ptr = '\0';
#ifdef EIF_WINDOWS
			if ((ptr == temp) || (*(ptr -1) == ':')) {
					/* path is of the form a:\bbb or \bbb, parent is a:\ or \ */
				wcscat(ptr, L"\\");
			}
#endif
		} else {
#ifdef EIF_WINDOWS
			wcsncpy(temp, L".", 2);
#else
			strcpy(temp, ".");
#endif
		}

			/* Does the parent exist? */
		if (!eif_file_exists(temp)) {
			free(temp);
			return (EIF_BOOLEAN)'\0';
		}

		rt_file_stat(temp, &buf);
		free(temp);

		if (S_ISDIR(buf.st_mode)) {	/* Is parent a directory? */
			if (eif_file_eaccess(&buf, 1)) {	/* Check for write permissions */
					/* Check if a non writable file `path' exists */
				if (eif_file_exists(path)) {
					rt_file_stat(path, &buf);
					if (S_ISDIR(buf.st_mode)) {
							/* File exists and it is already a directory, thus we cannot create a file. */
						return (EIF_BOOLEAN)'\0';
					} else {
						return (eif_file_eaccess(&buf, 1)); /* Check for write permissions to re create it */
					}
				}

				return (EIF_BOOLEAN)'\01';
			}
		}
	}
	return (EIF_BOOLEAN)'\0';
}

/*
 * Get an integer from `f'.
 */
EIF_INTEGER eif_file_gi(FILE* f)
{
	EIF_INTEGER i;

	errno = 0;
	if (fscanf(f, "%d", &i) < 0) {
		eise_io("FILE: unable to read INTEGER value.");
	}
	rt_swallow_nl(f);
	return i;
}

/*
 * Get a real from `f'.
 */
EIF_REAL_32 eif_file_gr(FILE* f)
{
	EIF_REAL_32 r;
	errno = 0;
	if (fscanf(f, "%f", &r) < 0) {
		eise_io("FILE: unable to read REAL value.");
	}
	rt_swallow_nl(f);
	return r;
}

/*
 * Get a double from `f'.
 */
EIF_REAL_64 eif_file_gd(FILE* f)
{
	EIF_REAL_64 d;
	errno = 0;
	if (fscanf(f, "%lf", &d) < 0) {
		eise_io("FILE: unable to read DOUBLE value.");
	}
	rt_swallow_nl(f);
	return d;
}

/*
 * Write `number' on `f'.
 */
void eif_file_pi(FILE* f, EIF_INTEGER number)
{
	errno = 0;
	if (fprintf(f, "%d", number) < 0) {
		eise_io("FILE: unable to write INTEGER value.");
	}
}

/*
 * Write `number' on `f'.
 */
void eif_file_pr(FILE* f, EIF_REAL_32 number)
{
	int res;
	errno = 0;

	if (number != number) {
		res = fprintf(f, "%s", "NaN");
	} else if (GE_real_32_is_negative_infinity(number)) {
		res = fprintf(f, "%s", "-Infinity");
	} else if (GE_real_32_is_positive_infinity(number)) {
		res = fprintf(f, "%s", "Infinity");
	} else {
		res = fprintf(f, "%g", number);
	}
    if (res < 0) {
		eise_io("FILE: unable to write REAL_32 value.");
	}
}

/*
 * Write double `val' onto `f'.
 */
void eif_file_pd(FILE* f, EIF_REAL_64 val)
{
	int res;
	errno = 0;

	if (val != val) {
		res = fprintf(f, "%s", "NaN");
	} else if (GE_real_64_is_negative_infinity(val)) {
		res = fprintf(f, "%s", "-Infinity");
	} else if (GE_real_64_is_positive_infinity(val)) {
			res = fprintf(f, "%s", "Infinity");
	} else {
		res = fprintf(f, "%.17g", val);
	}

	if (res < 0) {
		eise_io("FILE: unable to write REAL_64 value.");
	}
}

/*
 * Size of the stat structure. This is used by the Eiffel side to create
 * the area (special object) which will play the role of a stat buffer
 * structure.
 */
EIF_INTEGER stat_size(void)
{
	return (EIF_INTEGER)sizeof(rt_stat_buf);
}

#ifdef HAS_GETGROUPS
/*
 * Does the list of groups the user belongs to include `gid'?
 */
static EIF_BOOLEAN eif_group_in_list(int gid)
{
	Groups_t* group_list;
	int i, nb_groups, nb_groups_max;

	nb_groups_max = getgroups(0, (Groups_t*)0);
	if (nb_groups_max <= 0) {
		return EIF_FALSE;
	} else {
		group_list = (Groups_t*)malloc(nb_groups_max * sizeof(Groups_t));
		if (group_list == (Groups_t*)0) {
			xraise(EN_IO);
			return EIF_FALSE;
		} else if ((nb_groups = getgroups(nb_groups_max, group_list)) == -1) {
			free(group_list);
			xraise(EN_IO);
			return EIF_FALSE;
		} else {
			for (i = 0; i < nb_groups; i++)
				if (group_list[i] == gid) {
					free(group_list);
					return EIF_TRUE;
				}
			free(group_list);
			return EIF_FALSE;
		}
	}
}
#endif

/*
 * Check file permissions using effective UID and effective GID. The
 * current permission mode is held in the st_mode field of the stat()
 * buffer structure `buf'.
 */
EIF_BOOLEAN eif_file_eaccess(rt_stat_buf* buf, int op)
{
	int mode = buf->st_mode & ST_MODE;	/* Current mode */
#ifdef HAS_GETEUID
	int uid = buf->st_uid;				/* File owner */
	int gid = buf->st_gid;				/* File group */
	int euid, egid;						/* Effective user and group */
#endif

    switch (op) {
	case 0: /* Is file readable */
#ifdef EIF_WINDOWS
	return ((mode && S_IREAD) ? EIF_TRUE : EIF_FALSE);
#elif defined HAS_GETEUID
		euid = geteuid();
		egid = getegid();

		if (euid == 0)
			return EIF_TRUE;
		else if (uid == euid)
			return ((mode & S_IRUSR) ? EIF_TRUE : EIF_FALSE);
		else if (gid == egid)
			return ((mode & S_IRGRP) ? EIF_TRUE : EIF_FALSE);
#ifdef HAS_GETGROUPS
		else if (eif_group_in_list(gid))
			return ((mode & S_IRGRP) ? EIF_TRUE : EIF_FALSE);
#endif
		else
			return ((mode & S_IROTH) ? EIF_TRUE : EIF_FALSE);
#endif
	case 1: /* Is file writable */
#ifdef EIF_WINDOWS
		return ((mode & S_IWRITE) ? EIF_TRUE : EIF_FALSE);
#elif defined HAS_GETEUID
		euid = geteuid();
		egid = getegid();

		if (euid == 0)
			return EIF_TRUE;
		else if (uid == euid)
			return ((mode & S_IWUSR) ? EIF_TRUE : EIF_FALSE);
		else if (gid == egid)
			return ((mode & S_IWGRP) ? EIF_TRUE : EIF_FALSE);
#ifdef HAS_GETGROUPS
		else if (eif_group_in_list(gid))
			return ((mode & S_IWGRP) ? EIF_TRUE : EIF_FALSE);
#endif
		else
			return ((mode & S_IWOTH) ? EIF_TRUE : EIF_FALSE);
#endif
	case 2: /* Is file executable */
#ifdef EIF_WINDOWS
		return EIF_TRUE;
#elif defined HAS_GETEUID
		euid = geteuid();
		egid = getegid();

		if (euid == 0)
			return EIF_TRUE;
		else if (uid == euid)
			return ((mode & S_IXUSR) ? EIF_TRUE : EIF_FALSE);
		else if (gid == egid)
			return ((mode & S_IXGRP) ? EIF_TRUE : EIF_FALSE);
#ifdef HAS_GETGROUPS
		else if (eif_group_in_list(gid))
			return ((mode & S_IXGRP) ? EIF_TRUE : EIF_FALSE);
#endif
		else
			return ((mode & S_IXOTH) ? EIF_TRUE : EIF_FALSE);
#endif
	case 3: /* Is file setuid */
#ifdef EIF_WINDOWS
		return EIF_FALSE;
#else
		return ((mode & S_ISUID) ? EIF_TRUE : EIF_FALSE);
#endif
	case 4: /* Is file setgid */
#ifdef EIF_WINDOWS
		return EIF_FALSE;
#else
		return ((mode & S_ISGID) ? EIF_TRUE : EIF_FALSE);
#endif
	case 5: /* Is file sticky */
#ifdef EIF_WINDOWS
		return EIF_FALSE;
#else
		return ((mode & S_ISVTX) ? EIF_TRUE : EIF_FALSE);
#endif
	case 6: /* Is file owned by effective UID */
#ifdef HAS_GETEUID
		return ((uid == geteuid()) ? EIF_TRUE : EIF_FALSE);
#else
		return EIF_TRUE;
#endif
	case 7: /* Is file owned by real UID */
#ifdef HAS_GETEUID
		return ((uid == getuid()) ? EIF_TRUE : EIF_FALSE);
#else
		return EIF_TRUE;
#endif
	default:
		return EIF_FALSE;
	}
}

/*
 * Perform the field dereferencing from the appropriate stat structure,
 * which Eiffel cannot do directly.
 */
EIF_INTEGER eif_file_info(rt_stat_buf* buf, int op)
{
	switch (op) {
	case 0:	/* File permission mode */
		return (EIF_INTEGER)(buf->st_mode & ST_MODE);
	case 1:	/* Inode number */
		return (EIF_INTEGER)buf->st_ino;
	case 2:	/* Device inode resides on */
		return (EIF_INTEGER)buf->st_dev;
	case 3:	/* Device type */
		return (EIF_INTEGER)buf->st_rdev;
	case 4:	/* UID of file */
		return (EIF_INTEGER)buf->st_uid;
	case 5:	/* GID of file */
		return (EIF_INTEGER)buf->st_gid;
	case 6:	/* Size of file, in bytes */
			/* FIXME: This code should be upgraded to use 64-bit */
		return (EIF_INTEGER) buf->st_size;
	case 7:	/* Last modification time on file */
			/* FIXME: This code should be upgraded to use 64-bit */
		return (EIF_INTEGER)buf->st_mtime;
	case 8:	/* Last access made on file */
			/* FIXME: This code should be upgraded to use 64-bit */
		return (EIF_INTEGER)buf->st_atime;
	case 9:	/* Last status change */
			/* FIXME: This code should be upgraded to use 64-bit */
		return (EIF_INTEGER)buf->st_ctime;
	case 10: /* Number of links */
		return (EIF_INTEGER)buf->st_nlink;
	case 11: /* File type */
		return (EIF_INTEGER)(buf->st_mode & S_IFMT);
	case 12: /* Is file a directory */
		return (EIF_INTEGER)S_ISDIR(buf->st_mode);
	case 13: /* Is file a regular (plain) one */
		if (S_ISREG(buf->st_mode) || (0 == (buf->st_mode & S_IFMT)))
			return (EIF_INTEGER)EIF_TRUE;
		return (EIF_INTEGER)0;
	case 14: /* Is file a device, ie character or block device. */
		return (S_ISCHR(buf->st_mode) || S_ISBLK(buf->st_mode));
	case 15: /* Is file a character device */
		return (EIF_INTEGER)S_ISCHR(buf->st_mode);
	case 16: /* Is file a block device */
		return (EIF_INTEGER)S_ISBLK(buf->st_mode);
	case 17: /* Is file a FIFO */
		return (EIF_INTEGER)S_ISFIFO(buf->st_mode);
	case 18: /* Is file a symbolic link */
		return (EIF_INTEGER)S_ISLNK(buf->st_mode);
	case 19: /* Is file a socket */
		return (EIF_INTEGER)S_ISSOCK(buf->st_mode);
	default:
		return (EIF_INTEGER)0;
    }
}

/*
 * Return the Eiffel string filled in with the name associated with `uid'
 * if found in /etc/passwd. Otherwise, return fill it in with the numeric
 * value.
 */
EIF_REFERENCE eif_file_owner(int uid)
{
	char str[NAME_MAX];
#ifdef HAS_GETPWUID
	struct passwd* pp;

	pp = getpwuid(uid);
	if (pp == (struct passwd*) 0)
		sprintf(str, "%d", uid);		/* Not available: use UID */
	else
		strcpy(str, pp->pw_name);		/* Available: fetch login name */
#else
	sprintf(str, "%d", uid);			/* Not available: use UID */
#endif
	return GE_str(str);
}

/*
 * Return the Eiffel string filled in with the name associated with `gid'
 * if found in /etc/group. Otherwise, return fill it in with the numeric
 * value.
 */
EIF_REFERENCE eif_file_group(int gid)
{
	char str[NAME_MAX];
#ifdef HAS_GETGRGID
	struct group* gp; /* %%ss moved from above */

	gp = getgrgid(gid);
	if (gp == (struct group*)0)
		sprintf(str, "%d", gid);		/* Not available: use GID */
	else
		strcpy(str, gp->gr_name);		/* Available: fetch login name */
#else
	sprintf(str, "%d", gid);			/* Not available: use UID */
#endif
	return GE_str(str);
}

/*
 * Get an integer from `f'.
 */
EIF_INTEGER eif_file_gib(FILE* f)
{
	EIF_INTEGER i;
	errno = 0;
	if (fread (&i, sizeof(EIF_INTEGER), 1, f) != 1) {
		eise_io("FILE: unable to read INTEGER value.");
	}
	return i;
}

/*
 * Get a real from `f'.
 */
EIF_REAL_32 eif_file_grb(FILE* f)
{
	EIF_REAL_32 r;
	errno = 0;
	if (fread (&r, sizeof(EIF_REAL_32), 1, f) != 1) {
		eise_io("FILE: unable to read REAL_32 value.");
	}
	return r;
}

/*
 * Get a double from `f'.
 */
EIF_REAL_64 eif_file_gdb(FILE* f)
{
	EIF_REAL_64 d;
	errno = 0;
	if (fread (&d, sizeof(EIF_REAL_64), 1, f) != 1) {
		eise_io("FILE: unable to read REAL_64 value.");
	}
	return d;
}

/*
 * Open file `name' with the corresponding type `how'.
 */
EIF_POINTER eif_file_binary_open(EIF_FILENAME name, int how)
{
	FILE* fp;
	EIF_NATIVE_CHAR l_mode[FILE_TYPE_MAX];
	errno = 0;
#ifdef EIF_WINDOWS
	rt_file_set_open_mode(l_mode, how, 'b');
#else
	rt_file_set_open_mode(l_mode, how, '\0');
#endif
	fp = (FILE*)rt_file_fopen(name, l_mode);
	if (fp == (FILE*)0) {
		esys(); /* Open failed, raise exception */
	}
	return (EIF_POINTER)fp;

}

/*
 * Open file `fd' with the corresponding type `how'.
 */
EIF_POINTER eif_file_binary_dopen(int fd, int how)
{
	FILE* fp;
	EIF_NATIVE_CHAR l_mode[FILE_TYPE_MAX];
	errno = 0;
#ifdef EIF_WINDOWS
	rt_file_set_open_mode(l_mode, how, 'b');
#else
	rt_file_set_open_mode(l_mode, how, '\0');
#endif
	fp = (FILE*)rt_file_fdopen(fd, l_mode);
	if (fp == (FILE*)0) {
		esys(); /* Open failed, raise exception */
	}
	return (EIF_POINTER)fp;
}

/*
 * Reopen file `name' with the corresponding type `how' and substitute that
 * to the old stream described by `old'. This is useful to redirect 'stdout'
 * to another place, for instance.
 */
EIF_POINTER eif_file_binary_reopen(EIF_FILENAME name, int how, FILE* old)
{
	FILE* fp;
	EIF_NATIVE_CHAR l_mode[FILE_TYPE_MAX];
	errno = 0;
#ifdef EIF_WINDOWS
	rt_file_set_open_mode(l_mode, how, 'b');
#else
	rt_file_set_open_mode(l_mode, how, '\0');
#endif
	fp = (FILE*)rt_file_freopen(name, l_mode, old);
	if (fp == (FILE*)0) {
		esys(); /* Open failed, raise exception */
	}
	return (EIF_POINTER)fp;
}

/*
 * Write `number' on `f'.
 */
void eif_file_pib(FILE* f, EIF_INTEGER number)
{
	errno = 0;
	if (fwrite(&number, sizeof(EIF_INTEGER),1, f) != 1) {
		eise_io("FILE: unable to write INTEGER value.");
	}
}

/*
 * Write `number' on `f'.
 */
void eif_file_prb(FILE* f, EIF_REAL_32 number)
{
	errno = 0;
    if (fwrite(&number, sizeof(EIF_REAL_32),1, f) != 1) {
		eise_io("FILE: unable to write REAL_32 value.");
	}
}

/*
 * Write double `val' onto `f'.
 */
void eif_file_pdb(FILE* f, EIF_REAL_64 val)
{
	errno = 0;
	if (fwrite(&val, sizeof(EIF_REAL_64), 1, f) != 1) {
		eise_io("FILE: unable to write REAL_64 value.");
	}
}

/*
 * Access time of a file.
 * Seconds since epoch (01 January 1970) in UTC or 0 if time cannot be retrieved.
 * mode: Mode of operation: non-zero for modification and zero for access time.
 */
static EIF_INTEGER eif_file_date_for(EIF_FILENAME name, int mode)
{
	EIF_INTEGER result = 0;
#ifdef EIF_WINDOWS
		/* On NTFS file system, windows store UTC file stamps in 100 of nanoseconds
		 * starting from January 1st 0. Converted in seconds, this time is greater
		 * than 232 therefore we substract the EPOCH date January 1st 1970 to get
		 * a 32 bits representation of the date.
		 * FIXME: Manu 01/28/2004: On FAT file system, the date is in local time,
		 * meaning that the code below does not compensate if you change your timezone
		 * and will return a different date value for the same stamp just because
		 * you are in different time zone.
		 */

		 /* WARNING: This is using the Ansi version of the Win32 API. Remember
		  * that if you are doing any change below.
		  */

	WIN32_FIND_DATAW l_find_data;
	HANDLE l_file_handle;
	ULARGE_INTEGER l_date;

	l_file_handle = FindFirstFileW(name, &l_find_data);
	if (l_file_handle != INVALID_HANDLE_VALUE) {
			/* We do not need the file handle anymore, so we close it to
			 * avoid handle leak. */
		FindClose(l_file_handle);
		if (mode) {
			l_date.LowPart = l_find_data.ftLastWriteTime.dwLowDateTime;
			l_date.HighPart = l_find_data.ftLastWriteTime.dwHighDateTime;
		} else {
			l_date.LowPart = l_find_data.ftLastAccessTime.dwLowDateTime;
			l_date.HighPart = l_find_data.ftLastAccessTime.dwHighDateTime;
		}
			/* Convert 100-nanosecond intervals to seconds
			 * and ajust "1 Jan 1601" to "1 Jan 1970".
			 * The difference between "1 Jan 1601" and "1 Jan 1970"
			 * can be precomputed using the following code:
			 *	SYSTEMTIME epoch = {1970, 1, 0, 1, 0, 0, 0, 0};
			 *	FILETIME epoch_file;
			 *	ULARGE_INTEGER epoch_date;
			 *	SystemTimeToFileTime (&epoch, &epoch_file);
			 *	epoch_date.LowPart = epoch_file.dwLowDateTime;
			 *	epoch_date.HighPart = epoch_file.dwHighDateTime;
			 * time_shift = epoch_date.QuadPart / 10000000UL; // 11644473600
			 */
		result = (EIF_INTEGER)(l_date.QuadPart / GE_nat64(10000000) - GE_nat64(11644473600));
	}
#else
	rt_stat_buf	info;
	if (-1 != eif_file_stat(name, &info, 1)) {
		result = (mode ? (EIF_INTEGER)info.st_mtime: (EIF_INTEGER)info.st_atime);
	}
#endif
	return result;
}

/*
 * Modification time of a file.
 * Seconds since epoch (01 January 1970) in UTC or 0 if time cannot be retrieved.
 */
EIF_INTEGER eif_file_date(EIF_FILENAME name)
{
	return eif_file_date_for(name, 1);
}

/*
 * Access time of a file.
 * Seconds since epoch (01 January 1970) in UTC or 0 if time cannot be retrieved.
 */
EIF_INTEGER eif_file_access_date(EIF_FILENAME name)
{
	return eif_file_date_for(name, 0);
}

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
EIF_INTEGER eif_file_mkstemp(EIF_FILENAME a_template, EIF_BOOLEAN is_text_mode)
{
	int fd;
#ifdef EIF_WINDOWS
	{
		size_t len = wcslen(a_template);
		size_t j, index;
		int32_t i, l_max;

		/* These are the (62) characters used in temporary filenames. */
		static const wchar_t letters[] = L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

		/* User may supply more than six trailing Xs */
		for (index = len - 6; index > 0 && a_template[index - 1] == L'X'; index--);

		/* Like OpenBSD, mkstemp() will try at least 2 ** 31 combinations before * giving up. */
		l_max = GE_max_int32;
		for (i = 0; i < l_max; i++) {
			for (j = index; j < len; j++) {
				a_template[j] = letters[rand() % 62];
			}
			fd = _wsopen(a_template, _O_CREAT | _O_EXCL | _O_RDWR | (is_text_mode ? _O_TEXT : _O_BINARY) | _O_NOINHERIT, _SH_DENYRW, _S_IREAD | _S_IWRITE);
			/* Success, if the file descriptor is valid or if there is a creation error that is not due to a file already existing. */
			if ((fd != -1) || (fd == -1 && errno != EEXIST)) {
				break;
			}
		}
	}
#else
	fd = mkstemp(a_template);
#endif

	return (EIF_INTEGER) fd;
}

/* Needed to compile ISE's compiler. */
void ca_store(char *area, long int siz, FILE *fil)
{
	if (fwrite(area, sizeof(char), siz, fil) != (size_t) siz)
		xraise(EN_IO);
}

/* Needed to compile ISE's compiler. */
void write_int(FILE *file, EIF_INTEGER_32 val)
{
	fwrite(&val, sizeof(EIF_INTEGER_32), 1, file);
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
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

#ifndef EIF_CONSOLE_C
#define EIF_CONSOLE_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef EIF_CONSOLE_H
#include "eif_console.h"
#endif
#ifndef EIF_FILE_H
#include "eif_file.h"
#endif
#ifndef GE_CONSOLE_H
#include "ge_console.h"
#endif

#ifdef EIF_WINDOWS
#include <windows.h>
#endif
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

EIF_POINTER console_def(EIF_INTEGER file)
{
#ifdef EIF_WINDOWS
		/* The following is needed to avoid the function `WideCharToMultiByte`
		   in ENCODING_IMP.cwin_wide_char_to_multi_byte to produce an error
		   ERROR_INVALID_PARAMETER when the code page passed as argument is
		   the code page of the console. */
	UINT l_code_page;
	l_code_page = GetConsoleOutputCP();
	if (l_code_page != 0) {
		SetConsoleOutputCP(l_code_page);
	}
#endif
	switch (file) {
	case 0:
		return (EIF_POINTER)stdin;
	case 1:
		setvbuf(stdout, NULL, _IONBF, 0);
		return (EIF_POINTER)stdout;
	case 2:
		setvbuf (stderr, NULL, _IONBF, 0);
		return (EIF_POINTER)stderr;
	default:
		return NULL;
	}
}

EIF_BOOLEAN console_eof(FILE* fp)
{
	GE_show_console();
	return eif_file_feof(fp);
}

EIF_CHARACTER_8 console_separator(FILE *f)
{
	GE_show_console();
	return eif_file_lh(f);
}

void console_ps(FILE* f, char* str, EIF_INTEGER len)
{
	GE_show_console();
	eif_file_ps(f, str, len);
}

void console_pr(FILE* f, EIF_REAL_32 number)
{
	GE_show_console();
	eif_file_pr(f, number);
}

void console_pc(FILE* f, EIF_CHARACTER_8 c)
{
	GE_show_console();
	eif_file_pc(f, c);
}

void console_pd(FILE* f, EIF_REAL_64 val)
{
	GE_show_console();
	eif_file_pd(f, val);
}

void console_pi(FILE* f, EIF_INTEGER number)
{
	GE_show_console();
	eif_file_pi(f, number);
}

void console_tnwl(FILE* f)
{
	GE_show_console();
	console_pc(f,'\n');
}

EIF_CHARACTER_8 console_readchar(FILE* f)
{
	GE_show_console();
	return eif_file_gc(f);
}

EIF_REAL_32 console_readreal(FILE* f)
{
	GE_show_console();
	return eif_file_gr(f);
}

EIF_INTEGER console_readint(FILE* f)
{
	GE_show_console();
	return eif_file_gi(f);
}

EIF_REAL_64 console_readdouble(FILE* f)
{
	GE_show_console();
	return eif_file_gd(f);
}

EIF_INTEGER console_readword(FILE* f, char* s, EIF_INTEGER bound, EIF_INTEGER start)
{
	GE_show_console();
	return eif_file_gw(f, s, bound, start);
}

EIF_INTEGER console_readline(FILE* f, char* s, EIF_INTEGER bound, EIF_INTEGER start)
{
	GE_show_console();
	return eif_file_gs(f, s, bound, start);
}

void console_next_line(FILE* f)
{
	GE_show_console();
	eif_file_tnil(f);
}

EIF_INTEGER console_readstream(FILE* f, char* s, EIF_INTEGER bound)
{
	GE_show_console();
	return eif_file_gss(f, s, bound);
}

void console_file_close (FILE* f)
{
	GE_show_console();
	eif_file_close(f);
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
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

#ifndef GE_COM_FAILURE_C
#define GE_COM_FAILURE_C
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef GE_COM_FAILURE_H
#include "ge_com_failure.h"
#endif

#ifdef EIF_WINDOWS
#include <winerror.h>
#include <tchar.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

EIF_INTEGER GE_ccom_hresult(EIF_POINTER an_exception_code)
{
#ifdef EIF_WINDOWS
	char* stopstring = NULL;
	long result = 0, high_bits = 0, low_bits = 0;
	char high_str[7];
	char* exception_code = (char*)(an_exception_code);

	if (exception_code != NULL) {
		strncpy(high_str, exception_code, 6);
		high_str[6] = '\0';

		high_bits = strtol(high_str, &stopstring, 16);
		low_bits = strtol(exception_code + 6, &stopstring, 16);
		result = (high_bits << 16) + low_bits;
	}
	return (EIF_INTEGER)result;
#else
	return 0;
#endif
}

EIF_INTEGER GE_ccom_hresult_code(EIF_INTEGER an_hresult)
{
#ifdef EIF_WINDOWS
	return HRESULT_CODE(an_hresult);
#else
	return 0;
#endif
}

EIF_INTEGER GE_ccom_hresult_facility(EIF_INTEGER an_hresult)
{
#ifdef EIF_WINDOWS
	return HRESULT_FACILITY(an_hresult);
#else
	return 0;
#endif
}

/*
 * Get text from error `a_code'. It is up to the caller to free
 * the returned buffer using `GE_ccom_local_free'.
 */
EIF_POINTER GE_ccom_error_text(EIF_INTEGER a_code)
{
#ifdef EIF_WINDOWS
	LPVOID result;
	FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		a_code,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
		(LPTSTR)&result,
		0,
		NULL
		);
	return result;
#else
	return 0;
#endif
}

/*
 * Number of characters in `ptr'.
 */
EIF_INTEGER_32 GE_ccom_strlen(EIF_POINTER ptr)
{
#ifdef EIF_WINDOWS
	return (EIF_INTEGER_32)_tcslen((TCHAR*)ptr);
#else
	return 0;
#endif
}

/*
 * Number of bytes occupied by a TCHAR.
 */
EIF_INTEGER_32 GE_ccom_character_size(void)
{
#ifdef EIF_WINDOWS
	return sizeof(TCHAR);
#else
	return 0;
#endif
}

/*
 * Free `a_ptr' using LocalFree.
 */
void GE_ccom_local_free(EIF_POINTER a_ptr)
{
#ifdef EIF_WINDOWS
	LocalFree((HLOCAL)a_ptr);
#endif
}

#ifdef __cplusplus
}
#endif

#endif
#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif
