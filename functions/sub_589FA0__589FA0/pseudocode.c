BSStringT *__thiscall sub_589FA0(BSStringT *this, char *arg0, float a3, char *a2, int a5, int a6)
{
  BSStringT *v7; // ecx

  v7 = this + 1;
  v7->m_data = 0;
  v7->m_dataLen = 0;
  v7->m_bufLen = 0;
  *(float *)&this->m_dataLen = a3;
  this->m_data = arg0;
  BSStringT_Set(v7, a2, 0);
  *((_DWORD *)this + 4) = a5;
  *((_DWORD *)this + 5) = a6;
  return this;
}
