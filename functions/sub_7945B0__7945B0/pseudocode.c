// Oblivion CIndexedGeometry::GetStripsPointer. Returns the selected LOD's inner array of ushort strip pointers, or null when no strips are present.
const unsigned __int16 **__thiscall OB_CIndexedGeometry_GetStripsPointer_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        unsigned __int16 lodLevel)
{
  int v2; // ebx
  void *begin; // ecx
  char *v5; // eax
  int v6; // ecx
  void *v7; // ecx
  char *v8; // esi
  int v9; // eax

  begin = this->perLodStrips.begin; /*0x7945b9*/
  if ( !begin || lodLevel >= (unsigned int)(((char *)this->perLodStrips.end - (char *)begin) >> 4) ) /*0x7945ca*/
    _invalid_parameter_noinfo(v2, (int)this, lodLevel); /*0x7945cc*/
  v5 = (char *)this->perLodStrips.begin + 0x10 * lodLevel; /*0x7945d6*/
  v6 = *((_DWORD *)v5 + 1); /*0x7945d9*/
  if ( !v6 || !((*((_DWORD *)v5 + 2) - v6) >> 2) ) /*0x7945e5*/
    return 0; /*0x794627*/
  v7 = this->perLodStrips.begin; /*0x7945ea*/
  if ( !v7 || lodLevel >= (unsigned int)(((char *)this->perLodStrips.end - (char *)v7) >> 4) ) /*0x7945fb*/
    _invalid_parameter_noinfo(v2, (int)this, lodLevel); /*0x7945fd*/
  v8 = (char *)this->perLodStrips.begin + 0x10 * lodLevel; /*0x794605*/
  v9 = *((_DWORD *)v8 + 1); /*0x794608*/
  if ( !v9 || !((*((_DWORD *)v8 + 2) - v9) >> 2) ) /*0x794614*/
    _invalid_parameter_noinfo(v2, (int)this, (int)v8); /*0x794619*/
  return *((const unsigned __int16 ***)v8 + 1); /*0x794621*/
}
