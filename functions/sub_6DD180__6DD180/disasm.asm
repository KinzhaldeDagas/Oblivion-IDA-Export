0x6DD180: push    ecx
0x6DD181: fldz
0x6DD183: push    ebx
0x6DD184: mov     ebx, [esp+8+arg_0]
0x6DD188: fstp    [esp+8+var_4]
0x6DD18C: push    ebp
0x6DD18D: push    esi
0x6DD18E: push    edi
0x6DD18F: mov     edi, [esp+14h+arg_4]
0x6DD193: mov     ebp, ecx
0x6DD195: xor     esi, esi
0x6DD197: jmp     short loc_6DD1A0
0x6DD199: align 10h
0x6DD1A0: fld     dword ptr [esi+0B24740h]
0x6DD1A6: push    ecx
0x6DD1A7: fmul    [esp+18h+arg_8]
0x6DD1AB: mov     ecx, ebp
0x6DD1AD: fstp    [esp+18h+arg_4]
0x6DD1B1: fld     [esp+18h+arg_4]
0x6DD1B5: fstp    [esp+18h+var_18]; float
0x6DD1B8: push    edi; int
0x6DD1B9: push    ebx; int
0x6DD1BA: call    sub_6DD0F0
0x6DD1BF: fmul    dword ptr [esi+0B2472Ch]
0x6DD1C5: add     esi, 4
0x6DD1C8: cmp     esi, 14h
0x6DD1CB: fadd    [esp+14h+var_4]
0x6DD1CF: fstp    [esp+14h+var_4]
0x6DD1D3: jl      short loc_6DD1A0
0x6DD1D5: fld     [esp+14h+var_4]
0x6DD1D9: pop     edi
0x6DD1DA: fmul    [esp+10h+arg_8]
0x6DD1DE: pop     esi
0x6DD1DF: pop     ebp
0x6DD1E0: pop     ebx
0x6DD1E1: fstp    [esp+4+arg_8]
0x6DD1E5: fld     [esp+4+arg_8]
0x6DD1E9: pop     ecx
0x6DD1EA: retn    0Ch
