int __thiscall ExtraDataList_RemoveAllNonpersistentCellData(ExtraDataList *this)
{
  BSExtraData *m_data; // esi
  BSExtraData *v3; // edi
  BSExtraData *v4; // ecx
  UInt8 type; // al

  NiEnterCriticalSection(
    (struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS,
    (int)"ExtraDataList::RemoveNonPersistentCellData");
  m_data = this->members.m_data;
  v3 = 0;
  if ( m_data )
  {
    while ( 1 )
    {
      v4 = m_data;
      type = m_data->members.type;
      m_data = m_data->members.next;
      if ( type < 2u )
        break;
      if ( type <= 3u )
      {
        if ( (SaveLoad_CurrentSavegame->flags & 4) == 0 )
          break;
        v3 = v4;
      }
      else
      {
        if ( type != 8 )
          break;
        v3 = v4;
      }
LABEL_13:
      if ( !m_data )
        goto LABEL_14;
    }
    if ( v4 == this->members.m_data )
      this->members.m_data = m_data;
    if ( v3 )
      v3->members.next = m_data;
    ((void (__thiscall *)(BSExtraData *, int))v4->vtbl->Destructor)(v4, 1);
    goto LABEL_13;
  }
LABEL_14:
  sub_41DE50(this);
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
