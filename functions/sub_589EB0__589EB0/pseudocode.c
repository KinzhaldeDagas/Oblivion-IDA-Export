BSStringT *__thiscall sub_589EB0(BSStringT *this, char *arg0, char *a2)
{
  BSStringT *v4; // ecx

  v4 = this + 1;
  v4->m_data = 0;
  v4->m_dataLen = 0;
  v4->m_bufLen = 0;
  this->m_data = arg0;
  BSStringT_Set(v4, a2, 0);
  return this;
}
