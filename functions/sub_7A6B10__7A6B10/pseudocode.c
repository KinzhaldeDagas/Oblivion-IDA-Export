// Oblivion stRegion point-union operator (source spelling operator^). Copies the 0x30-byte region, then clamps min.xyz downward and max.xyz upward to include one stVec3 point; unused stVec slots and size fields are preserved.
OB_stRegion_010201A0 *__thiscall OB_stRegion_IncludePointCopy_010201A0(
        const OB_stRegion_010201A0 *this,
        OB_stRegion_010201A0 *outRegion,
        const OB_stVec3_010201A0 *point)
{
  OB_stRegion_010201A0 *result; // eax

  qmemcpy(outRegion, this, sizeof(OB_stRegion_010201A0)); /*0x7a6b20*/
  if ( outRegion->min.data[0] > (double)point->x ) /*0x7a6b3b*/
    outRegion->min.data[0] = point->x; /*0x7a6b3f*/
  if ( outRegion->min.data[1] > (double)point->y ) /*0x7a6b4e*/
    outRegion->min.data[1] = point->y; /*0x7a6b53*/
  if ( outRegion->min.data[2] > (double)point->z ) /*0x7a6b63*/
    outRegion->min.data[2] = point->z; /*0x7a6b68*/
  if ( outRegion->max.data[0] < (double)point->x ) /*0x7a6b77*/
    outRegion->max.data[0] = point->x; /*0x7a6b7b*/
  if ( outRegion->max.data[1] < (double)point->y ) /*0x7a6b8b*/
    outRegion->max.data[1] = point->y; /*0x7a6b90*/
  result = outRegion; /*0x7a6ba0*/
  if ( outRegion->max.data[2] < (double)point->z ) /*0x7a6ba2*/
    outRegion->max.data[2] = point->z; /*0x7a6ba7*/
  return result; /*0x7a6baa*/
}
