int __thiscall BaseExtraList_AddExtra(ExtraDataList *this, BSExtraData *a2)
{
  BSExtraData *m_data; // eax
  unsigned int type; // ecx
  BSExtraData *next; // eax

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aBaseextralistA); /*0x41e0ad*/
  switch ( a2->members.type ) /*0x41e0c9*/
  {
    case 0x11u: /*0x41e0c9*/
    case 0x12u: /*0x41e0c9*/
    case 0x13u: /*0x41e0c9*/
    case 0x1Au: /*0x41e0c9*/
    case 0x32u: /*0x41e0c9*/
      m_data = this->members.m_data; /*0x41e0d0*/
      if ( m_data ) /*0x41e0d5*/
        a2->members.next = m_data; /*0x41e0d7*/
      goto LABEL_4; /*0x41e0d7*/
    default:
      next = this->members.m_data; /*0x41e10e*/
      if ( next ) /*0x41e113*/
      {
        for ( ; next->members.next; next = next->members.next ) /*0x41e115*/
          ; /*0x41e120*/
        next->members.next = a2; /*0x41e129*/
      }
      else
      {
LABEL_4:
        this->members.m_data = a2; /*0x41e0da*/
      }
      type = a2->members.type; /*0x41e0dd*/
      if ( type >> 3 < 0xC ) /*0x41e0e9*/
        this->members.m_presenceBitfield[type >> 3] |= 1 << (type & 7); /*0x41e0fc*/
      return NiLeaveCriticalSection_0(&MEMORY[0xB33800]);
  }
}
