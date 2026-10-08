0x7F1920: push    esi; STLSPData dtor: frees shared leaf shader data buffer at +0x08.
0x7F1921: mov     esi, ecx
0x7F1923: mov     eax, [esi+8]
0x7F1926: test    eax, eax
0x7F1928: mov     dword ptr [esi], offset ??_7STLSPData@@6B@;
0x7F192E: jz      short loc_7F1939
0x7F1930: push    eax
0x7F1931: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7F1936: add     esp, 4
0x7F1939: push    0B3FD64h; lpAddend
0x7F193E: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x7F1944: call    dword ptr ds:0A2807Ch
0x7F194A: test    [esp+4+freeMemory], 1
0x7F194F: jz      short loc_7F195A
0x7F1951: push    esi
0x7F1952: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7F1957: add     esp, 4
0x7F195A: mov     eax, esi
0x7F195C: pop     esi
0x7F195D: retn    4
