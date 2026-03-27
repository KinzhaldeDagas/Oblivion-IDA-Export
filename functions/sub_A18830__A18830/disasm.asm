0xA18830: push    offset dword_B06A98
0xA18835: mov     ecx, offset dword_B07CFC
0xA1883A: call    BSSimpleList_Remove
0xA1883F: mov     eax, off_B06A9C; "uGridDistantTreeRange:General"
0xA18844: test    eax, eax
0xA18846: jz      short locret_A18854
0xA18848: cmp     byte ptr [eax], 53h ; 'S'
0xA1884B: jnz     short locret_A18854
0xA1884D: push    eax
0xA1884E: call    FormHeapFree
0xA18853: pop     ecx
0xA18854: retn
