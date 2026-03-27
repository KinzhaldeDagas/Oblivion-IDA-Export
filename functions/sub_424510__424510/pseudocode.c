char *__thiscall sub_424510(char *this, char *a2)
{
  BSStringT *v3; // ecx

  *(this + 4) = 0xA;
  *((_DWORD *)this + 2) = 0;
  v3 = (BSStringT *)(this + 0xC);
  *(_DWORD *)this = &ExtraEditorID::`vftable';
  v3->m_data = 0;
  v3->m_dataLen = 0;
  v3->m_bufLen = 0;
  BSStringT_Set(v3, a2, 0);
  return this;
}
