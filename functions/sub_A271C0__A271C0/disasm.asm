0xA271C0: push    esi
0xA271C1: mov     esi, dword_B430DC
0xA271C7: test    esi, esi
0xA271C9: jz      short loc_A271E7
0xA271CB: lea     eax, [esi+4]
0xA271CE: push    eax; lpAddend
0xA271CF: call    ds:InterlockedDecrement
0xA271D5: test    eax, eax
0xA271D7: jnz     short loc_A271E7
0xA271D9: test    esi, esi
0xA271DB: jz      short loc_A271E7
0xA271DD: mov     edx, [esi]
0xA271DF: mov     eax, [edx]
0xA271E1: push    1
0xA271E3: mov     ecx, esi
0xA271E5: call    eax
0xA271E7: pop     esi
0xA271E8: retn
