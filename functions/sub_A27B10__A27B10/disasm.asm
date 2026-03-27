0xA27B10: push    esi
0xA27B11: mov     esi, dword_BA7B94
0xA27B17: test    esi, esi
0xA27B19: jz      short loc_A27B37
0xA27B1B: lea     eax, [esi+4]
0xA27B1E: push    eax; lpAddend
0xA27B1F: call    ds:InterlockedDecrement
0xA27B25: test    eax, eax
0xA27B27: jnz     short loc_A27B37
0xA27B29: test    esi, esi
0xA27B2B: jz      short loc_A27B37
0xA27B2D: mov     edx, [esi]
0xA27B2F: mov     eax, [edx]
0xA27B31: push    1
0xA27B33: mov     ecx, esi
0xA27B35: call    eax
0xA27B37: pop     esi
0xA27B38: retn
