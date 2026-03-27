0xA26EE0: cmp     dword_B2B648, 10h
0xA26EE7: jb      short loc_A26EF7
0xA26EE9: mov     eax, dword_B2B634
0xA26EEE: push    eax
0xA26EEF: call    FormHeapFree
0xA26EF4: add     esp, 4
0xA26EF7: xor     eax, eax
0xA26EF9: mov     dword_B2B648, 0Fh
0xA26F03: mov     dword_B2B644, eax
0xA26F08: mov     byte ptr dword_B2B634, al
0xA26F0D: retn
