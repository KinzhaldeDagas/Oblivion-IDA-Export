BSExtraData *__thiscall BaseExtraList_GetPrevExtraData(ExtraDataList *this, unsigned __int8 a2)
{
  unsigned int v3; // eax
  BSExtraData *m_data; // eax
  BSExtraData *i; // esi

  v3 = a2 >> 3; /*0x41e2dd*/
  if ( v3 >= 0xC || ((unsigned __int8)(1 << (a2 & 7)) & this->members.m_presenceBitfield[v3]) == 0 ) /*0x41e2ff*/
    return 0; /*0x41e302*/
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aBaseextralis_0); /*0x41e312*/
  m_data = this->members.m_data; /*0x41e317*/
  for ( i = 0; m_data; m_data = m_data->members.next ) /*0x41e31e*/
  {
    if ( m_data->members.type == a2 ) /*0x41e323*/
      break; /*0x41e323*/
    i = m_data; /*0x41e325*/
  }
  NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e333*/
  return i; /*0x41e301*/
}
