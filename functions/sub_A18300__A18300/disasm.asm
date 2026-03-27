0xA18300: push    offset byte_B055BC
0xA18305: mov     ecx, offset dword_B07CFC
0xA1830A: call    BSSimpleList_Remove
0xA1830F: mov     eax, off_B055C0; "bFileShowTextures:TestAllCells"
0xA18314: test    eax, eax
0xA18316: jz      short locret_A18324
0xA18318: cmp     byte ptr [eax], 53h ; 'S'
0xA1831B: jnz     short locret_A18324
0xA1831D: push    eax
0xA1831E: call    FormHeapFree
0xA18323: pop     ecx
0xA18324: retn
