NiObject *__thiscall NiObject_constr(NiObject *this)
{
  this->__vftable = (NiObjectVtbl *)&NiRefObject::`vftable';
  this->members.m_uiRefCount = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  this->__vftable = (NiObjectVtbl *)&NiObject::`vftable';
  return this;
}
