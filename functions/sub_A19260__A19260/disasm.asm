0xA19260: push    offset flt_B06D8C
0xA19265: mov     ecx, offset dword_B07CFC
0xA1926A: call    BSSimpleList_Remove
0xA1926F: mov     eax, off_B06D90; "fHitTexOffset:GethitShader"
0xA19274: test    eax, eax
0xA19276: jz      short locret_A19284
0xA19278: cmp     byte ptr [eax], 53h ; 'S'
0xA1927B: jnz     short locret_A19284
0xA1927D: push    eax
0xA1927E: call    FormHeapFree
0xA19283: pop     ecx
0xA19284: retn
