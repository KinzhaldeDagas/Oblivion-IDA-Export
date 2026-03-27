BSStringT *__thiscall sub_4A4BC0(const char **this, BSStringT *a2)
{
  a2->m_data = 0;
  a2->m_dataLen = 0;
  a2->m_bufLen = 0;
  BSStringT_Set(a2, *(this + 2), 0);
  return a2;
}
