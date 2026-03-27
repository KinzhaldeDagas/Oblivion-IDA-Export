0xA17240: push    offset flt_B03124
0xA17245: mov     ecx, offset dword_B07CFC
0xA1724A: call    BSSimpleList_Remove
0xA1724F: mov     eax, off_B03128; "fNoLODFarDistanceMax:Display"
0xA17254: test    eax, eax
0xA17256: jz      short locret_A17264
0xA17258: cmp     byte ptr [eax], 53h ; 'S'
0xA1725B: jnz     short locret_A17264
0xA1725D: push    eax
0xA1725E: call    FormHeapFree
0xA17263: pop     ecx
0xA17264: retn
