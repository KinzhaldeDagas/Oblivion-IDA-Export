0xA25320: push    offset flt_B148D4
0xA25325: mov     ecx, offset dword_B07CFC
0xA2532A: call    BSSimpleList_Remove
0xA2532F: mov     eax, off_B148D8; "fHitVectorDelay:Combat"
0xA25334: test    eax, eax
0xA25336: jz      short locret_A25344
0xA25338: cmp     byte ptr [eax], 53h ; 'S'
0xA2533B: jnz     short locret_A25344
0xA2533D: push    eax
0xA2533E: call    FormHeapFree
0xA25343: pop     ecx
0xA25344: retn
