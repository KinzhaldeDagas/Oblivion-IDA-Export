0xA173F0: push    offset dword_B0316C
0xA173F5: mov     ecx, offset dword_B07CFC
0xA173FA: call    BSSimpleList_Remove
0xA173FF: mov     eax, off_B03170; "iScreenShotIndex:Display"
0xA17404: test    eax, eax
0xA17406: jz      short locret_A17414
0xA17408: cmp     byte ptr [eax], 53h ; 'S'
0xA1740B: jnz     short locret_A17414
0xA1740D: push    eax
0xA1740E: call    FormHeapFree
0xA17413: pop     ecx
0xA17414: retn
