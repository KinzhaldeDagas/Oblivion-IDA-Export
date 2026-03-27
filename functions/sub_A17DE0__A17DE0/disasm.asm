0xA17DE0: push    offset unk_B051FC
0xA17DE5: mov     ecx, offset dword_B07CFC
0xA17DEA: call    BSSimpleList_Remove
0xA17DEF: mov     eax, off_B05200; "fAlphaReduce:Weather"
0xA17DF4: test    eax, eax
0xA17DF6: jz      short locret_A17E04
0xA17DF8: cmp     byte ptr [eax], 53h ; 'S'
0xA17DFB: jnz     short locret_A17E04
0xA17DFD: push    eax
0xA17DFE: call    FormHeapFree
0xA17E03: pop     ecx
0xA17E04: retn
