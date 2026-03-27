0xA255B0: push    offset dword_B14BB4
0xA255B5: mov     ecx, offset dword_B07CFC
0xA255BA: call    BSSimpleList_Remove
0xA255BF: mov     eax, off_B14BB8; "iMaxHiPerfNPCTargetCount:Combat"
0xA255C4: test    eax, eax
0xA255C6: jz      short locret_A255D4
0xA255C8: cmp     byte ptr [eax], 53h ; 'S'
0xA255CB: jnz     short locret_A255D4
0xA255CD: push    eax
0xA255CE: call    FormHeapFree
0xA255D3: pop     ecx
0xA255D4: retn
