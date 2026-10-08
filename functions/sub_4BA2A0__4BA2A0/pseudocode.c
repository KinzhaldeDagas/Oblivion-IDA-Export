// Verified random/default seed: returns 0 when the seed array count at +0x52 is zero; otherwise returns seedValues[Game_RandomLargeInteger(0) % count]. TESObjectREFR_GetTreeSeed reaches this when no per-reference seed extra exists.
unsigned int __thiscall TESObjectTREE_GetRandomSeed(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this)
{
  unsigned int seedCount; // edi

  if ( !this->seedCount ) /*0x4ba2a4*/
    return 0; /*0x4ba2ad*/
  seedCount = this->seedCount; /*0x4ba2a4*/
  return this->seedValues[Game_RandomLargeInteger(0) % seedCount]; /*0x4ba2ac*/
}
