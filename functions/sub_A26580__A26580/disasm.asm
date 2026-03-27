0xA26580: push    offset unk_B162C4
0xA26585: mov     ecx, offset dword_B07CFC
0xA2658A: call    BSSimpleList_Remove
0xA2658F: mov     eax, off_B162C8; "fGlassLargeMassMin:Audio"
0xA26594: test    eax, eax
0xA26596: jz      short locret_A265A4
0xA26598: cmp     byte ptr [eax], 53h ; 'S'
0xA2659B: jnz     short locret_A265A4
0xA2659D: push    eax
0xA2659E: call    FormHeapFree
0xA265A3: pop     ecx
0xA265A4: retn
