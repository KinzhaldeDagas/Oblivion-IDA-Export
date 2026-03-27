char __thiscall sub_67EB60(float *this, float *a2, float *a3, TESObjectREFR *a4, float a5)
{
  double v6; // st7

  *(_DWORD *)this = dword_B15450;
  *((_DWORD *)this + 1) = dword_B15454;
  *((_DWORD *)this + 2) = dword_B15458;
  *((_DWORD *)this + 3) = dword_B15450;
  *((_DWORD *)this + 4) = dword_B15454;
  *((_DWORD *)this + 5) = dword_B15458;
  *(this + 7) = 0.0;
  *(this + 8) = 0.0;
  *(this + 9) = 0.0;
  *(this + 0xA) = 0.0;
  sub_67D7B0();
  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  v6 = *this;
  *(this + 3) = *a3;
  *(this + 4) = a3[1];
  *(this + 5) = a3[2];
  if ( *(this + 3) == v6 && *(this + 4) == *(this + 1) && *(this + 5) == *(this + 2) )
    return 1;
  if ( sub_67E160(this, a4, a5) )
    return sub_67E8D0((int *)this, a4);
  return 1;
}
