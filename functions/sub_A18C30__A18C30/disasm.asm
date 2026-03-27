0xA18C30: push    offset Y
0xA18C35: mov     ecx, offset dword_B07CFC
0xA18C3A: call    BSSimpleList_Remove
0xA18C3F: mov     eax, off_B06C88; "iLocation Y:Display"
0xA18C44: test    eax, eax
0xA18C46: jz      short locret_A18C54
0xA18C48: cmp     byte ptr [eax], 53h ; 'S'
0xA18C4B: jnz     short locret_A18C54
0xA18C4D: push    eax
0xA18C4E: call    FormHeapFree
0xA18C53: pop     ecx
0xA18C54: retn
