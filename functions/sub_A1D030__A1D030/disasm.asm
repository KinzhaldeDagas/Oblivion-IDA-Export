0xA1D030: push    offset off_B11BBC; "1.0, 1.0"
0xA1D035: mov     ecx, offset unk_B11D4C
0xA1D03A: call    BSSimpleList_Remove
0xA1D03F: mov     eax, off_B11BC0; "sSideWeapon:DEFAULT"
0xA1D044: test    eax, eax
0xA1D046: jz      short locret_A1D054
0xA1D048: cmp     byte ptr [eax], 53h ; 'S'
0xA1D04B: jnz     short locret_A1D054
0xA1D04D: push    eax
0xA1D04E: call    FormHeapFree
0xA1D053: pop     ecx
0xA1D054: retn
