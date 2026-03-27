0x595790: mov     eax, [esp+arg_0]
0x595794: cmp     eax, 0Ch
0x595797: push    esi; a3
0x595798: mov     esi, ecx
0x59579A: jnz     short loc_5957ED
0x59579C: mov     eax, ds:0B33398h
0x5957A1: mov     ecx, [eax+24h]
0x5957A4: fld     dword ptr [ecx+0B8h]
0x5957AA: fstp    dword ptr ds:0B16190h
0x5957B0: fld     dword ptr [ecx+0BCh]
0x5957B6: fstp    dword ptr ds:0B16198h
0x5957BC: fld     dword ptr [ecx+0C0h]
0x5957C2: fstp    dword ptr ds:0B161B0h
0x5957C8: fld     dword ptr [ecx+0C4h]
0x5957CE: fstp    dword ptr ds:0B161A8h
0x5957D4: call    sub_6A8E00
0x5957D9: fstp    dword ptr ds:0B161A0h
0x5957DF: call    sub_595740
0x5957E4: call    sub_5BD610
0x5957E9: pop     esi
0x5957EA: retn    8
0x5957ED: cmp     eax, 0Bh
0x5957F0: jnz     loc_59593B
0x5957F6: fld     dword ptr ds:0A6B328h
0x5957FC: push    ecx
0x5957FD: mov     ecx, [esi+28h]; this
0x595800: fstp    [esp+8+a2]; a3
0x595803: push    0FB3h; a2
0x595808: call    Tile_SetFloat
0x59580D: fld     dword ptr ds:0A2FE7Ch
0x595813: push    ecx
0x595814: mov     ecx, [esi+28h]; this
0x595817: fstp    [esp+8+a2]; a3
0x59581A: push    0FB3h; a2
0x59581F: call    Tile_SetFloat
0x595824: fldz
0x595826: push    ecx
0x595827: fstp    [esp+8+a2]; a3
0x59582A: mov     ecx, [esi+28h]; this
0x59582D: push    0FB3h; a2
0x595832: call    Tile_SetFloat
0x595837: fld     dword ptr ds:0A6B328h
0x59583D: push    ecx
0x59583E: mov     ecx, [esi+48h]; this
0x595841: fstp    [esp+8+a2]; a3
0x595844: push    0FB3h; a2
0x595849: call    Tile_SetFloat
0x59584E: fld     dword ptr ds:0A37CC8h
0x595854: push    ecx
0x595855: mov     ecx, [esi+48h]; this
0x595858: fstp    [esp+8+a2]; a3
0x59585B: push    0FB3h; a2
0x595860: call    Tile_SetFloat
0x595865: fldz
0x595867: push    ecx
0x595868: fstp    [esp+8+a2]; a3
0x59586B: mov     ecx, [esi+48h]; this
0x59586E: push    0FB3h; a2
0x595873: call    Tile_SetFloat
0x595878: fld     dword ptr ds:0A6B328h
0x59587E: push    ecx
0x59587F: mov     ecx, [esi+40h]; this
0x595882: fstp    [esp+8+a2]; a3
0x595885: push    0FB3h; a2
0x59588A: call    Tile_SetFloat
0x59588F: fld     dword ptr ds:0A6B324h
0x595895: push    ecx
0x595896: mov     ecx, [esi+40h]; this
0x595899: fstp    [esp+8+a2]; a3
0x59589C: push    0FB3h; a2
0x5958A1: call    Tile_SetFloat
0x5958A6: fldz
0x5958A8: push    ecx
0x5958A9: fstp    [esp+8+a2]; a3
0x5958AC: mov     ecx, [esi+40h]; this
0x5958AF: push    0FB3h; a2
0x5958B4: call    Tile_SetFloat
0x5958B9: fld     dword ptr ds:0A6B328h
0x5958BF: push    ecx
0x5958C0: mov     ecx, [esi+30h]; this
0x5958C3: fstp    [esp+8+a2]; a3
0x5958C6: push    0FB3h; a2
0x5958CB: call    Tile_SetFloat
0x5958D0: fld     dword ptr ds:0A6B324h
0x5958D6: push    ecx
0x5958D7: mov     ecx, [esi+30h]; this
0x5958DA: fstp    [esp+8+a2]; a3
0x5958DD: push    0FB3h; a2
0x5958E2: call    Tile_SetFloat
0x5958E7: fldz
0x5958E9: push    ecx
0x5958EA: fstp    [esp+8+a2]; a3
0x5958ED: mov     ecx, [esi+30h]; this
0x5958F0: push    0FB3h; a2
0x5958F5: call    Tile_SetFloat
0x5958FA: fld     dword ptr ds:0A6B328h
0x595900: push    ecx
0x595901: mov     ecx, [esi+38h]; this
0x595904: fstp    [esp+8+a2]; a3
0x595907: push    0FB3h; a2
0x59590C: call    Tile_SetFloat
0x595911: fld     dword ptr ds:0A6B324h
0x595917: push    ecx
0x595918: fstp    [esp+8+a2]; a3
0x59591B: mov     ecx, [esi+38h]; this
0x59591E: push    0FB3h; a2
0x595923: call    Tile_SetFloat
0x595928: fldz
0x59592A: push    ecx
0x59592B: fstp    [esp+8+a2]; a3
0x59592E: mov     ecx, [esi+38h]; this
0x595931: push    0FB3h; a2
0x595936: call    Tile_SetFloat
0x59593B: pop     esi
0x59593C: retn    8
