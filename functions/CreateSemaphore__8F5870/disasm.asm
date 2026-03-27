0x8F5870: mov     eax, [esp+lMaximumCount]
0x8F5874: push    esi
0x8F5875: push    0; lpName
0x8F5877: mov     esi, ecx
0x8F5879: mov     ecx, [esp+8+lInitialCount]
0x8F587D: push    eax; lMaximumCount
0x8F587E: push    ecx; lInitialCount
0x8F587F: push    0; lpSemaphoreAttributes
0x8F5881: call    dword ptr ds:0A28130h
0x8F5887: mov     [esi], eax
0x8F5889: mov     eax, esi
0x8F588B: pop     esi
0x8F588C: retn    8
