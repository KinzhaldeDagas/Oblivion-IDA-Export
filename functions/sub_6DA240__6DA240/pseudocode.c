NiObject *__thiscall sub_6DA240(NiObject *this, int a2, int a3, int a4)
{
  sub_6EC220(this); /*0x6da243*/
  *((_DWORD *)this + 3) = a2; /*0x6da254*/
  *((_DWORD *)this + 4) = a3; /*0x6da257*/
  this->__vftable = (NiObjectVtbl *)&NiPoint3Interpolator::`vftable'; /*0x6da25c*/
  *((_DWORD *)this + 5) = a4; /*0x6da262*/
  *((_DWORD *)this + 6) = 0; /*0x6da265*/
  *((_DWORD *)this + 7) = 0; /*0x6da268*/
  return this; /*0x6da26d*/
}
