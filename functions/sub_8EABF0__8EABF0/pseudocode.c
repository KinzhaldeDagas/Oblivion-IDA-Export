__m128 *__thiscall sub_8EABF0(__m128 *this, int a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  float v6; // [esp+Ch] [ebp-4h]

  v2 = fConstant_1 / *((float *)this + 0x3C);
  v3 = fConstant_1 / *((float *)this + 0x3D);
  v4 = fConstant_1 / *((float *)this + 0x3E);
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 0x10) = 0;
  *(_OWORD *)(a2 + 0x20) = 0;
  v6 = v4;
  *(float *)a2 = v2;
  *(float *)(a2 + 0x14) = v3;
  *(float *)(a2 + 0x28) = v6;
  return sub_8D2C60((__m128 *)a2, this + 1);
}
