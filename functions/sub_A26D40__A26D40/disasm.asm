0xA26D40: mov     eax, dword_B42048
0xA26D45: test    eax, eax
0xA26D47: jz      short locret_A26D5C
0xA26D49: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0xA26D4D: mov     ecx, eax
0xA26D4F: add     eax, 5Ch ; '\'
0xA26D52: cmp     dword ptr [eax], 0
0xA26D55: jnz     short locret_A26D5C
0xA26D57: jmp     sub_772560
0xA26D5C: retn
