0x5A56C0: mov     ecx, [ecx+54h]
0x5A56C3: test    ecx, ecx
0x5A56C5: jz      short loc_5A56E1
0x5A56C7: push    0FA1h
0x5A56CC: call    Tile_GetFloat
0x5A56D1: fcomp   dword ptr ds:0A379B4h
0x5A56D7: fnstsw  ax
0x5A56D9: test    ah, 44h
0x5A56DC: jp      short loc_5A56E1
0x5A56DE: mov     al, 1
0x5A56E0: retn
0x5A56E1: xor     al, al
0x5A56E3: retn
