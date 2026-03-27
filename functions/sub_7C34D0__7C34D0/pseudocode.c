TallGrassShaderProperty *__thiscall sub_7C34D0(_DWORD *this, int a2)
{
  TallGrassShaderProperty *v3; // eax
  TallGrassShaderProperty *v4; // esi

  v3 = (TallGrassShaderProperty *)FormHeapAlloc(0xB0u);
  v4 = 0;
  if ( v3 )
    v4 = TallGrassShaderProperty::TallGrassShaderProperty(v3);
  sub_7C2DF0(this, v4, a2);
  return v4;
}
