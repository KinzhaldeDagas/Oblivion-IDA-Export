0xA17B00: push    offset sArchiveList_Archive
0xA17B05: mov     ecx, offset dword_B07CFC
0xA17B0A: call    BSSimpleList_Remove
0xA17B0F: mov     eax, off_B0445C; "sArchiveList:Archive"
0xA17B14: test    eax, eax
0xA17B16: jz      short locret_A17B24
0xA17B18: cmp     byte ptr [eax], 53h ; 'S'
0xA17B1B: jnz     short locret_A17B24
0xA17B1D: push    eax
0xA17B1E: call    FormHeapFree
0xA17B23: pop     ecx
0xA17B24: retn
