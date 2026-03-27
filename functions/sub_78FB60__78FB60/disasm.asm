0x78FB60: mov     ecx, [esp+arg_0]
0x78FB64: sub     esp, 0Ch
0x78FB67: test    ecx, ecx
0x78FB69: ja      short loc_78FB81
0x78FB6B: xor     ecx, ecx
0x78FB6D: lea     edx, ds:0[ecx*4]
0x78FB74: push    edx; Size
0x78FB75: call    FormHeapAlloc
0x78FB7A: add     esp, 4
0x78FB7D: add     esp, 0Ch
0x78FB80: retn
0x78FB81: or      eax, 0FFFFFFFFh
0x78FB84: xor     edx, edx
0x78FB86: div     ecx
0x78FB88: cmp     eax, 4
0x78FB8B: jnb     short loc_78FB6D
0x78FB8D: lea     eax, [esp+0Ch+arg_0]
0x78FB91: push    eax; char **
0x78FB92: lea     ecx, [esp+10h+var_C]; this
0x78FB96: mov     [esp+10h+arg_0], 0
0x78FB9E: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x78FBA3: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x78FBA8: lea     ecx, [esp+10h+var_C]
0x78FBAC: push    ecx
0x78FBAD: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x78FBB5: call    ThrowException??
