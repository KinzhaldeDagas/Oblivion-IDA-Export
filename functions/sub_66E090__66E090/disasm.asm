0x66E090: push    ecx
0x66E091: push    esi
0x66E092: mov     esi, ecx
0x66E094: cmp     dword ptr [esi+57Ch], 0
0x66E09B: jnz     short loc_66E0C7
0x66E09D: mov     eax, [esi]
0x66E09F: mov     edx, [eax+0ECh]
0x66E0A5: call    edx
0x66E0A7: fmul    dword ptr ds:0B37D28h
0x66E0AD: mov     eax, [esp+8+arg_0]
0x66E0B1: push    ecx
0x66E0B2: fstp    [esp+0Ch+var_4]
0x66E0B6: mov     ecx, esi
0x66E0B8: fld     [esp+0Ch+var_4]
0x66E0BC: fstp    [esp+0Ch+var_C]; float
0x66E0BF: push    2; int
0x66E0C1: push    eax; int
0x66E0C2: call    sub_66D120
0x66E0C7: pop     esi
0x66E0C8: pop     ecx
0x66E0C9: retn    4
