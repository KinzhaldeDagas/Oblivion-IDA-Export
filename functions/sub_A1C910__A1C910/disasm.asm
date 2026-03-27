0xA1C910: push    offset off_B11A8C; "1.0, 1.0"
0xA1C915: mov     ecx, offset unk_B11D4C
0xA1C91A: call    BSSimpleList_Remove
0xA1C91F: mov     eax, off_B11A90; "sLHand:HIT"
0xA1C924: test    eax, eax
0xA1C926: jz      short locret_A1C934
0xA1C928: cmp     byte ptr [eax], 53h ; 'S'
0xA1C92B: jnz     short locret_A1C934
0xA1C92D: push    eax
0xA1C92E: call    FormHeapFree
0xA1C933: pop     ecx
0xA1C934: retn
