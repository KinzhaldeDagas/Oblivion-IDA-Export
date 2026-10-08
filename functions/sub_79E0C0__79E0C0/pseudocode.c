// Checked/STL trampoline for forward SFrondGuide copy-assignment; delegates to 0x79BE80 and returns destination end.
OB_SFrondGuide_010201A0 *__cdecl OB_SFrondGuide_CopyAssignRangeForwardCheckedThunk_010201A0(
        const OB_SFrondGuide_010201A0 *first,
        const OB_SFrondGuide_010201A0 *last,
        OB_SFrondGuide_010201A0 *destinationFirst)
{
  return OB_SFrondGuide_CopyAssignRangeForwardThunk_010201A0(first, last, destinationFirst); /*0x79e0ea*/
}
