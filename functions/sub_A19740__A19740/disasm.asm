0xA19740: push    offset flt_B06E5C
0xA19745: mov     ecx, offset dword_B07CFC
0xA1974A: call    BSSimpleList_Remove
0xA1974F: mov     eax, off_B06E60; "fUpperLUMClamp:BlurShaderHDR"
0xA19754: test    eax, eax
0xA19756: jz      short locret_A19764
0xA19758: cmp     byte ptr [eax], 53h ; 'S'
0xA1975B: jnz     short locret_A19764
0xA1975D: push    eax
0xA1975E: call    FormHeapFree
0xA19763: pop     ecx
0xA19764: retn
