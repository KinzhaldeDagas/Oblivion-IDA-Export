0xA1D150: push    offset flt_B11BEC
0xA1D155: mov     ecx, offset unk_B11D4C
0xA1D15A: call    BSSimpleList_Remove
0xA1D15F: mov     eax, off_B11BF0; "fHighRot:DEFAULT"
0xA1D164: test    eax, eax
0xA1D166: jz      short locret_A1D174
0xA1D168: cmp     byte ptr [eax], 53h ; 'S'
0xA1D16B: jnz     short locret_A1D174
0xA1D16D: push    eax
0xA1D16E: call    FormHeapFree
0xA1D173: pop     ecx
0xA1D174: retn
