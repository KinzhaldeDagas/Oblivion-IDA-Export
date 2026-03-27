0xA1B8D0: push    offset dword_B08B5C
0xA1B8D5: mov     ecx, offset dword_B07CFC
0xA1B8DA: call    BSSimpleList_Remove
0xA1B8DF: mov     eax, off_B08B60; "iMaxGrassTypesPerTexure:Grass"
0xA1B8E4: test    eax, eax
0xA1B8E6: jz      short locret_A1B8F4
0xA1B8E8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B8EB: jnz     short locret_A1B8F4
0xA1B8ED: push    eax
0xA1B8EE: call    FormHeapFree
0xA1B8F3: pop     ecx
0xA1B8F4: retn
