0xA1CF70: push    offset off_B11B9C; "1.0, 1.0"
0xA1CF75: mov     ecx, offset unk_B11D4C
0xA1CF7A: call    BSSimpleList_Remove
0xA1CF7F: mov     eax, off_B11BA0; "sRThigh:DEFAULT"
0xA1CF84: test    eax, eax
0xA1CF86: jz      short locret_A1CF94
0xA1CF88: cmp     byte ptr [eax], 53h ; 'S'
0xA1CF8B: jnz     short locret_A1CF94
0xA1CF8D: push    eax
0xA1CF8E: call    FormHeapFree
0xA1CF93: pop     ecx
0xA1CF94: retn
