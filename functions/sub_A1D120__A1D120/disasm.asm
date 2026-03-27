0xA1D120: push    offset flt_B11BE4
0xA1D125: mov     ecx, offset unk_B11D4C
0xA1D12A: call    BSSimpleList_Remove
0xA1D12F: mov     eax, off_B11BE8; "fHighTrans:DEFAULT"
0xA1D134: test    eax, eax
0xA1D136: jz      short locret_A1D144
0xA1D138: cmp     byte ptr [eax], 53h ; 'S'
0xA1D13B: jnz     short locret_A1D144
0xA1D13D: push    eax
0xA1D13E: call    FormHeapFree
0xA1D143: pop     ecx
0xA1D144: retn
