NiObject *__thiscall sub_7597F0(NiObject *this)
{
  sub_73EE80(this); /*0x7597f3*/
  *((_DWORD *)this + 0x17) = 0; /*0x7597fa*/
  *((_DWORD *)this + 0x18) = 0; /*0x7597fd*/
  *((_DWORD *)this + 0x19) = 0; /*0x759800*/
  this->__vftable = (NiObjectVtbl *)&NiPSysData::`vftable'; /*0x759808*/
  return this; /*0x759810*/
}
