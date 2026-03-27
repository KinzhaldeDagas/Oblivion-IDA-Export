0x589840: push    esi
0x589841: mov     esi, ecx
0x589843: call    ??1?$NiTList@PAVStringListElement@Tile@@@@UAE@XZ; NiTList<Tile::StringListElement *>::~NiTList<Tile::StringListElement *>(void)
0x589848: test    [esp+4+arg_0], 1
0x58984D: jz      short loc_589858
0x58984F: push    esi
0x589850: call    FormHeapFree
0x589855: add     esp, 4
0x589858: mov     eax, esi
0x58985A: pop     esi
0x58985B: retn    4
