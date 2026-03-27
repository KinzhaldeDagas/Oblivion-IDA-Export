0xA1CD30: push    offset off_B11B3C; "1.0, 1.0"
0xA1CD35: mov     ecx, offset unk_B11D4C
0xA1CD3A: call    BSSimpleList_Remove
0xA1CD3F: mov     eax, off_B11B40; "sBody:DEFAULT"
0xA1CD44: test    eax, eax
0xA1CD46: jz      short locret_A1CD54
0xA1CD48: cmp     byte ptr [eax], 53h ; 'S'
0xA1CD4B: jnz     short locret_A1CD54
0xA1CD4D: push    eax
0xA1CD4E: call    FormHeapFree
0xA1CD53: pop     ecx
0xA1CD54: retn
