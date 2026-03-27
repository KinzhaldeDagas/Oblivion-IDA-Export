NiMaterialProperty *__thiscall sub_7097B0(char **this, int a2)
{
  NiMaterialProperty *v3; // eax
  NiMaterialProperty *v4; // esi

  v3 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
  v4 = 0;
  if ( v3 )
    v4 = NiMaterialProperty::NiMaterialProperty(v3);
  sub_7096A0(this, (int)v4, a2);
  return v4;
}
