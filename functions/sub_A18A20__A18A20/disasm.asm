0xA18A20: push    offset bSkipInitializationFlows_MESSAGES
0xA18A25: mov     ecx, offset dword_B07CFC
0xA18A2A: call    BSSimpleList_Remove
0xA18A2F: mov     eax, off_B06B34; "bSkipInitializationFlows:MESSAGES"
0xA18A34: test    eax, eax
0xA18A36: jz      short locret_A18A44
0xA18A38: cmp     byte ptr [eax], 53h ; 'S'
0xA18A3B: jnz     short locret_A18A44
0xA18A3D: push    eax
0xA18A3E: call    FormHeapFree
0xA18A43: pop     ecx
0xA18A44: retn
