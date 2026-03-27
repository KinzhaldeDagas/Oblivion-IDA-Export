0xA25050: push    offset dword_B14844
0xA25055: mov     ecx, offset dword_B07CFC
0xA2505A: call    BSSimpleList_Remove
0xA2505F: mov     eax, off_B14848; "fObjectLODDefault:LOD"
0xA25064: test    eax, eax
0xA25066: jz      short locret_A25074
0xA25068: cmp     byte ptr [eax], 53h ; 'S'
0xA2506B: jnz     short locret_A25074
0xA2506D: push    eax
0xA2506E: call    FormHeapFree
0xA25073: pop     ecx
0xA25074: retn
