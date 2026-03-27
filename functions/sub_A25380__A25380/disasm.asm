0xA25380: push    offset dword_B148E4
0xA25385: mov     ecx, offset dword_B07CFC
0xA2538A: call    BSSimpleList_Remove
0xA2538F: mov     eax, off_B148E8; "iMaxHiPerfCombatCount:Combat"
0xA25394: test    eax, eax
0xA25396: jz      short locret_A253A4
0xA25398: cmp     byte ptr [eax], 53h ; 'S'
0xA2539B: jnz     short locret_A253A4
0xA2539D: push    eax
0xA2539E: call    FormHeapFree
0xA253A3: pop     ecx
0xA253A4: retn
