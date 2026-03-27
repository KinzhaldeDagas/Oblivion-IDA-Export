0x5DE9C0: push    esi; a3
0x5DE9C1: mov     esi, ecx
0x5DE9C3: lea     eax, [esi+28h]
0x5DE9C6: test    eax, eax
0x5DE9C8: jz      loc_5DEA6D
0x5DE9CE: mov     ecx, [esi+94h]; this
0x5DE9D4: test    ecx, ecx
0x5DE9D6: jz      loc_5DEA6D
0x5DE9DC: mov     eax, [esi+9Ch]
0x5DE9E2: test    eax, eax
0x5DE9E4: jz      loc_5DEA6D
0x5DE9EA: cmp     dword ptr [esi+0A0h], 0
0x5DE9F1: jz      short loc_5DEA6D
0x5DE9F3: cmp     byte ptr [esp+4+arg_0], 0
0x5DE9F8: push    ecx
0x5DE9F9: jz      short loc_5DEA46
0x5DE9FB: fld     dword ptr ds:0A2FE7Ch
0x5DEA01: fstp    [esp+8+a2]; a3
0x5DEA04: push    0FB3h; a2
0x5DEA09: call    Tile_SetFloat
0x5DEA0E: fldz
0x5DEA10: push    ecx
0x5DEA11: fstp    [esp+8+a2]; a3
0x5DEA14: mov     ecx, [esi+94h]; this
0x5DEA1A: push    0FB3h; a2
0x5DEA1F: call    Tile_SetFloat
0x5DEA24: fld     dword ptr ds:0A379B4h
0x5DEA2A: push    ecx
0x5DEA2B: mov     ecx, [esi+9Ch]; this
0x5DEA31: fstp    [esp+8+a2]; a3
0x5DEA34: push    0FAFh; a2
0x5DEA39: call    Tile_SetFloat
0x5DEA3E: fld     dword ptr ds:0A379B4h
0x5DEA44: jmp     short loc_5DEA59
0x5DEA46: fld1
0x5DEA48: mov     ecx, eax; this
0x5DEA4A: fstp    [esp+8+a2]; a3
0x5DEA4D: push    0FAFh; a2
0x5DEA52: call    Tile_SetFloat
0x5DEA57: fld1
0x5DEA59: push    ecx
0x5DEA5A: mov     ecx, [esi+0A0h]; this
0x5DEA60: fstp    [esp+8+a2]; a3
0x5DEA63: push    0FAFh; a2
0x5DEA68: call    Tile_SetFloat
0x5DEA6D: pop     esi
0x5DEA6E: retn    4
