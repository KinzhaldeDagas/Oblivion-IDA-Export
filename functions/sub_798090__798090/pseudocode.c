// OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry::SetNumLodLevels clears the nested unsigned-short length and unsigned-short-pointer containers plus 32-bit triangle totals, records the unsigned-short LOD count, resizes both outer vectors with empty inner values, and zeroes totals.
void __thiscall OB_CIndexedGeometry_SetNumLodLevels_010201A0(
        OB_CIndexedGeometry_010201A0 *this,
        unsigned __int16 lodCount)
{
  int v2; // ebx
  OB_stVectorUShort_010201A0 *stripLengthsEnd; // esi
  OB_stVector_stVectorUShort_010201A0 *p_perLodStripLengths; // ebp
  OB_stVectorUShort_010201A0 *stripLengthsBegin; // ebx
  OB_stVectorUShortPtr_010201A0 *stripsEnd; // esi
  OB_stVector_stVectorUShortPtr_010201A0 *p_perLodStrips; // ebx
  OB_stVectorUShortPtr_010201A0 *stripsBegin; // eax
  bool v10; // cc
  OB_stVectorUInt32_010201A0 *p_perLodTriangleCounts; // esi
  unsigned int *triangleCountsBegin; // eax
  int lodIndex; // ebx
  unsigned int *triangleCountsData; // ecx
  OB_stVector_stVectorUShortPtrIterator_010201A0 v15; // [esp-10h] [ebp-2Ch]
  OB_stVector4Iterator_010201A0 v16; // [esp-10h] [ebp-2Ch]
  unsigned int v17; // [esp-10h] [ebp-2Ch]
  unsigned int v18; // [esp-10h] [ebp-2Ch]
  OB_stVector_stVectorUShortPtrIterator_010201A0 v19; // [esp-8h] [ebp-24h]
  OB_stVector4Iterator_010201A0 v20; // [esp-8h] [ebp-24h]
  OB_stVectorUShortPtr_010201A0 *v21; // [esp+10h] [ebp-Ch]
  unsigned int *v22; // [esp+10h] [ebp-Ch]
  OB_stVector4Iterator_010201A0 Src; // [esp+14h] [ebp-8h] BYREF

  stripLengthsEnd = this->perLodStripLengths.end; /*0x798099*/
  p_perLodStripLengths = &this->perLodStripLengths; /*0x79809f*/
  if ( this->perLodStripLengths.begin > stripLengthsEnd ) /*0x7980a2*/
    _invalid_parameter_noinfo(v2, (int)this, (int)stripLengthsEnd); /*0x7980a4*/
  stripLengthsBegin = p_perLodStripLengths->begin; /*0x7980a9*/
  if ( stripLengthsBegin > p_perLodStripLengths->end ) /*0x7980af*/
    _invalid_parameter_noinfo((int)stripLengthsBegin, (int)this, (int)stripLengthsEnd); /*0x7980b1*/
  OB_stVector_stVectorUShort_EraseRange_010201A0( /*0x7980c1*/
    p_perLodStripLengths,
    (OB_stVector_stVectorUShortIterator_010201A0 *)&Src,
    (OB_stVector_stVectorUShortIterator_010201A0)__PAIR64__(
                                                   (unsigned int)stripLengthsBegin,
                                                   (unsigned int)p_perLodStripLengths),
    (OB_stVector_stVectorUShortIterator_010201A0)__PAIR64__(
                                                   (unsigned int)stripLengthsEnd,
                                                   (unsigned int)p_perLodStripLengths));
  stripsEnd = this->perLodStrips.end; /*0x7980c6*/
  p_perLodStrips = &this->perLodStrips; /*0x7980cc*/
  if ( this->perLodStrips.begin > stripsEnd ) /*0x7980cf*/
    _invalid_parameter_noinfo((int)p_perLodStrips, (int)this, (int)stripsEnd); /*0x7980d1*/
  stripsBegin = this->perLodStrips.begin; /*0x7980d6*/
  v21 = stripsBegin; /*0x7980dc*/
  if ( stripsBegin > this->perLodStrips.end ) /*0x7980e0*/
  {
    _invalid_parameter_noinfo((int)p_perLodStrips, (int)this, (int)stripsEnd); /*0x7980e2*/
    stripsBegin = v21; /*0x7980e7*/
  }
  v19.current = stripsEnd; /*0x7980eb*/
  v19.owner = &this->perLodStrips; /*0x7980ec*/
  v15.current = stripsBegin; /*0x7980ed*/
  v15.owner = &this->perLodStrips; /*0x7980ee*/
  OB_stVector_stVectorUShortPtr_EraseRange_010201A0( /*0x7980f6*/
    &this->perLodStrips,
    (OB_stVector_stVectorUShortPtrIterator_010201A0 *)&Src,
    v15,
    v19);
  v10 = this->perLodTriangleCounts.begin <= this->perLodTriangleCounts.end; /*0x7980fe*/
  p_perLodTriangleCounts = &this->perLodTriangleCounts; /*0x798101*/
  Src.owner = (OB_stVector4_010201A0 *)this->perLodTriangleCounts.end; /*0x798104*/
  if ( !v10 ) /*0x798108*/
    _invalid_parameter_noinfo((int)p_perLodStrips, (int)this, (int)p_perLodTriangleCounts); /*0x79810a*/
  triangleCountsBegin = this->perLodTriangleCounts.begin; /*0x79810f*/
  v22 = triangleCountsBegin; /*0x798115*/
  if ( triangleCountsBegin > this->perLodTriangleCounts.end ) /*0x798119*/
  {
    _invalid_parameter_noinfo((int)p_perLodStrips, (int)this, (int)p_perLodTriangleCounts); /*0x79811b*/
    triangleCountsBegin = v22; /*0x798120*/
  }
  v20.current = &Src.owner->allocatorState; /*0x798128*/
  v20.owner = (OB_stVector4_010201A0 *)&this->perLodTriangleCounts; /*0x798129*/
  v16.current = triangleCountsBegin; /*0x79812a*/
  v16.owner = (OB_stVector4_010201A0 *)&this->perLodTriangleCounts; /*0x79812b*/
  OB_stVector4_EraseRange_010201A0((OB_stVector4_010201A0 *)&this->perLodTriangleCounts, &Src, v16, v20); /*0x798133*/
  this->numDiscreteLodLevels = lodCount; /*0x79813d*/
  OB_stVector_stVectorUShort_ResizeFill_010201A0(p_perLodStripLengths, lodCount, (OB_stVectorUShort_010201A0)v17); /*0x79815b*/
  OB_stVector_stVectorUShortPtr_ResizeFill_010201A0(p_perLodStrips, lodCount, (OB_stVectorUShortPtr_010201A0)v18); /*0x798177*/
  OB_stVectorUInt32_ResizeFill_010201A0(p_perLodTriangleCounts, lodCount, 0); /*0x798180*/
  lodIndex = 0; /*0x798185*/
  if ( lodCount ) /*0x798189*/
  {
    do /*0x7981b3*/
    {
      triangleCountsData = this->perLodTriangleCounts.begin; /*0x798190*/
      if ( !triangleCountsData || lodIndex >= (unsigned int)(this->perLodTriangleCounts.end - triangleCountsData) ) /*0x7981a1*/
        _invalid_parameter_noinfo(lodIndex, lodCount, (int)p_perLodTriangleCounts); /*0x7981a3*/
      this->perLodTriangleCounts.begin[lodIndex++] = 0; /*0x7981ab*/
    }
    while ( lodIndex < lodCount ); /*0x7981b3*/
  }
}
