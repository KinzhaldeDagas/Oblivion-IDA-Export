// Asymmetric container-stack compatibility check (__thiscall, retn 4). Scans only 'other'. Returns true when the lists must remain distinct: other contains Script (0x12) or Ownership (0x27), this lacks a matching extra-data type, or that type's virtual CompareTo reports a difference. Count (0x2A) is deliberately ignored because callers merge counts separately. Returns false only when every relevant node in other is compatible.
bool __thiscall ExtraDataList_CompareListForContainer(ExtraDataList *this, ExtraDataList *other)
{
  BSExtraData *m_data; // esi
  UInt8 type; // al
  BSExtraData *ExtraData; // eax

  NiEnterCriticalSection( /*0x41e4de*/
    (struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800],
    (int)"ExtraDataList::CompareListForContainer");
  m_data = other->members.m_data; /*0x41e4e7*/
  if ( m_data ) /*0x41e4ec*/
  {
    while ( 1 ) /*0x41e4f0*/
    {
      type = m_data->members.type; /*0x41e4f0*/
      if ( type == 0x12 ) /*0x41e4f5*/
        break;                                  // Script (0x12) and Ownership (0x27) force a non-stackable/different result. /*0x41e4f5*/
      if ( type == 0x27 ) /*0x41e4f9*/
        break; /*0x41e4f9*/
      if ( type != 0x2A )                       // Count extra data (0x2A) is excluded from comparison; the inventory callers add counts explicitly. /*0x41e4fd*/
      {
        ExtraData = BaseExtraList_GetExtraData(this, (ExtraDataType)m_data->members.type); /*0x41e50a*/
        if ( !ExtraData || ExtraData->vtbl->CompareTo(ExtraData, m_data) ) /*0x41e51b*/
          break;                                // Virtual CompareTo returns nonzero for a mismatch; missing same-type data also yields the function's true/different result. /*0x41e51b*/
      }
      m_data = m_data->members.next; /*0x41e521*/
      if ( !m_data ) /*0x41e526*/
        goto ExtraDataList_CompareListForContainer___Return_0; /*0x41e526*/
    }
    NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e53e*/
    return 1; /*0x41e544*/
  }
  else
  {
ExtraDataList_CompareListForContainer___Return_0:
    NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e528*/
    return 0; /*0x41e533*/
  }
}
