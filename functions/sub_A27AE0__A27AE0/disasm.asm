0xA27AE0: push    esi
0xA27AE1: mov     esi, dword_BA7B90
0xA27AE7: test    esi, esi
0xA27AE9: jz      short loc_A27B07
0xA27AEB: lea     eax, [esi+4]
0xA27AEE: push    eax; lpAddend
0xA27AEF: call    ds:InterlockedDecrement
0xA27AF5: test    eax, eax
0xA27AF7: jnz     short loc_A27B07
0xA27AF9: test    esi, esi
0xA27AFB: jz      short loc_A27B07
0xA27AFD: mov     edx, [esi]
0xA27AFF: mov     eax, [edx]
0xA27B01: push    1
0xA27B03: mov     ecx, esi
0xA27B05: call    eax
0xA27B07: pop     esi
0xA27B08: retn
