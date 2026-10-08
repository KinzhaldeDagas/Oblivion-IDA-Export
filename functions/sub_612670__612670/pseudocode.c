// Returns true for native combat modes 0, 1, or 3; returns false for ranged weapon modes 2 and 4 and for values above 3.
int __cdecl CombatMode_IsNonRangedMode(unsigned int mode)
{
  return mode < 2 || mode == 3; /*0x612684*/
}
