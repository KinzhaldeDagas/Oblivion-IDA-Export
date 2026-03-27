0x5DDDA0: mov     eax, [ecx+0F8h]
0x5DDDA6: mov     eax, ds:0B147F0h[eax*4]
0x5DDDAD: test    eax, eax
0x5DDDAF: jz      short loc_5DDDC5
0x5DDDB1: mov     eax, [eax]
0x5DDDB3: mov     ecx, [ecx+0C0h]
0x5DDDB9: push    eax
0x5DDDBA: push    0FDEh
0x5DDDBF: call    Tile_SetString
0x5DDDC4: retn
0x5DDDC5: mov     ecx, [ecx+0C0h]
0x5DDDCB: xor     eax, eax
0x5DDDCD: push    eax
0x5DDDCE: push    0FDEh
0x5DDDD3: call    Tile_SetString
0x5DDDD8: retn
