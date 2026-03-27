0xA1D180: push    offset flt_B11BF4
0xA1D185: mov     ecx, offset unk_B11D4C
0xA1D18A: call    BSSimpleList_Remove
0xA1D18F: mov     eax, off_B11BF8; "fLowTrans:DEFAULT"
0xA1D194: test    eax, eax
0xA1D196: jz      short locret_A1D1A4
0xA1D198: cmp     byte ptr [eax], 53h ; 'S'
0xA1D19B: jnz     short locret_A1D1A4
0xA1D19D: push    eax
0xA1D19E: call    FormHeapFree
0xA1D1A3: pop     ecx
0xA1D1A4: retn
