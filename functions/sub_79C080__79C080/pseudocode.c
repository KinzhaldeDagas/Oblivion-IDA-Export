// OBLIVION AUTHORITY (2026-08-30): Backward move-assignment for inner vector<float> owners. Transfers ownership by swapping begin/end/capacity fields from the source tail into the destination tail and returns the new destination start.
OB_stVectorFloat_010201A0 *__cdecl OB_stVector_stVectorFloat_MoveAssignRangeBackward_010201A0(
        OB_stVectorFloat_010201A0 *first,
        OB_stVectorFloat_010201A0 *last,
        OB_stVectorFloat_010201A0 *destinationEnd)
{
  OB_stVectorFloat_010201A0 *v3; // ecx
  OB_stVectorFloat_010201A0 *result; // eax
  float *begin; // edi
  float *v6; // edx
  float *end; // edx
  float *capacity; // edx

  v3 = last; /*0x79c080*/
  for ( result = destinationEnd; v3 != first; v3->capacity = capacity ) /*0x79c08f*/
  {
    begin = v3[0xFFFFFFFF].begin; /*0x79c092*/
    v6 = result[0xFFFFFFFF].begin; /*0x79c095*/
    v3 += 0xFFFFFFFF; /*0x79c098*/
    result += 0xFFFFFFFF; /*0x79c09b*/
    result->begin = begin; /*0x79c0a0*/
    v3->begin = v6; /*0x79c0a3*/
    end = result->end; /*0x79c0a9*/
    result->end = v3->end; /*0x79c0ac*/
    v3->end = end; /*0x79c0af*/
    capacity = result->capacity; /*0x79c0b5*/
    result->capacity = v3->capacity; /*0x79c0b8*/
  }
  return result; /*0x79c0c1*/
}
