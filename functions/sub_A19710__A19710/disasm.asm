0xA19710: push    offset flt_B06E54
0xA19715: mov     ecx, offset dword_B07CFC
0xA1971A: call    BSSimpleList_Remove
0xA1971F: mov     eax, off_B06E58; "fGrassDimmer:BlurShaderHDR"
0xA19724: test    eax, eax
0xA19726: jz      short locret_A19734
0xA19728: cmp     byte ptr [eax], 53h ; 'S'
0xA1972B: jnz     short locret_A19734
0xA1972D: push    eax
0xA1972E: call    FormHeapFree
0xA19733: pop     ecx
0xA19734: retn
