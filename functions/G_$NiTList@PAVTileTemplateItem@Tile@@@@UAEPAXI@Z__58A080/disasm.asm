0x58A080: push    esi
0x58A081: mov     esi, ecx
0x58A083: call    ??1?$NiTList@PAVTileTemplateItem@Tile@@@@UAE@XZ; NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>(void)
0x58A088: test    [esp+4+arg_0], 1
0x58A08D: jz      short loc_58A098
0x58A08F: push    esi
0x58A090: call    FormHeapFree
0x58A095: add     esp, 4
0x58A098: mov     eax, esi
0x58A09A: pop     esi
0x58A09B: retn    4
