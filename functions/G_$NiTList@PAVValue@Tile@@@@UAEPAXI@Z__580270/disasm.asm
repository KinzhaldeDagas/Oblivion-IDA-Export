0x580270: push    esi
0x580271: mov     esi, ecx
0x580273: call    ??1?$NiTList@PAVValue@Tile@@@@UAE@XZ; NiTList<Tile::Value *>::~NiTList<Tile::Value *>(void)
0x580278: test    [esp+4+arg_0], 1
0x58027D: jz      short loc_580288
0x58027F: push    esi
0x580280: call    FormHeapFree
0x580285: add     esp, 4
0x580288: mov     eax, esi
0x58028A: pop     esi
0x58028B: retn    4
