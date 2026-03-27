0xA1D000: push    offset off_B11BB4; "1.0, 1.0"
0xA1D005: mov     ecx, offset unk_B11D4C
0xA1D00A: call    BSSimpleList_Remove
0xA1D00F: mov     eax, off_B11BB8; "sTail:DEFAULT"
0xA1D014: test    eax, eax
0xA1D016: jz      short locret_A1D024
0xA1D018: cmp     byte ptr [eax], 53h ; 'S'
0xA1D01B: jnz     short locret_A1D024
0xA1D01D: push    eax
0xA1D01E: call    FormHeapFree
0xA1D023: pop     ecx
0xA1D024: retn
