// TES4 authoritative: Calc_WalkSpeed. Uses Speed actor value, carried weight/encumbrance, weapon-out branch, creature/character walk min/max game settings, and sneak multiplier; selected by sub_5E65B0 when run/swim/fly-speed flags are absent.
double __cdecl Calc_WalkSpeed(float a1, float a2, char a3, char a4, float a5)
{
  if ( !LOBYTE(a5) ) /*0x547c05*/
    JUMPOUT(0x547C91); /*0x547c91*/
  return Calc_WalkSpeed_::CapMaxWeight(a1, a2, a3, a4);
}
