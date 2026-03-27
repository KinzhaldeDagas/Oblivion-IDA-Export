0xA1A420: push    offset useWaterDepth
0xA1A425: mov     ecx, offset dword_B07CFC
0xA1A42A: call    BSSimpleList_Remove
0xA1A42F: mov     eax, off_B070A4; "bUseWaterDepth:Water"
0xA1A434: test    eax, eax
0xA1A436: jz      short locret_A1A444
0xA1A438: cmp     byte ptr [eax], 53h ; 'S'
0xA1A43B: jnz     short locret_A1A444
0xA1A43D: push    eax
0xA1A43E: call    FormHeapFree
0xA1A443: pop     ecx
0xA1A444: retn
