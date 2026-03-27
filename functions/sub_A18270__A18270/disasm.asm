0xA18270: push    offset byte_B055A4
0xA18275: mov     ecx, offset dword_B07CFC
0xA1827A: call    BSSimpleList_Remove
0xA1827F: mov     eax, off_B055A8; "bFileTestLoad:TestAllCells"
0xA18284: test    eax, eax
0xA18286: jz      short locret_A18294
0xA18288: cmp     byte ptr [eax], 53h ; 'S'
0xA1828B: jnz     short locret_A18294
0xA1828D: push    eax
0xA1828E: call    FormHeapFree
0xA18293: pop     ecx
0xA18294: retn
