0xA18F30: push    offset unk_B06D04
0xA18F35: mov     ecx, offset dword_B07CFC
0xA18F3A: call    BSSimpleList_Remove
0xA18F3F: mov     eax, off_B06D08; "bDoTallGrassEffect:Display"
0xA18F44: test    eax, eax
0xA18F46: jz      short locret_A18F54
0xA18F48: cmp     byte ptr [eax], 53h ; 'S'
0xA18F4B: jnz     short locret_A18F54
0xA18F4D: push    eax
0xA18F4E: call    FormHeapFree
0xA18F53: pop     ecx
0xA18F54: retn
