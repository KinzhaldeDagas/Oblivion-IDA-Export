SkyShaderProperty *__thiscall sub_7C5460(_WORD *this, int a2)
{
  SkyShaderProperty *v3; // eax
  SkyShaderProperty *v4; // esi

  v3 = (SkyShaderProperty *)FormHeapAlloc(0x8Cu);
  v4 = 0;
  if ( v3 )
    v4 = SkyShaderProperty::SkyShaderProperty(v3);
  sub_7C5340(this, (int)v4, a2);
  return v4;
}
