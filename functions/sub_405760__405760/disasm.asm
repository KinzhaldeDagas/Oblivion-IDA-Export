0x405760: push    ecx
0x405761: mov     eax, [ecx+0ACh]
0x405767: test    eax, eax
0x405769: push    esi
0x40576A: mov     esi, [esp+8+arg_0]
0x40576E: mov     [esp+8+var_4], 0
0x405776: mov     [esi], eax
0x405778: jz      short loc_405784
0x40577A: add     eax, 4
0x40577D: push    eax; lpAddend
0x40577E: call    ds:InterlockedIncrement
0x405784: mov     eax, esi
0x405786: pop     esi
0x405787: pop     ecx
0x405788: retn    4
