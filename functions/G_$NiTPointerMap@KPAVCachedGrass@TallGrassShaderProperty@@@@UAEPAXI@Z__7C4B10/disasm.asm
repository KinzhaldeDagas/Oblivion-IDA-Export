0x7C4B10: push    esi
0x7C4B11: mov     esi, ecx
0x7C4B13: call    ??1?$NiTPointerMap@KPAVCachedGrass@TallGrassShaderProperty@@@@UAE@XZ; NiTPointerMap<ulong,TallGrassShaderProperty::CachedGrass *>::~NiTPointerMap<ulong,TallGrassShaderProperty::CachedGrass *>(void)
0x7C4B18: test    [esp+4+arg_0], 1
0x7C4B1D: jz      short loc_7C4B28
0x7C4B1F: push    esi
0x7C4B20: call    FormHeapFree
0x7C4B25: add     esp, 4
0x7C4B28: mov     eax, esi
0x7C4B2A: pop     esi
0x7C4B2B: retn    4
