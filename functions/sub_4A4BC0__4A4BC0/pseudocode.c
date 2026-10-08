BSStringT *__thiscall sub_4A4BC0(const char **this, BSStringT *a2)
{
  a2->m_data = 0; /*0x4a4bcd*/
  a2->m_dataLen = 0; /*0x4a4bcf*/
  a2->m_bufLen = 0; /*0x4a4bd3*/
  BSStringT_Set(a2, *(this + 2), 0); /*0x4a4bdd*/
  return a2; /*0x4a4be4*/
}
