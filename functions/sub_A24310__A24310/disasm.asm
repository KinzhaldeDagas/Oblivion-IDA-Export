0xA24310: push    offset off_B12E24; "Data\\Fonts\\Kingthings_Shadowed.fnt"
0xA24315: mov     ecx, offset dword_B07CFC
0xA2431A: call    BSSimpleList_Remove
0xA2431F: mov     eax, off_B12E28; "sFontFile_2:Fonts"
0xA24324: test    eax, eax
0xA24326: jz      short locret_A24334
0xA24328: cmp     byte ptr [eax], 53h ; 'S'
0xA2432B: jnz     short locret_A24334
0xA2432D: push    eax
0xA2432E: call    FormHeapFree
0xA24333: pop     ecx
0xA24334: retn
