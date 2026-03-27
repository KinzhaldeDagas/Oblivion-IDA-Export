0xA1B930: push    offset SettingTexturePctThreshold
0xA1B935: mov     ecx, offset dword_B07CFC
0xA1B93A: call    BSSimpleList_Remove
0xA1B93F: mov     eax, off_B08B70; "fTexturePctThreshold:Grass"
0xA1B944: test    eax, eax
0xA1B946: jz      short locret_A1B954
0xA1B948: cmp     byte ptr [eax], 53h ; 'S'
0xA1B94B: jnz     short locret_A1B954
0xA1B94D: push    eax
0xA1B94E: call    FormHeapFree
0xA1B953: pop     ecx
0xA1B954: retn
