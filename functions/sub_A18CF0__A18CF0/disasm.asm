0xA18CF0: push    offset byte_B06CA4
0xA18CF5: mov     ecx, offset dword_B07CFC
0xA18CFA: call    BSSimpleList_Remove
0xA18CFF: mov     eax, off_B06CA8; "bUse Shaders:Display"
0xA18D04: test    eax, eax
0xA18D06: jz      short locret_A18D14
0xA18D08: cmp     byte ptr [eax], 53h ; 'S'
0xA18D0B: jnz     short locret_A18D14
0xA18D0D: push    eax
0xA18D0E: call    FormHeapFree
0xA18D13: pop     ecx
0xA18D14: retn
