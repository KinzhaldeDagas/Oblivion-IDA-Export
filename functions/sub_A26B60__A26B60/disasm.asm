0xA26B60: push    esi
0xA26B61: mov     esi, dword_B40160
0xA26B67: test    esi, esi
0xA26B69: jz      short loc_A26B87
0xA26B6B: lea     eax, [esi+4]
0xA26B6E: push    eax; lpAddend
0xA26B6F: call    ds:InterlockedDecrement
0xA26B75: test    eax, eax
0xA26B77: jnz     short loc_A26B87
0xA26B79: test    esi, esi
0xA26B7B: jz      short loc_A26B87
0xA26B7D: mov     edx, [esi]
0xA26B7F: mov     eax, [edx]
0xA26B81: push    1
0xA26B83: mov     ecx, esi
0xA26B85: call    eax
0xA26B87: pop     esi
0xA26B88: retn
