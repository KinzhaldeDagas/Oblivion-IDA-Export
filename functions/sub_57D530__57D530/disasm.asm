0x57D530: push    esi; a3
0x57D531: mov     esi, [esp+4+arg_0]
0x57D535: test    esi, esi
0x57D537: jnz     short loc_57D542
0x57D539: mov     esi, 3EBh
0x57D53E: mov     [esp+4+arg_0], esi
0x57D542: fild    [esp+4+arg_0]
0x57D546: push    ecx
0x57D547: mov     ecx, [ecx+68h]; this
0x57D54A: fstp    [esp+8+a2]; a3
0x57D54D: push    1771h; a2
0x57D552: call    Tile_SetFloat
0x57D557: cmp     esi, 3EBh
0x57D55D: jnz     short loc_57D56D
0x57D55F: push    1
0x57D561: call    sub_5A5E00
0x57D566: add     esp, 4
0x57D569: pop     esi
0x57D56A: retn    4
0x57D56D: cmp     esi, 3EAh
0x57D573: jnz     short loc_57D583
0x57D575: push    2
0x57D577: call    sub_5A5E00
0x57D57C: add     esp, 4
0x57D57F: pop     esi
0x57D580: retn    4
0x57D583: cmp     esi, 3FEh
0x57D589: jnz     short loc_57D599
0x57D58B: push    3
0x57D58D: call    sub_5A5E00
0x57D592: add     esp, 4
0x57D595: pop     esi
0x57D596: retn    4
0x57D599: cmp     esi, 3FFh
0x57D59F: jnz     short loc_57D5AB
0x57D5A1: push    4
0x57D5A3: call    sub_5A5E00
0x57D5A8: add     esp, 4
0x57D5AB: pop     esi
0x57D5AC: retn    4
