0x7C3160: push    esi
0x7C3161: mov     esi, ecx
0x7C3163: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable'
0x7C3169: call    NiTMap_Clear
0x7C316E: mov     eax, [esi+8]
0x7C3171: push    eax
0x7C3172: call    FormHeapFree
0x7C3177: add     esp, 4
0x7C317A: test    [esp+4+arg_0], 1
0x7C317F: jz      short loc_7C318A
0x7C3181: push    esi
0x7C3182: call    FormHeapFree
0x7C3187: add     esp, 4
0x7C318A: mov     eax, esi
0x7C318C: pop     esi
0x7C318D: retn    4
