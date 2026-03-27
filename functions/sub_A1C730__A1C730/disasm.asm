0xA1C730: push    offset flt_B11A3C
0xA1C735: mov     ecx, offset unk_B11D4C
0xA1C73A: call    BSSimpleList_Remove
0xA1C73F: mov     eax, off_B11A40; "fMinHeirGain:HIT"
0xA1C744: test    eax, eax
0xA1C746: jz      short locret_A1C754
0xA1C748: cmp     byte ptr [eax], 53h ; 'S'
0xA1C74B: jnz     short locret_A1C754
0xA1C74D: push    eax
0xA1C74E: call    FormHeapFree
0xA1C753: pop     ecx
0xA1C754: retn
