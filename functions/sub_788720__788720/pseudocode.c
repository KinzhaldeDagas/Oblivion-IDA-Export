// Oblivion CIndexedGeometry::GetStripLengths: validates LOD range and inner vector state, then returns the selected ushort strip-length buffer or null.
//
// [2026-10-02 packet bounds pass] Verified separate per-LOD length vector, two-byte elements. Selected pointer-vector count from 0x7886C0 alone does not prove this allocation has that many lengths. Bridge reconstruction now checks parallel cardinality and valid begin/end/capacity triplets.
const unsigned __int16 *__thiscall OB_CIndexedGeometry_GetStripLengths_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        __int16 lodLevel)
{
  int v2; // ebx
  OB_stVector_stVectorUShort_010201A0 *p_perLodStripLengths; // esi
  OB_stVectorUShort_010201A0 *begin; // ecx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // eax

  if ( lodLevel < 0 ) /*0x78872a*/
    return 0; /*0x78872a*/
  if ( lodLevel >= (int)this->numDiscreteLodLevels ) /*0x788735*/
    return 0; /*0x788735*/
  p_perLodStripLengths = &this->perLodStripLengths; /*0x788737*/
  begin = this->perLodStripLengths.begin; /*0x78873a*/
  if ( !begin || lodLevel >= (unsigned int)(p_perLodStripLengths->end - begin) ) /*0x78874b*/
    _invalid_parameter_noinfo(v2, lodLevel, (int)p_perLodStripLengths); /*0x78874d*/
  v5 = (int)&p_perLodStripLengths->begin[lodLevel]; /*0x788757*/
  v6 = *(_DWORD *)(v5 + 4); /*0x78875a*/
  if ( !v6 || !((*(_DWORD *)(v5 + 8) - v6) >> 1) ) /*0x788766*/
    return 0; /*0x788792*/
  v7 = sub_6F10E0(p_perLodStripLengths, lodLevel); /*0x788772*/
  v8 = *(_DWORD *)(v7 + 4); /*0x788774*/
  if ( !v8 || !((*(_DWORD *)(v7 + 8) - v8) >> 1) ) /*0x788780*/
    _invalid_parameter_noinfo(v2, lodLevel, v7); /*0x788784*/
  return *(const unsigned __int16 **)(v7 + 4); /*0x78878c*/
}
