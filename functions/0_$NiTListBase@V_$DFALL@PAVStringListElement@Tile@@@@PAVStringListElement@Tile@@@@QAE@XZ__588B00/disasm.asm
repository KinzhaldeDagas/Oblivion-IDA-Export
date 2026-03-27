0x588B00: test    [esp+arg_0], 1
0x588B05: push    esi
0x588B06: mov     esi, ecx
0x588B08: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVStringListElement@Tile@@@@PAVStringListElement@Tile@@@@6B@; const NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable'
0x588B0E: jz      short loc_588B19
0x588B10: push    esi
0x588B11: call    FormHeapFree
0x588B16: add     esp, 4
0x588B19: mov     eax, esi
0x588B1B: pop     esi
0x588B1C: retn    4
