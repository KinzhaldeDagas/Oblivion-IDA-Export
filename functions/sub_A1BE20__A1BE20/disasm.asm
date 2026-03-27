0xA1BE20: push    offset bGrassPointLightening
0xA1BE25: mov     ecx, offset dword_B07CFC
0xA1BE2A: call    BSSimpleList_Remove
0xA1BE2F: mov     eax, off_B09B0C; "bGrassPointLighting:Grass"
0xA1BE34: test    eax, eax
0xA1BE36: jz      short locret_A1BE44
0xA1BE38: cmp     byte ptr [eax], 53h ; 'S'
0xA1BE3B: jnz     short locret_A1BE44
0xA1BE3D: push    eax
0xA1BE3E: call    FormHeapFree
0xA1BE43: pop     ecx
0xA1BE44: retn
