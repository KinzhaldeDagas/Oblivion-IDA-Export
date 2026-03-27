NiTextureEffect *__thiscall sub_73C030(char **this, _DWORD **a2)
{
  NiTextureEffect *v3; // eax
  NiTextureEffect *v4; // esi

  v3 = (NiTextureEffect *)FormHeapAlloc(0x174u);
  v4 = 0;
  if ( v3 )
    v4 = NiTextureEffect::NiTextureEffect(v3);
  sub_73BD30(this, (int)v4, a2);
  return v4;
}
