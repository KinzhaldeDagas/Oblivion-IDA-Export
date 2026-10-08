0xA26E70: mov     eax, stru_B42984.begin
0xA26E75: test    eax, eax
0xA26E77: jz      short loc_A26E82
0xA26E79: push    eax
0xA26E7A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA26E7F: add     esp, 4
0xA26E82: mov     stru_B42984.begin, 0
0xA26E8C: mov     stru_B42984.end, 0
0xA26E96: mov     stru_B42984.capacity, 0
0xA26EA0: retn
