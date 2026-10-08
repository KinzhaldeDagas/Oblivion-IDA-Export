NiObject *__thiscall sub_4C15F0(NiObject *this, int a2, int a3)
{
  sub_721350(this); /*0x4c15f3*/
  *((_DWORD *)this + 4) = a2; /*0x4c1600*/
  this->__vftable = (NiObjectVtbl *)&NiBinaryExtraData::`vftable'; /*0x4c1603*/
  *((_DWORD *)this + 3) = a3; /*0x4c1609*/
  return this; /*0x4c160e*/
}
