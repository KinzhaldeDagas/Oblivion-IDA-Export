// Verified callback behavior: when its TESObjectREFR argument is non-null, disables that reference's linked PathGrid points across the active interior or loaded exterior grids, then returns success. Candidate command-name association: Oblivion contains a `DisableLinkedPathPoints` string at A4E3BC, which matches this behavior; no direct string/table xref was recovered, so the registration link is not Verified.
char __cdecl TESPathGrid_DisableLinkedPointsCallback(int arg1, int arg2, TESObjectREFR *reference)
{
  if ( reference ) /*0x5062d6*/
    TESPathGrid_SetLinkedPointsEnabledForCurrentCells(reference, 0); /*0x5062db*/
  return 1; /*0x5062e5*/
}
