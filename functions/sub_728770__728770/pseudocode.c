NiObject *__thiscall sub_728770(NiObject *this)
{
  NiObject_constr(this); /*0x728773*/
  *((_WORD *)this + 0x17) = 0; /*0x72877a*/
  *((_WORD *)this + 4) = 0; /*0x72877e*/
  *((_DWORD *)this + 7) = 0; /*0x728782*/
  *((_DWORD *)this + 8) = 0; /*0x728785*/
  *((_DWORD *)this + 9) = 0; /*0x728788*/
  *((_DWORD *)this + 0xA) = 0; /*0x72878b*/
  *((_WORD *)this + 0x16) = 0; /*0x72878e*/
  *((_BYTE *)this + 0x30) = 0; /*0x728792*/
  *((_BYTE *)this + 0x31) = 0; /*0x728795*/
  this->__vftable = (NiObjectVtbl *)&NiGeometryData::`vftable'; /*0x728798*/
  *((_DWORD *)this + 0xD) = 0; /*0x72879e*/
  *((_WORD *)this + 0x17) &= 0xFFFu; /*0x7287a1*/
  *((_BYTE *)this + 0x3C) = 0; /*0x7287a7*/
  *((_BYTE *)this + 0x3D) = 0; /*0x7287aa*/
  *((_DWORD *)this + 0xE) = 0; /*0x7287ad*/
  return this; /*0x7287b2*/
}
