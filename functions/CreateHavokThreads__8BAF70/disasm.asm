0x8BAF70: mov     eax, [esp+a2]
0x8BAF74: push    ebx
0x8BAF75: push    ebp
0x8BAF76: mov     ebp, [esp+8+havokThreadNum]
0x8BAF7A: cmp     ebp, 6
0x8BAF7D: push    edi
0x8BAF7E: mov     edi, ecx
0x8BAF80: mov     [edi], eax
0x8BAF82: jle     short loc_8BAF89
0x8BAF84: mov     ebp, 6
0x8BAF89: xor     ebx, ebx
0x8BAF8B: test    ebp, ebp
0x8BAF8D: jle     short loc_8BAFC6
0x8BAF8F: push    esi
0x8BAF90: mov     eax, [edi+104h]
0x8BAF96: push    0; lpThreadId
0x8BAF98: lea     ecx, [eax+eax*4]
0x8BAF9B: push    0; dwCreationFlags
0x8BAF9D: lea     esi, [edi+ecx*8+14h]
0x8BAFA1: push    esi; lpParameter
0x8BAFA2: push    offset sub_8BADF0; lpStartAddress
0x8BAFA7: inc     eax
0x8BAFA8: push    0; dwStackSize
0x8BAFAA: mov     [edi+104h], eax
0x8BAFB0: push    0; lpThreadAttributes
0x8BAFB2: mov     [esi], edi
0x8BAFB4: mov     [esi+8], ebx
0x8BAFB7: call    dword ptr ds:0A280F8h
0x8BAFBD: inc     ebx
0x8BAFBE: cmp     ebx, ebp
0x8BAFC0: mov     [esi+4], eax
0x8BAFC3: jl      short loc_8BAF90
0x8BAFC5: pop     esi
0x8BAFC6: pop     edi
0x8BAFC7: pop     ebp
0x8BAFC8: pop     ebx
0x8BAFC9: retn    8
