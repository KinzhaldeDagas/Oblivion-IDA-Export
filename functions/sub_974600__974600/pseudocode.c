float *__thiscall sub_974600(float *this, int a2, int a3, float a4, float a5, float a6, int a7)
{
  sub_96F0E0(this, a4, a5, a6, a7);
  *((_DWORD *)this + 0xF) = a3;
  *(_DWORD *)this = &NiBoxSphereIntersector::`vftable';
  *((_DWORD *)this + 0xE) = a2;
  *(this + 0x10) = 1.0 / (*(float *)(a3 + 0x10) * *(float *)(a3 + 0x10));
  *(this + 0x11) = flt_A7DEB4;
  *(this + 0x12) = flt_A7DEB4;
  *(this + 0x13) = flt_A7DEB4;
  return this;
}
