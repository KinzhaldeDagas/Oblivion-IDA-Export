int __thiscall sub_8E92E0(float *this, int a2)
{
  double v3; // st7

  v3 = fConstant_1 / *(this + 0x31);
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 0x10) = 0;
  *(_OWORD *)(a2 + 0x20) = 0;
  *(float *)a2 = v3;
  *(float *)(a2 + 0x14) = v3;
  *(float *)(a2 + 0x28) = v3;
  return a2;
}
