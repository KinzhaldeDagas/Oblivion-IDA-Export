0xA1C760: push    offset flt_B11A44
0xA1C765: mov     ecx, offset unk_B11D4C
0xA1C76A: call    BSSimpleList_Remove
0xA1C76F: mov     eax, off_B11A48; "fHFMin:HIT"
0xA1C774: test    eax, eax
0xA1C776: jz      short locret_A1C784
0xA1C778: cmp     byte ptr [eax], 53h ; 'S'
0xA1C77B: jnz     short locret_A1C784
0xA1C77D: push    eax
0xA1C77E: call    FormHeapFree
0xA1C783: pop     ecx
0xA1C784: retn
