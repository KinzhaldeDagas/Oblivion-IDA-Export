void *__thiscall sub_521730(_DWORD *this, void *a2)
{
  void *result; // eax
  char *FormModelPAth; // eax
  char *m_data; // esi
  void *v6; // edi
  BSStringT v7; // [esp+14h] [ebp-14h] BYREF
  int v8; // [esp+24h] [ebp-4h]

  result = 0; /*0x52175f*/
  if ( a2 ) /*0x521763*/
  {
    v7.m_data = 0; /*0x521765*/
    v7.m_dataLen = 0; /*0x521769*/
    v7.m_bufLen = 0; /*0x52176e*/
    v8 = 0; /*0x521779*/
    FormModelPAth = GetFormModelPAth(a2); /*0x52177d*/
    TESIdleForm_BuildIdleAnimsRoot(FormModelPAth, &v7); /*0x521786*/
    m_data = v7.m_data; /*0x52178b*/
    v6 = 0; /*0x521792*/
    if ( v7.m_data ) /*0x521796*/
    {
      if ( *v7.m_data ) /*0x521798*/
      {
        a2 = 0; /*0x5217a4*/
        if ( NiTMap_GetAt(this, (int)v7.m_data, &a2) ) /*0x5217a8*/
        {
          if ( a2 ) /*0x5217b7*/
            v6 = a2; /*0x5217b9*/
        }
      }
    }
    FormHeapFree((unsigned int)m_data); /*0x5217bc*/
    return v6; /*0x5217c4*/
  }
  return result; /*0x5217c6*/
}
