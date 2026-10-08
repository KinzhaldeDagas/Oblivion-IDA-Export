// Thin checked/STL wrapper around forward SFrondGuide range copy-assignment; returns destination end.
OB_SFrondGuide_010201A0 *__cdecl OB_SFrondGuide_CopyAssignRangeForwardThunk_010201A0(
        const OB_SFrondGuide_010201A0 *first,
        const OB_SFrondGuide_010201A0 *last,
        OB_SFrondGuide_010201A0 *destinationFirst)
{
  OB_SFrondGuide_CopyAssignRangeForward_010201A0(first, last, destinationFirst); /*0x79beae*/
  return &destinationFirst[last - first]; /*0x79bed1*/
}
