0xA1BDF0: push    offset byte_B09B00
0xA1BDF5: mov     ecx, offset dword_B07CFC
0xA1BDFA: call    BSSimpleList_Remove
0xA1BDFF: mov     eax, off_B09B04; "bDrawShaderGrass:Grass"
0xA1BE04: test    eax, eax
0xA1BE06: jz      short locret_A1BE14
0xA1BE08: cmp     byte ptr [eax], 53h ; 'S'
0xA1BE0B: jnz     short locret_A1BE14
0xA1BE0D: push    eax
0xA1BE0E: call    FormHeapFree
0xA1BE13: pop     ecx
0xA1BE14: retn
