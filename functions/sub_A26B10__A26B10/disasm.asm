0xA26B10: push    esi
0xA26B11: mov     esi, dword_B3FD28
0xA26B17: test    esi, esi
0xA26B19: jz      short loc_A26B37
0xA26B1B: lea     eax, [esi+4]
0xA26B1E: push    eax; lpAddend
0xA26B1F: call    ds:InterlockedDecrement
0xA26B25: test    eax, eax
0xA26B27: jnz     short loc_A26B37
0xA26B29: test    esi, esi
0xA26B2B: jz      short loc_A26B37
0xA26B2D: mov     edx, [esi]
0xA26B2F: mov     eax, [edx]
0xA26B31: push    1
0xA26B33: mov     ecx, esi
0xA26B35: call    eax
0xA26B37: pop     esi
0xA26B38: retn
