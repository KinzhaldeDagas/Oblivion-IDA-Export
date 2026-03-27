0xA1CE50: push    offset off_B11B6C; "1.0, 1.0"
0xA1CE55: mov     ecx, offset unk_B11D4C
0xA1CE5A: call    BSSimpleList_Remove
0xA1CE5F: mov     eax, off_B11B70; "sLThigh:DEFAULT"
0xA1CE64: test    eax, eax
0xA1CE66: jz      short locret_A1CE74
0xA1CE68: cmp     byte ptr [eax], 53h ; 'S'
0xA1CE6B: jnz     short locret_A1CE74
0xA1CE6D: push    eax
0xA1CE6E: call    FormHeapFree
0xA1CE73: pop     ecx
0xA1CE74: retn
