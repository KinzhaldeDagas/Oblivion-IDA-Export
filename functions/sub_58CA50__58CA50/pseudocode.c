void __thiscall sub_58CA50(unsigned int *this, char *a2)
{
  char v3; // bl
  char *m_data; // edi
  unsigned int m_dataLen; // eax
  const char *v6; // eax
  int v7; // eax
  BSStringT v8; // [esp+14h] [ebp-14h] BYREF
  int v9; // [esp+24h] [ebp-4h]

  v3 = *((_BYTE *)this + 0x1A);
  *((_BYTE *)this + 0x1A) = 0;
  v8.m_data = 0;
  v8.m_dataLen = 0;
  v8.m_bufLen = 0;
  BSStringT_Set(&v8, a2, 0);
  m_data = v8.m_data;
  v9 = 0;
  if ( !v8.m_data
    || (v8.m_dataLen != (__int16)0xFFFF ? (m_dataLen = (unsigned __int16)v8.m_dataLen) : (m_dataLen = strlen(v8.m_data)),
        !m_dataLen) )
  {
    BSStringT_Set(&v8, word_A36430, 0);
    m_data = v8.m_data;
  }
  if ( v3
    || (!m_data || (v6 = (const char *)*(this + 2)) == 0 ? (v7 = 2 * (m_data == 0) - 1) : (v7 = strcmp(v6, m_data)), v7) )
  {
    BSStringT_Set((BSStringT *)this + 1, m_data, 0);
    *((float *)this + 1) = 0.0;
    sub_588930(this);
    DoActionEnumeration((float *)this, 1);
  }
  FormHeapFree((unsigned int)m_data);
}
