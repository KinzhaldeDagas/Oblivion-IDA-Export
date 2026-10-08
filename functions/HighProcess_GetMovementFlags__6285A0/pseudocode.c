// TES4 authoritative: HighProcess movement flags getter. Returns word at process+0x1FC; Player_OnInput reads this through process vtable +0x2C0 before assembling v232.
UInt16 __thiscall HighProcess_GetMovementFlags(HighProcess *this)
{
  return this->movementFlags; /*0x6285a7*/
}
