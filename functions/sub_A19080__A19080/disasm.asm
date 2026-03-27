0xA19080: push    offset dword_B06D3C
0xA19085: mov     ecx, offset dword_B07CFC
0xA1908A: call    BSSimpleList_Remove
0xA1908F: mov     eax, off_B06D40; "iBlendType:BlurShader"
0xA19094: test    eax, eax
0xA19096: jz      short locret_A190A4
0xA19098: cmp     byte ptr [eax], 53h ; 'S'
0xA1909B: jnz     short locret_A190A4
0xA1909D: push    eax
0xA1909E: call    FormHeapFree
0xA190A3: pop     ecx
0xA190A4: retn
