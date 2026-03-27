0xA24730: push    offset flt_B135D0
0xA24735: mov     ecx, offset dword_B07CFC
0xA2473A: call    BSSimpleList_Remove
0xA2473F: mov     eax, off_B135D4; "fMenuPlayerLightAmbientGreen:Interface"
0xA24744: test    eax, eax
0xA24746: jz      short locret_A24754
0xA24748: cmp     byte ptr [eax], 53h ; 'S'
0xA2474B: jnz     short locret_A24754
0xA2474D: push    eax
0xA2474E: call    FormHeapFree
0xA24753: pop     ecx
0xA24754: retn
