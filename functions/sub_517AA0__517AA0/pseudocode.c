double *__thiscall sub_517AA0(double *this, int a2)
{
  BSStringT *v3; // ecx

  v3 = (BSStringT *)(this + 3); /*0x517ace*/
  *(this + 1) = 0.0; /*0x517ad1*/
  *(_DWORD *)this = 0; /*0x517ad4*/
  *((_BYTE *)this + 0x10) = 0; /*0x517ad6*/
  v3->m_data = 0; /*0x517ad9*/
  v3->m_dataLen = 0; /*0x517adb*/
  v3->m_bufLen = 0; /*0x517adf*/
  *(_DWORD *)this = *(_DWORD *)a2; /*0x517ae9*/
  *(this + 1) = *(double *)(a2 + 8); /*0x517aee*/
  *((_BYTE *)this + 0x10) = *(_BYTE *)(a2 + 0x10); /*0x517af4*/
  BSStringT_Set(v3, *(const char **)(a2 + 0x18), 0); /*0x517b00*/
  return this; /*0x517b07*/
}
