int __thiscall BaseExtraList_Clear(ExtraDataList *this, char a2)
{
  BSExtraData *m_data; // esi
  BSExtraData *v4; // ecx

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aBaseextralis_1); /*0x41dffe*/
  sub_41DE50(this); /*0x41e004*/
  if ( a2 ) /*0x41e011*/
  {
    m_data = this->members.m_data; /*0x41e013*/
    while ( m_data ) /*0x41e018*/
    {
      v4 = m_data; /*0x41e020*/
      m_data = m_data->members.next; /*0x41e022*/
      this->members.m_data = m_data; /*0x41e025*/
      ((void (__thiscall *)(BSExtraData *, int))v4->vtbl->Destructor)(v4, 1); /*0x41e02e*/
    }
  }
  else
  {
    this->members.m_data = 0; /*0x41e036*/
  }
  *(_DWORD *)this->members.m_presenceBitfield = 0; /*0x41e03f*/
  *(_DWORD *)&this->members.m_presenceBitfield[4] = 0; /*0x41e042*/
  *(_DWORD *)&this->members.m_presenceBitfield[8] = 0; /*0x41e04a*/
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e052*/
}
