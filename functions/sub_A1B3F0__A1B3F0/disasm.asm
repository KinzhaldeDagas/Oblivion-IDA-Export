0xA1B3F0: push    offset bUSeLinear
0xA1B3F5: mov     ecx, offset dword_B07CFC
0xA1B3FA: call    BSSimpleList_Remove
0xA1B3FF: mov     eax, off_B08144; "bUseLinear:bLightAttenuation"
0xA1B404: test    eax, eax
0xA1B406: jz      short locret_A1B414
0xA1B408: cmp     byte ptr [eax], 53h ; 'S'
0xA1B40B: jnz     short locret_A1B414
0xA1B40D: push    eax
0xA1B40E: call    FormHeapFree
0xA1B413: pop     ecx
0xA1B414: retn
