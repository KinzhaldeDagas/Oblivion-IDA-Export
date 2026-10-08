// Backward ownership-move thunk for 16-byte guide-LOD level vector elements; returns the resulting destination begin.
OB_stVector_SFrondGuide_010201A0 *__cdecl OB_stVector_stVector_SFrondGuide_MoveAssignRangeBackwardThunk_010201A0(
        OB_stVector_SFrondGuide_010201A0 *first,
        OB_stVector_SFrondGuide_010201A0 *last,
        OB_stVector_SFrondGuide_010201A0 *destinationEnd)
{
  OB_stVector_stVector_SFrondGuide_MoveAssignRangeBackward_010201A0(first, last, destinationEnd); /*0x7a1027*/
  return &destinationEnd[-(last - first)]; /*0x7a103f*/
}
