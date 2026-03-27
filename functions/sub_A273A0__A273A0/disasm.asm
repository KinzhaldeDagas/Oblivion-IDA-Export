0xA273A0: push    esi
0xA273A1: mov     esi, dword_B43118
0xA273A7: test    esi, esi
0xA273A9: jz      short loc_A273C7
0xA273AB: lea     eax, [esi+4]
0xA273AE: push    eax; lpAddend
0xA273AF: call    ds:InterlockedDecrement
0xA273B5: test    eax, eax
0xA273B7: jnz     short loc_A273C7
0xA273B9: test    esi, esi
0xA273BB: jz      short loc_A273C7
0xA273BD: mov     edx, [esi]
0xA273BF: mov     eax, [edx]
0xA273C1: push    1
0xA273C3: mov     ecx, esi
0xA273C5: call    eax
0xA273C7: pop     esi
0xA273C8: retn
