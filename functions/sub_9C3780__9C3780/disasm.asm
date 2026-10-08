0x9C3780: mov     eax, [ebp-15Ch]
0x9C3786: push    eax
0x9C3787: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C378C: pop     ecx
0x9C378D: retn
