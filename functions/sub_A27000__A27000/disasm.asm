0xA27000: mov     eax, stru_B429FC.begin
0xA27005: test    eax, eax
0xA27007: jz      short loc_A27012
0xA27009: push    eax
0xA2700A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA2700F: add     esp, 4
0xA27012: mov     stru_B429FC.begin, 0
0xA2701C: mov     stru_B429FC.end, 0
0xA27026: mov     stru_B429FC.capacity, 0
0xA27030: retn
