0xA17BD0: push    offset dword_B048EC
0xA17BD5: mov     ecx, offset dword_B07CFC
0xA17BDA: call    BSSimpleList_Remove
0xA17BDF: mov     eax, off_B048F0; "iPostProcessMillisecondsLoadingQueuedPr"...
0xA17BE4: test    eax, eax
0xA17BE6: jz      short locret_A17BF4
0xA17BE8: cmp     byte ptr [eax], 53h ; 'S'
0xA17BEB: jnz     short locret_A17BF4
0xA17BED: push    eax
0xA17BEE: call    FormHeapFree
0xA17BF3: pop     ecx
0xA17BF4: retn
