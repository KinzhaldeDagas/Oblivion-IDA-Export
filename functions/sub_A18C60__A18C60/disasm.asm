0xA18C60: push    offset dword_B06C8C
0xA18C65: mov     ecx, offset dword_B07CFC
0xA18C6A: call    BSSimpleList_Remove
0xA18C6F: mov     eax, off_B06C90; "iNPatches:Display"
0xA18C74: test    eax, eax
0xA18C76: jz      short locret_A18C84
0xA18C78: cmp     byte ptr [eax], 53h ; 'S'
0xA18C7B: jnz     short locret_A18C84
0xA18C7D: push    eax
0xA18C7E: call    FormHeapFree
0xA18C83: pop     ecx
0xA18C84: retn
