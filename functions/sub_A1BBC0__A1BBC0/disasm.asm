0xA1BBC0: push    offset iNumHavokThreads
0xA1BBC5: mov     ecx, offset dword_B07CFC
0xA1BBCA: call    BSSimpleList_Remove
0xA1BBCF: mov     eax, off_B097DC; "iNumHavokThreads:HAVOK"
0xA1BBD4: test    eax, eax
0xA1BBD6: jz      short locret_A1BBE4
0xA1BBD8: cmp     byte ptr [eax], 53h ; 'S'
0xA1BBDB: jnz     short locret_A1BBE4
0xA1BBDD: push    eax
0xA1BBDE: call    FormHeapFree
0xA1BBE3: pop     ecx
0xA1BBE4: retn
