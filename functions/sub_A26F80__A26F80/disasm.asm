0xA26F80: mov     eax, stru_B429CC.begin
0xA26F85: test    eax, eax
0xA26F87: jz      short loc_A26F92
0xA26F89: push    eax
0xA26F8A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA26F8F: add     esp, 4
0xA26F92: mov     stru_B429CC.begin, 0
0xA26F9C: mov     stru_B429CC.end, 0
0xA26FA6: mov     stru_B429CC.capacity, 0
0xA26FB0: retn
