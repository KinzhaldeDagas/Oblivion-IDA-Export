0x5DDDE0: mov     eax, [ecx+0F4h]
0x5DDDE6: mov     eax, ds:0B147E4h[eax*4]
0x5DDDED: test    eax, eax
0x5DDDEF: jz      short loc_5DDE05
0x5DDDF1: mov     eax, [eax]
0x5DDDF3: mov     ecx, [ecx+0E4h]
0x5DDDF9: push    eax
0x5DDDFA: push    0FDEh
0x5DDDFF: call    Tile_SetString
0x5DDE04: retn
0x5DDE05: mov     ecx, [ecx+0E4h]
0x5DDE0B: xor     eax, eax
0x5DDE0D: push    eax
0x5DDE0E: push    0FDEh
0x5DDE13: call    Tile_SetString
0x5DDE18: retn
