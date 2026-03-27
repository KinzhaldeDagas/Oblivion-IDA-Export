0xA23820: push    offset bTreetops
0xA23825: mov     ecx, offset dword_B07CFC
0xA2382A: call    BSSimpleList_Remove
0xA2382F: mov     eax, off_B12750; "bTreeTops:HAVOK"
0xA23834: test    eax, eax
0xA23836: jz      short locret_A23844
0xA23838: cmp     byte ptr [eax], 53h ; 'S'
0xA2383B: jnz     short locret_A23844
0xA2383D: push    eax
0xA2383E: call    FormHeapFree
0xA23843: pop     ecx
0xA23844: retn
