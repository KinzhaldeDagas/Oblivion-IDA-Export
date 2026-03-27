BSStringT *__thiscall BSStringT_Append(BSStringT *this, char *a2)
{
  const char *m_data; // edi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax

  if ( !a2 )
    return this;
  m_data = this->m_data;
  if ( this->m_data )
  {
    v4 = strlen(a2);
    LOWORD(v5) = this->m_dataLen;
    if ( (_WORD)v5 == 0xFFFF )
      v5 = strlen(m_data);
    else
      v5 = (unsigned __int16)v5;
    v6 = v5 + v4;
    if ( v6 <= (unsigned __int16)this->m_bufLen )
    {
      if ( v6 > 0xFFFF )
        LOWORD(v6) = 0xFFFF;
      this->m_dataLen = v6;
    }
    else
    {
      BSStringT_Set(this, m_data, v6);
    }
    strcat(this->m_data, a2);
    return this;
  }
  else
  {
    BSStringT_Set(this, a2, 0);
    return this;
  }
}
