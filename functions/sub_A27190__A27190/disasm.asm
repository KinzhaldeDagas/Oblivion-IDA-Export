0xA27190: push    esi
0xA27191: mov     esi, dword_B430EC
0xA27197: test    esi, esi
0xA27199: jz      short loc_A271B7
0xA2719B: lea     eax, [esi+4]
0xA2719E: push    eax; lpAddend
0xA2719F: call    ds:InterlockedDecrement
0xA271A5: test    eax, eax
0xA271A7: jnz     short loc_A271B7
0xA271A9: test    esi, esi
0xA271AB: jz      short loc_A271B7
0xA271AD: mov     edx, [esi]
0xA271AF: mov     eax, [edx]
0xA271B1: push    1
0xA271B3: mov     ecx, esi
0xA271B5: call    eax
0xA271B7: pop     esi
0xA271B8: retn
