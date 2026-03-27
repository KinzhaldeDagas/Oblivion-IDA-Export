0xA1BD60: push    offset byte_B09AE8
0xA1BD65: mov     ecx, offset dword_B07CFC
0xA1BD6A: call    BSSimpleList_Remove
0xA1BD6F: mov     eax, off_B09AEC; "bDisplayLODBuildings:LOD"
0xA1BD74: test    eax, eax
0xA1BD76: jz      short locret_A1BD84
0xA1BD78: cmp     byte ptr [eax], 53h ; 'S'
0xA1BD7B: jnz     short locret_A1BD84
0xA1BD7D: push    eax
0xA1BD7E: call    FormHeapFree
0xA1BD83: pop     ecx
0xA1BD84: retn
