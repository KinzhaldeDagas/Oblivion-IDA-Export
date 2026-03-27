0xA24950: push    offset dword_B13984
0xA24955: mov     ecx, offset dword_B07CFC
0xA2495A: call    BSSimpleList_Remove
0xA2495F: mov     eax, off_B13988; "iConsoleHistorySize:Menu"
0xA24964: test    eax, eax
0xA24966: jz      short locret_A24974
0xA24968: cmp     byte ptr [eax], 53h ; 'S'
0xA2496B: jnz     short locret_A24974
0xA2496D: push    eax
0xA2496E: call    FormHeapFree
0xA24973: pop     ecx
0xA24974: retn
