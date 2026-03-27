0x54F740: mov     ecx, [esp+arg_0]
0x54F744: sub     esp, 0Ch
0x54F747: test    ecx, ecx
0x54F749: ja      short loc_54F75D
0x54F74B: xor     ecx, ecx
0x54F74D: imul    ecx, 34h ; '4'
0x54F750: push    ecx; Size
0x54F751: call    FormHeapAlloc
0x54F756: add     esp, 4
0x54F759: add     esp, 0Ch
0x54F75C: retn
0x54F75D: or      eax, 0FFFFFFFFh
0x54F760: xor     edx, edx
0x54F762: div     ecx
0x54F764: cmp     eax, 34h ; '4'
0x54F767: jnb     short loc_54F74D
0x54F769: lea     eax, [esp+0Ch+arg_0]
0x54F76D: push    eax; char **
0x54F76E: lea     ecx, [esp+10h+var_C]; this
0x54F772: mov     [esp+10h+arg_0], 0
0x54F77A: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x54F77F: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x54F784: lea     ecx, [esp+10h+var_C]
0x54F788: push    ecx
0x54F789: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x54F791: call    ThrowException??
