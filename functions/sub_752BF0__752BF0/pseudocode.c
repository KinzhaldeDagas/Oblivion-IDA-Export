NiObject *__thiscall sub_752BF0(NiObject *this)
{
  NiObject_constr(this); /*0x752bf3*/
  *((_DWORD *)this + 2) = 0; /*0x752bfa*/
  *((_DWORD *)this + 3) = 0; /*0x752bfd*/
  *((_DWORD *)this + 4) = 0; /*0x752c00*/
  this->__vftable = (NiObjectVtbl *)&NiPSysModifier::`vftable'; /*0x752c03*/
  *((_BYTE *)this + 0x14) = 1; /*0x752c09*/
  return this; /*0x752c0f*/
}
