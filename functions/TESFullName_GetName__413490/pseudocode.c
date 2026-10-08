BSStringT *__thiscall TESFullName_GetName(TESFullName *this, BSStringT *a2)
{
  a2->m_data = 0; /*0x41349d*/
  a2->m_dataLen = 0; /*0x41349f*/
  a2->m_bufLen = 0; /*0x4134a3*/
  BSStringT_Set(a2, this->name.m_data, 0); /*0x4134ad*/
  return a2; /*0x4134b4*/
}
