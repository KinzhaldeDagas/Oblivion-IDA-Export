0xA1BEB0: push    offset SettingMinGrassSize
0xA1BEB5: mov     ecx, offset dword_B07CFC
0xA1BEBA: call    BSSimpleList_Remove
0xA1BEBF: mov     eax, off_B09B24; "iMinGrassSize:Grass"
0xA1BEC4: test    eax, eax
0xA1BEC6: jz      short locret_A1BED4
0xA1BEC8: cmp     byte ptr [eax], 53h ; 'S'
0xA1BECB: jnz     short locret_A1BED4
0xA1BECD: push    eax
0xA1BECE: call    FormHeapFree
0xA1BED3: pop     ecx
0xA1BED4: retn
