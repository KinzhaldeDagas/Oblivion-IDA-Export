0xA26EB0: cmp     dword_B2B62C, 10h
0xA26EB7: jb      short loc_A26EC7
0xA26EB9: mov     eax, dword_B2B618
0xA26EBE: push    eax
0xA26EBF: call    FormHeapFree
0xA26EC4: add     esp, 4
0xA26EC7: xor     eax, eax
0xA26EC9: mov     dword_B2B62C, 0Fh
0xA26ED3: mov     dword_B2B628, eax
0xA26ED8: mov     byte ptr dword_B2B618, al
0xA26EDD: retn
