int __thiscall sub_8E92E0(float *this, int a2)
{
  double v3; // st7

  v3 = fConstant_1 / *(this + 0x31); /*0x8e92ec*/
  *(_OWORD *)a2 = 0; /*0x8e92f5*/
  *(_OWORD *)(a2 + 0x10) = 0; /*0x8e92f8*/
  *(_OWORD *)(a2 + 0x20) = 0; /*0x8e92fc*/
  *(float *)a2 = v3; /*0x8e9303*/
  *(float *)(a2 + 0x14) = v3; /*0x8e9305*/
  *(float *)(a2 + 0x28) = v3; /*0x8e9308*/
  return a2; /*0x8e930d*/
}
