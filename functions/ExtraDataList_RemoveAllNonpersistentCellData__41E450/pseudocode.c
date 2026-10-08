int __thiscall ExtraDataList_RemoveAllNonpersistentCellData(ExtraDataList *this)
{
  BSExtraData *m_data; // esi
  BSExtraData *v3; // edi
  BSExtraData *v4; // ecx
  UInt8 type; // al

  NiEnterCriticalSection( /*0x41e45f*/
    (struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800],
    (int)"ExtraDataList::RemoveNonPersistentCellData");
  m_data = this->members.m_data; /*0x41e464*/
  v3 = 0; /*0x41e467*/
  if ( m_data ) /*0x41e46b*/
  {
    while ( 1 ) /*0x41e470*/
    {
      v4 = m_data; /*0x41e470*/
      type = m_data->members.type; /*0x41e472*/
      m_data = m_data->members.next; /*0x41e477*/
      if ( type < 2u ) /*0x41e47a*/
        break; /*0x41e47a*/
      if ( type <= 3u ) /*0x41e47e*/
      {
        if ( (g_TESSaveLoadGame->flags & 4) == 0 ) /*0x41e496*/
          break; /*0x41e496*/
        v3 = v4; /*0x41e498*/
      }
      else
      {
        if ( type != 8 ) /*0x41e482*/
          break; /*0x41e482*/
        v3 = v4; /*0x41e484*/
      }
LABEL_13:
      if ( !m_data ) /*0x41e4b5*/
        goto LABEL_14; /*0x41e4b5*/
    }
    if ( v4 == this->members.m_data ) /*0x41e49f*/
      this->members.m_data = m_data; /*0x41e4a1*/
    if ( v3 ) /*0x41e4a6*/
      v3->members.next = m_data; /*0x41e4a8*/
    ((void (__thiscall *)(BSExtraData *, int))v4->vtbl->Destructor)(v4, 1); /*0x41e4b1*/
    goto LABEL_13; /*0x41e4b1*/
  }
LABEL_14:
  sub_41DE50(this); /*0x41e4b7*/
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e4c0*/
}
