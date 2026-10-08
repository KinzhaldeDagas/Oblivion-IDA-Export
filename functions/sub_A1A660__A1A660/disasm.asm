0xA1A660: push    0B35264h
0xA1A665: mov     ecx, offset dword_B07CFC
0xA1A66A: call    BSSimpleList_Remove
0xA1A66F: mov     eax, ds:0B35268h
0xA1A674: test    eax, eax
0xA1A676: jz      short locret_A1A684
0xA1A678: cmp     byte ptr [eax], 53h ; 'S'
0xA1A67B: jnz     short locret_A1A684
0xA1A67D: push    eax
0xA1A67E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1A683: pop     ecx
0xA1A684: retn
