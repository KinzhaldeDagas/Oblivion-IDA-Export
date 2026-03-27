0xA26310: push    offset dword_B1625C
0xA26315: mov     ecx, offset dword_B07CFC
0xA2631A: call    BSSimpleList_Remove
0xA2631F: mov     eax, off_B16260; "fStoneMediumMassMin:Audio"
0xA26324: test    eax, eax
0xA26326: jz      short locret_A26334
0xA26328: cmp     byte ptr [eax], 53h ; 'S'
0xA2632B: jnz     short locret_A26334
0xA2632D: push    eax
0xA2632E: call    FormHeapFree
0xA26333: pop     ecx
0xA26334: retn
