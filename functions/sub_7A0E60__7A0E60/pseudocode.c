// Backward ownership move/assignment for overlapping ranges of 16-byte st_vector<SFrondGuide> elements. Swaps the three owned pointer fields while walking from the end.
OB_stVector_SFrondGuide_010201A0 *__cdecl OB_stVector_stVector_SFrondGuide_MoveAssignRangeBackward_010201A0(
        OB_stVector_SFrondGuide_010201A0 *first,
        OB_stVector_SFrondGuide_010201A0 *last,
        OB_stVector_SFrondGuide_010201A0 *destinationEnd)
{
  OB_stVector_SFrondGuide_010201A0 *v3; // ecx
  OB_stVector_SFrondGuide_010201A0 *result; // eax
  OB_SFrondGuide_010201A0 *begin; // edi
  OB_SFrondGuide_010201A0 *v6; // edx
  OB_SFrondGuide_010201A0 *end; // edx
  OB_SFrondGuide_010201A0 *capacityEnd; // edx

  v3 = last; /*0x7a0e86*/
  for ( result = destinationEnd; v3 != first; v3->capacityEnd = capacityEnd ) /*0x7a0e90*/
  {
    begin = v3[0xFFFFFFFF].begin; /*0x7a0e92*/
    v6 = result[0xFFFFFFFF].begin; /*0x7a0e95*/
    v3 += 0xFFFFFFFF; /*0x7a0e98*/
    result += 0xFFFFFFFF; /*0x7a0e9b*/
    result->begin = begin; /*0x7a0ea0*/
    v3->begin = v6; /*0x7a0ea3*/
    end = result->end; /*0x7a0ea9*/
    result->end = v3->end; /*0x7a0eac*/
    v3->end = end; /*0x7a0eaf*/
    capacityEnd = result->capacityEnd; /*0x7a0eb5*/
    result->capacityEnd = v3->capacityEnd; /*0x7a0eb8*/
  }
  return result; /*0x7a0ec0*/
}
