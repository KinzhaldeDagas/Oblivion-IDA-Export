0x5B5A80: fld1
0x5B5A82: push    esi; a3
0x5B5A83: push    ecx
0x5B5A84: fstp    [esp+8+a2]; a3
0x5B5A87: mov     esi, ecx
0x5B5A89: mov     ecx, [esi+4]; this
0x5B5A8C: push    0FAEh; a2
0x5B5A91: call    Tile_SetFloat
0x5B5A96: fld1
0x5B5A98: push    ecx
0x5B5A99: fstp    [esp+8+a2]; a3
0x5B5A9C: mov     ecx, [esi+4]; this
0x5B5A9F: push    0FAFh; a2
0x5B5AA4: call    Tile_SetFloat
0x5B5AA9: fld1
0x5B5AAB: push    ecx
0x5B5AAC: fstp    [esp+8+a2]; a3
0x5B5AAF: mov     ecx, [esi+4]; this
0x5B5AB2: push    0FB0h; a2
0x5B5AB7: call    Tile_SetFloat
0x5B5ABC: pop     esi
0x5B5ABD: retn
