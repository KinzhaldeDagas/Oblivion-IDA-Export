// OBLIVION AUTHORITY (2026-08-30): Adapter for backward ownership-moving of inner vector<float> elements.
OB_stVectorFloat_010201A0 *__cdecl OB_stVector_stVectorFloat_MoveAssignRangeBackwardThunk_010201A0(
        OB_stVectorFloat_010201A0 *first,
        OB_stVectorFloat_010201A0 *last,
        OB_stVectorFloat_010201A0 *destinationEnd)
{
  OB_stVector_stVectorFloat_MoveAssignRangeBackward_010201A0(first, last, destinationEnd); /*0x79e777*/
  return &destinationEnd[-(last - first)]; /*0x79e78f*/
}
