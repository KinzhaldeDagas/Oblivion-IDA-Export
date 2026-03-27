0x5DA8C0: mov     eax, [ecx+4Ch]
0x5DA8C3: push    esi; a3
0x5DA8C4: push    0
0x5DA8C6: push    offset aStat_misc_temp; "stat_misc_template"
0x5DA8CB: push    eax
0x5DA8CC: call    Menu_CreateTileFromTemplate
0x5DA8D1: fild    [esp+4+arg_8]
0x5DA8D5: mov     ecx, [esp+4+arg_8]
0x5DA8D9: test    ecx, ecx
0x5DA8DB: mov     esi, eax
0x5DA8DD: jge     short loc_5DA8E5
0x5DA8DF: fadd    dword ptr ds:0A2FC78h
0x5DA8E5: push    ecx
0x5DA8E6: fstp    [esp+8+a2]; a3
0x5DA8E9: push    0FAAh; a2
0x5DA8EE: mov     ecx, esi; this
0x5DA8F0: call    Tile_SetFloat
0x5DA8F5: mov     edx, [esp+4+arg_0]
0x5DA8F9: push    edx
0x5DA8FA: push    0FAFh
0x5DA8FF: mov     ecx, esi
0x5DA901: call    Tile_SetString
0x5DA906: fild    [esp+4+arg_4]
0x5DA90A: mov     eax, [esp+4+arg_4]
0x5DA90E: test    eax, eax
0x5DA910: jge     short loc_5DA918
0x5DA912: fadd    dword ptr ds:0A2FC78h
0x5DA918: push    ecx
0x5DA919: fstp    [esp+8+a2]; a3
0x5DA91C: push    0FB0h; a2
0x5DA921: mov     ecx, esi; this
0x5DA923: call    Tile_SetFloat
0x5DA928: pop     esi
0x5DA929: retn    0Ch
