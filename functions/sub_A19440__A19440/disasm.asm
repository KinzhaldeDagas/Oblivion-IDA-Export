0xA19440: push    offset flt_B06DDC
0xA19445: mov     ecx, offset dword_B07CFC
0xA1944A: call    BSSimpleList_Remove
0xA1944F: mov     eax, off_B06DE0; "fSunlightDimmer:BlurShader"
0xA19454: test    eax, eax
0xA19456: jz      short locret_A19464
0xA19458: cmp     byte ptr [eax], 53h ; 'S'
0xA1945B: jnz     short locret_A19464
0xA1945D: push    eax
0xA1945E: call    FormHeapFree
0xA19463: pop     ecx
0xA19464: retn
