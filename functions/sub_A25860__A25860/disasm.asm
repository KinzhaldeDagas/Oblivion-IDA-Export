0xA25860: push    offset byte_B14E88
0xA25865: mov     ecx, offset dword_B07CFC
0xA2586A: call    BSSimpleList_Remove
0xA2586F: mov     eax, off_B14E8C; "bInstantLevelUp:GamePlay"
0xA25874: test    eax, eax
0xA25876: jz      short locret_A25884
0xA25878: cmp     byte ptr [eax], 53h ; 'S'
0xA2587B: jnz     short locret_A25884
0xA2587D: push    eax
0xA2587E: call    FormHeapFree
0xA25883: pop     ecx
0xA25884: retn
