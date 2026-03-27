0xA26AE0: push    esi
0xA26AE1: mov     esi, dword_B3FCF8
0xA26AE7: test    esi, esi
0xA26AE9: jz      short loc_A26B07
0xA26AEB: lea     eax, [esi+4]
0xA26AEE: push    eax; lpAddend
0xA26AEF: call    ds:InterlockedDecrement
0xA26AF5: test    eax, eax
0xA26AF7: jnz     short loc_A26B07
0xA26AF9: test    esi, esi
0xA26AFB: jz      short loc_A26B07
0xA26AFD: mov     edx, [esi]
0xA26AFF: mov     eax, [edx]
0xA26B01: push    1
0xA26B03: mov     ecx, esi
0xA26B05: call    eax
0xA26B07: pop     esi
0xA26B08: retn
