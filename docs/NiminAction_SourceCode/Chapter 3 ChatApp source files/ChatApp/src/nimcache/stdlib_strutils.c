/* Generated by Nim Compiler v0.12.1 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/renzhen/Nim12.0/lib -o src/nimcache/stdlib_strutils.o src/nimcache/stdlib_strutils.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Valueerror4049 Valueerror4049;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell49347 Cell49347;
typedef struct Cellseq49363 Cellseq49363;
typedef struct Gcheap51418 Gcheap51418;
typedef struct Gcstack51416 Gcstack51416;
typedef struct Cellset49359 Cellset49359;
typedef struct Pagedesc49355 Pagedesc49355;
typedef struct Memregion31291 Memregion31291;
typedef struct Smallchunk31243 Smallchunk31243;
typedef struct Llchunk31285 Llchunk31285;
typedef struct Bigchunk31245 Bigchunk31245;
typedef struct Intset31217 Intset31217;
typedef struct Trunk31213 Trunk31213;
typedef struct Avlnode31289 Avlnode31289;
typedef struct Gcstat51414 Gcstat51414;
typedef struct Basechunk31241 Basechunk31241;
typedef struct Freecell31233 Freecell31233;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  Valueerror4049  {
  Exception Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell49347  {
NI refcount;
TNimType* typ;
};
struct  Cellseq49363  {
NI len;
NI cap;
Cell49347** d;
};
struct  Cellset49359  {
NI counter;
NI max;
Pagedesc49355* head;
Pagedesc49355** data;
};
typedef Smallchunk31243* TY31306[512];
typedef Trunk31213* Trunkbuckets31215[256];
struct  Intset31217  {
Trunkbuckets31215 data;
};
struct  Memregion31291  {
NI minlargeobj;
NI maxlargeobj;
TY31306 freesmallchunks;
Llchunk31285* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk31245* freechunkslist;
Intset31217 chunkstarts;
Avlnode31289* root;
Avlnode31289* deleted;
Avlnode31289* last;
Avlnode31289* freeavlnodes;
};
struct  Gcstat51414  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap51418  {
Gcstack51416* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq49363 zct;
Cellseq49363 decstack;
Cellset49359 cycleroots;
Cellseq49363 tempstack;
NI recgclock;
Memregion31291 region;
Gcstat51414 stat;
};
typedef NU8 TY82458[32];
struct  Gcstack51416  {
Gcstack51416* prev;
Gcstack51416* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY31222[8];
struct  Pagedesc49355  {
Pagedesc49355* next;
NI key;
TY31222 bits;
};
struct  Basechunk31241  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk31243  {
  Basechunk31241 Sup;
Smallchunk31243* next;
Smallchunk31243* prev;
Freecell31233* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk31285  {
NI size;
NI acc;
Llchunk31285* next;
};
struct  Bigchunk31245  {
  Basechunk31241 Sup;
Bigchunk31245* next;
Bigchunk31245* prev;
NI align;
NF data;
};
struct  Trunk31213  {
Trunk31213* next;
NI key;
TY31222 bits;
};
typedef Avlnode31289* TY31296[2];
struct  Avlnode31289  {
TY31296 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell31233  {
Freecell31233* next;
NI zerofield;
};
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_23601)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell49347*, usrtocell_53046)(void* usr);
static N_INLINE(void, rtladdzct_54604)(Cell49347* c);
N_NOINLINE(void, addzct_53017)(Cellseq49363* s, Cell49347* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, nsuToUpperChar)(NIM_CHAR c);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_81416, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
STRING_LITERAL(TMP284, "invalid integer: ", 17);
STRING_LITERAL(TMP642, "", 0);
STRING_LITERAL(TMP643, "\012", 1);
extern TFrame* frameptr_20842;
extern TNimType NTI25428; /* ref ValueError */
extern TNimType NTI4049; /* ValueError */
extern Gcheap51418 gch_51459;

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

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

N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x, NI minchars) {
	NimStringDesc* result;
	nimfr("intToStr", "strutils.nim")
	result = 0;
	result = nimIntToStr((x > 0? (x) : -(x)));
	{
		NI i_103062;
		NI HEX3Atmp_103064;
		NI res_103067;
		i_103062 = 0;
		HEX3Atmp_103064 = 0;
		HEX3Atmp_103064 = (NI)(((NI) (minchars)) - (result ? result->Sup.len : 0));
		res_103067 = ((NI) 1);
		{
			while (1) {
				NimStringDesc* LOC4;
				if (!(res_103067 <= HEX3Atmp_103064)) goto LA3;
				i_103062 = res_103067;
				LOC4 = 0;
				LOC4 = rawNewString(result->Sup.len + 1);
appendChar(LOC4, 48);
appendString(LOC4, result);
				result = LOC4;
				res_103067 += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NimStringDesc* LOC9;
		if (!(x < ((NI) 0))) goto LA7;
		LOC9 = 0;
		LOC9 = rawNewString(result->Sup.len + 1);
appendChar(LOC9, 45);
appendString(LOC9, result);
		result = LOC9;
	}
	LA7: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count) {
	NimStringDesc* result;
	nimfr("repeat", "strutils.nim")
	result = 0;
	result = mnewString(count);
	{
		NI i_103378;
		NI HEX3Atmp_103380;
		NI res_103383;
		i_103378 = 0;
		HEX3Atmp_103380 = 0;
		HEX3Atmp_103380 = (NI)(((NI) (count)) - ((NI) 1));
		res_103383 = ((NI) 0);
		{
			while (1) {
				if (!(res_103383 <= ((NI) (HEX3Atmp_103380)))) goto LA3;
				i_103378 = ((NI) (res_103383));
				result->data[i_103378] = c;
				res_103383 += ((NI) 1);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

static N_INLINE(Cell49347*, usrtocell_53046)(void* usr) {
	Cell49347* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(131, "gc.nim");
	result = ((Cell49347*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell49347))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_54604)(Cell49347* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(212, "gc.nim");
	addzct_53017((&gch_51459.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(264, "gc.nim");
	{
		Cell49347* c;
		nimln(349, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(265, "gc.nim");
		c = usrtocell_53046(src);
		nimln(182, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(267, "gc.nim");
	{
		Cell49347* c;
		nimln(349, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(268, "gc.nim");
		c = usrtocell_53046((*dest));
		nimln(269, "gc.nim");
		{
			nimln(180, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(181, "gc.nim");
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			nimln(270, "gc.nim");
			rtladdzct_54604(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(271, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s) {
	NI result;
	NI L;
	nimfr("parseInt", "strutils.nim")
	result = 0;
	L = npuParseInt(s, (&result), ((NI) 0));
	{
		NIM_BOOL LOC3;
		Valueerror4049* e_103095;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = !((L == (s ? s->Sup.len : 0)));
		if (LOC3) goto LA4;
		LOC3 = (L == ((NI) 0));
		LA4: ;
		if (!LOC3) goto LA5;
		e_103095 = 0;
		e_103095 = (Valueerror4049*) newObj((&NTI25428), sizeof(Valueerror4049));
		(*e_103095).Sup.Sup.m_type = (&NTI4049);
		LOC7 = 0;
		LOC7 = rawNewString(s->Sup.len + 17);
appendString(LOC7, ((NimStringDesc*) &TMP284));
appendString(LOC7, s);
		asgnRefNoCycle((void**) (&(*e_103095).Sup.message), LOC7);
		raiseException((Exception*)e_103095, "ValueError");
	}
	LA5: ;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_CHAR, nsuToLowerChar)(NIM_CHAR c) {
	NIM_CHAR result;
	nimfr("toLower", "strutils.nim")
	result = 0;
	nimln(198, "strutils.nim");
	{
		NI TMP288;
		nimln(1098, "system.nim");
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3;
		nimln(199, "strutils.nim");
		TMP288 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
		result = ((NIM_CHAR) (((NI)chckRange((NI)(TMP288), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA3: ;
	{
		nimln(201, "strutils.nim");
		result = c;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* s) {
	NimStringDesc* result;
	nimfr("toLower", "strutils.nim")
	result = 0;
	nimln(210, "strutils.nim");
	result = mnewString(((NI)chckRange((s ? s->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	{
		NI i_101592;
		NI HEX3Atmp_101594;
		NI TMP287;
		NI res_101597;
		i_101592 = 0;
		HEX3Atmp_101594 = 0;
		nimln(211, "strutils.nim");
		TMP287 = subInt((s ? s->Sup.len : 0), ((NI) 1));
		HEX3Atmp_101594 = (NI)(TMP287);
		nimln(1874, "system.nim");
		res_101597 = ((NI) 0);
		{
			nimln(1875, "system.nim");
			while (1) {
				NI TMP289;
				if (!(res_101597 <= HEX3Atmp_101594)) goto LA3;
				nimln(1876, "system.nim");
				i_101592 = res_101597;
				nimln(212, "strutils.nim");
				if ((NU)(i_101592) > (NU)(result->Sup.len)) raiseIndexError();
				if ((NU)(i_101592) > (NU)(s->Sup.len)) raiseIndexError();
				result->data[i_101592] = nsuToLowerChar(s->data[i_101592]);
				nimln(1895, "system.nim");
				TMP289 = addInt(res_101597, ((NI) 1));
				res_101597 = (NI)(TMP289);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b) {
	NI result;
	NI i;
	NI m;
	NI TMP304;
	nimfr("cmpIgnoreCase", "strutils.nim")
{	result = 0;
	nimln(268, "strutils.nim");
	i = ((NI) 0);
	nimln(269, "strutils.nim");
	m = (((a ? a->Sup.len : 0) <= (b ? b->Sup.len : 0)) ? (a ? a->Sup.len : 0) : (b ? b->Sup.len : 0));
	{
		nimln(270, "strutils.nim");
		while (1) {
			NIM_CHAR LOC3;
			NIM_CHAR LOC4;
			NI TMP302;
			NI TMP303;
			if (!(i < m)) goto LA2;
			nimln(271, "strutils.nim");
			if ((NU)(i) > (NU)(a->Sup.len)) raiseIndexError();
			LOC3 = 0;
			LOC3 = nsuToLowerChar(a->data[i]);
			if ((NU)(i) > (NU)(b->Sup.len)) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuToLowerChar(b->data[i]);
			TMP302 = subInt(((NI) (((NU8)(LOC3)))), ((NI) (((NU8)(LOC4)))));
			result = (NI)(TMP302);
			nimln(272, "strutils.nim");
			{
				nimln(349, "system.nim");
				if (!!((result == ((NI) 0)))) goto LA7;
				nimln(272, "strutils.nim");
				goto BeforeRet;
			}
			LA7: ;
			nimln(273, "strutils.nim");
			TMP303 = addInt(i, ((NI) 1));
			i = (NI)(TMP303);
		} LA2: ;
	}
	nimln(274, "strutils.nim");
	TMP304 = subInt((a ? a->Sup.len : 0), (b ? b->Sup.len : 0));
	result = (NI)(TMP304);
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_CHAR, nsuToUpperChar)(NIM_CHAR c) {
	NIM_CHAR result;
	nimfr("toUpper", "strutils.nim")
	result = 0;
	nimln(221, "strutils.nim");
	{
		NI TMP446;
		nimln(1098, "system.nim");
		if (!(((NU8)(c)) >= ((NU8)(97)) && ((NU8)(c)) <= ((NU8)(122)))) goto LA3;
		nimln(222, "strutils.nim");
		TMP446 = subInt(((NI) (((NU8)(c)))), ((NI) 32));
		result = ((NIM_CHAR) (((NI)chckRange((NI)(TMP446), ((NI) 0), ((NI) 255)))));
	}
	goto LA1;
	LA3: ;
	{
		nimln(224, "strutils.nim");
		result = c;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuToUpperStr)(NimStringDesc* s) {
	NimStringDesc* result;
	nimfr("toUpper", "strutils.nim")
	result = 0;
	nimln(233, "strutils.nim");
	result = mnewString(((NI)chckRange((s ? s->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	{
		NI i_101678;
		NI HEX3Atmp_101680;
		NI TMP445;
		NI res_101683;
		i_101678 = 0;
		HEX3Atmp_101680 = 0;
		nimln(234, "strutils.nim");
		TMP445 = subInt((s ? s->Sup.len : 0), ((NI) 1));
		HEX3Atmp_101680 = (NI)(TMP445);
		nimln(1874, "system.nim");
		res_101683 = ((NI) 0);
		{
			nimln(1875, "system.nim");
			while (1) {
				NI TMP447;
				if (!(res_101683 <= HEX3Atmp_101680)) goto LA3;
				nimln(1876, "system.nim");
				i_101678 = res_101683;
				nimln(235, "strutils.nim");
				if ((NU)(i_101678) > (NU)(result->Sup.len)) raiseIndexError();
				if ((NU)(i_101678) > (NU)(s->Sup.len)) raiseIndexError();
				result->data[i_101678] = nsuToUpperChar(s->data[i_101678]);
				nimln(1895, "system.nim");
				TMP447 = addInt(res_101683, ((NI) 1));
				res_101683 = (NI)(TMP447);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuIndent)(NimStringDesc* s, NI count, NimStringDesc* padding) {
	NimStringDesc* result;
	NI i;
	nimfr("indent", "strutils.nim")
	result = 0;
	result = copyString(((NimStringDesc*) &TMP642));
	i = ((NI) 0);
	{
		NimStringDesc* line_103892;
		NI first_103923;
		NI last_103925;
		line_103892 = 0;
		first_103923 = ((NI) 0);
		last_103925 = ((NI) 0);
		{
			while (1) {
				{
					while (1) {
						if (!!((((NU8)(s->data[last_103925])) == ((NU8)(0)) || ((NU8)(s->data[last_103925])) == ((NU8)(13)) || ((NU8)(s->data[last_103925])) == ((NU8)(10))))) goto LA5;
						last_103925 += ((NI) 1);
					} LA5: ;
				}
				line_103892 = copyStrLast(s, first_103923, (NI)(last_103925 - ((NI) 1)));
				{
					if (!!((i == ((NI) 0)))) goto LA8;
					result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TMP643));
				}
				LA8: ;
				{
					NI j_103903;
					NI res_103917;
					j_103903 = 0;
					res_103917 = ((NI) 1);
					{
						while (1) {
							if (!(res_103917 <= ((NI) (count)))) goto LA12;
							j_103903 = ((NI) (res_103917));
							result = resizeString(result, padding->Sup.len + 0);
appendString(result, padding);
							res_103917 += ((NI) 1);
						} LA12: ;
					}
				}
				result = resizeString(result, line_103892->Sup.len + 0);
appendString(result, line_103892);
				i += ((NI) 1);
				{
					if (!((NU8)(s->data[last_103925]) == (NU8)(10))) goto LA15;
					last_103925 += ((NI) 1);
				}
				goto LA13;
				LA15: ;
				{
					if (!((NU8)(s->data[last_103925]) == (NU8)(13))) goto LA18;
					last_103925 += ((NI) 1);
					{
						if (!((NU8)(s->data[last_103925]) == (NU8)(10))) goto LA22;
						last_103925 += ((NI) 1);
					}
					LA22: ;
				}
				goto LA13;
				LA18: ;
				{
					goto LA2;
				}
				LA13: ;
				first_103923 = last_103925;
			}
		} LA2: ;
	}
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, TY82458 chars) {
	NimStringDesc* result;
	NI first;
	NI last;
	nimfr("strip", "strutils.nim")
	result = 0;
	first = ((NI) 0);
	last = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
	{
		if (!leading) goto LA3;
		{
			while (1) {
				if (!((chars[((NU8)(s->data[first]))/8] &(1<<(((NU8)(s->data[first]))%8)))!=0)) goto LA6;
				first += ((NI) 1);
			} LA6: ;
		}
	}
	LA3: ;
	{
		if (!trailing) goto LA9;
		{
			while (1) {
				NIM_BOOL LOC13;
				LOC13 = 0;
				LOC13 = (((NI) 0) <= last);
				if (!(LOC13)) goto LA14;
				LOC13 = ((chars[((NU8)(s->data[last]))/8] &(1<<(((NU8)(s->data[last]))%8)))!=0);
				LA14: ;
				if (!LOC13) goto LA12;
				last -= ((NI) 1);
			} LA12: ;
		}
	}
	LA9: ;
	result = copyStrLast(s, first, last);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void) {
	nimfr("strutils", "strutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void) {
}

