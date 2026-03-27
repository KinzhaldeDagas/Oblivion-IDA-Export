0xA1A210: push    offset flt_B07048
0xA1A215: mov     ecx, offset dword_B07CFC
0xA1A21A: call    BSSimpleList_Remove
0xA1A21F: mov     eax, off_B0704C; "fTileTextureDivisor:Water"
0xA1A224: test    eax, eax
0xA1A226: jz      short locret_A1A234
0xA1A228: cmp     byte ptr [eax], 53h ; 'S'
0xA1A22B: jnz     short locret_A1A234
0xA1A22D: push    eax
0xA1A22E: call    FormHeapFree
0xA1A233: pop     ecx
0xA1A234: retn
