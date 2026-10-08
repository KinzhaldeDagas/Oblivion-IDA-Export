0xA24E70: mov     eax, dword ptr unk_B3B738
0xA24E75: push    eax
0xA24E76: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA24E7B: xor     eax, eax
0xA24E7D: add     esp, 4
0xA24E80: mov     dword ptr unk_B3B738, eax
0xA24E85: mov     word_B3B73E, ax
0xA24E8B: mov     word_B3B73C, ax
0xA24E91: retn
