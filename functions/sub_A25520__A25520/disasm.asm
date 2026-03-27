0xA25520: push    offset unk_B14B9C
0xA25525: mov     ecx, offset dword_B07CFC
0xA2552A: call    BSSimpleList_Remove
0xA2552F: mov     eax, off_B14BA0; "fHiPerfPCTargetLOSTimer:Combat"
0xA25534: test    eax, eax
0xA25536: jz      short locret_A25544
0xA25538: cmp     byte ptr [eax], 53h ; 'S'
0xA2553B: jnz     short locret_A25544
0xA2553D: push    eax
0xA2553E: call    FormHeapFree
0xA25543: pop     ecx
0xA25544: retn
