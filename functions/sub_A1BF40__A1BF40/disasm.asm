0xA1BF40: push    offset unk_B09B38
0xA1BF45: mov     ecx, offset dword_B07CFC
0xA1BF4A: call    BSSimpleList_Remove
0xA1BF4F: mov     eax, off_B09B3C; "iLODTextureSizePow2:LOD"
0xA1BF54: test    eax, eax
0xA1BF56: jz      short locret_A1BF64
0xA1BF58: cmp     byte ptr [eax], 53h ; 'S'
0xA1BF5B: jnz     short locret_A1BF64
0xA1BF5D: push    eax
0xA1BF5E: call    FormHeapFree
0xA1BF63: pop     ecx
0xA1BF64: retn
