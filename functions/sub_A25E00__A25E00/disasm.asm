0xA25E00: push    offset byte_B15750
0xA25E05: mov     ecx, offset dword_B07CFC
0xA25E0A: call    BSSimpleList_Remove
0xA25E0F: mov     eax, off_B15754; "bDebugAvoidance:Pathfinding"
0xA25E14: test    eax, eax
0xA25E16: jz      short locret_A25E24
0xA25E18: cmp     byte ptr [eax], 53h ; 'S'
0xA25E1B: jnz     short locret_A25E24
0xA25E1D: push    eax
0xA25E1E: call    FormHeapFree
0xA25E23: pop     ecx
0xA25E24: retn
