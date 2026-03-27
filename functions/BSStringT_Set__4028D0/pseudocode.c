BOOL __thiscall BSStringT_Set(BSStringT *this, const char *a2, unsigned int a3)
{
  unsigned int v4; // esi
  char *m_data; // ebx
  char *v7; // eax
  __int16 v8; // ax

  if ( !a2 || (v4 = strlen(a2), v4 <= a3) )
    v4 = a3;
  if ( v4 > (unsigned __int16)this->m_bufLen )
  {
    m_data = this->m_data;
    v7 = (char *)FormHeapAlloc(v4 + 1);
    this->m_data = v7;
    if ( v7 )
    {
      if ( a2 )
        BSStringT_Static_StrCpy(v7, a2);
      else
        *v7 = 0;
    }
    else
    {
      v4 = 0;
    }
    FormHeapFree((unsigned int)m_data);
    v8 = v4;
    if ( v4 > 0xFFFF )
      v8 = 0xFFFF;
    this->m_bufLen = v8;
  }
  else
  {
    if ( !v4 )
    {
      FormHeapFree((unsigned int)this->m_data);
      this->m_dataLen = 0;
      this->m_data = 0;
      this->m_bufLen = 0;
      return 0;
    }
    if ( a2 )
      BSStringT_Static_StrCpy(this->m_data, a2);
    else
      *this->m_data = 0;
  }
  if ( v4 > 0xFFFF )
    this->m_dataLen = 0xFFFF;
  else
    this->m_dataLen = v4;
  return v4 != 0;
}
