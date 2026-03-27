int __thiscall ExtraDataList_RemoveAllCopyableExtraData(ExtraDataList *this, char a2)
{
  BSExtraData *m_data; // esi
  BSExtraData *v4; // ebp
  int v5; // edx
  BSExtraData *v6; // edx

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalistR);
  m_data = this->members.m_data;
  v4 = 0;
  while ( m_data )
  {
    v5 = (int)m_data;
    m_data = m_data->members.next;
    if ( sub_41E340(v5) )
    {
      if ( v6 == this->members.m_data )
        this->members.m_data = m_data;
      if ( v4 )
        v4->members.next = m_data;
      if ( a2 )
        ((void (__thiscall *)(BSExtraData *, int))v6->vtbl->Destructor)(v6, 1);
    }
    else
    {
      v4 = v6;
    }
  }
  sub_41DE50(this);
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
