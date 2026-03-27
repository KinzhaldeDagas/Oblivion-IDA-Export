0xA188F0: push    offset byte_B06AB8
0xA188F5: mov     ecx, offset dword_B07CFC
0xA188FA: call    BSSimpleList_Remove
0xA188FF: mov     eax, off_B06ABC; "bUseLODLandData:DistantLOD"
0xA18904: test    eax, eax
0xA18906: jz      short locret_A18914
0xA18908: cmp     byte ptr [eax], 53h ; 'S'
0xA1890B: jnz     short locret_A18914
0xA1890D: push    eax
0xA1890E: call    FormHeapFree
0xA18913: pop     ecx
0xA18914: retn
