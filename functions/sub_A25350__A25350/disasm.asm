0xA25350: push    offset g_fMinBloodDamage_Combat
0xA25355: mov     ecx, offset dword_B07CFC
0xA2535A: call    BSSimpleList_Remove
0xA2535F: mov     eax, off_B148E0; "fMinBloodDamage:Combat"
0xA25364: test    eax, eax
0xA25366: jz      short locret_A25374
0xA25368: cmp     byte ptr [eax], 53h ; 'S'
0xA2536B: jnz     short locret_A25374
0xA2536D: push    eax
0xA2536E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA25373: pop     ecx
0xA25374: retn
