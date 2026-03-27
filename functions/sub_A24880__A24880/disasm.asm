0xA24880: push    offset dword_B13608
0xA24885: mov     ecx, offset dword_B07CFC
0xA2488A: call    BSSimpleList_Remove
0xA2488F: mov     eax, off_B1360C; "iSafeZoneXWide:Interface"
0xA24894: test    eax, eax
0xA24896: jz      short locret_A248A4
0xA24898: cmp     byte ptr [eax], 53h ; 'S'
0xA2489B: jnz     short locret_A248A4
0xA2489D: push    eax
0xA2489E: call    FormHeapFree
0xA248A3: pop     ecx
0xA248A4: retn
