// 3DTheft decode 2026-05-14: TESLevCreature::GetMaxLevelDiff returns global iLevCreaLevelDifferenceMax at 0x00B35AB0.
const char *TESLevCreature_GetMaxLevelDiff()
{
  return MEMORY[0xB35AB0].value; /*0x4afa75*/
}
