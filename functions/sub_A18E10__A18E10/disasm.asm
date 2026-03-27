0xA18E10: push    offset byte_B06CD4
0xA18E15: mov     ecx, offset dword_B07CFC
0xA18E1A: call    BSSimpleList_Remove
0xA18E1F: mov     eax, off_B06CD8; "bDoDiffusePass:Display"
0xA18E24: test    eax, eax
0xA18E26: jz      short locret_A18E34
0xA18E28: cmp     byte ptr [eax], 53h ; 'S'
0xA18E2B: jnz     short locret_A18E34
0xA18E2D: push    eax
0xA18E2E: call    FormHeapFree
0xA18E33: pop     ecx
0xA18E34: retn
