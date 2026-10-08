// Computes result = start + (end - start) * percent for all three components. CBranch::MakeLeaf passes parent direction, geometric normal, and the leaf texture color-variance scalar. RT4.1 Branch.cpp/IdvVector.h corroborate the VecInterpolate role.
OB_stVec3_010201A0 *__cdecl OB_stVec3_Interpolate_010201A0(
        OB_stVec3_010201A0 *result,
        const OB_stVec3_010201A0 *start,
        const OB_stVec3_010201A0 *end,
        float percent)
{
  float v5; // [esp+0h] [ebp-18h]
  float v6; // [esp+4h] [ebp-14h]
  float v7; // [esp+8h] [ebp-10h]
  float v8; // [esp+Ch] [ebp-Ch]
  float v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+14h] [ebp-4h]

  v5 = end->x - start->x; /*0x78f25f*/
  v6 = end->y - start->y; /*0x78f268*/
  v7 = end->z - start->z; /*0x78f276*/
  v8 = v5 * percent; /*0x78f287*/
  v9 = v6 * percent; /*0x78f291*/
  v10 = percent * v7; /*0x78f299*/
  result->x = start->x + v8; /*0x78f2a3*/
  result->y = v9 + start->y; /*0x78f2ac*/
  result->z = start->z + v10; /*0x78f2b6*/
  return result; /*0x78f2b9*/
}
