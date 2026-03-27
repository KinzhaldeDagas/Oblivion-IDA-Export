0x402740: push    esi
0x402741: push    offset aMemorypoolFree; "MemoryPool::FreeUnusedPagesForAllPools("...
0x402746: mov     ecx, offset HeapCriticalSection
0x40274B: call    NiEnterCriticalSection
0x402750: xor     esi, esi
0x402752: cmp     g_HeapPoolsBySize[esi], 0
0x402759: jz      short loc_40277F
0x40275B: push    offset aFreeunusedpage; lpCriticalSection
0x402760: mov     ecx, offset HeapCriticalSection
0x402765: call    NiEnterCriticalSection
0x40276A: mov     ecx, g_HeapPoolsBySize[esi]
0x402770: call    sub_402640
0x402775: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x40277A: call    NiLeaveCriticalSection_0
0x40277F: add     esi, 4
0x402782: cmp     esi, 204h
0x402788: jb      short loc_402752
0x40278A: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x40278F: pop     esi
0x402790: jmp     NiLeaveCriticalSection_0
