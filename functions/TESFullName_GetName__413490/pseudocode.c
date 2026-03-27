BSStringT *__thiscall TESFullName_GetName(TESFullName *this, BSStringT *a2)
{
  a2->m_data = 0;
  a2->m_dataLen = 0;
  a2->m_bufLen = 0;
  BSStringT_Set(a2, this->name.m_data, 0);
  return a2;
}
