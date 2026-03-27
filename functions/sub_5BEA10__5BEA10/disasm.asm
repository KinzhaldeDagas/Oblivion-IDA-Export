0x5BEA10: mov     ecx, [ecx+0BCh]
0x5BEA16: push    0FAFh
0x5BEA1B: call    Tile_GetFloat
0x5BEA20: fcomp   dword ptr ds:0A379B4h
0x5BEA26: fnstsw  ax
0x5BEA28: test    ah, 44h
0x5BEA2B: jp      short locret_5BEA32
0x5BEA2D: jmp     loc_5BE270
0x5BEA32: retn
