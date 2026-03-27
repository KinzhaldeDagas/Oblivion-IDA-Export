0xA26C80: push    esi
0xA26C81: mov     esi, dword_B40208
0xA26C87: test    esi, esi
0xA26C89: jz      short loc_A26CA7
0xA26C8B: lea     eax, [esi+4]
0xA26C8E: push    eax; lpAddend
0xA26C8F: call    ds:InterlockedDecrement
0xA26C95: test    eax, eax
0xA26C97: jnz     short loc_A26CA7
0xA26C99: test    esi, esi
0xA26C9B: jz      short loc_A26CA7
0xA26C9D: mov     edx, [esi]
0xA26C9F: mov     eax, [edx]
0xA26CA1: push    1
0xA26CA3: mov     ecx, esi
0xA26CA5: call    eax
0xA26CA7: pop     esi
0xA26CA8: retn
