0xA25410: push    offset dword_B148FC
0xA25415: mov     ecx, offset dword_B07CFC
0xA2541A: call    BSSimpleList_Remove
0xA2541F: mov     eax, off_B14900; "iDetectionPicks:GamePlay"
0xA25424: test    eax, eax
0xA25426: jz      short locret_A25434
0xA25428: cmp     byte ptr [eax], 53h ; 'S'
0xA2542B: jnz     short locret_A25434
0xA2542D: push    eax
0xA2542E: call    FormHeapFree
0xA25433: pop     ecx
0xA25434: retn
