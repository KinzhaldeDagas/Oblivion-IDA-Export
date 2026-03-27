0xA18B10: push    offset dword_B06C54
0xA18B15: mov     ecx, offset dword_B07CFC
0xA18B1A: call    BSSimpleList_Remove
0xA18B1F: mov     eax, off_B06C58; "iAdapter:Display"
0xA18B24: test    eax, eax
0xA18B26: jz      short locret_A18B34
0xA18B28: cmp     byte ptr [eax], 53h ; 'S'
0xA18B2B: jnz     short locret_A18B34
0xA18B2D: push    eax
0xA18B2E: call    FormHeapFree
0xA18B33: pop     ecx
0xA18B34: retn
