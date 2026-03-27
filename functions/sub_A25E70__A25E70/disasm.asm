0xA25E70: push    offset bSnapToAngle
0xA25E75: mov     ecx, offset dword_B07CFC
0xA25E7A: call    BSSimpleList_Remove
0xA25E7F: mov     eax, off_B15818; "bSnapToAngle:Pathfinding"
0xA25E84: test    eax, eax
0xA25E86: jz      short locret_A25E94
0xA25E88: cmp     byte ptr [eax], 53h ; 'S'
0xA25E8B: jnz     short locret_A25E94
0xA25E8D: push    eax
0xA25E8E: call    FormHeapFree
0xA25E93: pop     ecx
0xA25E94: retn
