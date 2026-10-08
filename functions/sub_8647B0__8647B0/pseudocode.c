// [Verified] GeometryDecalShaderProperty vtable slot +0x18 (slot 6) CreateClone. Allocates and constructs a 0x9C-byte GeometryDecalShaderProperty, then calls BSShaderProperty_CopyCloneMembers. The copy helper only copies base fields at +0x1C/+0x20 and resets +0x24; it does not copy the inherited DECAL_DATA* list at +0x80. Clone-time decal-list population/rebuild remains Unknown.
BSShaderLightingPropertyLayout_t *__thiscall GeometryDecalShaderProperty_CreateClone(
        BSShaderLightingPropertyLayout_t *this,
        void *cloneProcess)
{
  BSShaderLightingPropertyLayout_t *v3; // eax
  BSShaderLightingPropertyLayout_t *v4; // esi

  v3 = (BSShaderLightingPropertyLayout_t *)FormHeapAlloc(0x9Cu); /*0x8647da*/
  v4 = v3; /*0x8647df*/
  if ( v3 ) /*0x8647f2*/
  {
    BSShaderLightingProperty::BSShaderLightingProperty(v3); /*0x8647f6*/
    v4->base.vtbl = &GeometryDecalShaderProperty::`vftable'; /*0x8647fb*/
  }
  else
  {
    v4 = 0; /*0x864803*/
  }
  j_BSShaderProperty_CopyCloneMembers((char **)this, (int)v4, (int)cloneProcess); /*0x864815*/
  return v4; /*0x86481c*/
}
