BSStringT *__thiscall BSStringT_Append(BSStringT *this, char *a2)
{
  char *m_data; // edi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax

  if ( !a2 ) /*0x412faa*/
    return this; /*0x413064*/
  m_data = this->m_data; /*0x412fb1*/
  if ( this->m_data ) /*0x412fb1*/
  {
    v4 = strlen(a2); /*0x412fbd*/
    LOWORD(v5) = this->m_dataLen; /*0x412fc9*/
    if ( (_WORD)v5 == 0xFFFF ) /*0x412fd5*/
      v5 = strlen(m_data); /*0x412fd9*/
    else
      v5 = (unsigned __int16)v5; /*0x412fed*/
    v6 = v5 + v4; /*0x412ff0*/
    if ( v6 <= (unsigned __int16)this->m_bufLen ) /*0x412ff8*/
    {
      if ( v6 > 0xFFFF ) /*0x41300d*/
        LOWORD(v6) = 0xFFFF; /*0x41300f*/
      this->m_dataLen = v6; /*0x413014*/
    }
    else
    {
      BSStringT_Set(this, m_data, v6); /*0x412ffe*/
    }
    strcat(this->m_data, a2); /*0x413041*/
    return this; /*0x41304d*/
  }
  else
  {
    BSStringT_Set(this, a2, 0); /*0x413056*/
    return this; /*0x41305d*/
  }
}
