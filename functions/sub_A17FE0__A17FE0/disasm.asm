0xA17FE0: push    offset unk_B0524C
0xA17FE5: mov     ecx, offset dword_B07CFC
0xA17FEA: call    BSSimpleList_Remove
0xA17FEF: mov     eax, off_B05250; "iOpenMPLevel:OPENMP"
0xA17FF4: test    eax, eax
0xA17FF6: jz      short locret_A18004
0xA17FF8: cmp     byte ptr [eax], 53h ; 'S'
0xA17FFB: jnz     short locret_A18004
0xA17FFD: push    eax
0xA17FFE: call    FormHeapFree
0xA18003: pop     ecx
0xA18004: retn
