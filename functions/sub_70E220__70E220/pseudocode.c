BSStringT *__thiscall sub_70E220(BSStringT *this, char *a2, int a3)
{
  this->m_data = a2;
  *(_DWORD *)&this->m_dataLen = a3;
  return this;
}
