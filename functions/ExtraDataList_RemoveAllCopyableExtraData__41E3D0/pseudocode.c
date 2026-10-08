int __thiscall ExtraDataList_RemoveAllCopyableExtraData(ExtraDataList *this, char a2)
{
  BSExtraData *m_data; // esi
  BSExtraData *v4; // ebp
  int v5; // edx
  BSExtraData *v6; // edx

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalistR); /*0x41e3df*/
  m_data = this->members.m_data; /*0x41e3e4*/
  v4 = 0; /*0x41e3e7*/
  while ( m_data ) /*0x41e3eb*/
  {
    v5 = (int)m_data; /*0x41e3f2*/
    m_data = m_data->members.next; /*0x41e3f4*/
    if ( sub_41E340(v5) ) /*0x41e3fa*/
    {
      if ( v6 == this->members.m_data ) /*0x41e406*/
        this->members.m_data = m_data; /*0x41e408*/
      if ( v4 ) /*0x41e40d*/
        v4->members.next = m_data; /*0x41e40f*/
      if ( a2 ) /*0x41e414*/
        ((void (__thiscall *)(BSExtraData *, int))v6->vtbl->Destructor)(v6, 1); /*0x41e41e*/
    }
    else
    {
      v4 = v6; /*0x41e422*/
    }
  }
  sub_41DE50(this); /*0x41e42a*/
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e43c*/
}
