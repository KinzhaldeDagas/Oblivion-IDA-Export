0xA1D210: push    offset flt_B11C0C
0xA1D215: mov     ecx, offset unk_B11D4C
0xA1D21A: call    BSSimpleList_Remove
0xA1D21F: mov     eax, off_B11C10; "fPassOutForce:DEFAULT"
0xA1D224: test    eax, eax
0xA1D226: jz      short locret_A1D234
0xA1D228: cmp     byte ptr [eax], 53h ; 'S'
0xA1D22B: jnz     short locret_A1D234
0xA1D22D: push    eax
0xA1D22E: call    FormHeapFree
0xA1D233: pop     ecx
0xA1D234: retn
