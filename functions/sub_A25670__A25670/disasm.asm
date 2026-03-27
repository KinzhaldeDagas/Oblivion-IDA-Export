0xA25670: push    offset flt_B14CB4
0xA25675: mov     ecx, offset dword_B07CFC
0xA2567A: call    BSSimpleList_Remove
0xA2567F: mov     eax, off_B14CB8; "fHealthBarWidth:GamePlay"
0xA25684: test    eax, eax
0xA25686: jz      short locret_A25694
0xA25688: cmp     byte ptr [eax], 53h ; 'S'
0xA2568B: jnz     short locret_A25694
0xA2568D: push    eax
0xA2568E: call    FormHeapFree
0xA25693: pop     ecx
0xA25694: retn
