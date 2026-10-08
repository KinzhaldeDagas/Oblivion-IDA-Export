float *sub_725470()
{
  int v0; // esi
  float *result; // eax

  v0 = FormHeapAlloc(0x114u); /*0x72549c*/
  result = 0; /*0x7254a5*/
  if ( v0 ) /*0x7254ad*/
  {
    NiLight::NiLight((NiLight *)v0); /*0x7254b1*/
    *(float *)(v0 + 0x108) = 0.0; /*0x7254b8*/
    *(_DWORD *)v0 = &NiPointLight::`vftable'; /*0x7254be*/
    *(float *)(v0 + 0x10C) = 1.0; /*0x7254c8*/
    *(float *)(v0 + 0x110) = 0.0; /*0x7254ce*/
    return (float *)v0; /*0x7254c6*/
  }
  return result; /*0x7254d4*/
}
