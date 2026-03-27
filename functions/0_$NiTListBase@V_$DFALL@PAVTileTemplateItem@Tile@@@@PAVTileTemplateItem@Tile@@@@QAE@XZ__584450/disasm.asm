0x584450: test    [esp+arg_0], 1
0x584455: push    esi
0x584456: mov     esi, ecx
0x584458: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTileTemplateItem@Tile@@@@PAVTileTemplateItem@Tile@@@@6B@; const NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable'
0x58445E: jz      short loc_584469
0x584460: push    esi
0x584461: call    FormHeapFree
0x584466: add     esp, 4
0x584469: mov     eax, esi
0x58446B: pop     esi
0x58446C: retn    4
