0xA18210: push    offset byte_B05594
0xA18215: mov     ecx, offset dword_B07CFC
0xA1821A: call    BSSimpleList_Remove
0xA1821F: mov     eax, off_B05598; "bFileGoneMessage:TestAllCells"
0xA18224: test    eax, eax
0xA18226: jz      short locret_A18234
0xA18228: cmp     byte ptr [eax], 53h ; 'S'
0xA1822B: jnz     short locret_A18234
0xA1822D: push    eax
0xA1822E: call    FormHeapFree
0xA18233: pop     ecx
0xA18234: retn
