0xA1BFD0: push    offset unk_B09C08
0xA1BFD5: mov     ecx, offset dword_B07CFC
0xA1BFDA: call    BSSimpleList_Remove
0xA1BFDF: mov     eax, off_B09C0C; "bLODUseCombinedLandNormalMaps:LOD"
0xA1BFE4: test    eax, eax
0xA1BFE6: jz      short locret_A1BFF4
0xA1BFE8: cmp     byte ptr [eax], 53h ; 'S'
0xA1BFEB: jnz     short locret_A1BFF4
0xA1BFED: push    eax
0xA1BFEE: call    FormHeapFree
0xA1BFF3: pop     ecx
0xA1BFF4: retn
