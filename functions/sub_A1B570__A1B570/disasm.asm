0xA1B570: push    offset bOutQuadInLinearAttenuation
0xA1B575: mov     ecx, offset dword_B07CFC
0xA1B57A: call    BSSimpleList_Remove
0xA1B57F: mov     eax, off_B08184; "bOutQuadInLin:bLightAttenuation"
0xA1B584: test    eax, eax
0xA1B586: jz      short locret_A1B594
0xA1B588: cmp     byte ptr [eax], 53h ; 'S'
0xA1B58B: jnz     short locret_A1B594
0xA1B58D: push    eax
0xA1B58E: call    FormHeapFree
0xA1B593: pop     ecx
0xA1B594: retn
