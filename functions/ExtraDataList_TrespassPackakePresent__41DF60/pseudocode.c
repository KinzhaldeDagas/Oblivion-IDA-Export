bool __thiscall ExtraDataList::TrespassPackakePresent(ExtraDataList *this)
{
  return (this->members.m_presenceBitfield[6] & kExtraData_TresPassPackage) != 0;
}
