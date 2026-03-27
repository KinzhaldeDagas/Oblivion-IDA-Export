0xA1C190: push    esi
0xA1C191: mov     esi, dword_B362F4
0xA1C197: test    esi, esi
0xA1C199: jz      short loc_A1C1B7
0xA1C19B: lea     eax, [esi+4]
0xA1C19E: push    eax; lpAddend
0xA1C19F: call    ds:InterlockedDecrement
0xA1C1A5: test    eax, eax
0xA1C1A7: jnz     short loc_A1C1B7
0xA1C1A9: test    esi, esi
0xA1C1AB: jz      short loc_A1C1B7
0xA1C1AD: mov     edx, [esi]
0xA1C1AF: mov     eax, [edx]
0xA1C1B1: push    1
0xA1C1B3: mov     ecx, esi
0xA1C1B5: call    eax
0xA1C1B7: pop     esi
0xA1C1B8: retn
