0xA25080: push    offset flt_B1484C
0xA25085: mov     ecx, offset dword_B07CFC
0xA2508A: call    BSSimpleList_Remove
0xA2508F: mov     eax, off_B14850; "fObjectLODMin:LOD"
0xA25094: test    eax, eax
0xA25096: jz      short locret_A250A4
0xA25098: cmp     byte ptr [eax], 53h ; 'S'
0xA2509B: jnz     short locret_A250A4
0xA2509D: push    eax
0xA2509E: call    FormHeapFree
0xA250A3: pop     ecx
0xA250A4: retn
