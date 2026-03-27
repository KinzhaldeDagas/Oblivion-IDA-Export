int __thiscall BaseExtraList_AddExtra(ExtraDataList *this, BSExtraData *a2)
{
  BSExtraData *m_data; // eax
  unsigned int type; // ecx
  BSExtraData *next; // eax

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aBaseextralistA);
  switch ( a2->members.type )
  {
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x1Au:
    case 0x32u:
      m_data = this->members.m_data;
      if ( m_data )
        a2->members.next = m_data;
      goto LABEL_4;
    default:
      next = this->members.m_data;
      if ( next )
      {
        for ( ; next->members.next; next = next->members.next )
          ;
        next->members.next = a2;
      }
      else
      {
LABEL_4:
        this->members.m_data = a2;
      }
      type = a2->members.type;
      if ( type >> 3 < 0xC )
        this->members.m_presenceBitfield[type >> 3] |= 1 << (type & 7);
      return NiLeaveCriticalSection_0(&BSExtraDataCS);
  }
}
