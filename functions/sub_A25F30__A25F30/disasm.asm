0xA25F30: push    offset byte_B15834
0xA25F35: mov     ecx, offset dword_B07CFC
0xA25F3A: call    BSSimpleList_Remove
0xA25F3F: mov     eax, off_B15838; "bDrawPathsDefault:Pathfinding"
0xA25F44: test    eax, eax
0xA25F46: jz      short locret_A25F54
0xA25F48: cmp     byte ptr [eax], 53h ; 'S'
0xA25F4B: jnz     short locret_A25F54
0xA25F4D: push    eax
0xA25F4E: call    FormHeapFree
0xA25F53: pop     ecx
0xA25F54: retn
