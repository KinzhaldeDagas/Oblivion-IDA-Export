0xA1A1B0: push    esi
0xA1A1B1: mov     esi, LodWaterRoot
0xA1A1B7: test    esi, esi
0xA1A1B9: jz      short loc_A1A1D7
0xA1A1BB: lea     eax, [esi+4]
0xA1A1BE: push    eax; lpAddend
0xA1A1BF: call    ds:InterlockedDecrement
0xA1A1C5: test    eax, eax
0xA1A1C7: jnz     short loc_A1A1D7
0xA1A1C9: test    esi, esi
0xA1A1CB: jz      short loc_A1A1D7
0xA1A1CD: mov     edx, [esi]
0xA1A1CF: mov     eax, [edx]
0xA1A1D1: push    1
0xA1A1D3: mov     ecx, esi
0xA1A1D5: call    eax
0xA1A1D7: pop     esi
0xA1A1D8: retn
