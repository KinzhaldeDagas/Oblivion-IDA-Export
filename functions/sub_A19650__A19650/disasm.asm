0xA19650: push    offset flt_B06E34
0xA19655: mov     ecx, offset dword_B07CFC
0xA1965A: call    BSSimpleList_Remove
0xA1965F: mov     eax, off_B06E38; "fSunlightDimmer:BlurShaderHDR"
0xA19664: test    eax, eax
0xA19666: jz      short locret_A19674
0xA19668: cmp     byte ptr [eax], 53h ; 'S'
0xA1966B: jnz     short locret_A19674
0xA1966D: push    eax
0xA1966E: call    FormHeapFree
0xA19673: pop     ecx
0xA19674: retn
