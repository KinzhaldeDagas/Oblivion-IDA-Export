0xA18990: push    offset bDisableWarning_MESSAGES
0xA18995: mov     ecx, offset dword_B07CFC
0xA1899A: call    BSSimpleList_Remove
0xA1899F: mov     eax, off_B06B1C; "bDisableWarning:MESSAGES"
0xA189A4: test    eax, eax
0xA189A6: jz      short locret_A189B4
0xA189A8: cmp     byte ptr [eax], 53h ; 'S'
0xA189AB: jnz     short locret_A189B4
0xA189AD: push    eax
0xA189AE: call    FormHeapFree
0xA189B3: pop     ecx
0xA189B4: retn
