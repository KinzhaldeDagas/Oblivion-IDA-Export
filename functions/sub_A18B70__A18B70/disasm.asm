0xA18B70: push    offset dword_B06C64
0xA18B75: mov     ecx, offset dword_B07CFC
0xA18B7A: call    BSSimpleList_Remove
0xA18B7F: mov     eax, off_B06C68; "iSize H:Display"
0xA18B84: test    eax, eax
0xA18B86: jz      short locret_A18B94
0xA18B88: cmp     byte ptr [eax], 53h ; 'S'
0xA18B8B: jnz     short locret_A18B94
0xA18B8D: push    eax
0xA18B8E: call    FormHeapFree
0xA18B93: pop     ecx
0xA18B94: retn
