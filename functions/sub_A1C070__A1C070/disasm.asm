0xA1C070: mov     eax, dword ptr unk_B360C0
0xA1C075: push    eax
0xA1C076: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1C07B: xor     eax, eax
0xA1C07D: add     esp, 4
0xA1C080: mov     dword ptr unk_B360C0, eax
0xA1C085: mov     word_B360C6, ax
0xA1C08B: mov     word_B360C4, ax
0xA1C091: retn
