int __thiscall BaseExtraList_Clear(ExtraDataList *this, char a2)
{
  BSExtraData *m_data; // esi
  BSExtraData *v4; // ecx

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aBaseextralis_1);
  sub_41DE50(this);
  if ( a2 )
  {
    m_data = this->members.m_data;
    while ( m_data )
    {
      v4 = m_data;
      m_data = m_data->members.next;
      this->members.m_data = m_data;
      ((void (__thiscall *)(BSExtraData *, int))v4->vtbl->Destructor)(v4, 1);
    }
  }
  else
  {
    this->members.m_data = 0;
  }
  *(_DWORD *)this->members.m_presenceBitfield = 0;
  *(_DWORD *)&this->members.m_presenceBitfield[4] = 0;
  *(_DWORD *)&this->members.m_presenceBitfield[8] = 0;
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
