0xA26F40: mov     eax, firstOwner.begin
0xA26F45: test    eax, eax
0xA26F47: jz      short loc_A26F52
0xA26F49: push    eax
0xA26F4A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA26F4F: add     esp, 4
0xA26F52: mov     firstOwner.begin, 0
0xA26F5C: mov     firstOwner.end, 0
0xA26F66: mov     firstOwner.capacity, 0
0xA26F70: retn
