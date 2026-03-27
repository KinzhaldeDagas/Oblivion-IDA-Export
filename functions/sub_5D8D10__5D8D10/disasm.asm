0x5D8D10: push    esi; a3
0x5D8D11: mov     esi, ecx
0x5D8D13: call    sub_57BD80
0x5D8D18: mov     eax, [esp+4+arg_0]
0x5D8D1C: cmp     eax, 6
0x5D8D1F: jz      short loc_5D8D26
0x5D8D21: cmp     eax, 2
0x5D8D24: jnz     short loc_5D8D3E
0x5D8D26: fld     dword ptr ds:0A40098h
0x5D8D2C: push    ecx
0x5D8D2D: mov     ecx, [esp+8+arg_4]; this
0x5D8D31: fstp    [esp+8+a2]; a3
0x5D8D34: push    0FA7h; a2
0x5D8D39: call    Tile_SetFloat
0x5D8D3E: fld1
0x5D8D40: push    ecx
0x5D8D41: mov     ecx, [esi+44h]; this
0x5D8D44: fstp    [esp+8+a2]; a3
0x5D8D47: push    0FA1h; a2
0x5D8D4C: call    Tile_SetFloat
0x5D8D51: pop     esi
0x5D8D52: retn    8
