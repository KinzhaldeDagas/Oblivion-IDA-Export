0xA24820: push    offset dword_B135F8
0xA24825: mov     ecx, offset dword_B07CFC
0xA2482A: call    BSSimpleList_Remove
0xA2482F: mov     eax, off_B135FC; "iSafeZoneX:Interface"
0xA24834: test    eax, eax
0xA24836: jz      short locret_A24844
0xA24838: cmp     byte ptr [eax], 53h ; 'S'
0xA2483B: jnz     short locret_A24844
0xA2483D: push    eax
0xA2483E: call    FormHeapFree
0xA24843: pop     ecx
0xA24844: retn
