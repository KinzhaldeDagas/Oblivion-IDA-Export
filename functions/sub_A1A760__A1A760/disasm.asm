0xA1A760: push    offset unk_B075F4
0xA1A765: mov     ecx, offset dword_B07CFC
0xA1A76A: call    BSSimpleList_Remove
0xA1A76F: mov     eax, off_B075F8; "fLODMultObjects:LOD"
0xA1A774: test    eax, eax
0xA1A776: jz      short locret_A1A784
0xA1A778: cmp     byte ptr [eax], 53h ; 'S'
0xA1A77B: jnz     short locret_A1A784
0xA1A77D: push    eax
0xA1A77E: call    FormHeapFree
0xA1A783: pop     ecx
0xA1A784: retn
