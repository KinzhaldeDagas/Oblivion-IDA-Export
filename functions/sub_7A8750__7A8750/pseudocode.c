// OBLIVION AUTHORITY (2026-08-30): Copies 8-byte SLodEntry values backward for in-place vector insertion.
OB_CLeafLodEngine_SLodEntry_010201A0 *__cdecl OB_LeafLodEntry_CopyBackwardRange_010201A0(
        OB_CLeafLodEngine_SLodEntry_010201A0 *first,
        OB_CLeafLodEngine_SLodEntry_010201A0 *last,
        OB_CLeafLodEngine_SLodEntry_010201A0 *destinationEnd)
{
  OB_CLeafLodEngine_SLodEntry_010201A0 *v3; // ecx
  OB_CLeafLodEngine_SLodEntry_010201A0 *result; // eax
  int v5; // edx
  const OB_CBillboardLeaf_010201A0 *m_pLeaf; // edi

  v3 = last; /*0x7a8750*/
  result = &destinationEnd[-(last - first)]; /*0x7a876f*/
  if ( first != last ) /*0x7a8773*/
  {
    v5 = (char *)destinationEnd - (char *)last; /*0x7a8775*/
    do /*0x7a8789*/
    {
      m_pLeaf = v3[0xFFFFFFFF].m_pLeaf; /*0x7a8777*/
      v3 += 0xFFFFFFFF; /*0x7a877a*/
      *(const OB_CBillboardLeaf_010201A0 **)((char *)&v3->m_pLeaf + v5) = m_pLeaf; /*0x7a877f*/
      *(const OB_CBillboardLeaf_010201A0 **)((char *)&v3->m_pLeafMatch + v5) = v3->m_pLeafMatch; /*0x7a8785*/
    }
    while ( v3 != first ); /*0x7a8789*/
  }
  return result; /*0x7a878b*/
}
