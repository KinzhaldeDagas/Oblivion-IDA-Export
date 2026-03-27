BSStringT *__thiscall BSStringT_constr_BSStringT(BSStringT *this, const char **a2)
{
  this->m_data = 0;
  this->m_dataLen = 0;
  this->m_bufLen = 0;
  BSStringT_Set(this, *a2, 0);
  return this;
}
