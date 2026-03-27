0xA25760: push    offset flt_B14CDC
0xA25765: mov     ecx, offset dword_B07CFC
0xA2576A: call    BSSimpleList_Remove
0xA2576F: mov     eax, off_B14CE0; "fHealthBarEmittanceFadeTime:GamePlay"
0xA25774: test    eax, eax
0xA25776: jz      short locret_A25784
0xA25778: cmp     byte ptr [eax], 53h ; 'S'
0xA2577B: jnz     short locret_A25784
0xA2577D: push    eax
0xA2577E: call    FormHeapFree
0xA25783: pop     ecx
0xA25784: retn
