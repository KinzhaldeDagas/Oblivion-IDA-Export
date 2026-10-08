double __cdecl Calc_KnockbackFactor(SInt32 skillValue, SInt32 luckValue, float a3, int a4)
{
  double v4; // st7
  double v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+1Ch] [ebp+10h]
  float v8; // [esp+1Ch] [ebp+10h]

  v6 = Calc_LuckModifiedSkill(skillValue, luckValue); /*0x5476a2*/
  *(float *)&v6 = v6 / Calc_FatigueFactor(a3); /*0x5476b9*/
  v7 = (double)a4 * g_GameSettingStringPointers_B36CD8[0xBA] + g_GameSettingStringPointers_B36CD8[0xB8]; /*0x5476cd*/
  v4 = v7; /*0x5476d1*/
  v8 = g_GameSettingStringPointers_B36CD8[0xB6] * *(float *)&v6 + g_GameSettingStringPointers_B36CD8[0xB4]; /*0x5476e5*/
  return (float)(v4 * v8); /*0x5476f8*/
}
