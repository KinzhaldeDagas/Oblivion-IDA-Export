// [Verified] Oblivion GeometryDecalShaderProperty constructor delegates to BSShaderLightingProperty::BSShaderLightingProperty, so it inherits the +0x80 NiTPointerList<DECAL_DATA*> and +0x8C count. Its stream construction helper allocates 0x9C bytes, matching the Oblivion lighting-property layout. Fallout divergence: Fallout's GeometryDecalShaderProperty is 0xF0 bytes and its ExtraDecalRefs path is separate reference metadata; no matching inherited DECAL_DATA list has been established there. Do not infer 1:1 class equivalence.
BSShaderLightingPropertyLayout_t *__thiscall GeometryDecalShaderProperty_Ctor(BSShaderLightingPropertyLayout_t *this)
{
  BSShaderLightingProperty::BSShaderLightingProperty(this); /*0x864753*/
  this->base.vtbl = &GeometryDecalShaderProperty::`vftable'; /*0x864758*/
  return this; /*0x864760*/
}
