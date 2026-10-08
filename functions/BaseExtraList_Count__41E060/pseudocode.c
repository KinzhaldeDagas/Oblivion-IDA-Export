int __thiscall BaseExtraList_Count(ExtraDataList *this)
{
  BSExtraData *m_data; // eax
  int i; // esi

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aBaseextralistI); /*0x41e06e*/
  m_data = this->members.m_data; /*0x41e073*/
  for ( i = 0; m_data; ++i ) /*0x41e07a*/
    m_data = m_data->members.next; /*0x41e080*/
  NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e08f*/
  return i; /*0x41e094*/
}
