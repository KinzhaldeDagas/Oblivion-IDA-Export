0xA17570: push    offset unk_B0340C
0xA17575: mov     ecx, offset dword_B07CFC
0xA1757A: call    BSSimpleList_Remove
0xA1757F: mov     eax, off_B03410; "bCheckIDsOnInit:General"
0xA17584: test    eax, eax
0xA17586: jz      short locret_A17594
0xA17588: cmp     byte ptr [eax], 53h ; 'S'
0xA1758B: jnz     short locret_A17594
0xA1758D: push    eax
0xA1758E: call    FormHeapFree
0xA17593: pop     ecx
0xA17594: retn
