char *__thiscall sub_5216A0(_DWORD *this, void *a2)
{
  char *result; // eax
  char *FormModelPAth; // eax
  char *m_data; // esi
  char *v6; // edi
  BSStringT v7; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+1Ch] [ebp-4h]

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
    v6 = sub_5215C0(this, v7.m_data);
    FormHeapFree((unsigned int)m_data);
    return v6;
  }
  return result;
}
