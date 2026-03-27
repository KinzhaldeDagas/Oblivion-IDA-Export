float *__thiscall sub_75C250(float *this)
{
  double v2; // st7
  int v3; // eax
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  sub_75E800(this);
  *(_DWORD *)this = &NiPSysAirFieldModifier::`vftable';
  v5[0] = -*(float *)&dword_B258D0;
  v5[1] = -*(float *)&dword_B258D4;
  v5[2] = -*(float *)&dword_B258D8;
  sub_75C1C0(this, v5);
  v2 = flt_A32048;
  *((_DWORD *)this + 0xC) = dword_B28B54;
  *((_DWORD *)this + 0xD) = dword_B28B58;
  v3 = dword_B28B5C;
  *(this + 0xF) = v2;
  *((_DWORD *)this + 0xE) = v3;
  return this;
}
