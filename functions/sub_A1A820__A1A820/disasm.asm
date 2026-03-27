0xA1A820: push    offset unk_B07614
0xA1A825: mov     ecx, offset dword_B07CFC
0xA1A82A: call    BSSimpleList_Remove
0xA1A82F: mov     eax, off_B07618; "fLODMultLandscape:LOD"
0xA1A834: test    eax, eax
0xA1A836: jz      short locret_A1A844
0xA1A838: cmp     byte ptr [eax], 53h ; 'S'
0xA1A83B: jnz     short locret_A1A844
0xA1A83D: push    eax
0xA1A83E: call    FormHeapFree
0xA1A843: pop     ecx
0xA1A844: retn
