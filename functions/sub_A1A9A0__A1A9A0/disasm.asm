0xA1A9A0: push    esi
0xA1A9A1: mov     esi, dword_B35414
0xA1A9A7: test    esi, esi
0xA1A9A9: jz      short loc_A1A9C7
0xA1A9AB: lea     eax, [esi+4]
0xA1A9AE: push    eax; lpAddend
0xA1A9AF: call    ds:InterlockedDecrement
0xA1A9B5: test    eax, eax
0xA1A9B7: jnz     short loc_A1A9C7
0xA1A9B9: test    esi, esi
0xA1A9BB: jz      short loc_A1A9C7
0xA1A9BD: mov     edx, [esi]
0xA1A9BF: mov     eax, [edx]
0xA1A9C1: push    1
0xA1A9C3: mov     ecx, esi
0xA1A9C5: call    eax
0xA1A9C7: pop     esi
0xA1A9C8: retn
