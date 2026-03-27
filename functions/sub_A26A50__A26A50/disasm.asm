0xA26A50: push    esi
0xA26A51: mov     esi, dword_B3FAA4
0xA26A57: test    esi, esi
0xA26A59: jz      short loc_A26A77
0xA26A5B: lea     eax, [esi+4]
0xA26A5E: push    eax; lpAddend
0xA26A5F: call    ds:InterlockedDecrement
0xA26A65: test    eax, eax
0xA26A67: jnz     short loc_A26A77
0xA26A69: test    esi, esi
0xA26A6B: jz      short loc_A26A77
0xA26A6D: mov     edx, [esi]
0xA26A6F: mov     eax, [edx]
0xA26A71: push    1
0xA26A73: mov     ecx, esi
0xA26A75: call    eax
0xA26A77: pop     esi
0xA26A78: retn
