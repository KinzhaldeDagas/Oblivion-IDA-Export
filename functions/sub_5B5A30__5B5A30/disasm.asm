0x5B5A30: fld     dword ptr ds:0A379B4h
0x5B5A36: push    esi; a3
0x5B5A37: push    ecx
0x5B5A38: mov     esi, ecx
0x5B5A3A: fstp    [esp+8+a2]; a3
0x5B5A3D: mov     ecx, [esi+4]; this
0x5B5A40: push    0FAEh; a2
0x5B5A45: call    Tile_SetFloat
0x5B5A4A: fld     dword ptr ds:0A379B4h
0x5B5A50: push    ecx
0x5B5A51: mov     ecx, [esi+4]; this
0x5B5A54: fstp    [esp+8+a2]; a3
0x5B5A57: push    0FAFh; a2
0x5B5A5C: call    Tile_SetFloat
0x5B5A61: fld     dword ptr ds:0A379B4h
0x5B5A67: push    ecx
0x5B5A68: mov     ecx, [esi+4]; this
0x5B5A6B: fstp    [esp+8+a2]; a3
0x5B5A6E: push    0FAFh; a2
0x5B5A73: call    Tile_SetFloat
0x5B5A78: pop     esi
0x5B5A79: retn
