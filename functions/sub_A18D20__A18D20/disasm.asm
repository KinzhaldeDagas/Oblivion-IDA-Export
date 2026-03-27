0xA18D20: push    offset byte_B06CAC
0xA18D25: mov     ecx, offset dword_B07CFC
0xA18D2A: call    BSSimpleList_Remove
0xA18D2F: mov     eax, off_B06CB0; "bUseRefractionShader:Display"
0xA18D34: test    eax, eax
0xA18D36: jz      short locret_A18D44
0xA18D38: cmp     byte ptr [eax], 53h ; 'S'
0xA18D3B: jnz     short locret_A18D44
0xA18D3D: push    eax
0xA18D3E: call    FormHeapFree
0xA18D43: pop     ecx
0xA18D44: retn
