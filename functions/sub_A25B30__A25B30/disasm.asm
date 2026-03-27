0xA25B30: push    offset flt_B14F00
0xA25B35: mov     ecx, offset dword_B07CFC
0xA25B3A: call    BSSimpleList_Remove
0xA25B3F: mov     eax, off_B14F04; "fJoystickLookUDMult:Controls"
0xA25B44: test    eax, eax
0xA25B46: jz      short locret_A25B54
0xA25B48: cmp     byte ptr [eax], 53h ; 'S'
0xA25B4B: jnz     short locret_A25B54
0xA25B4D: push    eax
0xA25B4E: call    FormHeapFree
0xA25B53: pop     ecx
0xA25B54: retn
