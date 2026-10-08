0xA1C230: mov     eax, dword ptr unk_B36300
0xA1C235: push    eax
0xA1C236: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1C23B: xor     eax, eax
0xA1C23D: add     esp, 4
0xA1C240: mov     dword ptr unk_B36300, eax
0xA1C245: mov     word_B36306, ax
0xA1C24B: mov     word_B36304, ax
0xA1C251: retn
