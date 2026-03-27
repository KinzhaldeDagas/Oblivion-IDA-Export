HairShaderProperty *__thiscall sub_882A60(_WORD *this, int a2)
{
  HairShaderProperty *v3; // eax
  HairShaderProperty *v4; // esi

  v3 = (HairShaderProperty *)FormHeapAlloc(0x170u);
  v4 = 0;
  if ( v3 )
    v4 = HairShaderProperty::HairShaderProperty(v3);
  sub_8827E0(this, v4, a2);
  return v4;
}
