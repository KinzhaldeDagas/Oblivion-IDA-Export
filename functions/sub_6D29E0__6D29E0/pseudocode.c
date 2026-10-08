NiObject *__thiscall sub_6D29E0(NiObject *this, float a2)
{
  sub_6EC220(this); /*0x6d29e3*/
  *((float *)this + 3) = a2; /*0x6d29ee*/
  this->__vftable = (NiObjectVtbl *)&NiFloatInterpolator::`vftable'; /*0x6d29f1*/
  *((_DWORD *)this + 4) = 0; /*0x6d29f7*/
  *((_DWORD *)this + 5) = 0; /*0x6d29fa*/
  return this; /*0x6d29ff*/
}
