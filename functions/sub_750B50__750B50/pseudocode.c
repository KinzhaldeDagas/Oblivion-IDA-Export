float *__thiscall sub_750B50(float *this)
{
  int v2; // ecx

  sub_752BF0(this);
  *(this + 6) = 0.0;
  *(_DWORD *)this = &NiPSysGravityModifier::`vftable';
  *((_DWORD *)this + 7) = dword_B258D0;
  *((_DWORD *)this + 8) = dword_B258D4;
  v2 = dword_B258D8;
  *(this + 0xA) = 0.0;
  *(this + 0xC) = 0.0;
  *(this + 0xB) = 1.0;
  *((_DWORD *)this + 9) = v2;
  *(this + 0xD) = 0.0;
  *(this + 0xE) = 1.0;
  return this;
}
