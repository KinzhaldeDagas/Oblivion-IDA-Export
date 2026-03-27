0xA25F00: push    offset byte_B1582C
0xA25F05: mov     ecx, offset dword_B07CFC
0xA25F0A: call    BSSimpleList_Remove
0xA25F0F: mov     eax, off_B15830; "bPathMovementOnly:Pathfinding"
0xA25F14: test    eax, eax
0xA25F16: jz      short locret_A25F24
0xA25F18: cmp     byte ptr [eax], 53h ; 'S'
0xA25F1B: jnz     short locret_A25F24
0xA25F1D: push    eax
0xA25F1E: call    FormHeapFree
0xA25F23: pop     ecx
0xA25F24: retn
