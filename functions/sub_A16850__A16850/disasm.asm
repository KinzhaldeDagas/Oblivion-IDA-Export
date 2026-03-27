0xA16850: push    offset off_B02CC8
0xA16855: mov     ecx, offset dword_B07CFC
0xA1685A: call    BSSimpleList_Remove
0xA1685F: mov     eax, off_B02CCC; "sTestFile8:General"
0xA16864: test    eax, eax
0xA16866: jz      short locret_A16874
0xA16868: cmp     byte ptr [eax], 53h ; 'S'
0xA1686B: jnz     short locret_A16874
0xA1686D: push    eax
0xA1686E: call    FormHeapFree
0xA16873: pop     ecx
0xA16874: retn
