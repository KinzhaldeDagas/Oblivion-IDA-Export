// ODismemberment combat decode: knockdown chance formula. Combines luck-modified skill, fatigue factor, incoming damage, and fKnockdown* settings, clamped by fKnockdownChance.
bool __cdecl Calc_CheckKnockdownChance(SInt32 skillValue, SInt32 luckValue, float a3, int a4)
{
  double v4; // st7
  double v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+20h] [ebp+10h]
  float v8; // [esp+20h] [ebp+10h]
  float v9; // [esp+20h] [ebp+10h]

  v6 = Calc_LuckModifiedSkill(skillValue, luckValue); /*0x5475e5*/
  *(float *)&v6 = Calc_FatigueFactor(a3) * v6; /*0x5475ff*/
  v7 = (double)a4 * g_GameSettingStringPointers_B36CD8[0xB0] + g_GameSettingStringPointers_B36CD8[0xAE]; /*0x547613*/
  v4 = v7; /*0x547617*/
  v8 = g_GameSettingStringPointers_B36CD8[0xAC] * *(float *)&v6 + g_GameSettingStringPointers_B36CD8[0xAA]; /*0x54762b*/
  v9 = v4 / v8; /*0x547633*/
  if ( g_GameSettingStringPointers_B36CD8[0xB2] <= (double)v9 ) /*0x54764a*/
    v9 = g_GameSettingStringPointers_B36CD8[0xB2]; /*0x54764c*/
  return (double)(Game_RandomLargeInteger(0) % 0x64) / fCostant_100 <= v9; /*0x54768b*/
}
