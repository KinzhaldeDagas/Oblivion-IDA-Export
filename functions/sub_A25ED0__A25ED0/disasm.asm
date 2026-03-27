0xA25ED0: push    offset byte_B15824
0xA25ED5: mov     ecx, offset dword_B07CFC
0xA25EDA: call    BSSimpleList_Remove
0xA25EDF: mov     eax, off_B15828; "bDrawSmoothFailures:Pathfinding"
0xA25EE4: test    eax, eax
0xA25EE6: jz      short locret_A25EF4
0xA25EE8: cmp     byte ptr [eax], 53h ; 'S'
0xA25EEB: jnz     short locret_A25EF4
0xA25EED: push    eax
0xA25EEE: call    FormHeapFree
0xA25EF3: pop     ecx
0xA25EF4: retn
