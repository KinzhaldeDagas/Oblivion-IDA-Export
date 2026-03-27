0x5BD880: mov     eax, [esp+arg_0]
0x5BD884: cmp     eax, 2
0x5BD887: jnz     short loc_5BD896
0x5BD889: call    sub_5BD830
0x5BD88E: call    sub_5BDA20
0x5BD893: retn    8
0x5BD896: cmp     eax, 5
0x5BD899: jnz     short loc_5BD8C6
0x5BD89B: push    3F7h
0x5BD8A0: call    Menu_GetOpenMenuTile
0x5BD8A5: add     esp, 4
0x5BD8A8: test    eax, eax
0x5BD8AA: jz      short loc_5BD8BE
0x5BD8AC: mov     ecx, eax
0x5BD8AE: call    Tile_GetParentMenu
0x5BD8B3: test    eax, eax
0x5BD8B5: jz      short loc_5BD8BE
0x5BD8B7: mov     ecx, eax; int
0x5BD8B9: call    sub_584740
0x5BD8BE: call    sub_5A3540
0x5BD8C3: retn    8
0x5BD8C6: cmp     eax, 6
0x5BD8C9: jnz     short loc_5BD8F6
0x5BD8CB: push    3F7h
0x5BD8D0: call    Menu_GetOpenMenuTile
0x5BD8D5: add     esp, 4
0x5BD8D8: test    eax, eax
0x5BD8DA: jz      short loc_5BD8EE
0x5BD8DC: mov     ecx, eax
0x5BD8DE: call    Tile_GetParentMenu
0x5BD8E3: test    eax, eax
0x5BD8E5: jz      short loc_5BD8EE
0x5BD8E7: mov     ecx, eax; int
0x5BD8E9: call    sub_584740
0x5BD8EE: call    sub_5DEB80
0x5BD8F3: retn    8
0x5BD8F6: cmp     eax, 7
0x5BD8F9: jnz     short loc_5BD926
0x5BD8FB: push    3F7h
0x5BD900: call    Menu_GetOpenMenuTile
0x5BD905: add     esp, 4
0x5BD908: test    eax, eax
0x5BD90A: jz      short loc_5BD91E
0x5BD90C: mov     ecx, eax
0x5BD90E: call    Tile_GetParentMenu
0x5BD913: test    eax, eax
0x5BD915: jz      short loc_5BD91E
0x5BD917: mov     ecx, eax; int
0x5BD919: call    sub_584740
0x5BD91E: call    sub_595380
0x5BD923: retn    8
0x5BD926: cmp     eax, 8
0x5BD929: jnz     short locret_5BD953
0x5BD92B: push    3F7h
0x5BD930: call    Menu_GetOpenMenuTile
0x5BD935: add     esp, 4
0x5BD938: test    eax, eax
0x5BD93A: jz      short loc_5BD94E
0x5BD93C: mov     ecx, eax
0x5BD93E: call    Tile_GetParentMenu
0x5BD943: test    eax, eax
0x5BD945: jz      short loc_5BD94E
0x5BD947: mov     ecx, eax; int
0x5BD949: call    sub_584740
0x5BD94E: call    sub_59BA40
0x5BD953: retn    8
