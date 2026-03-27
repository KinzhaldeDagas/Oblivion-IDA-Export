int __thiscall sub_8D2830(int this)
{
  double v1; // st7
  double v2; // st7
  int result; // eax
  double v4; // st7

  v1 = *(float *)(this + 0x10);
  *(_DWORD *)(this + 0x10) = *(_DWORD *)(this + 4);
  *(float *)(this + 4) = v1;
  v2 = *(float *)(this + 0x20);
  *(_DWORD *)(this + 0x20) = *(_DWORD *)(this + 8);
  *(float *)(this + 8) = v2;
  result = *(_DWORD *)(this + 0x18);
  v4 = *(float *)(this + 0x24);
  *(_DWORD *)(this + 0x24) = result;
  *(float *)(this + 0x18) = v4;
  return result;
}
