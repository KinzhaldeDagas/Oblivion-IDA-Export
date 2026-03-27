0xA25D70: push    offset unk_B15370
0xA25D75: mov     ecx, offset dword_B07CFC
0xA25D7A: call    BSSimpleList_Remove
0xA25D7F: mov     eax, off_B15374; "bRunMiddleLowLevelProcess:General"
0xA25D84: test    eax, eax
0xA25D86: jz      short locret_A25D94
0xA25D88: cmp     byte ptr [eax], 53h ; 'S'
0xA25D8B: jnz     short locret_A25D94
0xA25D8D: push    eax
0xA25D8E: call    FormHeapFree
0xA25D93: pop     ecx
0xA25D94: retn
