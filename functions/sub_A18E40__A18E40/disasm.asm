0xA18E40: push    offset byte_B06CDC
0xA18E45: mov     ecx, offset dword_B07CFC
0xA18E4A: call    BSSimpleList_Remove
0xA18E4F: mov     eax, off_B06CE0; "bDoSpecularPass:Display"
0xA18E54: test    eax, eax
0xA18E56: jz      short locret_A18E64
0xA18E58: cmp     byte ptr [eax], 53h ; 'S'
0xA18E5B: jnz     short locret_A18E64
0xA18E5D: push    eax
0xA18E5E: call    FormHeapFree
0xA18E63: pop     ecx
0xA18E64: retn
