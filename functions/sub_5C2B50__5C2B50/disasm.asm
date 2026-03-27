0x5C2B50: push    esi; a3
0x5C2B51: mov     esi, [esp+4+arg_0]
0x5C2B55: push    0FAEh
0x5C2B5A: mov     ecx, esi
0x5C2B5C: call    Tile_GetFloat
0x5C2B61: fchs
0x5C2B63: push    ecx
0x5C2B64: fstp    [esp+8+a2]; a3
0x5C2B67: push    0FB1h; a2
0x5C2B6C: mov     ecx, esi; this
0x5C2B6E: call    Tile_SetFloat
0x5C2B73: fld     [esp+4+arg_4]
0x5C2B77: push    ecx
0x5C2B78: fstp    [esp+8+a2]; a3
0x5C2B7B: push    0FB1h; a2
0x5C2B80: mov     ecx, esi; this
0x5C2B82: call    Tile_SetFloat
0x5C2B87: fldz
0x5C2B89: push    ecx
0x5C2B8A: fstp    [esp+8+a2]; a3
0x5C2B8D: push    0FB1h; a2
0x5C2B92: mov     ecx, esi; this
0x5C2B94: call    Tile_SetFloat
0x5C2B99: pop     esi
0x5C2B9A: retn    8
