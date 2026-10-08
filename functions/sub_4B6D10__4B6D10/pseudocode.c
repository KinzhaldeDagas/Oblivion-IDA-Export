// Verified: tests bit 0x08 at TESObjectDOOR +0x64. CalcLowPathToPoint prints the suffix '-MinUse' when this helper succeeds; travel search adds a penalty for either endpoint door carrying the bit unless ignore-min-use is enabled.
bool __thiscall TESObjectDOOR_HasMinUseFlag(TESObjectDOOR *this)
{
  return (this->super.doorFlags & 8) != 0; /*0x4b6d18*/
}
