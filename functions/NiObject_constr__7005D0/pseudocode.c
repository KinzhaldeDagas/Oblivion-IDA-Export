NiObject *__thiscall NiObject_constr(NiObject *this)
{
  this->__vftable = (NiObjectVtbl *)&NiRefObject::`vftable'; /*0x7005d8*/
  this->members.m_uiRefCount = 0; /*0x7005de*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x7005e5*/
  this->__vftable = (NiObjectVtbl *)&NiObject::`vftable'; /*0x7005eb*/
  return this; /*0x7005f3*/
}
