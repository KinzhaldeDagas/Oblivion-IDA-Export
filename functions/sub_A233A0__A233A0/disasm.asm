0xA233A0: push    offset flt_B120CC
0xA233A5: mov     ecx, offset dword_B07CFC
0xA233AA: call    BSSimpleList_Remove
0xA233AF: mov     eax, off_B120D0; "fLodDistance:LOD"
0xA233B4: test    eax, eax
0xA233B6: jz      short locret_A233C4
0xA233B8: cmp     byte ptr [eax], 53h ; 'S'
0xA233BB: jnz     short locret_A233C4
0xA233BD: push    eax
0xA233BE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA233C3: pop     ecx
0xA233C4: retn
