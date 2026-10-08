// Oblivion legacy CIndexedGeometry::DeleteLodStrip. Frees and nulls every heap strip pointer for one LOD while retaining the outer per-LOD vector.
void __thiscall OB_CIndexedGeometry_DeleteLodStrip_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        unsigned __int16 lodLevel)
{
  unsigned int i; // ebp
  void *begin; // ecx
  char *v5; // esi
  int v6; // eax
  unsigned __int16 v7; // ax
  void *v8; // ecx
  char *v9; // edi
  int v10; // ecx
  void *v11; // ecx
  char *v12; // esi
  int v13; // ecx

  for ( i = 0; ; ++i ) /*0x794636*/
  {
    if ( (__int16)lodLevel <= (__int16)0xFFFFFFFF ) /*0x794649*/
      goto LABEL_8; /*0x794649*/
    begin = this->perLodStrips.begin; /*0x79464b*/
    if ( !begin || (__int16)lodLevel >= (unsigned int)(((char *)this->perLodStrips.end - (char *)begin) >> 4) ) /*0x79465f*/
      _invalid_parameter_noinfo((int)this, lodLevel, (__int16)lodLevel); /*0x794661*/
    v5 = (char *)this->perLodStrips.begin + 0x10 * (__int16)lodLevel; /*0x794669*/
    v6 = *((_DWORD *)v5 + 1); /*0x79466c*/
    if ( v6 ) /*0x794671*/
      v7 = (*((_DWORD *)v5 + 2) - v6) >> 2; /*0x79467b*/
    else
LABEL_8:
      v7 = 0; /*0x794680*/
    if ( (int)i >= v7 ) /*0x794687*/
      break; /*0x794687*/
    v8 = this->perLodStrips.begin; /*0x79468d*/
    if ( !v8 || lodLevel >= (unsigned int)(((char *)this->perLodStrips.end - (char *)v8) >> 4) ) /*0x7946a1*/
      _invalid_parameter_noinfo((int)this, lodLevel, lodLevel); /*0x7946a3*/
    v9 = (char *)this->perLodStrips.begin + 0x10 * lodLevel; /*0x7946ad*/
    v10 = *((_DWORD *)v9 + 1); /*0x7946b0*/
    if ( !v10 || i >= (*((_DWORD *)v9 + 2) - v10) >> 2 ) /*0x7946c1*/
      _invalid_parameter_noinfo((int)this, (unsigned __int16)v9, lodLevel); /*0x7946c3*/
    FormHeapFree(*(_DWORD *)(*((_DWORD *)v9 + 1) + 4 * i)); /*0x7946cf*/
    v11 = this->perLodStrips.begin; /*0x7946d4*/
    if ( !v11 || lodLevel >= (unsigned int)(((char *)this->perLodStrips.end - (char *)v11) >> 4) ) /*0x7946e8*/
      _invalid_parameter_noinfo((int)this, (unsigned __int16)v9, lodLevel); /*0x7946ea*/
    v12 = (char *)this->perLodStrips.begin + 0x10 * lodLevel; /*0x7946f2*/
    v13 = *((_DWORD *)v12 + 1); /*0x7946f5*/
    if ( !v13 || i >= (*((_DWORD *)v12 + 2) - v13) >> 2 ) /*0x794706*/
      _invalid_parameter_noinfo((int)this, (unsigned __int16)v9, (int)v12); /*0x794708*/
    *(_DWORD *)(*((_DWORD *)v12 + 1) + 4 * i) = 0; /*0x794710*/
  }
}
