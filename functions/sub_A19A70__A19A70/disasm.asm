0xA19A70: push    offset flt_B06EE4
0xA19A75: mov     ecx, offset dword_B07CFC
0xA19A7A: call    BSSimpleList_Remove
0xA19A7F: mov     eax, off_B06EE8; "fEnvMapLOD2:Display"
0xA19A84: test    eax, eax
0xA19A86: jz      short locret_A19A94
0xA19A88: cmp     byte ptr [eax], 53h ; 'S'
0xA19A8B: jnz     short locret_A19A94
0xA19A8D: push    eax
0xA19A8E: call    FormHeapFree
0xA19A93: pop     ecx
0xA19A94: retn
