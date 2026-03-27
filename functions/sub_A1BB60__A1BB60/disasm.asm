0xA1BB60: push    offset flt_B097C8
0xA1BB65: mov     ecx, offset dword_B07CFC
0xA1BB6A: call    BSSimpleList_Remove
0xA1BB6F: mov     eax, off_B097CC; "fDecalLifetime:Display"
0xA1BB74: test    eax, eax
0xA1BB76: jz      short locret_A1BB84
0xA1BB78: cmp     byte ptr [eax], 53h ; 'S'
0xA1BB7B: jnz     short locret_A1BB84
0xA1BB7D: push    eax
0xA1BB7E: call    FormHeapFree
0xA1BB83: pop     ecx
0xA1BB84: retn
