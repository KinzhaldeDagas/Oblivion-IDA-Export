BSShaderLightingProperty *__thiscall sub_8647B0(char **this, int a2)
{
  BSShaderLightingProperty *v3; // eax
  BSShaderLightingProperty *v4; // esi

  v3 = (BSShaderLightingProperty *)FormHeapAlloc(0x9Cu);
  v4 = v3;
  if ( v3 )
  {
    BSShaderLightingProperty::BSShaderLightingProperty(v3);
    *(_DWORD *)v4 = &GeometryDecalShaderProperty::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_7ECB10(this, (int)v4, a2);
  return v4;
}
