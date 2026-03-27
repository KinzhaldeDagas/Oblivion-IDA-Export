0xA25170: push    offset dword_B14874
0xA25175: mov     ecx, offset dword_B07CFC
0xA2517A: call    BSSimpleList_Remove
0xA2517F: mov     eax, off_B14878; "iActorShadowExtMax:Display"
0xA25184: test    eax, eax
0xA25186: jz      short locret_A25194
0xA25188: cmp     byte ptr [eax], 53h ; 'S'
0xA2518B: jnz     short locret_A25194
0xA2518D: push    eax
0xA2518E: call    FormHeapFree
0xA25193: pop     ecx
0xA25194: retn
