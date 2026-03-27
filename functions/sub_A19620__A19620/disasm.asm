0xA19620: push    offset flt_B06E2C
0xA19625: mov     ecx, offset dword_B07CFC
0xA1962A: call    BSSimpleList_Remove
0xA1962F: mov     eax, off_B06E30; "fSIEmmisiveMult:BlurShaderHDR"
0xA19634: test    eax, eax
0xA19636: jz      short locret_A19644
0xA19638: cmp     byte ptr [eax], 53h ; 'S'
0xA1963B: jnz     short locret_A19644
0xA1963D: push    eax
0xA1963E: call    FormHeapFree
0xA19643: pop     ecx
0xA19644: retn
