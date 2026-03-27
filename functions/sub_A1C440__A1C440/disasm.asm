0xA1C440: push    offset off_B10D70
0xA1C445: mov     ecx, offset dword_B07CFC
0xA1C44A: call    BSSimpleList_Remove
0xA1C44F: mov     eax, off_B10D74; "sFileTypeLip:Voice"
0xA1C454: test    eax, eax
0xA1C456: jz      short locret_A1C464
0xA1C458: cmp     byte ptr [eax], 53h ; 'S'
0xA1C45B: jnz     short locret_A1C464
0xA1C45D: push    eax
0xA1C45E: call    FormHeapFree
0xA1C463: pop     ecx
0xA1C464: retn
