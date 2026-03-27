BSExtraData *__thiscall BaseExtraList_GetPrevExtraData(ExtraDataList *this, unsigned __int8 a2)
{
  unsigned int v3; // eax
  BSExtraData *m_data; // eax
  BSExtraData *i; // esi

  v3 = a2 >> 3;
  if ( v3 >= 0xC || ((unsigned __int8)(1 << (a2 & 7)) & this->members.m_presenceBitfield[v3]) == 0 )
    return 0;
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aBaseextralis_0);
  m_data = this->members.m_data;
  for ( i = 0; m_data; m_data = m_data->members.next )
  {
    if ( m_data->members.type == a2 )
      break;
    i = m_data;
  }
  NiLeaveCriticalSection_0(&BSExtraDataCS);
  return i;
}
