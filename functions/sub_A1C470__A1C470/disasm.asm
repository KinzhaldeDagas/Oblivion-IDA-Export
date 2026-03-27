0xA1C470: push    offset off_B10D78
0xA1C475: mov     ecx, offset dword_B07CFC
0xA1C47A: call    BSSimpleList_Remove
0xA1C47F: mov     eax, off_B10D7C; "sFileTypeLTF:Voice"
0xA1C484: test    eax, eax
0xA1C486: jz      short locret_A1C494
0xA1C488: cmp     byte ptr [eax], 53h ; 'S'
0xA1C48B: jnz     short locret_A1C494
0xA1C48D: push    eax
0xA1C48E: call    FormHeapFree
0xA1C493: pop     ecx
0xA1C494: retn
