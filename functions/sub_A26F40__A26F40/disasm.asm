0xA26F40: mov     eax, dword_B429F0
0xA26F45: test    eax, eax
0xA26F47: jz      short loc_A26F52
0xA26F49: push    eax
0xA26F4A: call    FormHeapFree
0xA26F4F: add     esp, 4
0xA26F52: mov     dword_B429F0, 0
0xA26F5C: mov     dword_B429F4, 0
0xA26F66: mov     dword_B429F8, 0
0xA26F70: retn
