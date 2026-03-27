0xA17CF0: push    offset uInteriorCellBuffer
0xA17CF5: mov     ecx, offset dword_B07CFC
0xA17CFA: call    BSSimpleList_Remove
0xA17CFF: mov     eax, off_B051D8; "uInterior Cell Buffer:General"
0xA17D04: test    eax, eax
0xA17D06: jz      short locret_A17D14
0xA17D08: cmp     byte ptr [eax], 53h ; 'S'
0xA17D0B: jnz     short locret_A17D14
0xA17D0D: push    eax
0xA17D0E: call    FormHeapFree
0xA17D13: pop     ecx
0xA17D14: retn
