double *__thiscall sub_517AA0(double *this, int a2)
{
  BSStringT *v3; // ecx

  v3 = (BSStringT *)(this + 3);
  *(this + 1) = 0.0;
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 0x10) = 0;
  v3->m_data = 0;
  v3->m_dataLen = 0;
  v3->m_bufLen = 0;
  *(_DWORD *)this = *(_DWORD *)a2;
  *(this + 1) = *(double *)(a2 + 8);
  *((_BYTE *)this + 0x10) = *(_BYTE *)(a2 + 0x10);
  BSStringT_Set(v3, *(const char **)(a2 + 0x18), 0);
  return this;
}
