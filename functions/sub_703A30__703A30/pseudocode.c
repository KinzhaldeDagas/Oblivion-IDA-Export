float *__thiscall sub_703A30(float *this)
{
  float v2; // edx
  double v3; // st7

  *this = g_TESObjectTREE_InitialBillboardSizeX; /*0x703a3a*/
  v2 = g_TESObjectTREE_InitialBillboardSizeY; /*0x703a3c*/
  *(this + 2) = 0.0; /*0x703a42*/
  *(this + 1) = v2; /*0x703a47*/
  *(this + 3) = 1.0; /*0x703a4a*/
  *(this + 4) = 1.0; /*0x703a4d*/
  v3 = kHeadBodyNormalMatchRadius; /*0x703a50*/
  *(this + 5) = kHeadBodyNormalMatchRadius; /*0x703a56*/
  *(this + 6) = v3; /*0x703a59*/
  *((_BYTE *)this + 0x1C) = 1; /*0x703a5c*/
  *(this + 0x11) = 0.0; /*0x703a60*/
  return this; /*0x703a67*/
}
