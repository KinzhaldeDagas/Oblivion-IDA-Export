// Verified spatial-index key encoder used by both insertion and lookup. Converts world X/Y to signed integers, arithmetic-shifts each by 9 (512 world units), accepts bucket coordinates only in [-0x7FFF, 0x7FFE], and packs X into the high halfword and Y into the low halfword. Z is ignored. Out-of-range input returns 0, which also encodes bucket (0,0); handling/significance of that collision is Unknown. This is not the 4096-unit exterior cell-coordinate key. Fallout NavMeshInfoMap uses a separate global registry keyed by NavMeshInfo IDs and nested worldspace/cell keys (e.g. Fallout constructor 0x824A7D30), so that system is architectural context only and does not establish this Oblivion behavior.
unsigned int __cdecl TESPathGrid_PackSpatialBucketKey(const NiPoint3 *position)
{
  int v2; // edx
  unsigned int result; // eax
  int positiona; // [esp+10h] [ebp+4h]

  positiona = (int)position->x; /*0x4e5332*/
  v2 = (int)position->y >> 9; /*0x4e5356*/
  result = 0; /*0x4e5359*/
  if ( (unsigned int)((positiona >> 9) + 0x7FFF) <= 0xFFFD && (unsigned int)(v2 + 0x7FFF) <= 0xFFFD ) /*0x4e536f*/
    return (unsigned __int16)v2 | (positiona >> 9 << 0x10); /*0x4e5379*/
  return result; /*0x4e537b*/
}
