0xA1A270: push    offset bUseWaterHiRes
0xA1A275: mov     ecx, offset dword_B07CFC
0xA1A27A: call    BSSimpleList_Remove
0xA1A27F: mov     eax, off_B0705C; "bUseWaterHiRes:Water"
0xA1A284: test    eax, eax
0xA1A286: jz      short locret_A1A294
0xA1A288: cmp     byte ptr [eax], 53h ; 'S'
0xA1A28B: jnz     short locret_A1A294
0xA1A28D: push    eax
0xA1A28E: call    FormHeapFree
0xA1A293: pop     ecx
0xA1A294: retn
