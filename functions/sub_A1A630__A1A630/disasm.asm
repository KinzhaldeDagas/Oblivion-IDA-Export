0xA1A630: push    0B3524Ch
0xA1A635: mov     ecx, offset dword_B07CFC
0xA1A63A: call    BSSimpleList_Remove
0xA1A63F: mov     eax, ds:0B35250h
0xA1A644: test    eax, eax
0xA1A646: jz      short locret_A1A654
0xA1A648: cmp     byte ptr [eax], 53h ; 'S'
0xA1A64B: jnz     short locret_A1A654
0xA1A64D: push    eax
0xA1A64E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1A653: pop     ecx
0xA1A654: retn
