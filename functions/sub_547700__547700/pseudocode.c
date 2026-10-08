double __cdecl Combat_CalculateArrowGravitySkillScale(float a1, float a2, int a3)
{
  int v3; // eax
  float v5; // [esp+8h] [ebp+8h]
  float v6; // [esp+8h] [ebp+8h]
  float v7; // [esp+8h] [ebp+8h]

  v3 = Double_To_SInt32(a2); /*0x547709*/
  v5 = Calc_LuckModifiedSkill(v3, a3); /*0x547714*/
  v6 = g_GameSettingStringPointers_B36CD8[0xE4] - g_GameSettingStringPointers_B36CD8[0xE6] * v5; /*0x54772d*/
  v7 = v6 * a1 + (1.0 - a1) * g_GameSettingStringPointers_B36CD8[0xF0]; /*0x547749*/
  if ( v7 >= 0.0 ) /*0x54775a*/
    return v7; /*0x547767*/
  else
    return (float)0.0; /*0x547762*/
}
