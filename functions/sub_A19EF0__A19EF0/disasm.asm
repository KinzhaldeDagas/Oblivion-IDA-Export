0xA19EF0: push    esi
0xA19EF1: mov     esi, dword_B350D8
0xA19EF7: test    esi, esi
0xA19EF9: jz      short loc_A19F17
0xA19EFB: lea     eax, [esi+4]
0xA19EFE: push    eax; lpAddend
0xA19EFF: call    ds:InterlockedDecrement
0xA19F05: test    eax, eax
0xA19F07: jnz     short loc_A19F17
0xA19F09: test    esi, esi
0xA19F0B: jz      short loc_A19F17
0xA19F0D: mov     edx, [esi]
0xA19F0F: mov     eax, [edx]
0xA19F11: push    1
0xA19F13: mov     ecx, esi
0xA19F15: call    eax
0xA19F17: pop     esi
0xA19F18: retn
