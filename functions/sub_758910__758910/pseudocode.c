NiObject *__thiscall sub_758910(NiObject *this)
{
  double v2; // st7
  int v3; // edx

  sub_752BF0(this);
  v2 = flt_A43328;
  this->__vftable = (NiObjectVtbl *)&NiPSysDragModifier::`vftable';
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = dword_B258D0;
  *((_DWORD *)this + 8) = dword_B258D4;
  v3 = dword_B258D8;
  *((float *)this + 0xA) = v2;
  *((_DWORD *)this + 9) = v3;
  *((float *)this + 0xB) = flt_A7DEB4;
  *((float *)this + 0xC) = flt_A7DEB4;
  return this;
}
