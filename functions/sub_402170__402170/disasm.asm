0x402170: push    edi; Clears the global small-pool registry (0x81 slots) and the high-byte address-to-pool lookup table.
0x402171: xor     eax, eax
0x402173: mov     ecx, 81h
0x402178: mov     edi, 0B33080h
0x40217D: rep stosd
0x40217F: mov     ecx, 100h
0x402184: mov     edi, 0B32C80h
0x402189: rep stosd
0x40218B: pop     edi
0x40218C: retn
