float *__thiscall sub_96F0E0(float *this, float a2, float a3, float a4, int a5)
{
  float v6; // [esp+0h] [ebp-8h]
  float v7; // [esp+4h] [ebp-4h]

  *(_DWORD *)this = &NiIntersector::`vftable';
  v7 = flt_A7DEB4;
  *(this + 8) = flt_A7DEB4;
  *(this + 9) = v7;
  *(this + 0xA) = v7;
  v6 = flt_A7DEB4;
  *(this + 0xB) = flt_A7DEB4;
  *(this + 0xC) = v6;
  *(this + 0xD) = v6;
  *((_DWORD *)this + 5) = a5;
  *(this + 6) = 0.0;
  *(this + 1) = a2;
  *(this + 2) = a3;
  *(this + 3) = 1.0 / a3;
  *(this + 4) = a4;
  *(this + 7) = flt_A7DEB4;
  return this;
}
