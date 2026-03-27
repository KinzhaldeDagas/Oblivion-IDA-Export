0xA1C700: push    offset flt_B11A34
0xA1C705: mov     ecx, offset unk_B11D4C
0xA1C70A: call    BSSimpleList_Remove
0xA1C70F: mov     eax, off_B11A38; "fMinVelGain:HIT"
0xA1C714: test    eax, eax
0xA1C716: jz      short locret_A1C724
0xA1C718: cmp     byte ptr [eax], 53h ; 'S'
0xA1C71B: jnz     short locret_A1C724
0xA1C71D: push    eax
0xA1C71E: call    FormHeapFree
0xA1C723: pop     ecx
0xA1C724: retn
