0xA25950: push    offset flt_B14EB0
0xA25955: mov     ecx, offset dword_B07CFC
0xA2595A: call    BSSimpleList_Remove
0xA2595F: mov     eax, off_B14EB4; "fDifficulty:GamePlay"
0xA25964: test    eax, eax
0xA25966: jz      short locret_A25974
0xA25968: cmp     byte ptr [eax], 53h ; 'S'
0xA2596B: jnz     short locret_A25974
0xA2596D: push    eax
0xA2596E: call    FormHeapFree
0xA25973: pop     ecx
0xA25974: retn
