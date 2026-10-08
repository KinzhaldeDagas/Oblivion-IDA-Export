NiObject *__thiscall sub_75DF50(NiObject *this)
{
  NiObject_constr(this); /*0x75df53*/
  *((_DWORD *)this + 2) = 0; /*0x75df5c*/
  this->__vftable = (NiObjectVtbl *)&NiPSysUpdateTask::`vftable'; /*0x75df5f*/
  *((_DWORD *)this + 3) = 0; /*0x75df65*/
  *((float *)this + 4) = 0.0; /*0x75df68*/
  return this; /*0x75df6d*/
}
