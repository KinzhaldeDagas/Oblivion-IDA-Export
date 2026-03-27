0xA1BE80: push    offset SettingGrassEndDistance
0xA1BE85: mov     ecx, offset dword_B07CFC
0xA1BE8A: call    BSSimpleList_Remove
0xA1BE8F: mov     eax, off_B09B1C; "fGrassEndDistance:Grass"
0xA1BE94: test    eax, eax
0xA1BE96: jz      short locret_A1BEA4
0xA1BE98: cmp     byte ptr [eax], 53h ; 'S'
0xA1BE9B: jnz     short locret_A1BEA4
0xA1BE9D: push    eax
0xA1BE9E: call    FormHeapFree
0xA1BEA3: pop     ecx
0xA1BEA4: retn
