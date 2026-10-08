char *__thiscall sub_424510(char *this, char *a2)
{
  BSStringT *v3; // ecx

  *(this + 4) = 0xA; /*0x42453a*/
  *((_DWORD *)this + 2) = 0; /*0x42453e*/
  v3 = (BSStringT *)(this + 0xC); /*0x424541*/
  *(_DWORD *)this = &ExtraEditorID::`vftable'; /*0x424544*/
  v3->m_data = 0; /*0x42454e*/
  v3->m_dataLen = 0; /*0x424550*/
  v3->m_bufLen = 0; /*0x424554*/
  BSStringT_Set(v3, a2, 0); /*0x424563*/
  return this; /*0x42456a*/
}
