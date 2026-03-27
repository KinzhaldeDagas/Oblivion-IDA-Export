0x402400: push    esi; dwFreeType
0x402401: mov     esi, ecx
0x402403: mov     eax, [esi+40h]
0x402406: test    eax, eax
0x402408: jz      short loc_402456
0x40240A: push    8000h; dwFreeType
0x40240F: push    0; dwSize
0x402411: push    eax; lpAddress
0x402412: call    ds:VirtualFree
0x402418: mov     eax, [esi+100h]
0x40241E: shr     eax, 2
0x402421: mov     g_HeapPoolsBySize[eax*4], 0
0x40242C: mov     eax, [esi+110h]
0x402432: mov     ecx, eax
0x402434: shr     ecx, 18h
0x402437: test    eax, 0FFFFFFh
0x40243C: jz      short loc_402441
0x40243E: add     ecx, 1
0x402441: test    ecx, ecx
0x402443: movzx   eax, byte ptr [esi+43h]
0x402447: jbe     short loc_402456
0x402449: push    edi
0x40244A: lea     edi, ds:0B32C80h[eax*4]
0x402451: xor     eax, eax
0x402453: rep stosd
0x402455: pop     edi
0x402456: mov     ecx, [esi+108h]
0x40245C: push    ecx
0x40245D: call    FormHeapFree
0x402462: add     esp, 4
0x402465: lea     ecx, [esi+80h]; lpCriticalSection
0x40246B: pop     esi
0x40246C: jmp     NiDeleteCriticalSection
