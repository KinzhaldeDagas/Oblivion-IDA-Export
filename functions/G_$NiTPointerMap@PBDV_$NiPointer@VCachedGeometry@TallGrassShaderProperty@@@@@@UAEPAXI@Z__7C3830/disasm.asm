0x7C3830: push    esi
0x7C3831: mov     esi, ecx
0x7C3833: call    ??1?$NiTPointerMap@PBDV?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@UAE@XZ; NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTPointerMap<char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>(void)
0x7C3838: test    [esp+4+arg_0], 1
0x7C383D: jz      short loc_7C3848
0x7C383F: push    esi
0x7C3840: call    FormHeapFree
0x7C3845: add     esp, 4
0x7C3848: mov     eax, esi
0x7C384A: pop     esi
0x7C384B: retn    4
