0xA25A10: push    offset dword_B14ED0
0xA25A15: mov     ecx, offset dword_B07CFC
0xA25A1A: call    BSSimpleList_Remove
0xA25A1F: mov     eax, off_B14ED4; "iJoystickMoveLeftRight:Controls"
0xA25A24: test    eax, eax
0xA25A26: jz      short locret_A25A34
0xA25A28: cmp     byte ptr [eax], 53h ; 'S'
0xA25A2B: jnz     short locret_A25A34
0xA25A2D: push    eax
0xA25A2E: call    FormHeapFree
0xA25A33: pop     ecx
0xA25A34: retn
