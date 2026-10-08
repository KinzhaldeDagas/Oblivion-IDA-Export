int __thiscall ExtraDataList_CopyListForContainer(ExtraDataList *this, ExtraDataList *a2, char a3)
{
  BSExtraData *m_data; // esi
  char v5; // bl

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalis_7); /*0x42897f*/
  m_data = a2->members.m_data; /*0x428988*/
  while ( m_data ) /*0x42898d*/
  {
    v5 = 1; /*0x42899a*/
    switch ( m_data->members.type ) /*0x4289a5*/
    {
      case 0x12u: /*0x4289a5*/
        ExtraDataList_CopyBSExtraData(this, m_data); /*0x4289c8*/
        if ( !a3 ) /*0x4289d2*/
        {
          BaseExtraList_RemoveExtraByPtr(a2, (int)m_data, 0); /*0x4289d9*/
          goto LABEL_8; /*0x4289d9*/
        }
        break; /*0x4289d9*/
      case 0x1Bu: /*0x4289a5*/
      case 0x1Cu: /*0x4289a5*/
      case 0x22u: /*0x4289a5*/
      case 0x27u: /*0x4289a5*/
      case 0x28u: /*0x4289a5*/
      case 0x29u: /*0x4289a5*/
      case 0x2Bu: /*0x4289a5*/
      case 0x2Cu: /*0x4289a5*/
      case 0x2Du: /*0x4289a5*/
      case 0x2Eu: /*0x4289a5*/
      case 0x2Fu: /*0x4289a5*/
      case 0x36u: /*0x4289a5*/
      case 0x37u: /*0x4289a5*/
      case 0x48u: /*0x4289a5*/
      case 0x50u: /*0x4289a5*/
      case 0x55u: /*0x4289a5*/
        ExtraDataList_CopyBSExtraData(this, m_data); /*0x4289af*/
        if ( m_data->members.type != 0x37 && !a3 ) /*0x4289bf*/
        {
          BaseExtraList_RemoveExtraByPtr(a2, (int)m_data, 1); /*0x4289c3*/
LABEL_8:
          m_data = a2->members.m_data; /*0x4289de*/
          v5 = 0; /*0x4289e1*/
        }
        break; /*0x4289e1*/
      default:
        break;
    }
    if ( !m_data ) /*0x4289e5*/
      break; /*0x4289e5*/
    if ( v5 ) /*0x4289e9*/
      m_data = m_data->members.next; /*0x4289eb*/
  }
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x4289fd*/
}
