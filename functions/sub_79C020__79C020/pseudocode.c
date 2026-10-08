// Thin backward-copy wrapper for overlap-safe SFrondGuide range assignment; returns destination start.
OB_SFrondGuide_010201A0 *__cdecl OB_SFrondGuide_CopyAssignRangeBackwardThunk_010201A0(
        const OB_SFrondGuide_010201A0 *first,
        const OB_SFrondGuide_010201A0 *last,
        OB_SFrondGuide_010201A0 *destinationLast)
{
  OB_SFrondGuide_CopyAssignRangeBackward_010201A0(first, last, destinationLast); /*0x79c04e*/
  return &destinationLast[-(last - first)]; /*0x79c073*/
}
