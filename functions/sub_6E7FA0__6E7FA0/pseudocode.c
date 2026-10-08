NiObject *__thiscall sub_6E7FA0(NiObject *this, char a2)
{
  sub_6EC220(this); /*0x6e7fa3*/
  *((_BYTE *)this + 0xC) = a2; /*0x6e7fac*/
  this->__vftable = (NiObjectVtbl *)&NiBoolInterpolator::`vftable'; /*0x6e7fb1*/
  *((_DWORD *)this + 4) = 0; /*0x6e7fb7*/
  *((_DWORD *)this + 5) = 0; /*0x6e7fba*/
  return this; /*0x6e7fbf*/
}
