0xA19A40: push    offset flt_B06EDC
0xA19A45: mov     ecx, offset dword_B07CFC
0xA19A4A: call    BSSimpleList_Remove
0xA19A4F: mov     eax, off_B06EE0; "fEnvMapLOD1:Display"
0xA19A54: test    eax, eax
0xA19A56: jz      short locret_A19A64
0xA19A58: cmp     byte ptr [eax], 53h ; 'S'
0xA19A5B: jnz     short locret_A19A64
0xA19A5D: push    eax
0xA19A5E: call    FormHeapFree
0xA19A63: pop     ecx
0xA19A64: retn
