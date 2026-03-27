0xA26C50: push    esi
0xA26C51: mov     esi, dword_B401FC
0xA26C57: test    esi, esi
0xA26C59: jz      short loc_A26C77
0xA26C5B: lea     eax, [esi+4]
0xA26C5E: push    eax; lpAddend
0xA26C5F: call    ds:InterlockedDecrement
0xA26C65: test    eax, eax
0xA26C67: jnz     short loc_A26C77
0xA26C69: test    esi, esi
0xA26C6B: jz      short loc_A26C77
0xA26C6D: mov     edx, [esi]
0xA26C6F: mov     eax, [edx]
0xA26C71: push    1
0xA26C73: mov     ecx, esi
0xA26C75: call    eax
0xA26C77: pop     esi
0xA26C78: retn
