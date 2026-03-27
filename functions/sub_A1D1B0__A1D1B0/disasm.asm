0xA1D1B0: push    offset flt_B11BFC
0xA1D1B5: mov     ecx, offset unk_B11D4C
0xA1D1BA: call    BSSimpleList_Remove
0xA1D1BF: mov     eax, off_B11C00; "fLowRot:DEFAULT"
0xA1D1C4: test    eax, eax
0xA1D1C6: jz      short locret_A1D1D4
0xA1D1C8: cmp     byte ptr [eax], 53h ; 'S'
0xA1D1CB: jnz     short locret_A1D1D4
0xA1D1CD: push    eax
0xA1D1CE: call    FormHeapFree
0xA1D1D3: pop     ecx
0xA1D1D4: retn
