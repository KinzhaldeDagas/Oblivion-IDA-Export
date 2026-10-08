__m128 *__thiscall sub_8EABF0(__m128 *this, int a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  float v6; // [esp+Ch] [ebp-4h]

  v2 = fConstant_1 / *((float *)this + 0x3C); /*0x8eac02*/
  v3 = fConstant_1 / *((float *)this + 0x3D); /*0x8eac15*/
  v4 = fConstant_1 / *((float *)this + 0x3E); /*0x8eac21*/
  *(_OWORD *)a2 = 0; /*0x8eac27*/
  *(_OWORD *)(a2 + 0x10) = 0; /*0x8eac2a*/
  *(_OWORD *)(a2 + 0x20) = 0; /*0x8eac2e*/
  v6 = v4; /*0x8eac34*/
  *(float *)a2 = v2; /*0x8eac3a*/
  *(float *)(a2 + 0x14) = v3; /*0x8eac40*/
  *(float *)(a2 + 0x28) = v6; /*0x8eac43*/
  return sub_8D2C60((__m128 *)a2, this + 1); /*0x8eac4b*/
}
