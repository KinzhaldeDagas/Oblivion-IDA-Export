0xA26FC0: mov     eax, lastOwner.begin
0xA26FC5: test    eax, eax
0xA26FC7: jz      short loc_A26FD2
0xA26FC9: push    eax
0xA26FCA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA26FCF: add     esp, 4
0xA26FD2: mov     lastOwner.begin, 0
0xA26FDC: mov     lastOwner.end, 0
0xA26FE6: mov     lastOwner.capacity, 0
0xA26FF0: retn
