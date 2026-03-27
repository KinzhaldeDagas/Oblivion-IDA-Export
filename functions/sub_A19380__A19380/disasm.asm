0xA19380: push    offset ForcePow2Text
0xA19385: mov     ecx, offset dword_B07CFC
0xA1938A: call    BSSimpleList_Remove
0xA1938F: mov     eax, off_B06DC0; "bForcePow2Textures:Display"
0xA19394: test    eax, eax
0xA19396: jz      short locret_A193A4
0xA19398: cmp     byte ptr [eax], 53h ; 'S'
0xA1939B: jnz     short locret_A193A4
0xA1939D: push    eax
0xA1939E: call    FormHeapFree
0xA193A3: pop     ecx
0xA193A4: retn
