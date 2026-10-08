NiObject *__thiscall sub_6C6550(NiObject *this)
{
  double v2; // st7
  double v3; // st7

  NiObject_constr(this); /*0x6c6553*/
  *((float *)this + 7) = 1.0; /*0x6c655a*/
  *((_DWORD *)this + 2) = 0; /*0x6c655f*/
  *((_DWORD *)this + 3) = 0; /*0x6c6562*/
  *((_DWORD *)this + 4) = 0; /*0x6c6565*/
  *((_DWORD *)this + 5) = 0; /*0x6c6568*/
  *((_DWORD *)this + 6) = 0; /*0x6c656b*/
  this->__vftable = (NiObjectVtbl *)&NiControllerSequence::`vftable'; /*0x6c656e*/
  *((_DWORD *)this + 8) = 0; /*0x6c6574*/
  *((float *)this + 0xA) = 1.0; /*0x6c6577*/
  *((_DWORD *)this + 9) = 0; /*0x6c657a*/
  *((float *)this + 0xB) = flt_A7DEB4; /*0x6c6583*/
  *((float *)this + 0xC) = -flt_A7DEB4; /*0x6c658e*/
  *((float *)this + 0xD) = -flt_A7DEB4; /*0x6c6599*/
  *((float *)this + 0xE) = -flt_A7DEB4; /*0x6c65a4*/
  v2 = flt_A7DEB4; /*0x6c65a7*/
  *((_DWORD *)this + 0x10) = 0; /*0x6c65ad*/
  *((_DWORD *)this + 0x11) = 0; /*0x6c65b2*/
  *((float *)this + 0xF) = -v2; /*0x6c65b5*/
  *((float *)this + 0x12) = -flt_A7DEB4; /*0x6c65c0*/
  *((float *)this + 0x13) = -flt_A7DEB4; /*0x6c65cb*/
  *((float *)this + 0x14) = -flt_A7DEB4; /*0x6c65d6*/
  v3 = flt_A7DEB4; /*0x6c65d9*/
  *((_DWORD *)this + 0x16) = 0; /*0x6c65df*/
  *((_DWORD *)this + 0x17) = 0; /*0x6c65e4*/
  *((_DWORD *)this + 0x18) = 0; /*0x6c65e7*/
  *((float *)this + 0x15) = -v3; /*0x6c65ea*/
  *((_DWORD *)this + 0x19) = 0; /*0x6c65ed*/
  return this; /*0x6c65f2*/
}
