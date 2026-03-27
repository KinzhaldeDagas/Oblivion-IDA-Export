float *__thiscall sub_537E40(float *this, float a2)
{
  float *v3; // eax
  double v4; // st7

  sub_8B2170(this);
  *(this + 5) = 1.0;
  *(_DWORD *)this = &TESWaterListener::`vftable';
  *((_DWORD *)this + 8) = 1;
  v3 = (float *)FormHeapAlloc(4u);
  v4 = a2 * hkFactor;
  *((_DWORD *)this + 6) = v3;
  *v3 = v4;
  *(this + 9) = 0.0;
  *(this + 0xA) = 0.0;
  return this;
}
