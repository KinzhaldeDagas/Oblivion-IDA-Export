NiObject *__thiscall sub_6C6550(NiObject *this)
{
  double v2; // st7
  double v3; // st7

  NiObject_constr(this);
  *((float *)this + 7) = 1.0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  this->__vftable = (NiObjectVtbl *)&NiControllerSequence::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((float *)this + 0xA) = 1.0;
  *((_DWORD *)this + 9) = 0;
  *((float *)this + 0xB) = flt_A7DEB4;
  *((float *)this + 0xC) = -flt_A7DEB4;
  *((float *)this + 0xD) = -flt_A7DEB4;
  *((float *)this + 0xE) = -flt_A7DEB4;
  v2 = flt_A7DEB4;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((float *)this + 0xF) = -v2;
  *((float *)this + 0x12) = -flt_A7DEB4;
  *((float *)this + 0x13) = -flt_A7DEB4;
  *((float *)this + 0x14) = -flt_A7DEB4;
  v3 = flt_A7DEB4;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((float *)this + 0x15) = -v3;
  *((_DWORD *)this + 0x19) = 0;
  return this;
}
