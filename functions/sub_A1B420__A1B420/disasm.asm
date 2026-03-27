0xA1B420: push    offset useQuadratic
0xA1B425: mov     ecx, offset dword_B07CFC
0xA1B42A: call    BSSimpleList_Remove
0xA1B42F: mov     eax, off_B0814C; "bUseQuadratic:bLightAttenuation"
0xA1B434: test    eax, eax
0xA1B436: jz      short locret_A1B444
0xA1B438: cmp     byte ptr [eax], 53h ; 'S'
0xA1B43B: jnz     short locret_A1B444
0xA1B43D: push    eax
0xA1B43E: call    FormHeapFree
0xA1B443: pop     ecx
0xA1B444: retn
