0xA17C60: push    offset dword_B05148
0xA17C65: mov     ecx, offset dword_B07CFC
0xA17C6A: call    BSSimpleList_Remove
0xA17C6F: mov     eax, off_B0514C; "fLODBoundRadiusMult:LOD"
0xA17C74: test    eax, eax
0xA17C76: jz      short locret_A17C84
0xA17C78: cmp     byte ptr [eax], 53h ; 'S'
0xA17C7B: jnz     short locret_A17C84
0xA17C7D: push    eax
0xA17C7E: call    FormHeapFree
0xA17C83: pop     ecx
0xA17C84: retn
