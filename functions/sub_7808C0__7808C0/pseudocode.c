char __thiscall sub_7808C0(float *this, int a2)
{
  int v3; // edx
  double v4; // st7
  float v6; // [esp+4h] [ebp+4h]

  v3 = *(_DWORD *)(a2 + 0x54);
  if ( *((_DWORD *)this + 0x11) == v3 )
    return 0;
  *((_DWORD *)this + 0x11) = v3;
  v6 = *(float *)(a2 + 0x50);
  *(this + 0xC) = *(float *)(a2 + 0x40);
  *(this + 0xD) = *(float *)(a2 + 0x44);
  *(this + 0xE) = *(float *)(a2 + 0x48);
  *(this + 0xF) = v6;
  *(this + 4) = *(float *)(a2 + 0x1C);
  *(this + 5) = *(float *)(a2 + 0x20);
  *(this + 6) = *(float *)(a2 + 0x24);
  *(this + 7) = v6;
  *this = *(float *)(a2 + 0x28);
  *(this + 1) = *(float *)(a2 + 0x2C);
  *(this + 2) = *(float *)(a2 + 0x30);
  *(this + 3) = v6;
  *(this + 8) = *(float *)(a2 + 0x34);
  *(this + 9) = *(float *)(a2 + 0x38);
  *(this + 0xA) = *(float *)(a2 + 0x3C);
  *(this + 0xB) = v6;
  v4 = *(float *)(a2 + 0x4C);
  *(this + 0x10) = v4;
  return 1;
}
