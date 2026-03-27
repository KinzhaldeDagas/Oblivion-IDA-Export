0x57D3F0: mov     ecx, [ecx+28h]
0x57D3F3: test    ecx, ecx
0x57D3F5: jz      short loc_57D414
0x57D3F7: push    0FA1h
0x57D3FC: call    Tile_GetFloat
0x57D401: fcomp   dword ptr ds:0A379B4h
0x57D407: fnstsw  ax
0x57D409: test    ah, 44h
0x57D40C: jp      short loc_57D414
0x57D40E: mov     eax, 1
0x57D413: retn
0x57D414: xor     eax, eax
0x57D416: retn
