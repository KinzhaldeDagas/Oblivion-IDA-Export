0xA1CDF0: push    offset off_B11B5C; "1.0, 1.0"
0xA1CDF5: mov     ecx, offset unk_B11D4C
0xA1CDFA: call    BSSimpleList_Remove
0xA1CDFF: mov     eax, off_B11B60; "sLForeArm:DEFAULT"
0xA1CE04: test    eax, eax
0xA1CE06: jz      short locret_A1CE14
0xA1CE08: cmp     byte ptr [eax], 53h ; 'S'
0xA1CE0B: jnz     short locret_A1CE14
0xA1CE0D: push    eax
0xA1CE0E: call    FormHeapFree
0xA1CE13: pop     ecx
0xA1CE14: retn
