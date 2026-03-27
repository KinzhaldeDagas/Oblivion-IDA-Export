0xA25A70: push    offset dword_B14EE0
0xA25A75: mov     ecx, offset dword_B07CFC
0xA25A7A: call    BSSimpleList_Remove
0xA25A7F: mov     eax, off_B14EE4; "iJoystickLookLeftRight:Controls"
0xA25A84: test    eax, eax
0xA25A86: jz      short locret_A25A94
0xA25A88: cmp     byte ptr [eax], 53h ; 'S'
0xA25A8B: jnz     short locret_A25A94
0xA25A8D: push    eax
0xA25A8E: call    FormHeapFree
0xA25A93: pop     ecx
0xA25A94: retn
