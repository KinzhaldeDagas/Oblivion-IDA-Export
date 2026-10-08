bool __thiscall sub_4295D0(ExtraDataList *this, unsigned int a2)
{
  bool result; // al

  result = 0; /*0x4295d6*/
  if ( a2 < 0x1E ) /*0x4295db*/
    return ((1 << a2) & *(_DWORD *)&this->members.m_presenceBitfield[4]) != 0; /*0x4295eb*/
  return result; /*0x4295ed*/
}
