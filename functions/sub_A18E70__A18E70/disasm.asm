0xA18E70: push    offset byte_B06CE4
0xA18E75: mov     ecx, offset dword_B07CFC
0xA18E7A: call    BSSimpleList_Remove
0xA18E7F: mov     eax, off_B06CE8; "bDoTexturePass:Display"
0xA18E84: test    eax, eax
0xA18E86: jz      short locret_A18E94
0xA18E88: cmp     byte ptr [eax], 53h ; 'S'
0xA18E8B: jnz     short locret_A18E94
0xA18E8D: push    eax
0xA18E8E: call    FormHeapFree
0xA18E93: pop     ecx
0xA18E94: retn
