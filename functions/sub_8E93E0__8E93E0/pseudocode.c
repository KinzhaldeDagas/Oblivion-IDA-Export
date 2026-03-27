int __thiscall sub_8E93E0(float *this, int a2)
{
  double v2; // st7

  v2 = *(this + 0x31);
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 0x10) = 0;
  *(_OWORD *)(a2 + 0x20) = 0;
  *(float *)a2 = v2;
  *(float *)(a2 + 0x14) = v2;
  *(float *)(a2 + 0x28) = v2;
  return a2;
}
