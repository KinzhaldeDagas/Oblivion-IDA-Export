0x7A6D30: fild    [esp+arg_0]
0x7A6D34: push    esi
0x7A6D35: fld     qword ptr ds:0A89C50h
0x7A6D3B: mov     esi, offset flt_B42A90
0x7A6D40: jmp     short loc_7A6D44
0x7A6D42: fxch    st(1)
0x7A6D44: fxch    st(1)
0x7A6D46: call    Double_To_SInt32
0x7A6D4B: mov     ecx, eax
0x7A6D4D: mov     eax, 834E0B5Fh
0x7A6D52: imul    ecx
0x7A6D54: add     edx, ecx
0x7A6D56: imul    ecx, 41A7h
0x7A6D5C: sar     edx, 10h
0x7A6D5F: mov     eax, edx
0x7A6D61: shr     eax, 1Fh
0x7A6D64: add     eax, edx
0x7A6D66: imul    eax, 7FFFFFFFh
0x7A6D6C: sub     ecx, eax
0x7A6D6E: test    ecx, ecx
0x7A6D70: mov     [esp+4+arg_0], ecx
0x7A6D74: jg      short loc_7A6D80
0x7A6D76: add     ecx, 7FFFFFFFh
0x7A6D7C: mov     [esp+4+arg_0], ecx
0x7A6D80: fild    [esp+4+arg_0]
0x7A6D84: add     esi, 4
0x7A6D87: cmp     esi, offset dbl_B42C90
0x7A6D8D: fst     [esp+4+arg_0]
0x7A6D91: fld     [esp+4+arg_0]
0x7A6D95: fmul    st, st(2)
0x7A6D97: fstp    dword ptr [esi-4]
0x7A6D9A: jl      short loc_7A6D42
0x7A6D9C: fstp    st(1)
0x7A6D9E: pop     esi
0x7A6D9F: fstp    qword ptr ds:0B42C90h
0x7A6DA5: retn
