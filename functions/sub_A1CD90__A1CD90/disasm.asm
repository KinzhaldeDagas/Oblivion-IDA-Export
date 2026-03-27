0xA1CD90: push    offset off_B11B4C; "1.0, 1.0"
0xA1CD95: mov     ecx, offset unk_B11D4C
0xA1CD9A: call    BSSimpleList_Remove
0xA1CD9F: mov     eax, off_B11B50; "sSpine2:DEFAULT"
0xA1CDA4: test    eax, eax
0xA1CDA6: jz      short locret_A1CDB4
0xA1CDA8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CDAB: jnz     short locret_A1CDB4
0xA1CDAD: push    eax
0xA1CDAE: call    FormHeapFree
0xA1CDB3: pop     ecx
0xA1CDB4: retn
