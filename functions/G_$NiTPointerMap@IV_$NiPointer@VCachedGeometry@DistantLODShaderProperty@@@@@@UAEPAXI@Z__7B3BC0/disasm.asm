0x7B3BC0: push    esi
0x7B3BC1: mov     esi, ecx
0x7B3BC3: call    ??1?$NiTPointerMap@IV?$NiPointer@VCachedGeometry@DistantLODShaderProperty@@@@@@UAE@XZ; NiTPointerMap<uint,NiPointer<DistantLODShaderProperty::CachedGeometry>>::~NiTPointerMap<uint,NiPointer<DistantLODShaderProperty::CachedGeometry>>(void)
0x7B3BC8: test    [esp+4+arg_0], 1
0x7B3BCD: jz      short loc_7B3BD8
0x7B3BCF: push    esi
0x7B3BD0: call    FormHeapFree
0x7B3BD5: add     esp, 4
0x7B3BD8: mov     eax, esi
0x7B3BDA: pop     esi
0x7B3BDB: retn    4
