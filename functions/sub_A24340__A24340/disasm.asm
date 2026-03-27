0xA24340: push    offset off_B12E2C; "Data\\Fonts\\Tahoma_Bold_Small.fnt"
0xA24345: mov     ecx, offset dword_B07CFC
0xA2434A: call    BSSimpleList_Remove
0xA2434F: mov     eax, off_B12E30; "sFontFile_3:Fonts"
0xA24354: test    eax, eax
0xA24356: jz      short locret_A24364
0xA24358: cmp     byte ptr [eax], 53h ; 'S'
0xA2435B: jnz     short locret_A24364
0xA2435D: push    eax
0xA2435E: call    FormHeapFree
0xA24363: pop     ecx
0xA24364: retn
