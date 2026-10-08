NiObject *__thiscall sub_4D67C0(NiObject *this, unsigned int a2)
{
  sub_721350(this); /*0x4d67e8*/
  this->__vftable = (NiObjectVtbl *)&TESObjectExtraData::`vftable'; /*0x4d67fc*/
  sub_721440((unsigned int *)this, off_A3CEB0); /*0x4d6802*/
  *((_DWORD *)this + 3) = a2; /*0x4d680b*/
  return this; /*0x4d6810*/
}
