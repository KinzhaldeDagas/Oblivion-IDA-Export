0xA1C4E0: mov     eax, dword ptr unk_B36514
0xA1C4E5: push    eax
0xA1C4E6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1C4EB: xor     eax, eax
0xA1C4ED: add     esp, 4
0xA1C4F0: mov     dword ptr unk_B36514, eax
0xA1C4F5: mov     word ptr unk_B3651A, ax
0xA1C4FB: mov     word ptr unk_B36518, ax
0xA1C501: retn
