0xA18950: mov     eax, ds:0B34438h
0xA18955: push    eax
0xA18956: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1895B: xor     eax, eax
0xA1895D: add     esp, 4
0xA18960: mov     ds:0B34438h, eax
0xA18965: mov     ds:0B3443Eh, ax
0xA1896B: mov     ds:0B3443Ch, ax
0xA18971: retn
