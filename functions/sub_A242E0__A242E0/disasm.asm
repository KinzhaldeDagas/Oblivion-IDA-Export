0xA242E0: push    offset off_B12E1C; "Data\\Fonts\\Kingthings_Regular.fnt"
0xA242E5: mov     ecx, offset dword_B07CFC
0xA242EA: call    BSSimpleList_Remove
0xA242EF: mov     eax, off_B12E20; "sFontFile_1:Fonts"
0xA242F4: test    eax, eax
0xA242F6: jz      short locret_A24304
0xA242F8: cmp     byte ptr [eax], 53h ; 'S'
0xA242FB: jnz     short locret_A24304
0xA242FD: push    eax
0xA242FE: call    FormHeapFree
0xA24303: pop     ecx
0xA24304: retn
