0xA18920: mov     eax, ds:0B3442Ch
0xA18925: push    eax
0xA18926: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1892B: xor     eax, eax
0xA1892D: add     esp, 4
0xA18930: mov     ds:0B3442Ch, eax
0xA18935: mov     ds:0B34432h, ax
0xA1893B: mov     ds:0B34430h, ax
0xA18941: retn
