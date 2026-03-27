0xA18860: push    offset dword_B06AA0
0xA18865: mov     ecx, offset dword_B07CFC
0xA1886A: call    BSSimpleList_Remove
0xA1886F: mov     eax, off_B06AA4; "uGridDistantCountCity:General"
0xA18874: test    eax, eax
0xA18876: jz      short locret_A18884
0xA18878: cmp     byte ptr [eax], 53h ; 'S'
0xA1887B: jnz     short locret_A18884
0xA1887D: push    eax
0xA1887E: call    FormHeapFree
0xA18883: pop     ecx
0xA18884: retn
