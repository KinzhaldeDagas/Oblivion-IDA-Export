0xA18240: push    offset byte_B0559C
0xA18245: mov     ecx, offset dword_B07CFC
0xA1824A: call    BSSimpleList_Remove
0xA1824F: mov     eax, off_B055A0; "bFileNeededMessage:TestAllCells"
0xA18254: test    eax, eax
0xA18256: jz      short locret_A18264
0xA18258: cmp     byte ptr [eax], 53h ; 'S'
0xA1825B: jnz     short locret_A18264
0xA1825D: push    eax
0xA1825E: call    FormHeapFree
0xA18263: pop     ecx
0xA18264: retn
