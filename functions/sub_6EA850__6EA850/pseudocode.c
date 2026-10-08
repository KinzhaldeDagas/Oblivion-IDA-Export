NiObject *__thiscall sub_6EA850(NiObject *this, char a2, float a3, unsigned __int8 a4)
{
  sub_6CCE40(this, a2, a3, a4); /*0x6ea867*/
  this->__vftable = (NiObjectVtbl *)&NiBlendPoint3Interpolator::`vftable'; /*0x6ea86c*/
  *((_DWORD *)this + 0xC) = dword_B24FC8; /*0x6ea878*/
  *((_DWORD *)this + 0xD) = dword_B24FCC; /*0x6ea880*/
  *((_DWORD *)this + 0xE) = dword_B24FD0; /*0x6ea889*/
  *((_BYTE *)this + 0x3C) = 0; /*0x6ea88c*/
  return this; /*0x6ea893*/
}
