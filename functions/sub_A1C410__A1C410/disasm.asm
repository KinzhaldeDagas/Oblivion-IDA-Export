0xA1C410: push    offset off_B10D68
0xA1C415: mov     ecx, offset dword_B07CFC
0xA1C41A: call    BSSimpleList_Remove
0xA1C41F: mov     eax, off_B10D6C; "sFileTypeSource:Voice"
0xA1C424: test    eax, eax
0xA1C426: jz      short locret_A1C434
0xA1C428: cmp     byte ptr [eax], 53h ; 'S'
0xA1C42B: jnz     short locret_A1C434
0xA1C42D: push    eax
0xA1C42E: call    FormHeapFree
0xA1C433: pop     ecx
0xA1C434: retn
