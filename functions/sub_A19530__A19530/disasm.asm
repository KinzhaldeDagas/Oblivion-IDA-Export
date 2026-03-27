0xA19530: push    offset flt_B06E04
0xA19535: mov     ecx, offset dword_B07CFC
0xA1953A: call    BSSimpleList_Remove
0xA1953F: mov     eax, off_B06E08; "fBrightClamp:BlurShaderHDR"
0xA19544: test    eax, eax
0xA19546: jz      short locret_A19554
0xA19548: cmp     byte ptr [eax], 53h ; 'S'
0xA1954B: jnz     short locret_A19554
0xA1954D: push    eax
0xA1954E: call    FormHeapFree
0xA19553: pop     ecx
0xA19554: retn
