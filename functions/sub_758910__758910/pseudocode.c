NiObject *__thiscall sub_758910(NiObject *this)
{
  double v2; // st7
  float z; // edx

  sub_752BF0(this); /*0x758913*/
  v2 = flt_A43328; /*0x758918*/
  this->__vftable = (NiObjectVtbl *)&NiPSysDragModifier::`vftable'; /*0x75891e*/
  *((_DWORD *)this + 6) = 0; /*0x758924*/
  *((_DWORD *)this + 7) = LODWORD(stru_B258D0.x); /*0x758930*/
  *((_DWORD *)this + 8) = LODWORD(stru_B258D0.y); /*0x758939*/
  z = stru_B258D0.z; /*0x75893c*/
  *((float *)this + 0xA) = v2; /*0x758942*/
  *((float *)this + 9) = z; /*0x758945*/
  *((float *)this + 0xB) = flt_A7DEB4; /*0x75894e*/
  *((float *)this + 0xC) = flt_A7DEB4; /*0x758959*/
  return this; /*0x75895c*/
}
