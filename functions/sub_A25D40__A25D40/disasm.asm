0xA25D40: push    offset byte_B14F58
0xA25D45: mov     ecx, offset dword_B07CFC
0xA25D4A: call    BSSimpleList_Remove
0xA25D4F: mov     eax, off_B14F5C; "bBorderRegionsEnabled:General"
0xA25D54: test    eax, eax
0xA25D56: jz      short locret_A25D64
0xA25D58: cmp     byte ptr [eax], 53h ; 'S'
0xA25D5B: jnz     short locret_A25D64
0xA25D5D: push    eax
0xA25D5E: call    FormHeapFree
0xA25D63: pop     ecx
0xA25D64: retn
