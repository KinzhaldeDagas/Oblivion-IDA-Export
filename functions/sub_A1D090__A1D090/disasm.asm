0xA1D090: push    offset off_B11BCC; "1.0, 1.0"
0xA1D095: mov     ecx, offset unk_B11D4C
0xA1D09A: call    BSSimpleList_Remove
0xA1D09F: mov     eax, off_B11BD0; "sQuiver:DEFAULT"
0xA1D0A4: test    eax, eax
0xA1D0A6: jz      short locret_A1D0B4
0xA1D0A8: cmp     byte ptr [eax], 53h ; 'S'
0xA1D0AB: jnz     short locret_A1D0B4
0xA1D0AD: push    eax
0xA1D0AE: call    FormHeapFree
0xA1D0B3: pop     ecx
0xA1D0B4: retn
