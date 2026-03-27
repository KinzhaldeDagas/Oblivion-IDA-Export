0xA26B90: push    esi
0xA26B91: mov     esi, dword_B40158
0xA26B97: test    esi, esi
0xA26B99: jz      short loc_A26BB7
0xA26B9B: lea     eax, [esi+4]
0xA26B9E: push    eax; lpAddend
0xA26B9F: call    ds:InterlockedDecrement
0xA26BA5: test    eax, eax
0xA26BA7: jnz     short loc_A26BB7
0xA26BA9: test    esi, esi
0xA26BAB: jz      short loc_A26BB7
0xA26BAD: mov     edx, [esi]
0xA26BAF: mov     eax, [edx]
0xA26BB1: push    1
0xA26BB3: mov     ecx, esi
0xA26BB5: call    eax
0xA26BB7: pop     esi
0xA26BB8: retn
