0xA1A7F0: push    offset flt_B0760C
0xA1A7F5: mov     ecx, offset dword_B07CFC
0xA1A7FA: call    BSSimpleList_Remove
0xA1A7FF: mov     eax, off_B07610; "fLODMultTrees:LOD"
0xA1A804: test    eax, eax
0xA1A806: jz      short locret_A1A814
0xA1A808: cmp     byte ptr [eax], 53h ; 'S'
0xA1A80B: jnz     short locret_A1A814
0xA1A80D: push    eax
0xA1A80E: call    FormHeapFree
0xA1A813: pop     ecx
0xA1A814: retn
