BSShaderProperty *__thiscall sub_7EFD10(char **this, int a2)
{
  BSShaderProperty *v3; // eax
  BSShaderProperty *v4; // esi

  v3 = (BSShaderProperty *)FormHeapAlloc(0xACu);
  v4 = v3;
  if ( v3 )
  {
    BSShaderProperty::BSShaderProperty(v3);
    *(float *)&v4[1].member.super.super.m_pcName = 0.0;
    v4->vtbl = &PrecipitationShaderProperty::`vftable';
    v4[1].vtbl = 0;
    v4[1].member.passes.end = 0;
    v4[1].member.unk38.vtlb = (void **)1;
    v4[1].member.unk38.start = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_7EFBF0(this, v4, a2);
  return v4;
}
