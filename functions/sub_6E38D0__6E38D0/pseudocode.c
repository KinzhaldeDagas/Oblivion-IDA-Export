NiObject *__thiscall sub_6E38D0(NiObject *this, int a2, int a3, int a4, int a5)
{
  sub_6EC220(this); /*0x6e38d3*/
  *((_DWORD *)this + 3) = a2; /*0x6e38e4*/
  *((_DWORD *)this + 4) = a3; /*0x6e38eb*/
  *((_DWORD *)this + 5) = a4; /*0x6e38ee*/
  *((_DWORD *)this + 6) = a5; /*0x6e38f1*/
  this->__vftable = (NiObjectVtbl *)&NiColorInterpolator::`vftable'; /*0x6e38f6*/
  *((_DWORD *)this + 7) = 0; /*0x6e38fc*/
  *((_DWORD *)this + 8) = 0; /*0x6e38ff*/
  return this; /*0x6e3904*/
}
