TESClimate *__fastcall TESWorldSpace_GetClimateFromRoot(TESWorldSpace *this)
{                                               // Verified Oblivion: follows every non-null TESWorldSpace.parentWorldspace link to the root without testing an inheritance flag, then returns root climate at +0x58. Fallout divergence: TESWorldSpace::GetClimate follows parent only when sParentUseFlags bit 4 is set.
  TESWorldSpace *i; // eax

  for ( i = this->parentWorldspace; i; i = i->parentWorldspace ) /*0x4ef7a5*/
    this = i; /*0x4ef7a7*/
  return this->climate;                         // Verified: returns root TESWorldSpace climate pointer at +0x58; worldspace copy and comparison helpers independently use this result. /*0x4ef7b3*/
}
