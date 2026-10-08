// Counts list entries with a non-null ShadowSceneLight, frustumCull != 0xFF, and byte +0xF4 == 0. Unlike GetFirst/NextActiveLight, this counter does not test the backing NiLight AppCulled bit.
unsigned int __thiscall BSShaderLightingProperty__CountFrustumVisibleEnabledLights(BSShaderLightingProperty *this)
{
  _DWORD *v1; // ecx
  unsigned int result; // eax
  int v3; // edx

  v1 = *((_DWORD **)this + 0x1C); /*0x7ed600*/
  result = 0; /*0x7ed603*/
  while ( v1 ) /*0x7ed607*/
  {
    v3 = v1[2]; /*0x7ed613*/
    v1 = (_DWORD *)*v1; /*0x7ed617*/
    if ( v3 ) /*0x7ed619*/
    {
      if ( *(_WORD *)(v3 + 0x118) != 0xFF && !*(_BYTE *)(v3 + 0xF4) ) /*0x7ed626*/
        ++result; /*0x7ed62f*/
    }
  }
  return result; /*0x7ed636*/
}
