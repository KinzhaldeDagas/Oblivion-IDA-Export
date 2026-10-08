0xA184D0: mov     eax, ds:0B33C08h
0xA184D5: push    eax
0xA184D6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA184DB: xor     eax, eax
0xA184DD: add     esp, 4
0xA184E0: mov     ds:0B33C08h, eax
0xA184E5: mov     word_B33C0E, ax
0xA184EB: mov     word_B33C0C, ax
0xA184F1: retn
