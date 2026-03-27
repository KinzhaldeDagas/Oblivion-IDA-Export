0xA1BF70: push    offset unk_B09B40
0xA1BF75: mov     ecx, offset dword_B07CFC
0xA1BF7A: call    BSSimpleList_Remove
0xA1BF7F: mov     eax, off_B09B44; "iLODTextureTiling:LOD"
0xA1BF84: test    eax, eax
0xA1BF86: jz      short locret_A1BF94
0xA1BF88: cmp     byte ptr [eax], 53h ; 'S'
0xA1BF8B: jnz     short locret_A1BF94
0xA1BF8D: push    eax
0xA1BF8E: call    FormHeapFree
0xA1BF93: pop     ecx
0xA1BF94: retn
