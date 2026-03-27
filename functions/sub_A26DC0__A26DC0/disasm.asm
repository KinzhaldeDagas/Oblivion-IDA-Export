0xA26DC0: mov     eax, dword_B42574
0xA26DC5: test    eax, eax
0xA26DC7: jz      short locret_A26DDC
0xA26DC9: add     dword ptr [eax+60h], 0FFFFFFFFh
0xA26DCD: mov     ecx, eax
0xA26DCF: add     eax, 60h ; '`'
0xA26DD2: cmp     dword ptr [eax], 0
0xA26DD5: jnz     short locret_A26DDC
0xA26DD7: jmp     sub_7604D0
0xA26DDC: retn
