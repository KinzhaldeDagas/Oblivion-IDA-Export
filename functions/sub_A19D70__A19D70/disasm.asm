0xA19D70: push    offset flt_B06F64
0xA19D75: mov     ecx, offset dword_B07CFC
0xA19D7A: call    BSSimpleList_Remove
0xA19D7F: mov     eax, off_B06F68; "fGamma:Display"
0xA19D84: test    eax, eax
0xA19D86: jz      short locret_A19D94
0xA19D88: cmp     byte ptr [eax], 53h ; 'S'
0xA19D8B: jnz     short locret_A19D94
0xA19D8D: push    eax
0xA19D8E: call    FormHeapFree
0xA19D93: pop     ecx
0xA19D94: retn
