0xA1C200: push    offset byte_B10CA0
0xA1C205: mov     ecx, offset dword_B07CFC
0xA1C20A: call    BSSimpleList_Remove
0xA1C20F: mov     eax, off_B10CA4; "bActivateAllQuestScripts:General"
0xA1C214: test    eax, eax
0xA1C216: jz      short locret_A1C224
0xA1C218: cmp     byte ptr [eax], 53h ; 'S'
0xA1C21B: jnz     short locret_A1C224
0xA1C21D: push    eax
0xA1C21E: call    FormHeapFree
0xA1C223: pop     ecx
0xA1C224: retn
