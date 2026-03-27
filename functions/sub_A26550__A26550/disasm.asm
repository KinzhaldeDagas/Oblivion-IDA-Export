0xA26550: push    offset unk_B162BC
0xA26555: mov     ecx, offset dword_B07CFC
0xA2655A: call    BSSimpleList_Remove
0xA2655F: mov     eax, off_B162C0; "fGlassMediumMassMin:Audio"
0xA26564: test    eax, eax
0xA26566: jz      short locret_A26574
0xA26568: cmp     byte ptr [eax], 53h ; 'S'
0xA2656B: jnz     short locret_A26574
0xA2656D: push    eax
0xA2656E: call    FormHeapFree
0xA26573: pop     ecx
0xA26574: retn
