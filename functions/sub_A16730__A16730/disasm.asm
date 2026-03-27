0xA16730: push    offset off_B02C98
0xA16735: mov     ecx, offset dword_B07CFC
0xA1673A: call    BSSimpleList_Remove
0xA1673F: mov     eax, off_B02C9C; "sTestFile2:General"
0xA16744: test    eax, eax
0xA16746: jz      short locret_A16754
0xA16748: cmp     byte ptr [eax], 53h ; 'S'
0xA1674B: jnz     short locret_A16754
0xA1674D: push    eax
0xA1674E: call    FormHeapFree
0xA16753: pop     ecx
0xA16754: retn
