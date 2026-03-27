float *sub_725470()
{
  int v0; // esi
  float *result; // eax

  v0 = FormHeapAlloc(0x114u);
  result = 0;
  if ( v0 )
  {
    NiLight::NiLight((NiLight *)v0);
    *(float *)(v0 + 0x108) = 0.0;
    *(_DWORD *)v0 = &NiPointLight::`vftable';
    *(float *)(v0 + 0x10C) = 1.0;
    *(float *)(v0 + 0x110) = 0.0;
    return (float *)v0;
  }
  return result;
}
