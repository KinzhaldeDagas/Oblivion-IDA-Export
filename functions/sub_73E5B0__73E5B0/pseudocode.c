unsigned int *__thiscall sub_73E5B0(unsigned int *this, _DWORD **a2)
{
  NiScreenTexture *v3; // eax
  unsigned int *v4; // esi

  v3 = (NiScreenTexture *)FormHeapAlloc(0x20u);
  v4 = 0;
  if ( v3 )
    v4 = (unsigned int *)NiScreenTexture::NiScreenTexture(v3);
  sub_73E150(this, v4, a2);
  return v4;
}
