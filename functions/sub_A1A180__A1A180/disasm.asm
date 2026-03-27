0xA1A180: push    esi
0xA1A181: mov     esi, value
0xA1A187: test    esi, esi
0xA1A189: jz      short loc_A1A1A7
0xA1A18B: lea     eax, [esi+4]
0xA1A18E: push    eax; lpAddend
0xA1A18F: call    ds:InterlockedDecrement
0xA1A195: test    eax, eax
0xA1A197: jnz     short loc_A1A1A7
0xA1A199: test    esi, esi
0xA1A19B: jz      short loc_A1A1A7
0xA1A19D: mov     edx, [esi]
0xA1A19F: mov     eax, [edx]
0xA1A1A1: push    1
0xA1A1A3: mov     ecx, esi
0xA1A1A5: call    eax
0xA1A1A7: pop     esi
0xA1A1A8: retn
