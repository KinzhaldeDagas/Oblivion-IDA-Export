0x864750: push    esi; [Verified] Oblivion GeometryDecalShaderProperty constructor delegates to BSShaderLightingProperty::BSShaderLightingProperty, so it inherits the +0x80 NiTPointerList<DECAL_DATA*> and +0x8C count. Its stream construction helper allocates 0x9C bytes, matching the Oblivion lighting-property layout. Fallout divergence: Fallout's GeometryDecalShaderProperty is 0xF0 bytes and its ExtraDecalRefs path is separate reference metadata; no matching inherited DECAL_DATA list has been established there. Do not infer 1:1 class equivalence.
0x864751: mov     esi, ecx
0x864753: call    ??0BSShaderLightingProperty@@QAE@XZ; [Verified] DECAL_DATA is 0x4C bytes: NiSourceTexture* +0, rotation matrix +8, target reference FormID +0x3C, fade progress +0x40, and NiProperty* +0x48. Fields +4, +0x2C, +0x38 and +0x44 remain Unknown. The property owns a NiTPointerList<DECAL_DATA*> at +0x80; effects add/remove entries and render-pass builders batch from count +0x8C.
0x864758: mov     dword ptr [esi], offset ??_7GeometryDecalShaderProperty@@6B@; const GeometryDecalShaderProperty::`vftable'
0x86475E: mov     eax, esi
0x864760: pop     esi
0x864761: retn
