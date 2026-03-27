0x5A8000: push    esi
0x5A8001: mov     esi, [esp+4+arg_0]
0x5A8005: test    esi, esi
0x5A8007: jz      short loc_5A8086
0x5A8009: push    1
0x5A800B: push    esi
0x5A800C: call    sub_5894F0
0x5A8011: push    2
0x5A8013: push    esi
0x5A8014: mov     ds:0B3B350h, eax
0x5A8019: call    sub_5894F0
0x5A801E: push    3
0x5A8020: push    esi
0x5A8021: mov     ds:0B3B358h, eax
0x5A8026: call    sub_5894F0
0x5A802B: mov     ecx, ds:0B3B350h
0x5A8031: add     esp, 18h
0x5A8034: test    ecx, ecx
0x5A8036: mov     ds:0B3B354h, eax
0x5A803B: jz      short loc_5A8086
0x5A803D: cmp     dword ptr ds:0B3B358h, 0
0x5A8044: jz      short loc_5A8086
0x5A8046: test    eax, eax
0x5A8048: jz      short loc_5A8086
0x5A804A: push    0FB1h
0x5A804F: call    Tile_GetFloat
0x5A8054: fstp    dword ptr ds:0B140BCh
0x5A805A: mov     ecx, ds:0B3B358h
0x5A8060: push    0FB7h
0x5A8065: call    Tile_GetFloat
0x5A806A: fstp    dword ptr ds:0B140C0h
0x5A8070: mov     ecx, ds:0B3B354h
0x5A8076: push    0FB7h
0x5A807B: call    Tile_GetFloat
0x5A8080: fstp    dword ptr ds:0B140C4h
0x5A8086: xor     eax, eax
0x5A8088: pop     esi
0x5A8089: retn
