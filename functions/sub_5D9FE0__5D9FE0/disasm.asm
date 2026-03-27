0x5D9FE0: mov     eax, [esp+arg_0]
0x5D9FE4: cmp     eax, 22h ; '"'
0x5D9FE7: push    esi; a3
0x5D9FE8: mov     esi, ecx
0x5D9FEA: jz      short loc_5D9FF6
0x5D9FEC: cmp     eax, 18h
0x5D9FEF: jz      short loc_5D9FF6
0x5D9FF1: cmp     eax, 0Eh
0x5D9FF4: jnz     short loc_5DA040
0x5D9FF6: fld1
0x5D9FF8: push    ecx
0x5D9FF9: mov     ecx, [esi+54h]; this
0x5D9FFC: fstp    [esp+8+a2]; a3
0x5D9FFF: push    0FA1h; a2
0x5DA004: call    Tile_SetFloat
0x5DA009: mov     ecx, [esi+58h]
0x5DA00C: push    0FAFh
0x5DA011: call    Tile_GetFloat
0x5DA016: mov     ecx, [esi+58h]
0x5DA019: sub     esp, 8
0x5DA01C: fstp    [esp+0Ch+a2]; float
0x5DA020: fldz
0x5DA022: fstp    [esp+0Ch+var_C]; float
0x5DA025: push    0FAEh
0x5DA02A: call    Tile_GetFloat
0x5DA02F: push    ecx
0x5DA030: mov     ecx, [esi+58h]; int
0x5DA033: fstp    [esp+10h+var_10]; float
0x5DA036: push    0FAEh; int
0x5DA03B: call    sub_589980
0x5DA040: pop     esi
0x5DA041: retn    8
