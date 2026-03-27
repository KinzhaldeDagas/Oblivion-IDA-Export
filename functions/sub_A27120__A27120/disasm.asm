0xA27120: push    offset iDistantLODGroupWidth_DistantLOD
0xA27125: mov     ecx, offset dword_B07CFC
0xA2712A: call    BSSimpleList_Remove
0xA2712F: mov     eax, off_B2C360; "iDistantLODGroupWidth:DistantLOD"
0xA27134: test    eax, eax
0xA27136: jz      short locret_A27144
0xA27138: cmp     byte ptr [eax], 53h ; 'S'
0xA2713B: jnz     short locret_A27144
0xA2713D: push    eax
0xA2713E: call    FormHeapFree
0xA27143: pop     ecx
0xA27144: retn
