// OBLIVION AUTHORITY (2026-08-30): Uninitialized forward copy of 8-byte SLodEntry values used while growing m_vPairs.
OB_CLeafLodEngine_SLodEntry_010201A0 *__cdecl OB_LeafLodEntry_UninitializedCopyRange_010201A0(
        const OB_CLeafLodEngine_SLodEntry_010201A0 *first,
        const OB_CLeafLodEngine_SLodEntry_010201A0 *last,
        OB_CLeafLodEngine_SLodEntry_010201A0 *destination)
{
  const OB_CLeafLodEngine_SLodEntry_010201A0 *v3; // ecx
  OB_CLeafLodEngine_SLodEntry_010201A0 *result; // eax

  v3 = first; /*0x7a86c0*/
  for ( result = destination; v3 != last; ++result ) /*0x7a86ce*/
  {
    if ( result ) /*0x7a86d3*/
    {
      result->m_pLeaf = v3->m_pLeaf; /*0x7a86d7*/
      result->m_pLeafMatch = v3->m_pLeafMatch; /*0x7a86dc*/
    }
    ++v3; /*0x7a86df*/
  }
  return result; /*0x7a86ea*/
}
