float *__thiscall sub_96F3C0(float *this, int a2, int a3, float a4, float a5, float a6, int a7)
{
  float v9; // [esp+2Ch] [ebp+18h]

  sub_96F0E0(this, a4, a5, a6, a7);
  *((_DWORD *)this + 0xE) = a2;
  *(_DWORD *)this = &NiCapsuleSphereIntersector::`vftable';
  *((_DWORD *)this + 0xF) = a3;
  v9 = *(float *)(a2 + 0x38) + *(float *)(a3 + 0x10);
  *(this + 0x10) = 1.0 / (v9 * v9);
  *(this + 0x11) = flt_A7DEB4;
  return this;
}
