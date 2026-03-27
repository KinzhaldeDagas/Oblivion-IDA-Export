0xA18380: push    offset unk_B05B9C
0xA18385: mov     ecx, offset dword_B07CFC
0xA1838A: call    BSSimpleList_Remove
0xA1838F: mov     eax, off_B05BA0; "bForceReloadOnEssentialCharacterDeath:G"...
0xA18394: test    eax, eax
0xA18396: jz      short locret_A183A4
0xA18398: cmp     byte ptr [eax], 53h ; 'S'
0xA1839B: jnz     short locret_A183A4
0xA1839D: push    eax
0xA1839E: call    FormHeapFree
0xA183A3: pop     ecx
0xA183A4: retn
