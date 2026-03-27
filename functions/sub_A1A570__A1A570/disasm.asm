0xA1A570: push    offset flt_B070D8
0xA1A575: mov     ecx, offset dword_B07CFC
0xA1A57A: call    BSSimpleList_Remove
0xA1A57F: mov     eax, off_B070DC; "fNearWaterOutdoorTolerance:Water"
0xA1A584: test    eax, eax
0xA1A586: jz      short locret_A1A594
0xA1A588: cmp     byte ptr [eax], 53h ; 'S'
0xA1A58B: jnz     short locret_A1A594
0xA1A58D: push    eax
0xA1A58E: call    FormHeapFree
0xA1A593: pop     ecx
0xA1A594: retn
