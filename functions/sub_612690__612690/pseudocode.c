// Returns true only for native combat modes 2 and 4, the two ranged-weapon modes used by the distance and attack-option logic.
int __cdecl CombatMode_IsRangedWeaponMode(int mode)
{
  return mode == 2 || mode == 4; /*0x6126a0*/
}
