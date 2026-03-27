int __thiscall sub_7A8620(int this)
{
  double v1; // st7
  double v3; // st7

  v1 = flt_A8CB04;
  *(_DWORD *)(this + 0x18) = 0xF;
  *(_DWORD *)(this + 0x14) = 0;
  *(_BYTE *)(this + 4) = 0;
  *(float *)(this + 0x1C) = v1;
  v3 = flt_A2FE7C;
  *(_DWORD *)(this + 0x24) = 0x4B0;
  *(float *)(this + 0x20) = v3;
  *(_DWORD *)(this + 0x30) = 0x1BC;
  *(float *)(this + 0x28) = flt_A3D8F0;
  *(float *)(this + 0x2C) = 0.0;
  return this;
}
