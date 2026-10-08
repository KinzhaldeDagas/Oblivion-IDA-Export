0xA1C510: mov     eax, dword ptr unk_B3651C
0xA1C515: push    eax
0xA1C516: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1C51B: xor     eax, eax
0xA1C51D: add     esp, 4
0xA1C520: mov     dword ptr unk_B3651C, eax
0xA1C525: mov     word ptr unk_B36522, ax
0xA1C52B: mov     word ptr unk_B36520, ax
0xA1C531: retn
