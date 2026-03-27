0x584D70: push    esi
0x584D71: mov     esi, ecx
0x584D73: call    ??1?$NiTPointerMap@PBDPAVBuildStorage@Tile@@@@UAE@XZ; NiTPointerMap<char const *,Tile::BuildStorage *>::~NiTPointerMap<char const *,Tile::BuildStorage *>(void)
0x584D78: test    [esp+4+arg_0], 1
0x584D7D: jz      short loc_584D88
0x584D7F: push    esi
0x584D80: call    FormHeapFree
0x584D85: add     esp, 4
0x584D88: mov     eax, esi
0x584D8A: pop     esi
0x584D8B: retn    4
