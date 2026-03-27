0xA26340: push    offset dword_B16264
0xA26345: mov     ecx, offset dword_B07CFC
0xA2634A: call    BSSimpleList_Remove
0xA2634F: mov     eax, off_B16268; "fStoneLargeMassMin:Audio"
0xA26354: test    eax, eax
0xA26356: jz      short locret_A26364
0xA26358: cmp     byte ptr [eax], 53h ; 'S'
0xA2635B: jnz     short locret_A26364
0xA2635D: push    eax
0xA2635E: call    FormHeapFree
0xA26363: pop     ecx
0xA26364: retn
