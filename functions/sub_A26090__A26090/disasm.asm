0xA26090: push    offset flt_B16198
0xA26095: mov     ecx, offset dword_B07CFC
0xA2609A: call    BSSimpleList_Remove
0xA2609F: mov     eax, off_B1619C; "fDefaultFootVolume:Audio"
0xA260A4: test    eax, eax
0xA260A6: jz      short locret_A260B4
0xA260A8: cmp     byte ptr [eax], 53h ; 'S'
0xA260AB: jnz     short locret_A260B4
0xA260AD: push    eax
0xA260AE: call    FormHeapFree
0xA260B3: pop     ecx
0xA260B4: retn
