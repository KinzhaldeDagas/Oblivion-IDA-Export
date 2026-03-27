0x5AC730: mov     eax, ds:0B33398h
0x5AC735: push    esi
0x5AC736: mov     esi, [eax+24h]
0x5AC739: test    esi, esi
0x5AC73B: push    edi; a3
0x5AC73C: jz      short loc_5AC759
0x5AC73E: push    0
0x5AC740: push    0
0x5AC742: push    0FFFFh
0x5AC747: mov     ecx, esi
0x5AC749: call    SoundManager_OpenMusicFile
0x5AC74E: test    al, al
0x5AC750: jz      short loc_5AC759
0x5AC752: mov     ecx, esi
0x5AC754: call    SoundManager_PlayMusic
0x5AC759: push    403h
0x5AC75E: call    Menu_GetOpenMenuTile
0x5AC763: mov     edi, eax
0x5AC765: add     esp, 4
0x5AC768: test    edi, edi
0x5AC76A: jz      short loc_5AC79F
0x5AC76C: mov     ecx, edi
0x5AC76E: call    Tile_GetParentMenu
0x5AC773: mov     esi, eax
0x5AC775: test    esi, esi
0x5AC777: jz      short loc_5AC79F
0x5AC779: mov     ecx, esi
0x5AC77B: call    sub_5AC6A0
0x5AC780: fld     dword ptr ds:0A379B4h
0x5AC786: push    ecx
0x5AC787: fstp    [esp+0Ch+a2]; a3
0x5AC78A: push    1772h; a2
0x5AC78F: mov     ecx, edi; this
0x5AC791: call    Tile_SetFloat
0x5AC796: pop     edi
0x5AC797: mov     ecx, esi; int
0x5AC799: pop     esi
0x5AC79A: jmp     sub_584740
0x5AC79F: pop     edi
0x5AC7A0: pop     esi
0x5AC7A1: retn
