0xA1CE20: push    offset off_B11B64; "1.0, 1.0"
0xA1CE25: mov     ecx, offset unk_B11D4C
0xA1CE2A: call    BSSimpleList_Remove
0xA1CE2F: mov     eax, off_B11B68; "sLHand:DEFAULT"
0xA1CE34: test    eax, eax
0xA1CE36: jz      short locret_A1CE44
0xA1CE38: cmp     byte ptr [eax], 53h ; 'S'
0xA1CE3B: jnz     short locret_A1CE44
0xA1CE3D: push    eax
0xA1CE3E: call    FormHeapFree
0xA1CE43: pop     ecx
0xA1CE44: retn
