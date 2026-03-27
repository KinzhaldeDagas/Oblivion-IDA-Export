char __thiscall ExtraDataList_CompareList(ExtraDataList *this, ExtraDataList *a2)
{
  BSExtraData *m_data; // esi
  BSExtraData *ExtraData; // eax
  int v5; // esi
  BSExtraData *next; // esi

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalis_5);
  m_data = a2->members.m_data;
  if ( m_data )
  {
    while ( 1 )
    {
      if ( sub_41E340((int)m_data) )
      {
        ExtraData = BaseExtraList_GetExtraData(this, (ExtraDataType)m_data->members.type);
        if ( !ExtraData || ExtraData->vtbl->CompareTo(ExtraData, m_data) )
          break;
      }
      m_data = m_data->members.next;
      if ( !m_data )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v5 = BaseExtraList_Count(a2);
    if ( BaseExtraList_Count(this) == v5 || (next = this->members.m_data) == 0 )
    {
LABEL_11:
      NiLeaveCriticalSection_0(&BSExtraDataCS);
      return 0;
    }
    while ( !sub_41E340((int)next) || BaseExtraList_GetExtraData(a2, (ExtraDataType)next->members.type) )
    {
      next = next->members.next;
      if ( !next )
        goto LABEL_11;
    }
  }
  NiLeaveCriticalSection_0(&BSExtraDataCS);
  return 1;
}
