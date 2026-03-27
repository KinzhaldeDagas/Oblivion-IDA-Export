0xA25BF0: push    offset dword_B14F20
0xA25BF5: mov     ecx, offset dword_B07CFC
0xA25BFA: call    BSSimpleList_Remove
0xA25BFF: mov     eax, off_B14F24; "fDlgLookDegStop:Interface"
0xA25C04: test    eax, eax
0xA25C06: jz      short locret_A25C14
0xA25C08: cmp     byte ptr [eax], 53h ; 'S'
0xA25C0B: jnz     short locret_A25C14
0xA25C0D: push    eax
0xA25C0E: call    FormHeapFree
0xA25C13: pop     ecx
0xA25C14: retn
