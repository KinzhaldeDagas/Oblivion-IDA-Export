// OBLIVION AUTHORITY (2026-08-30): Adapter for the 0x0C-byte CBranchChildRef backward-copy routine used by checked vector insertion.
OB_CBranchChildRef_010201A0 *__cdecl OB_CBranchChildRef_CopyBackwardThunk_010201A0(
        const OB_CBranchChildRef_010201A0 *first,
        const OB_CBranchChildRef_010201A0 *last,
        OB_CBranchChildRef_010201A0 *destinationLast)
{
  return OB_CBranchChildRef_CopyBackward_010201A0(first, last, destinationLast); /*0x79aaca*/
}
