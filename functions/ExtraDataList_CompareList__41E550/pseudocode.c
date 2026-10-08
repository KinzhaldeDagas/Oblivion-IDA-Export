char __thiscall ExtraDataList_CompareList(ExtraDataList *this, ExtraDataList *a2)
{
  BSExtraData *m_data; // esi
  BSExtraData *ExtraData; // eax
  int v5; // esi
  BSExtraData *next; // esi

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalis_5); /*0x41e55f*/
  m_data = a2->members.m_data; /*0x41e568*/
  if ( m_data ) /*0x41e56d*/
  {
    while ( 1 ) /*0x41e573*/
    {
      if ( sub_41E340((int)m_data) ) /*0x41e573*/
      {
        ExtraData = BaseExtraList_GetExtraData(this, (ExtraDataType)m_data->members.type); /*0x41e58a*/
        if ( !ExtraData || ExtraData->vtbl->CompareTo(ExtraData, m_data) ) /*0x41e59b*/
          break; /*0x41e59b*/
      }
      m_data = m_data->members.next; /*0x41e5a1*/
      if ( !m_data ) /*0x41e5a6*/
        goto LABEL_6; /*0x41e5a6*/
    }
  }
  else
  {
LABEL_6:
    v5 = BaseExtraList_Count(a2); /*0x41e5a8*/
    if ( BaseExtraList_Count(this) == v5 || (next = this->members.m_data) == 0 ) /*0x41e5c1*/
    {
LABEL_11:
      NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e5ed*/
      return 0; /*0x41e5fc*/
    }
    while ( !sub_41E340((int)next) || BaseExtraList_GetExtraData(a2, (ExtraDataType)next->members.type) ) /*0x41e5e4*/
    {
      next = next->members.next; /*0x41e5e6*/
      if ( !next ) /*0x41e5eb*/
        goto LABEL_11; /*0x41e5eb*/
    }
  }
  NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e604*/
  return 1; /*0x41e5f7*/
}
