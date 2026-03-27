0xA24370: push    offset off_B12E34; "Data\\Fonts\\Daedric_Font.fnt"
0xA24375: mov     ecx, offset dword_B07CFC
0xA2437A: call    BSSimpleList_Remove
0xA2437F: mov     eax, off_B12E38; "sFontFile_4:Fonts"
0xA24384: test    eax, eax
0xA24386: jz      short locret_A24394
0xA24388: cmp     byte ptr [eax], 53h ; 'S'
0xA2438B: jnz     short locret_A24394
0xA2438D: push    eax
0xA2438E: call    FormHeapFree
0xA24393: pop     ecx
0xA24394: retn
