NiObject *__thiscall sub_6CC4E0(NiObject *this)
{
  double v2; // st7

  sub_6EBA00(this); /*0x6cc4e3*/
  *((float *)this + 7) = 0.0; /*0x6cc4ea*/
  v2 = flt_A79F00; /*0x6cc4ef*/
  *((_BYTE *)this + 0xC) = 0; /*0x6cc4f5*/
  *((float *)this + 8) = v2; /*0x6cc4f8*/
  *((_BYTE *)this + 0xD) = 0; /*0x6cc4fb*/
  *((_BYTE *)this + 0xE) = 0; /*0x6cc4fe*/
  *((_DWORD *)this + 5) = 0; /*0x6cc501*/
  *((_DWORD *)this + 6) = 0; /*0x6cc504*/
  this->__vftable = (NiObjectVtbl *)&NiBlendInterpolator::`vftable'; /*0x6cc507*/
  *((_BYTE *)this + 0xF) = 0xFF; /*0x6cc50d*/
  *((_BYTE *)this + 0x10) = 0x80; /*0x6cc513*/
  *((_BYTE *)this + 0x11) = 0x80; /*0x6cc516*/
  *((float *)this + 9) = -flt_A7DEB4; /*0x6cc523*/
  *((float *)this + 0xA) = -flt_A7DEB4; /*0x6cc52e*/
  *((float *)this + 0xB) = -flt_A7DEB4; /*0x6cc539*/
  return this; /*0x6cc53c*/
}
