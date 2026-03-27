int __thiscall sub_72FF40(int this, _DWORD *a2, float a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v7; // edx

  *(_DWORD *)this = *a2;
  v7 = a2[1];
  *(float *)(this + 8) = a3;
  *(_DWORD *)(this + 4) = v7;
  *(_DWORD *)(this + 0xC) = *a4;
  *(_DWORD *)(this + 0x10) = a4[1];
  *(_DWORD *)(this + 0x14) = *a5;
  *(_DWORD *)(this + 0x18) = a5[1];
  *(_DWORD *)(this + 0x44) = a6;
  sub_72FDF0((float *)this);
  return this;
}
