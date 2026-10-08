char *__thiscall sub_5216A0(_DWORD *this, void *a2)
{
  char *result; // eax
  char *FormModelPAth; // eax
  char *m_data; // esi
  char *v6; // edi
  BSStringT v7; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+1Ch] [ebp-4h]

  result = 0; /*0x5216cb*/
  if ( a2 ) /*0x5216cf*/
  {
    v7.m_data = 0; /*0x5216d1*/
    v7.m_dataLen = 0; /*0x5216d5*/
    v7.m_bufLen = 0; /*0x5216da*/
    v8 = 0; /*0x5216df*/
    FormModelPAth = GetFormModelPAth(a2); /*0x5216e9*/
    TESIdleForm_BuildIdleAnimsRoot(FormModelPAth, &v7); /*0x5216f2*/
    m_data = v7.m_data; /*0x5216f7*/
    v6 = sub_5215C0(this, v7.m_data); /*0x521707*/
    FormHeapFree((unsigned int)m_data); /*0x521709*/
    return v6; /*0x521711*/
  }
  return result; /*0x521713*/
}
