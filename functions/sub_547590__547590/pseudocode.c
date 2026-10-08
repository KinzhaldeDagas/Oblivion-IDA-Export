// ODismemberment combat decode: block fatigue cost formula using fFatigueBlockSkill*, fFatigueBlock*, and block amount.
double __cdecl Calc_BlockFatigueDamage(int a1, int a2, float a3)
{
  double v3; // st7
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v5 = (double)a1 * g_GameSettingStringPointers_B36CD8[0xCC] + g_GameSettingStringPointers_B36CD8[0xCA]; /*0x5475a0*/
  v3 = v5; /*0x5475a4*/
  v6 = g_GameSettingStringPointers_B36CD8[0xC8] * a3 + g_GameSettingStringPointers_B36CD8[0xC6]; /*0x5475b8*/
  return (float)(v3 + v6); /*0x5475c8*/
}
