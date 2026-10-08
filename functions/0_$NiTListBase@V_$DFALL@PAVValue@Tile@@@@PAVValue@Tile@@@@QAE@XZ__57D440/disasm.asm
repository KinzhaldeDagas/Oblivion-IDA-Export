0x57D440: test    [esp+arg_0], 1
0x57D445: push    esi
0x57D446: mov     esi, ecx
0x57D448: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVValue@Tile@@@@PAVValue@Tile@@@@6B@; const NiTListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable'
0x57D44E: jz      short loc_57D459
0x57D450: push    esi
0x57D451: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x57D456: add     esp, 4
0x57D459: mov     eax, esi
0x57D45B: pop     esi
0x57D45C: retn    4
