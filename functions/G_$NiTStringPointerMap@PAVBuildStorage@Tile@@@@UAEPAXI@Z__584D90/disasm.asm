0x584D90: push    esi
0x584D91: mov     esi, ecx
0x584D93: call    ??1?$NiTStringPointerMap@PAVBuildStorage@Tile@@@@UAE@XZ; NiTStringPointerMap<Tile::BuildStorage *>::~NiTStringPointerMap<Tile::BuildStorage *>(void)
0x584D98: test    [esp+4+arg_0], 1
0x584D9D: jz      short loc_584DA8
0x584D9F: push    esi
0x584DA0: call    FormHeapFree
0x584DA5: add     esp, 4
0x584DA8: mov     eax, esi
0x584DAA: pop     esi
0x584DAB: retn    4
