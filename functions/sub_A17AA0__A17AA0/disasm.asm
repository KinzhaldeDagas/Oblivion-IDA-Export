0xA17AA0: push    offset iRetainFilenameOffsetTable_Archive
0xA17AA5: mov     ecx, offset dword_B07CFC
0xA17AAA: call    BSSimpleList_Remove
0xA17AAF: mov     eax, off_B0444C; "iRetainFilenameOffsetTable:Archive"
0xA17AB4: test    eax, eax
0xA17AB6: jz      short locret_A17AC4
0xA17AB8: cmp     byte ptr [eax], 53h ; 'S'
0xA17ABB: jnz     short locret_A17AC4
0xA17ABD: push    eax
0xA17ABE: call    FormHeapFree
0xA17AC3: pop     ecx
0xA17AC4: retn
