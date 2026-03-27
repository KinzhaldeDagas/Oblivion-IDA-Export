BSShaderPPLightingProperty *__thiscall sub_863720(_WORD *this, int a2)
{
  BSShaderPPLightingProperty *v3; // eax
  BSShaderPPLightingProperty *v4; // esi

  v3 = (BSShaderPPLightingProperty *)FormHeapAlloc(0x108u);
  v4 = v3;
  if ( v3 )
  {
    BSShaderPPLightingProperty::BSShaderPPLightingProperty(v3);
    *(_DWORD *)v4 = &Lighting30ShaderProperty::`vftable';
    *((float *)v4 + 0x3C) = 0.0;
    *((float *)v4 + 0x3D) = 0.0;
    *((float *)v4 + 0x3E) = 0.0;
    *((float *)v4 + 0x3F) = 0.0;
    *((_DWORD *)v4 + 0x41) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_863540(this, v4, a2);
  return v4;
}
