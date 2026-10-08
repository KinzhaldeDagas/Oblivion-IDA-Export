// Verified callback behavior: when its TESObjectREFR argument is non-null, enables that reference's linked PathGrid points across the active interior or loaded exterior grids, then returns success. Candidate command-name association: Oblivion contains an `EnableLinkedPathPoints` string at A4E3D4, which matches this behavior; no direct string/table xref was recovered, so the registration link is not Verified.
char __cdecl TESPathGrid_EnableLinkedPointsCallback(int arg1, int arg2, TESObjectREFR *reference)
{
  if ( reference ) /*0x5062b6*/
    TESPathGrid_SetLinkedPointsEnabledForCurrentCells(reference, 1); /*0x5062bb*/
  return 1; /*0x5062c5*/
}
