0xA1CC70: push    offset off_B11B1C; "1.0, 1.0"
0xA1CC75: mov     ecx, offset unk_B11D4C
0xA1CC7A: call    BSSimpleList_Remove
0xA1CC7F: mov     eax, off_B11B20; "sSpine1:QUADHIT"
0xA1CC84: test    eax, eax
0xA1CC86: jz      short locret_A1CC94
0xA1CC88: cmp     byte ptr [eax], 53h ; 'S'
0xA1CC8B: jnz     short locret_A1CC94
0xA1CC8D: push    eax
0xA1CC8E: call    FormHeapFree
0xA1CC93: pop     ecx
0xA1CC94: retn
