0xA26F80: mov     eax, dword_B429D0
0xA26F85: test    eax, eax
0xA26F87: jz      short loc_A26F92
0xA26F89: push    eax
0xA26F8A: call    FormHeapFree
0xA26F8F: add     esp, 4
0xA26F92: mov     dword_B429D0, 0
0xA26F9C: mov     dword_B429D4, 0
0xA26FA6: mov     dword_B429D8, 0
0xA26FB0: retn
