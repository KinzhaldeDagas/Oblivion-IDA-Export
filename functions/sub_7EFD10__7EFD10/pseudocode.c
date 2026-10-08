BSShaderProperty *__thiscall sub_7EFD10(BSShaderProperty *this, void *a2)
{
  BSShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (BSShaderProperty *)FormHeapAlloc(0xACu); /*0x7efd3b*/
  v4 = v3; /*0x7efd40*/
  if ( v3 ) /*0x7efd51*/
  {
    BSShaderProperty::BSShaderProperty(v3); /*0x7efd55*/
    *(float *)&v4[1].member.super.super.m_pcName = 0.0; /*0x7efd5c*/
    v4->vtbl = &PrecipitationShaderProperty::`vftable'; /*0x7efd5f*/
    v4[1].vtbl = 0; /*0x7efd65*/
    v4[1].member.passes.end = 0; /*0x7efd68*/
    v4[1].member.unk38.vtlb = (void **)1; /*0x7efd6e*/
    v4[1].member.unk38.start = 0; /*0x7efd78*/
  }
  else
  {
    v4 = 0; /*0x7efd80*/
  }
  sub_7EFBF0(this, v4, a2); /*0x7efd92*/
  return v4; /*0x7efd99*/
}
