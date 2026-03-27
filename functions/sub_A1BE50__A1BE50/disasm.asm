0xA1BE50: push    offset SettingGrassStartFadeDistance
0xA1BE55: mov     ecx, offset dword_B07CFC
0xA1BE5A: call    BSSimpleList_Remove
0xA1BE5F: mov     eax, off_B09B14; "fGrassStartFadeDistance:Grass"
0xA1BE64: test    eax, eax
0xA1BE66: jz      short locret_A1BE74
0xA1BE68: cmp     byte ptr [eax], 53h ; 'S'
0xA1BE6B: jnz     short locret_A1BE74
0xA1BE6D: push    eax
0xA1BE6E: call    FormHeapFree
0xA1BE73: pop     ecx
0xA1BE74: retn
