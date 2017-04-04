/* Generated by Nim Compiler v0.12.1 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/renzhen/Nim12.0/lib -o src/nimcache/stdlib_endians.o src/nimcache/stdlib_endians.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
N_NIMCALL(void, swapendian64_141011)(void* outp, void* inp);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_23601)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, swapendian32_141025)(void* outp, void* inp);
N_NIMCALL(void, swapendian16_141039)(void* outp, void* inp);
static N_INLINE(void, littleendian64_141062)(void* outp, void* inp);
static N_INLINE(void, littleendian32_141069)(void* outp, void* inp);
static N_INLINE(void, littleendian16_141076)(void* outp, void* inp);
static N_INLINE(void, bigendian64_141083)(void* outp, void* inp);
static N_INLINE(void, bigendian32_141090)(void* outp, void* inp);
static N_INLINE(void, bigendian16_141097)(void* outp, void* inp);
extern TFrame* frameptr_20842;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_20842 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_20842).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_20842;
	frameptr_20842 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_23601();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_20842 = (*frameptr_20842).prev;
}

N_NIMCALL(void, swapendian64_141011)(void* outp, void* inp) {
	NCSTRING i;
	NCSTRING o;
	nimfr("swapEndian64", "endians.nim")
	nimln(16, "endians.nim");
	i = ((NCSTRING) (inp));
	nimln(17, "endians.nim");
	o = ((NCSTRING) (outp));
	nimln(18, "endians.nim");
	o[((NI) 0)] = i[((NI) 7)];
	nimln(19, "endians.nim");
	o[((NI) 1)] = i[((NI) 6)];
	nimln(20, "endians.nim");
	o[((NI) 2)] = i[((NI) 5)];
	nimln(21, "endians.nim");
	o[((NI) 3)] = i[((NI) 4)];
	nimln(22, "endians.nim");
	o[((NI) 4)] = i[((NI) 3)];
	nimln(23, "endians.nim");
	o[((NI) 5)] = i[((NI) 2)];
	nimln(24, "endians.nim");
	o[((NI) 6)] = i[((NI) 1)];
	nimln(25, "endians.nim");
	o[((NI) 7)] = i[((NI) 0)];
	popFrame();
}

N_NIMCALL(void, swapendian32_141025)(void* outp, void* inp) {
	NCSTRING i;
	NCSTRING o;
	nimfr("swapEndian32", "endians.nim")
	nimln(30, "endians.nim");
	i = ((NCSTRING) (inp));
	nimln(31, "endians.nim");
	o = ((NCSTRING) (outp));
	nimln(32, "endians.nim");
	o[((NI) 0)] = i[((NI) 3)];
	nimln(33, "endians.nim");
	o[((NI) 1)] = i[((NI) 2)];
	nimln(34, "endians.nim");
	o[((NI) 2)] = i[((NI) 1)];
	nimln(35, "endians.nim");
	o[((NI) 3)] = i[((NI) 0)];
	popFrame();
}

N_NIMCALL(void, swapendian16_141039)(void* outp, void* inp) {
	NCSTRING i;
	NCSTRING o;
	nimfr("swapEndian16", "endians.nim")
	nimln(41, "endians.nim");
	i = ((NCSTRING) (inp));
	nimln(42, "endians.nim");
	o = ((NCSTRING) (outp));
	nimln(43, "endians.nim");
	o[((NI) 0)] = i[((NI) 1)];
	nimln(44, "endians.nim");
	o[((NI) 1)] = i[((NI) 0)];
	popFrame();
}

static N_INLINE(void, littleendian64_141062)(void* outp, void* inp) {
	nimfr("littleEndian64", "endians.nim")
	nimln(54, "endians.nim");
	memcpy(outp, inp, ((NI) 8));
	popFrame();
}

static N_INLINE(void, littleendian32_141069)(void* outp, void* inp) {
	nimfr("littleEndian32", "endians.nim")
	nimln(55, "endians.nim");
	memcpy(outp, inp, ((NI) 4));
	popFrame();
}

static N_INLINE(void, littleendian16_141076)(void* outp, void* inp) {
	nimfr("littleEndian16", "endians.nim")
	nimln(56, "endians.nim");
	memcpy(outp, inp, ((NI) 2));
	popFrame();
}

static N_INLINE(void, bigendian64_141083)(void* outp, void* inp) {
	nimfr("bigEndian64", "endians.nim")
	nimln(57, "endians.nim");
	swapendian64_141011(outp, inp);
	popFrame();
}

static N_INLINE(void, bigendian32_141090)(void* outp, void* inp) {
	nimfr("bigEndian32", "endians.nim")
	nimln(58, "endians.nim");
	swapendian32_141025(outp, inp);
	popFrame();
}

static N_INLINE(void, bigendian16_141097)(void* outp, void* inp) {
	nimfr("bigEndian16", "endians.nim")
	nimln(59, "endians.nim");
	swapendian16_141039(outp, inp);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_endiansInit000)(void) {
	nimfr("endians", "endians.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_endiansDatInit000)(void) {
}
