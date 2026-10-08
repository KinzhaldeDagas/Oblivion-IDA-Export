// Verified: scans the uint32 seed array at +0x4C with uint16 count +0x52; returns byte index on match or 0xFF for empty/missing values. TESObjectREFR_SetTreeSeedByValue uses 0xFF to remove the per-reference seed extra.
unsigned __int8 __thiscall TESObjectTREE_GetIndexForSeed(
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this,
        unsigned int seed)
{
  unsigned int seedCount; // esi
  unsigned __int8 result; // al
  int v4; // edx
  unsigned int *i; // ecx

  seedCount = this->seedCount; /*0x4ba031*/
  result = 0xFF; /*0x4ba035*/
  v4 = 0; /*0x4ba037*/
  if ( this->seedCount ) /*0x4ba031*/
  {
    for ( i = this->seedValues; *i != seed; ++i ) /*0x4ba03d*/
    {
      if ( ++v4 >= seedCount ) /*0x4ba051*/
        return result; /*0x4ba051*/
    }
    return v4; /*0x4ba058*/
  }
  return result; /*0x4ba054*/
}
