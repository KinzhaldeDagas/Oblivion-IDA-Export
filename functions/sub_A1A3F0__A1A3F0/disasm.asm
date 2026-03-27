0xA1A3F0: push    offset useWaterLOD
0xA1A3F5: mov     ecx, offset dword_B07CFC
0xA1A3FA: call    BSSimpleList_Remove
0xA1A3FF: mov     eax, off_B0709C; "bUseWaterLOD:Water"
0xA1A404: test    eax, eax
0xA1A406: jz      short locret_A1A414
0xA1A408: cmp     byte ptr [eax], 53h ; 'S'
0xA1A40B: jnz     short locret_A1A414
0xA1A40D: push    eax
0xA1A40E: call    FormHeapFree
0xA1A413: pop     ecx
0xA1A414: retn
