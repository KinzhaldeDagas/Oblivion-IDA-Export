0xA1B370: push    offset flt_B080DC
0xA1B375: mov     ecx, offset dword_B07CFC
0xA1B37A: call    BSSimpleList_Remove
0xA1B37F: mov     eax, off_B080E0; "fWaveOffsetRange:Grass"
0xA1B384: test    eax, eax
0xA1B386: jz      short locret_A1B394
0xA1B388: cmp     byte ptr [eax], 53h ; 'S'
0xA1B38B: jnz     short locret_A1B394
0xA1B38D: push    eax
0xA1B38E: call    FormHeapFree
0xA1B393: pop     ecx
0xA1B394: retn
