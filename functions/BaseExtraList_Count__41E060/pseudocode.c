int __thiscall BaseExtraList_Count(ExtraDataList *this)
{
  BSExtraData *m_data; // eax
  int i; // esi

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aBaseextralistI);
  m_data = this->members.m_data;
  for ( i = 0; m_data; ++i )
    m_data = m_data->members.next;
  NiLeaveCriticalSection_0(&BSExtraDataCS);
  return i;
}
