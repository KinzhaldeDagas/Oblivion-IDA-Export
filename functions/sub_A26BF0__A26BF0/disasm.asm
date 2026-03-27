0xA26BF0: push    esi
0xA26BF1: mov     esi, dword_B401AC
0xA26BF7: test    esi, esi
0xA26BF9: jz      short loc_A26C17
0xA26BFB: lea     eax, [esi+4]
0xA26BFE: push    eax; lpAddend
0xA26BFF: call    ds:InterlockedDecrement
0xA26C05: test    eax, eax
0xA26C07: jnz     short loc_A26C17
0xA26C09: test    esi, esi
0xA26C0B: jz      short loc_A26C17
0xA26C0D: mov     edx, [esi]
0xA26C0F: mov     eax, [edx]
0xA26C11: push    1
0xA26C13: mov     ecx, esi
0xA26C15: call    eax
0xA26C17: pop     esi
0xA26C18: retn
