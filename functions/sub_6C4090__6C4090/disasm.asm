0x6C4090: mov     eax, [ecx]
0x6C4092: push    eax
0x6C4093: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6C4098: pop     ecx
0x6C4099: retn
