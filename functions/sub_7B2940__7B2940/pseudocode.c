BSShaderLightingPropertyLayout_t *__thiscall sub_7B2940(char **this, int a2)
{
  BSShaderLightingPropertyLayout_t *v3; // eax
  BSShaderLightingPropertyLayout_t *v4; // esi

  v3 = (BSShaderLightingPropertyLayout_t *)FormHeapAlloc(0xACu); /*0x7b296a*/
  v4 = v3; /*0x7b296f*/
  if ( v3 ) /*0x7b2982*/
  {
    BSShaderLightingProperty::BSShaderLightingProperty(v3); /*0x7b2986*/
    v4->base.vtbl = &DistantLODShaderProperty::`vftable'; /*0x7b298b*/
    v4[1].base.member.super.super.super.m_uiRefCount = 0; /*0x7b2991*/
    v4[1].base.vtbl = 0; /*0x7b299b*/
  }
  else
  {
    v4 = 0; /*0x7b29a7*/
  }
  sub_7B23C0(this, v4, a2); /*0x7b29b9*/
  return v4; /*0x7b29c0*/
}
