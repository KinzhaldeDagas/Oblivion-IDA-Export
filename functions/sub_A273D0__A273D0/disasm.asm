0xA273D0: push    esi
0xA273D1: mov     esi, dword_B43128
0xA273D7: test    esi, esi
0xA273D9: jz      short loc_A273F7
0xA273DB: lea     eax, [esi+4]
0xA273DE: push    eax; lpAddend
0xA273DF: call    ds:InterlockedDecrement
0xA273E5: test    eax, eax
0xA273E7: jnz     short loc_A273F7
0xA273E9: test    esi, esi
0xA273EB: jz      short loc_A273F7
0xA273ED: mov     edx, [esi]
0xA273EF: mov     eax, [edx]
0xA273F1: push    1
0xA273F3: mov     ecx, esi
0xA273F5: call    eax
0xA273F7: pop     esi
0xA273F8: retn
