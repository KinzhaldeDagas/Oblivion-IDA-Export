int __thiscall sub_8EAD90(int this, float *a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  int v7; // [esp+4h] [ebp+4h]

  v3 = fConstant_1 / a2[5];
  v7 = *(_DWORD *)(this + 0xFC);
  v4 = fConstant_1 / a2[0xA];
  v5 = fConstant_1 / *a2;
  *(float *)(this + 0xF0) = v5;
  *(float *)(this + 0xF4) = v3;
  *(float *)(this + 0xF8) = v4;
  *(_DWORD *)(this + 0xFC) = v7;
  return v7;
}
