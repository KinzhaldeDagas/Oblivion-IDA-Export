BSShaderPPLightingProperty *__thiscall sub_7D9810(_WORD *this, int a2)
{
  BSShaderPPLightingProperty *v3; // eax
  BSShaderPPLightingProperty *v4; // esi

  v3 = (BSShaderPPLightingProperty *)FormHeapAlloc(0xF0u);
  v4 = 0;
  if ( v3 )
    v4 = BSShaderPPLightingProperty::BSShaderPPLightingProperty(v3);
  sub_7D7AD0(this, (int)v4, a2);
  return v4;
}
