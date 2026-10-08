// Converts a base reach/distance value to world combat distance using the Oblivion combat-distance game-setting multiplier.
float __cdecl Calc_GetCombatDistance(float baseDistance)
{
  return g_GameSettingStringPointers_B36CD8[0x92] * baseDistance; /*0x547552*/
}
