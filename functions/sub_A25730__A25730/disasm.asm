0xA25730: push    offset flt_B14CD4
0xA25735: mov     ecx, offset dword_B07CFC
0xA2573A: call    BSSimpleList_Remove
0xA2573F: mov     eax, off_B14CD8; "fHealthBarEmittanceTime:GamePlay"
0xA25744: test    eax, eax
0xA25746: jz      short locret_A25754
0xA25748: cmp     byte ptr [eax], 53h ; 'S'
0xA2574B: jnz     short locret_A25754
0xA2574D: push    eax
0xA2574E: call    FormHeapFree
0xA25753: pop     ecx
0xA25754: retn
