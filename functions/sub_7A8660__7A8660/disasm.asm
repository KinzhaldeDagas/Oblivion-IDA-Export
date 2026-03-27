0x7A8660: mov     ecx, [esp+arg_0]
0x7A8664: sub     esp, 0Ch
0x7A8667: test    ecx, ecx
0x7A8669: ja      short loc_7A8681
0x7A866B: xor     ecx, ecx
0x7A866D: lea     edx, ds:0[ecx*8]
0x7A8674: push    edx; Size
0x7A8675: call    FormHeapAlloc
0x7A867A: add     esp, 4
0x7A867D: add     esp, 0Ch
0x7A8680: retn
0x7A8681: or      eax, 0FFFFFFFFh
0x7A8684: xor     edx, edx
0x7A8686: div     ecx
0x7A8688: cmp     eax, 8
0x7A868B: jnb     short loc_7A866D
0x7A868D: lea     eax, [esp+0Ch+arg_0]
0x7A8691: push    eax; char **
0x7A8692: lea     ecx, [esp+10h+var_C]; this
0x7A8696: mov     [esp+10h+arg_0], 0
0x7A869E: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x7A86A3: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x7A86A8: lea     ecx, [esp+10h+var_C]
0x7A86AC: push    ecx
0x7A86AD: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x7A86B5: call    ThrowException??
