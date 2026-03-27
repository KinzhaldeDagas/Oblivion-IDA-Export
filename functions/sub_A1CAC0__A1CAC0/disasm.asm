0xA1CAC0: push    offset off_B11AD4; "1.0, 1.0"
0xA1CAC5: mov     ecx, offset unk_B11D4C
0xA1CACA: call    BSSimpleList_Remove
0xA1CACF: mov     eax, off_B11AD8; "sRCalf:QUADHIT"
0xA1CAD4: test    eax, eax
0xA1CAD6: jz      short locret_A1CAE4
0xA1CAD8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CADB: jnz     short locret_A1CAE4
0xA1CADD: push    eax
0xA1CADE: call    FormHeapFree
0xA1CAE3: pop     ecx
0xA1CAE4: retn
