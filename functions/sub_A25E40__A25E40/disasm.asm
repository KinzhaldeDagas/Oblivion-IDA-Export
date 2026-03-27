0xA25E40: push    offset byte_B15800
0xA25E45: mov     ecx, offset dword_B07CFC
0xA25E4A: call    BSSimpleList_Remove
0xA25E4F: mov     eax, off_B15804; "bUseBackgroundPathing:PathFinding"
0xA25E54: test    eax, eax
0xA25E56: jz      short locret_A25E64
0xA25E58: cmp     byte ptr [eax], 53h ; 'S'
0xA25E5B: jnz     short locret_A25E64
0xA25E5D: push    eax
0xA25E5E: call    FormHeapFree
0xA25E63: pop     ecx
0xA25E64: retn
