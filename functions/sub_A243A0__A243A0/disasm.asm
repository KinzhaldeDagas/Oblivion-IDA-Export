0xA243A0: push    offset off_B12E3C; "Data\\Fonts\\Handwritten.fnt"
0xA243A5: mov     ecx, offset dword_B07CFC
0xA243AA: call    BSSimpleList_Remove
0xA243AF: mov     eax, off_B12E40; "sFontFile_5:Fonts"
0xA243B4: test    eax, eax
0xA243B6: jz      short locret_A243C4
0xA243B8: cmp     byte ptr [eax], 53h ; 'S'
0xA243BB: jnz     short locret_A243C4
0xA243BD: push    eax
0xA243BE: call    FormHeapFree
0xA243C3: pop     ecx
0xA243C4: retn
