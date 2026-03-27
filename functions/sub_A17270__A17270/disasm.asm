0xA17270: push    offset flt_B0312C
0xA17275: mov     ecx, offset dword_B07CFC
0xA1727A: call    BSSimpleList_Remove
0xA1727F: mov     eax, off_B03130; "fNoLODFarDistancePct:Display"
0xA17284: test    eax, eax
0xA17286: jz      short locret_A17294
0xA17288: cmp     byte ptr [eax], 53h ; 'S'
0xA1728B: jnz     short locret_A17294
0xA1728D: push    eax
0xA1728E: call    FormHeapFree
0xA17293: pop     ecx
0xA17294: retn
