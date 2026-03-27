0xA18410: push    offset Str
0xA18415: mov     ecx, offset dword_B07CFC
0xA1841A: call    BSSimpleList_Remove
0xA1841F: mov     eax, off_B05BB8; "sSaveGameSafeCellID:General"
0xA18424: test    eax, eax
0xA18426: jz      short locret_A18434
0xA18428: cmp     byte ptr [eax], 53h ; 'S'
0xA1842B: jnz     short locret_A18434
0xA1842D: push    eax
0xA1842E: call    FormHeapFree
0xA18433: pop     ecx
0xA18434: retn
