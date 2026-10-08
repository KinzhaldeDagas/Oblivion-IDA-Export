double __cdecl Calc_BlockDamageReduction(SInt32 skillValue, SInt32 luckValue, float a3, float a4, char a5)
{
  double v5; // st7
  float v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+18h] [ebp+10h]
  float v10; // [esp+18h] [ebp+10h]

  v7 = Calc_LuckModifiedSkill(skillValue, luckValue);// Block damage reduction uses Calc_LuckModifiedSkill before the formula. AVU replacement must keep fractional skill and the vanilla lower floor while allowing values above 100 to feed the extended formula. /*0x5474b0*/
  v8 = v7 * fConstant_Inv100 * g_GameSettingStringPointers_B36CD8[0x86] + g_GameSettingStringPointers_B36CD8[0x84]; /*0x5474d2*/
  if ( LOBYTE(a4) ) /*0x5474d5*/
  {
    v5 = g_GameSettingStringPointers_B36CD8[0x8A]; /*0x5474d7*/
  }
  else if ( a5 ) /*0x5474e4*/
  {
    v5 = g_GameSettingStringPointers_B36CD8[0x8C]; /*0x5474e6*/
  }
  else
  {
    v5 = 1.0; /*0x5474ee*/
  }
  v9 = v5; /*0x5474f0*/
  v10 = Calc_FatigueFactor(a3) * v8 * v9; /*0x54750c*/
  if ( g_GameSettingStringPointers_B36CD8[0x88] <= (double)v10 ) /*0x547521*/
    return g_GameSettingStringPointers_B36CD8[0x88]; /*0x547531*/
  return v10; /*0x54752e*/
}
