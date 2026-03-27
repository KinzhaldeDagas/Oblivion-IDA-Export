0xA1CCA0: push    offset off_B11B24; "1.0, 1.0"
0xA1CCA5: mov     ecx, offset unk_B11D4C
0xA1CCAA: call    BSSimpleList_Remove
0xA1CCAF: mov     eax, off_B11B28; "sBody:QUADHIT"
0xA1CCB4: test    eax, eax
0xA1CCB6: jz      short locret_A1CCC4
0xA1CCB8: cmp     byte ptr [eax], 53h ; 'S'
0xA1CCBB: jnz     short locret_A1CCC4
0xA1CCBD: push    eax
0xA1CCBE: call    FormHeapFree
0xA1CCC3: pop     ecx
0xA1CCC4: retn
