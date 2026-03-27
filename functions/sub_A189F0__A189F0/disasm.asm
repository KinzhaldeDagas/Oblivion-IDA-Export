0xA189F0: push    offset bSkipProgramFlows_MESSAGES
0xA189F5: mov     ecx, offset dword_B07CFC
0xA189FA: call    BSSimpleList_Remove
0xA189FF: mov     eax, off_B06B2C; "bSkipProgramFlows:MESSAGES"
0xA18A04: test    eax, eax
0xA18A06: jz      short locret_A18A14
0xA18A08: cmp     byte ptr [eax], 53h ; 'S'
0xA18A0B: jnz     short locret_A18A14
0xA18A0D: push    eax
0xA18A0E: call    FormHeapFree
0xA18A13: pop     ecx
0xA18A14: retn
