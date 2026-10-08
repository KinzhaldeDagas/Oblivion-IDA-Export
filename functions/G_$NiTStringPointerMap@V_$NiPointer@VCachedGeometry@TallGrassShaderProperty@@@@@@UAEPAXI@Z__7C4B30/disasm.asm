0x7C4B30: push    esi
0x7C4B31: mov     esi, ecx
0x7C4B33: call    ??1?$NiTStringPointerMap@V?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@UAE@XZ; NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>::~NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>(void)
0x7C4B38: test    [esp+4+arg_0], 1
0x7C4B3D: jz      short loc_7C4B48
0x7C4B3F: push    esi
0x7C4B40: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7C4B45: add     esp, 4
0x7C4B48: mov     eax, esi
0x7C4B4A: pop     esi
0x7C4B4B: retn    4
