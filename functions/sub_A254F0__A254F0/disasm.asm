0xA254F0: push    offset dword_B14B94
0xA254F5: mov     ecx, offset dword_B07CFC
0xA254FA: call    BSSimpleList_Remove
0xA254FF: mov     eax, off_B14B98; "iMaxHiPerfPCTargetCount:Combat"
0xA25504: test    eax, eax
0xA25506: jz      short locret_A25514
0xA25508: cmp     byte ptr [eax], 53h ; 'S'
0xA2550B: jnz     short locret_A25514
0xA2550D: push    eax
0xA2550E: call    FormHeapFree
0xA25513: pop     ecx
0xA25514: retn
