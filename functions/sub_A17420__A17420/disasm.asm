0xA17420: push    offset dword_B0317C
0xA17425: mov     ecx, offset dword_B07CFC
0xA1742A: call    BSSimpleList_Remove
0xA1742F: mov     eax, off_B03180; "iNumBitsForFullySeen:General"
0xA17434: test    eax, eax
0xA17436: jz      short locret_A17444
0xA17438: cmp     byte ptr [eax], 53h ; 'S'
0xA1743B: jnz     short locret_A17444
0xA1743D: push    eax
0xA1743E: call    FormHeapFree
0xA17443: pop     ecx
0xA17444: retn
