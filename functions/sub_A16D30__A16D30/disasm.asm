0xA16D30: push    offset flt_B02D98
0xA16D35: mov     ecx, offset dword_B07CFC
0xA16D3A: call    BSSimpleList_Remove
0xA16D3F: mov     eax, off_B02D9C; "fLODFadeOutItemMultComplex:LOD"
0xA16D44: test    eax, eax
0xA16D46: jz      short locret_A16D54
0xA16D48: cmp     byte ptr [eax], 53h ; 'S'
0xA16D4B: jnz     short locret_A16D54
0xA16D4D: push    eax
0xA16D4E: call    FormHeapFree
0xA16D53: pop     ecx
0xA16D54: retn
