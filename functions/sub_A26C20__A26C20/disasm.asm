0xA26C20: push    esi
0xA26C21: mov     esi, dword_B401D8
0xA26C27: test    esi, esi
0xA26C29: jz      short loc_A26C47
0xA26C2B: lea     eax, [esi+4]
0xA26C2E: push    eax; lpAddend
0xA26C2F: call    ds:InterlockedDecrement
0xA26C35: test    eax, eax
0xA26C37: jnz     short loc_A26C47
0xA26C39: test    esi, esi
0xA26C3B: jz      short loc_A26C47
0xA26C3D: mov     edx, [esi]
0xA26C3F: mov     eax, [edx]
0xA26C41: push    1
0xA26C43: mov     ecx, esi
0xA26C45: call    eax
0xA26C47: pop     esi
0xA26C48: retn
