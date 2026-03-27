int __thiscall ExtraDataList_CopyListForContainer(ExtraDataList *this, ExtraDataList *a2, char a3)
{
  BSExtraData *m_data; // esi
  char v5; // bl

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalis_7);
  m_data = a2->members.m_data;
  while ( m_data )
  {
    v5 = 1;
    switch ( m_data->members.type )
    {
      case 0x12u:
        ExtraDataList_CopyBSExtraData(this, m_data);
        if ( !a3 )
        {
          BaseExtraList_RemoveExtraByPtr(a2, (int)m_data, 0);
          goto LABEL_8;
        }
        break;
      case 0x1Bu:
      case 0x1Cu:
      case 0x22u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x36u:
      case 0x37u:
      case 0x48u:
      case 0x50u:
      case 0x55u:
        ExtraDataList_CopyBSExtraData(this, m_data);
        if ( m_data->members.type != 0x37 && !a3 )
        {
          BaseExtraList_RemoveExtraByPtr(a2, (int)m_data, 1);
LABEL_8:
          m_data = a2->members.m_data;
          v5 = 0;
        }
        break;
      default:
        break;
    }
    if ( !m_data )
      break;
    if ( v5 )
      m_data = m_data->members.next;
  }
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
