0xA264F0: push    offset dword_B162AC
0xA264F5: mov     ecx, offset dword_B07CFC
0xA264FA: call    BSSimpleList_Remove
0xA264FF: mov     eax, off_B162B0; "fClothMediumMassMin:Audio"
0xA26504: test    eax, eax
0xA26506: jz      short locret_A26514
0xA26508: cmp     byte ptr [eax], 53h ; 'S'
0xA2650B: jnz     short locret_A26514
0xA2650D: push    eax
0xA2650E: call    FormHeapFree
0xA26513: pop     ecx
0xA26514: retn
