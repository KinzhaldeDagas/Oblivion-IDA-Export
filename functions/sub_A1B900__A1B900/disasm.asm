0xA1B900: push    offset dword_B08B64
0xA1B905: mov     ecx, offset dword_B07CFC
0xA1B90A: call    BSSimpleList_Remove
0xA1B90F: mov     eax, off_B08B68; "iGrassDensityEvalSize:Grass"
0xA1B914: test    eax, eax
0xA1B916: jz      short locret_A1B924
0xA1B918: cmp     byte ptr [eax], 53h ; 'S'
0xA1B91B: jnz     short locret_A1B924
0xA1B91D: push    eax
0xA1B91E: call    FormHeapFree
0xA1B923: pop     ecx
0xA1B924: retn
