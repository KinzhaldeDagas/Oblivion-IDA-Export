0xA1B9F0: push    offset dword_B08B8C
0xA1B9F5: mov     ecx, offset dword_B07CFC
0xA1B9FA: call    BSSimpleList_Remove
0xA1B9FF: mov     eax, off_B08B90; "iLandBorder2R:Landscape"
0xA1BA04: test    eax, eax
0xA1BA06: jz      short locret_A1BA14
0xA1BA08: cmp     byte ptr [eax], 53h ; 'S'
0xA1BA0B: jnz     short locret_A1BA14
0xA1BA0D: push    eax
0xA1BA0E: call    FormHeapFree
0xA1BA13: pop     ecx
0xA1BA14: retn
