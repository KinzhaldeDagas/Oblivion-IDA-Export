0xA1C670: push    offset dword_B11920
0xA1C675: mov     ecx, offset dword_B07CFC
0xA1C67A: call    BSSimpleList_Remove
0xA1C67F: mov     eax, off_B11924; "iMaxViewCasterPicksGamebryo:Interface"
0xA1C684: test    eax, eax
0xA1C686: jz      short locret_A1C694
0xA1C688: cmp     byte ptr [eax], 53h ; 'S'
0xA1C68B: jnz     short locret_A1C694
0xA1C68D: push    eax
0xA1C68E: call    FormHeapFree
0xA1C693: pop     ecx
0xA1C694: retn
