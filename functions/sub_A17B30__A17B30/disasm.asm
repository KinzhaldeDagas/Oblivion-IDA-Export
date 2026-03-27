0xA17B30: push    offset bInvalidateOlderFiles_Archive
0xA17B35: mov     ecx, offset dword_B07CFC
0xA17B3A: call    BSSimpleList_Remove
0xA17B3F: mov     eax, off_B04464; "bInvalidateOlderFiles:Archive"
0xA17B44: test    eax, eax
0xA17B46: jz      short locret_A17B54
0xA17B48: cmp     byte ptr [eax], 53h ; 'S'
0xA17B4B: jnz     short locret_A17B54
0xA17B4D: push    eax
0xA17B4E: call    FormHeapFree
0xA17B53: pop     ecx
0xA17B54: retn
