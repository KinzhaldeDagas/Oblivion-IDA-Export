0xA19200: push    offset flt_B06D7C
0xA19205: mov     ecx, offset dword_B07CFC
0xA1920A: call    BSSimpleList_Remove
0xA1920F: mov     eax, off_B06D80; "fSISpecularMult:BlurShader"
0xA19214: test    eax, eax
0xA19216: jz      short locret_A19224
0xA19218: cmp     byte ptr [eax], 53h ; 'S'
0xA1921B: jnz     short locret_A19224
0xA1921D: push    eax
0xA1921E: call    FormHeapFree
0xA19223: pop     ecx
0xA19224: retn
