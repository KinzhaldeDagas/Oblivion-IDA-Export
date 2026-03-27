0xA19770: push    offset flt_B06E64
0xA19775: mov     ecx, offset dword_B07CFC
0xA1977A: call    BSSimpleList_Remove
0xA1977F: mov     eax, off_B06E68; "fTargetLUM:BlurShaderHDR"
0xA19784: test    eax, eax
0xA19786: jz      short locret_A19794
0xA19788: cmp     byte ptr [eax], 53h ; 'S'
0xA1978B: jnz     short locret_A19794
0xA1978D: push    eax
0xA1978E: call    FormHeapFree
0xA19793: pop     ecx
0xA19794: retn
