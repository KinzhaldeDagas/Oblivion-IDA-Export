0x57D840: mov     eax, [esp+arg_0]
0x57D844: test    eax, eax
0x57D846: push    esi; a3
0x57D847: mov     esi, ecx
0x57D849: jle     short loc_57D863
0x57D84B: mov     ecx, [esp+4+arg_4]
0x57D84F: test    ecx, ecx
0x57D851: mov     ds:0B135F8h, eax
0x57D856: mov     ds:0B13600h, ecx
0x57D85C: jg      short loc_57D863
0x57D85E: mov     ds:0B13600h, eax
0x57D863: call    sub_57D330
0x57D868: push    ecx
0x57D869: mov     ecx, [esi+68h]; this
0x57D86C: fstp    [esp+8+a2]; a3
0x57D86F: push    0FDAh; a2
0x57D874: call    Tile_SetFloat
0x57D879: call    sub_57D390
0x57D87E: push    ecx
0x57D87F: mov     ecx, [esi+68h]; this
0x57D882: fstp    [esp+8+a2]; a3
0x57D885: push    0FD9h; a2
0x57D88A: call    Tile_SetFloat
0x57D88F: fild    dword ptr ds:0B06C4Ch
0x57D895: fstp    [esp+4+arg_0]
0x57D899: fild    dword ptr ds:0B06C50h
0x57D89F: fstp    [esp+4+arg_4]
0x57D8A3: fld     [esp+4+arg_0]
0x57D8A7: fld     [esp+4+arg_4]
0x57D8AB: fcom    st(1)
0x57D8AD: fnstsw  ax
0x57D8AF: test    ah, 5
0x57D8B2: jp      short loc_57D8BE
0x57D8B4: fdivp   st(1), st
0x57D8B6: fmul    qword ptr ds:0A68D70h
0x57D8BC: jmp     short loc_57D8C8
0x57D8BE: fstp    st(1)
0x57D8C0: fstp    st
0x57D8C2: fld     dword ptr ds:0A688A8h
0x57D8C8: fstp    [esp+4+arg_0]
0x57D8CC: push    ecx
0x57D8CD: fld     [esp+8+arg_0]
0x57D8D1: mov     ecx, [esi+68h]; this
0x57D8D4: fstp    [esp+8+a2]; a3
0x57D8D7: push    0FCBh; a2
0x57D8DC: call    Tile_SetFloat
0x57D8E1: fild    dword ptr ds:0B06C4Ch
0x57D8E7: fstp    [esp+4+arg_4]
0x57D8EB: fild    dword ptr ds:0B06C50h
0x57D8F1: fstp    [esp+4+arg_0]
0x57D8F5: fld     [esp+4+arg_0]
0x57D8F9: fld     [esp+4+arg_4]
0x57D8FD: fcom    st(1)
0x57D8FF: fnstsw  ax
0x57D901: test    ah, 5
0x57D904: jp      short loc_57D910
0x57D906: fdivp   st(1), st
0x57D908: fmul    qword ptr ds:0A688A0h
0x57D90E: jmp     short loc_57D91A
0x57D910: fstp    st(1)
0x57D912: fstp    st
0x57D914: fld     dword ptr ds:0A68D78h
0x57D91A: fstp    [esp+4+arg_0]
0x57D91E: push    ecx
0x57D91F: fld     [esp+8+arg_0]
0x57D923: mov     ecx, [esi+68h]; this
0x57D926: fstp    [esp+8+a2]; a3
0x57D929: push    0FCAh; a2
0x57D92E: call    Tile_SetFloat
0x57D933: pop     esi
0x57D934: retn    8
