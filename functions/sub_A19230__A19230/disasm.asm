0xA19230: push    offset flt_B06D84
0xA19235: mov     ecx, offset dword_B07CFC
0xA1923A: call    BSSimpleList_Remove
0xA1923F: mov     eax, off_B06D88; "fSIEmmisiveMult:BlurShader"
0xA19244: test    eax, eax
0xA19246: jz      short locret_A19254
0xA19248: cmp     byte ptr [eax], 53h ; 'S'
0xA1924B: jnz     short locret_A19254
0xA1924D: push    eax
0xA1924E: call    FormHeapFree
0xA19253: pop     ecx
0xA19254: retn
