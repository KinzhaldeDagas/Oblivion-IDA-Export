0x5B1A10: cmp     [esp+arg_0], 3E9h
0x5B1A18: jl      short locret_5B1A39
0x5B1A1A: fld1
0x5B1A1C: push    ecx
0x5B1A1D: fstp    [esp+4+a2]; a3
0x5B1A20: mov     dword ptr [ecx+48h], 0
0x5B1A27: mov     ecx, [ecx+28h]; this
0x5B1A2A: push    0FA1h; a2
0x5B1A2F: call    Tile_SetFloat
0x5B1A34: call    sub_57BD80
0x5B1A39: retn    8
