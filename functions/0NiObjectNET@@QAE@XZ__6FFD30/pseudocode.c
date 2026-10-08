NiObjectNET *__thiscall NiObjectNET::NiObjectNET(NiObjectNET *this)
{
  NiObject_constr((NiObject *)this); /*0x6ffd33*/
  this->vtbl = (NiObjectVtbl **)&NiObjectNET::`vftable'; /*0x6ffd3a*/
  this->members.m_controller = 0; /*0x6ffd40*/
  this->members.m_extraDataList = 0; /*0x6ffd43*/
  this->members.m_extraDataListLen = 0; /*0x6ffd46*/
  this->members.m_extraDataListCapacity = 0; /*0x6ffd4a*/
  this->members.m_pcName = 0; /*0x6ffd4e*/
  return this; /*0x6ffd53*/
}
