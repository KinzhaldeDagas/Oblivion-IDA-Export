NiObjectNET *__thiscall NiFogProperty_constr(NiObjectNET *this)
{
  double v2; // st7
  int v3; // edx
  double v4; // st7

  NiObjectNET::NiObjectNET(this);
  this->vtbl = (NiObjectVtbl **)&NiFogProperty::`vftable';
  *((float *)this + 8) = 0.0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 0xA) = 0.0;
  *((_WORD *)this + 0xC) = 0;
  *((float *)this + 7) = 1.0;
  v2 = flt_A905E8;
  *((_DWORD *)this + 8) = dword_B3FA90;
  *((_DWORD *)this + 9) = dword_B3FA94;
  v3 = dword_B3FA98;
  *((float *)this + 0xB) = v2;
  v4 = flt_A3F4F0;
  *((_DWORD *)this + 0xA) = v3;
  *((float *)this + 0xC) = v4;
  this->vtbl = (NiObjectVtbl **)&BSFogProperty::`vftable';
  return this;
}
