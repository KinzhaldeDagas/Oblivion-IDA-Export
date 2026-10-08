// Oblivion CIndexedGeometry::GetNumStrips: rejects negative LODs, checked-indexes perLodStrips, and returns the selected inner ushort-vector size. RT4.1 exposes the same accessor contract.
//
// [2026-10-02 packet bounds pass] Verified GetNumStrips returns selected inner STRIP-POINTER vector count (4-byte elements), not strip-length count. Fallout symbol GetNumStrips at 0x8281AB48 agrees. Oblivion bridge must separately compare ushort length-vector count before indexing both arrays. Earlier phrase inner ushort-vector size should be read as ushort-pointer-vector size.
// [2026-10-03 full frond export cache] Zero selected strip-pointer-vector length is a valid topology state, distinct from a missing/unreadable vector. Plugin empty certificate requires both selected ushort-length and pointer vectors to have zero counts, valid native spans, and zero selected perLodTriangleCounts entry. Empty state is cached by shared family/selector; runtime hides the child without substituting a different visible LOD. Enumeration covers all nonnegative signed-short selectors, not a fixed first-16 sample.
unsigned __int16 __thiscall OB_CIndexedGeometry_GetNumStrips_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        __int16 lodLevel)
{
  int v2; // ebx
  OB_stVectorUShortPtr_010201A0 *begin; // ecx
  OB_stVectorUShortPtr_010201A0 *v5; // esi
  unsigned __int16 **v6; // eax

  if ( lodLevel <= (__int16)0xFFFFFFFF ) /*0x7886cc*/
  {
    LOWORD(v6) = 0; /*0x78870c*/
  }
  else
  {
    begin = this->perLodStrips.begin; /*0x7886ce*/
    if ( !begin || lodLevel >= (unsigned int)(this->perLodStrips.end - begin) ) /*0x7886e3*/
      _invalid_parameter_noinfo(v2, (int)this, lodLevel); /*0x7886e5*/
    v5 = &this->perLodStrips.begin[lodLevel]; /*0x7886ed*/
    v6 = v5->begin; /*0x7886f0*/
    if ( v6 ) /*0x7886f5*/
      LOWORD(v6) = v5->end - v6; /*0x788705*/
  }
  return (unsigned __int16)v6; /*0x7886f8*/
}
