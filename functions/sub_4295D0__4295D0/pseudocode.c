bool __thiscall sub_4295D0(ExtraDataList *this, unsigned int a2)
{
  bool result; // al

  result = 0;
  if ( a2 < 0x1E )
    return ((1 << a2) & *(_DWORD *)&this->members.m_presenceBitfield[4]) != 0;
  return result;
}
