0xA25B60: push    offset flt_B14F08
0xA25B65: mov     ecx, offset dword_B07CFC
0xA25B6A: call    BSSimpleList_Remove
0xA25B6F: mov     eax, off_B14F0C; "fJoystickLookLRMult:Controls"
0xA25B74: test    eax, eax
0xA25B76: jz      short locret_A25B84
0xA25B78: cmp     byte ptr [eax], 53h ; 'S'
0xA25B7B: jnz     short locret_A25B84
0xA25B7D: push    eax
0xA25B7E: call    FormHeapFree
0xA25B83: pop     ecx
0xA25B84: retn
