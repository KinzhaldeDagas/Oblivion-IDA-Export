0xA25A40: push    offset dword_B14ED8
0xA25A45: mov     ecx, offset dword_B07CFC
0xA25A4A: call    BSSimpleList_Remove
0xA25A4F: mov     eax, off_B14EDC; "iJoystickLookUpDown:Controls"
0xA25A54: test    eax, eax
0xA25A56: jz      short locret_A25A64
0xA25A58: cmp     byte ptr [eax], 53h ; 'S'
0xA25A5B: jnz     short locret_A25A64
0xA25A5D: push    eax
0xA25A5E: call    FormHeapFree
0xA25A63: pop     ecx
0xA25A64: retn
