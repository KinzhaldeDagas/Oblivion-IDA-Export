0xA1CEB0: push    offset off_B11B7C; "1.0, 1.0"
0xA1CEB5: mov     ecx, offset unk_B11D4C
0xA1CEBA: call    BSSimpleList_Remove
0xA1CEBF: mov     eax, off_B11B80; "sLFoot:DEFAULT"
0xA1CEC4: test    eax, eax
0xA1CEC6: jz      short locret_A1CED4
0xA1CEC8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CECB: jnz     short locret_A1CED4
0xA1CECD: push    eax
0xA1CECE: call    FormHeapFree
0xA1CED3: pop     ecx
0xA1CED4: retn
