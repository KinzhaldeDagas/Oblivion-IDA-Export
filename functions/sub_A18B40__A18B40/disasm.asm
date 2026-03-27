0xA18B40: push    offset dword_B06C5C
0xA18B45: mov     ecx, offset dword_B07CFC
0xA18B4A: call    BSSimpleList_Remove
0xA18B4F: mov     eax, off_B06C60; "iSize W:Display"
0xA18B54: test    eax, eax
0xA18B56: jz      short locret_A18B64
0xA18B58: cmp     byte ptr [eax], 53h ; 'S'
0xA18B5B: jnz     short locret_A18B64
0xA18B5D: push    eax
0xA18B5E: call    FormHeapFree
0xA18B63: pop     ecx
0xA18B64: retn
