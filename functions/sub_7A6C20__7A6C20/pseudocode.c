// Oblivion binary evidence: copy-returning union of two exact 0x30 stRegion values. Copies the left region including stVec sizes, then takes per-axis minima and maxima for axes 0..2. Sole caller is CLeafGeometry::ComputeExtents. RT 4.1 Region.cpp:16-29 corroborates operator+ after observation.
OB_stRegion_010201A0 *__thiscall OB_stRegion_UnionCopy_010201A0(
        const OB_stRegion_010201A0 *this,
        OB_stRegion_010201A0 *result,
        const OB_stRegion_010201A0 *right)
{
  OB_stRegion_010201A0 *unionResult; // eax

  qmemcpy(result, this, sizeof(OB_stRegion_010201A0)); /*0x7a6c33*/
  if ( this->min.data[0] > (double)right->min.data[0] ) /*0x7a6c4c*/
    result->min.data[0] = right->min.data[0]; /*0x7a6c50*/
  if ( this->max.data[0] < (double)right->max.data[0] ) /*0x7a6c5f*/
    result->max.data[0] = right->max.data[0]; /*0x7a6c64*/
  if ( this->min.data[1] > (double)right->min.data[1] ) /*0x7a6c74*/
    result->min.data[1] = right->min.data[1]; /*0x7a6c79*/
  if ( this->max.data[1] < (double)right->max.data[1] ) /*0x7a6c89*/
    result->max.data[1] = right->max.data[1]; /*0x7a6c8e*/
  if ( this->min.data[2] > (double)right->min.data[2] ) /*0x7a6c9e*/
    result->min.data[2] = right->min.data[2]; /*0x7a6ca3*/
  unionResult = result; /*0x7a6cb3*/
  if ( this->max.data[2] < (double)right->max.data[2] ) /*0x7a6cb5*/
    result->max.data[2] = right->max.data[2]; /*0x7a6cba*/
  return unionResult; /*0x7a6cbd*/
}
