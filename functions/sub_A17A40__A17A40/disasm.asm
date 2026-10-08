0xA17A40: push    offset iRetainDirectoryStringTable_Archive
0xA17A45: mov     ecx, offset dword_B07CFC
0xA17A4A: call    BSSimpleList_Remove
0xA17A4F: mov     eax, off_B0443C; "iRetainDirectoryStringTable:Archive"
0xA17A54: test    eax, eax
0xA17A56: jz      short locret_A17A64
0xA17A58: cmp     byte ptr [eax], 53h ; 'S'
0xA17A5B: jnz     short locret_A17A64
0xA17A5D: push    eax
0xA17A5E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA17A63: pop     ecx
0xA17A64: retn
