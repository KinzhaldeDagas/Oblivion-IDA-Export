int __thiscall sub_8EAAD0(float *this, int a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float v6; // [esp+Ch] [ebp-4h]

  v3 = fConstant_1 / *(this + 0x3C);
  v4 = fConstant_1 / *(this + 0x3D);
  v5 = fConstant_1 / *(this + 0x3E);
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 0x10) = 0;
  *(_OWORD *)(a2 + 0x20) = 0;
  v6 = v5;
  *(float *)a2 = v3;
  *(float *)(a2 + 0x14) = v4;
  *(float *)(a2 + 0x28) = v6;
  return a2;
}
