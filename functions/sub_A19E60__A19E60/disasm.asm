0xA19E60: push    offset dword_B06F8C
0xA19E65: mov     ecx, offset dword_B07CFC
0xA19E6A: call    BSSimpleList_Remove
0xA19E6F: mov     eax, off_B06F90; "iMaxLandscapeTextures:Display"
0xA19E74: test    eax, eax
0xA19E76: jz      short locret_A19E84
0xA19E78: cmp     byte ptr [eax], 53h ; 'S'
0xA19E7B: jnz     short locret_A19E84
0xA19E7D: push    eax
0xA19E7E: call    FormHeapFree
0xA19E83: pop     ecx
0xA19E84: retn
