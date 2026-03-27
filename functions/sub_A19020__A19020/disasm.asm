0xA19020: push    offset dword_B06D2C
0xA19025: mov     ecx, offset dword_B07CFC
0xA1902A: call    BSSimpleList_Remove
0xA1902F: mov     eax, off_B06D30; "iTexMipMapMinimum:Display"
0xA19034: test    eax, eax
0xA19036: jz      short locret_A19044
0xA19038: cmp     byte ptr [eax], 53h ; 'S'
0xA1903B: jnz     short locret_A19044
0xA1903D: push    eax
0xA1903E: call    FormHeapFree
0xA19043: pop     ecx
0xA19044: retn
