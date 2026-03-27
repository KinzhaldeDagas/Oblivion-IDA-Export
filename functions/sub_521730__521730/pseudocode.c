void *__thiscall sub_521730(_DWORD *this, void *a2)
{
  void *result; // eax
  char *FormModelPAth; // eax
  char *m_data; // esi
  void *v6; // edi
  BSStringT v7; // [esp+14h] [ebp-14h] BYREF
  int v8; // [esp+24h] [ebp-4h]

  result = 0;
  if ( a2 )
  {
    v7.m_data = 0;
    v7.m_dataLen = 0;
    v7.m_bufLen = 0;
    v8 = 0;
    FormModelPAth = GetFormModelPAth(a2);
    sub_521370(FormModelPAth, &v7);
    m_data = v7.m_data;
    v6 = 0;
    if ( v7.m_data )
    {
      if ( *v7.m_data )
      {
        a2 = 0;
        if ( NiTMap_GetAt(this, (int)v7.m_data, &a2) )
        {
          if ( a2 )
            v6 = a2;
        }
      }
    }
    FormHeapFree((unsigned int)m_data);
    return v6;
  }
  return result;
}
