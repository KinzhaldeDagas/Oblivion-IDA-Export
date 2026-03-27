0xA269E0: push    esi
0xA269E1: mov     esi, dword_B3F984
0xA269E7: test    esi, esi
0xA269E9: jz      short loc_A26A07
0xA269EB: lea     eax, [esi+4]
0xA269EE: push    eax; lpAddend
0xA269EF: call    ds:InterlockedDecrement
0xA269F5: test    eax, eax
0xA269F7: jnz     short loc_A26A07
0xA269F9: test    esi, esi
0xA269FB: jz      short loc_A26A07
0xA269FD: mov     edx, [esi]
0xA269FF: mov     eax, [edx]
0xA26A01: push    1
0xA26A03: mov     ecx, esi
0xA26A05: call    eax
0xA26A07: pop     esi
0xA26A08: retn
