int __thiscall sub_8EAB30(int this, int a2)
{
  double v3; // st6
  double v4; // st7
  int v5; // ecx

  v3 = *(float *)(this + 0xF0);
  v4 = *(float *)(this + 0xF4);
  v5 = *(_DWORD *)(this + 0xF8);
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 0x10) = 0;
  *(_OWORD *)(a2 + 0x20) = 0;
  *(float *)a2 = v3;
  *(float *)(a2 + 0x14) = v4;
  *(_DWORD *)(a2 + 0x28) = v5;
  return a2;
}
