NiTextureEffect *__thiscall sub_73C030(char **this, _DWORD **a2)
{
  NiTextureEffect *v3; // eax
  NiTextureEffect *v4; // esi

  v3 = (NiTextureEffect *)FormHeapAlloc(0x174u); /*0x73c05a*/
  v4 = 0; /*0x73c066*/
  if ( v3 ) /*0x73c06e*/
    v4 = NiTextureEffect::NiTextureEffect(v3); /*0x73c077*/
  sub_73BD30(this, (int)v4, a2); /*0x73c089*/
  return v4; /*0x73c090*/
}
