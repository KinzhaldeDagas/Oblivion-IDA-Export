BSStringT *__thiscall sub_589F20(BSStringT *this, char *arg0, char *a2, int a4)
{
  BSStringT *v5; // ecx

  v5 = this + 1;
  v5->m_data = 0;
  v5->m_dataLen = 0;
  v5->m_bufLen = 0;
  this->m_data = arg0;
  BSStringT_Set(v5, a2, 0);
  FormHeapFree((unsigned int)a2);
  return this;
}
