TESWaterForm *__fastcall TESWorldSpace::GetWaterFormParents(TESWorldSpace *a1)
{                                               // Verified Oblivion: walks every parentWorldspace link and returns root WaterForm, falling back to global default water at 0xB360AC. Fallout divergence: separate GetWaterType and GetLODWaterType use parent-use flags bits 3 and 1 respectively.
  TESWorldSpace *i; // eax
  TESWaterForm *result; // eax

  for ( i = a1->parentWorldspace; i; i = i->parentWorldspace ) /*0x4ef7c5*/
    a1 = i; /*0x4ef7c7*/
  result = a1->WaterForm; /*0x4ef7d0*/
  if ( !result ) /*0x4ef7d8*/
    return MEMORY[0xB360AC]; /*0x4ef7da*/
  return result; /*0x4ef7df*/
}
