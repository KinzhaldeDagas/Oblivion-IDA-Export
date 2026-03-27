0xA17A70: push    offset iRetainFilenameStringTable_Archive
0xA17A75: mov     ecx, offset dword_B07CFC
0xA17A7A: call    BSSimpleList_Remove
0xA17A7F: mov     eax, off_B04444; "iRetainFilenameStringTable:Archive"
0xA17A84: test    eax, eax
0xA17A86: jz      short locret_A17A94
0xA17A88: cmp     byte ptr [eax], 53h ; 'S'
0xA17A8B: jnz     short locret_A17A94
0xA17A8D: push    eax
0xA17A8E: call    FormHeapFree
0xA17A93: pop     ecx
0xA17A94: retn
