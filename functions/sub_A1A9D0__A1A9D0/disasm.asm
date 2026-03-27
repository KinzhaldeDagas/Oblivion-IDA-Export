0xA1A9D0: push    esi
0xA1A9D1: mov     esi, dword_B35418
0xA1A9D7: test    esi, esi
0xA1A9D9: jz      short loc_A1A9F7
0xA1A9DB: lea     eax, [esi+4]
0xA1A9DE: push    eax; lpAddend
0xA1A9DF: call    ds:InterlockedDecrement
0xA1A9E5: test    eax, eax
0xA1A9E7: jnz     short loc_A1A9F7
0xA1A9E9: test    esi, esi
0xA1A9EB: jz      short loc_A1A9F7
0xA1A9ED: mov     edx, [esi]
0xA1A9EF: mov     eax, [edx]
0xA1A9F1: push    1
0xA1A9F3: mov     ecx, esi
0xA1A9F5: call    eax
0xA1A9F7: pop     esi
0xA1A9F8: retn
