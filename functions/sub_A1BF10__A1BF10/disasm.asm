0xA1BF10: push    offset SettingGrassWindMagnitudeMax
0xA1BF15: mov     ecx, offset dword_B07CFC
0xA1BF1A: call    BSSimpleList_Remove
0xA1BF1F: mov     eax, off_B09B34; "fGrassWindMagnitudeMax:Grass"
0xA1BF24: test    eax, eax
0xA1BF26: jz      short locret_A1BF34
0xA1BF28: cmp     byte ptr [eax], 53h ; 'S'
0xA1BF2B: jnz     short locret_A1BF34
0xA1BF2D: push    eax
0xA1BF2E: call    FormHeapFree
0xA1BF33: pop     ecx
0xA1BF34: retn
