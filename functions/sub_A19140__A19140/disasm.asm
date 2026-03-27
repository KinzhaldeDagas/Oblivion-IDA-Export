0xA19140: push    offset flt_B06D5C
0xA19145: mov     ecx, offset dword_B07CFC
0xA1914A: call    BSSimpleList_Remove
0xA1914F: mov     eax, off_B06D60; "fAlphaAddInterior:BlurShader"
0xA19154: test    eax, eax
0xA19156: jz      short locret_A19164
0xA19158: cmp     byte ptr [eax], 53h ; 'S'
0xA1915B: jnz     short locret_A19164
0xA1915D: push    eax
0xA1915E: call    FormHeapFree
0xA19163: pop     ecx
0xA19164: retn
