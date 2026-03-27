0x5DDD20: mov     eax, [ecx+0ECh]
0x5DDD26: mov     eax, ds:0B147D8h[eax*4]
0x5DDD2D: test    eax, eax
0x5DDD2F: jz      short loc_5DDD42
0x5DDD31: mov     eax, [eax]
0x5DDD33: mov     ecx, [ecx+74h]
0x5DDD36: push    eax
0x5DDD37: push    0FDEh
0x5DDD3C: call    Tile_SetString
0x5DDD41: retn
0x5DDD42: mov     ecx, [ecx+74h]
0x5DDD45: xor     eax, eax
0x5DDD47: push    eax
0x5DDD48: push    0FDEh
0x5DDD4D: call    Tile_SetString
0x5DDD52: retn
