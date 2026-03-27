0xA19A10: push    offset flt_B06ED4
0xA19A15: mov     ecx, offset dword_B07CFC
0xA19A1A: call    BSSimpleList_Remove
0xA19A1F: mov     eax, off_B06ED8; "fSpecularLOD2:Display"
0xA19A24: test    eax, eax
0xA19A26: jz      short locret_A19A34
0xA19A28: cmp     byte ptr [eax], 53h ; 'S'
0xA19A2B: jnz     short locret_A19A34
0xA19A2D: push    eax
0xA19A2E: call    FormHeapFree
0xA19A33: pop     ecx
0xA19A34: retn
