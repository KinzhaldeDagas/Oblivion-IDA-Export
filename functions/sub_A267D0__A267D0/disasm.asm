0xA267D0: push    esi
0xA267D1: mov     esi, dword_B3CA94
0xA267D7: test    esi, esi
0xA267D9: jz      short loc_A267F7
0xA267DB: lea     eax, [esi+4]
0xA267DE: push    eax; lpAddend
0xA267DF: call    ds:InterlockedDecrement
0xA267E5: test    eax, eax
0xA267E7: jnz     short loc_A267F7
0xA267E9: test    esi, esi
0xA267EB: jz      short loc_A267F7
0xA267ED: mov     edx, [esi]
0xA267EF: mov     eax, [edx]
0xA267F1: push    1
0xA267F3: mov     ecx, esi
0xA267F5: call    eax
0xA267F7: pop     esi
0xA267F8: retn
