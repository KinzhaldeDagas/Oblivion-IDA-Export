0xA23370: push    offset useFaceGenLODF
0xA23375: mov     ecx, offset dword_B07CFC
0xA2337A: call    BSSimpleList_Remove
0xA2337F: mov     eax, off_B120C8; "bUseFaceGenLOD:LOD"
0xA23384: test    eax, eax
0xA23386: jz      short locret_A23394
0xA23388: cmp     byte ptr [eax], 53h ; 'S'
0xA2338B: jnz     short locret_A23394
0xA2338D: push    eax
0xA2338E: call    FormHeapFree
0xA23393: pop     ecx
0xA23394: retn
