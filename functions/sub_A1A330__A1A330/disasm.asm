0xA1A330: push    offset UseWaterReflectionStatics
0xA1A335: mov     ecx, offset dword_B07CFC
0xA1A33A: call    BSSimpleList_Remove
0xA1A33F: mov     eax, UseWaterReflectionTrees
0xA1A344: test    eax, eax
0xA1A346: jz      short locret_A1A354
0xA1A348: cmp     byte ptr [eax], 53h ; 'S'
0xA1A34B: jnz     short locret_A1A354
0xA1A34D: push    eax
0xA1A34E: call    FormHeapFree
0xA1A353: pop     ecx
0xA1A354: retn
