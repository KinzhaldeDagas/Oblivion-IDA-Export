0x5DDD60: mov     eax, [ecx+0F0h]
0x5DDD66: mov     eax, ds:0B147E4h[eax*4]
0x5DDD6D: test    eax, eax
0x5DDD6F: jz      short loc_5DDD85
0x5DDD71: mov     eax, [eax]
0x5DDD73: mov     ecx, [ecx+0D0h]
0x5DDD79: push    eax
0x5DDD7A: push    0FDEh
0x5DDD7F: call    Tile_SetString
0x5DDD84: retn
0x5DDD85: mov     ecx, [ecx+0D0h]
0x5DDD8B: xor     eax, eax
0x5DDD8D: push    eax
0x5DDD8E: push    0FDEh
0x5DDD93: call    Tile_SetString
0x5DDD98: retn
