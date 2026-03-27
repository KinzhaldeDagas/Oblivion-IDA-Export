0xA1A540: push    offset flt_B070D0
0xA1A545: mov     ecx, offset dword_B07CFC
0xA1A54A: call    BSSimpleList_Remove
0xA1A54F: mov     eax, off_B070D4; "fNearWaterIndoorTolerance:Water"
0xA1A554: test    eax, eax
0xA1A556: jz      short locret_A1A564
0xA1A558: cmp     byte ptr [eax], 53h ; 'S'
0xA1A55B: jnz     short locret_A1A564
0xA1A55D: push    eax
0xA1A55E: call    FormHeapFree
0xA1A563: pop     ecx
0xA1A564: retn
