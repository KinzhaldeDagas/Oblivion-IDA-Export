0xA1BD90: push    offset byte_B09AF0
0xA1BD95: mov     ecx, offset dword_B07CFC
0xA1BD9A: call    BSSimpleList_Remove
0xA1BD9F: mov     eax, off_B09AF4; "bDisplayLODTrees:LOD"
0xA1BDA4: test    eax, eax
0xA1BDA6: jz      short locret_A1BDB4
0xA1BDA8: cmp     byte ptr [eax], 53h ; 'S'
0xA1BDAB: jnz     short locret_A1BDB4
0xA1BDAD: push    eax
0xA1BDAE: call    FormHeapFree
0xA1BDB3: pop     ecx
0xA1BDB4: retn
