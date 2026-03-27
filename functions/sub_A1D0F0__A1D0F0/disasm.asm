0xA1D0F0: push    offset off_B11BDC; "1.0, 1.0"
0xA1D0F5: mov     ecx, offset unk_B11D4C
0xA1D0FA: call    BSSimpleList_Remove
0xA1D0FF: mov     eax, off_B11BE0; "sPonyTail:DEFAULT"
0xA1D104: test    eax, eax
0xA1D106: jz      short locret_A1D114
0xA1D108: cmp     byte ptr [eax], 53h ; 'S'
0xA1D10B: jnz     short locret_A1D114
0xA1D10D: push    eax
0xA1D10E: call    FormHeapFree
0xA1D113: pop     ecx
0xA1D114: retn
