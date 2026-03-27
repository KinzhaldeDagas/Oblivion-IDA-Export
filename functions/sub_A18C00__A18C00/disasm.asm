0xA18C00: push    offset X
0xA18C05: mov     ecx, offset dword_B07CFC
0xA18C0A: call    BSSimpleList_Remove
0xA18C0F: mov     eax, off_B06C80; "iLocation X:Display"
0xA18C14: test    eax, eax
0xA18C16: jz      short locret_A18C24
0xA18C18: cmp     byte ptr [eax], 53h ; 'S'
0xA18C1B: jnz     short locret_A18C24
0xA18C1D: push    eax
0xA18C1E: call    FormHeapFree
0xA18C23: pop     ecx
0xA18C24: retn
