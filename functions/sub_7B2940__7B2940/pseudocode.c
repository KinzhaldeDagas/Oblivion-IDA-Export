BSShaderLightingProperty *__thiscall sub_7B2940(_DWORD *this, int a2)
{
  BSShaderLightingProperty *v3; // eax
  BSShaderLightingProperty *v4; // esi

  v3 = (BSShaderLightingProperty *)FormHeapAlloc(0xACu);
  v4 = v3;
  if ( v3 )
  {
    BSShaderLightingProperty::BSShaderLightingProperty(v3);
    *(_DWORD *)v4 = &DistantLODShaderProperty::`vftable';
    *((_DWORD *)v4 + 0x28) = 0;
    *((_DWORD *)v4 + 0x27) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_7B23C0(this, v4, a2);
  return v4;
}
