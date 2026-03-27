0xA18D50: push    offset byte_B06CB4
0xA18D55: mov     ecx, offset dword_B07CFC
0xA18D5A: call    BSSimpleList_Remove
0xA18D5F: mov     eax, off_B06CB8; "bDrawShadows:Display"
0xA18D64: test    eax, eax
0xA18D66: jz      short locret_A18D74
0xA18D68: cmp     byte ptr [eax], 53h ; 'S'
0xA18D6B: jnz     short locret_A18D74
0xA18D6D: push    eax
0xA18D6E: call    FormHeapFree
0xA18D73: pop     ecx
0xA18D74: retn
