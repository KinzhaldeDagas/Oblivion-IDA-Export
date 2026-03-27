0xA19500: push    offset flt_B06DFC
0xA19505: mov     ecx, offset dword_B07CFC
0xA1950A: call    BSSimpleList_Remove
0xA1950F: mov     eax, off_B06E00; "fBlurRadius:BlurShaderHDR"
0xA19514: test    eax, eax
0xA19516: jz      short locret_A19524
0xA19518: cmp     byte ptr [eax], 53h ; 'S'
0xA1951B: jnz     short locret_A19524
0xA1951D: push    eax
0xA1951E: call    FormHeapFree
0xA19523: pop     ecx
0xA19524: retn
