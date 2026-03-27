0xA19860: push    offset flt_B06E8C
0xA19865: mov     ecx, offset dword_B07CFC
0xA1986A: call    BSSimpleList_Remove
0xA1986F: mov     eax, off_B06E90; "fEyeAdaptSpeed:BlurShaderHDRInterior"
0xA19874: test    eax, eax
0xA19876: jz      short locret_A19884
0xA19878: cmp     byte ptr [eax], 53h ; 'S'
0xA1987B: jnz     short locret_A19884
0xA1987D: push    eax
0xA1987E: call    FormHeapFree
0xA19883: pop     ecx
0xA19884: retn
