NiObjectNET *__thiscall NiObjectNET::NiObjectNET(NiObjectNET *this)
{
  NiObject_constr((NiObject *)this);
  this->vtbl = (NiObjectVtbl **)&NiObjectNET::`vftable';
  this->members.m_controller = 0;
  this->members.m_extraDataList = 0;
  this->members.m_extraDataListLen = 0;
  this->members.m_extraDataListCapacity = 0;
  this->members.m_pcName = 0;
  return this;
}
