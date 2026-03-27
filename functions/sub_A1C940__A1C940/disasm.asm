0xA1C940: push    offset off_B11A94; "1.0, 1.0"
0xA1C945: mov     ecx, offset unk_B11D4C
0xA1C94A: call    BSSimpleList_Remove
0xA1C94F: mov     eax, off_B11A98; "sLForeArm:HIT"
0xA1C954: test    eax, eax
0xA1C956: jz      short locret_A1C964
0xA1C958: cmp     byte ptr [eax], 53h ; 'S'
0xA1C95B: jnz     short locret_A1C964
0xA1C95D: push    eax
0xA1C95E: call    FormHeapFree
0xA1C963: pop     ecx
0xA1C964: retn
