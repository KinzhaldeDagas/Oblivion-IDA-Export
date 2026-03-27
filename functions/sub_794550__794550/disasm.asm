0x794550: mov     ecx, [esp+arg_0]
0x794554: sub     esp, 0Ch
0x794557: test    ecx, ecx
0x794559: ja      short loc_79456D
0x79455B: xor     ecx, ecx
0x79455D: shl     ecx, 4
0x794560: push    ecx; Size
0x794561: call    FormHeapAlloc
0x794566: add     esp, 4
0x794569: add     esp, 0Ch
0x79456C: retn
0x79456D: or      eax, 0FFFFFFFFh
0x794570: xor     edx, edx
0x794572: div     ecx
0x794574: cmp     eax, 10h
0x794577: jnb     short loc_79455D
0x794579: lea     eax, [esp+0Ch+arg_0]
0x79457D: push    eax; char **
0x79457E: lea     ecx, [esp+10h+var_C]; this
0x794582: mov     [esp+10h+arg_0], 0
0x79458A: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x79458F: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x794594: lea     ecx, [esp+10h+var_C]
0x794598: push    ecx
0x794599: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x7945A1: call    ThrowException??
