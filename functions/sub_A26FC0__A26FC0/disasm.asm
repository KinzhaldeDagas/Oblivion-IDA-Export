0xA26FC0: mov     eax, dword_B429E0
0xA26FC5: test    eax, eax
0xA26FC7: jz      short loc_A26FD2
0xA26FC9: push    eax
0xA26FCA: call    FormHeapFree
0xA26FCF: add     esp, 4
0xA26FD2: mov     dword_B429E0, 0
0xA26FDC: mov     dword_B429E4, 0
0xA26FE6: mov     dword_B429E8, 0
0xA26FF0: retn
