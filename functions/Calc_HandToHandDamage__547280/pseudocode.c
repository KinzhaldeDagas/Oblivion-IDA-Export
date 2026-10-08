void __cdecl Calc_HandToHandDamage(
        SInt32 skillValue,
        SInt32 luckValue,
        int a3,
        float a4,
        char a5,
        float *a6,
        float *a7)
{
  double v7; // st7
  float v8; // [esp+4h] [ebp-4h]
  float v9; // [esp+4h] [ebp-4h]
  float v10; // [esp+14h] [ebp+Ch]
  float v11; // [esp+14h] [ebp+Ch]
  float v12; // [esp+14h] [ebp+Ch]
  float v13; // [esp+14h] [ebp+Ch]

  v8 = Calc_LuckModifiedSkill(skillValue, luckValue); /*0x547290*/
  v9 = v8 * fConstant_Inv100 * g_GameSettingStringPointers_B36CD8[0x60] + g_GameSettingStringPointers_B36CD8[0x5E]; /*0x5472c0*/
  if ( a3 >= 0x64 ) /*0x5472c3*/
    a3 = 0x64; /*0x5472c5*/
  v10 = fConstant_Inv100 * (double)a3 * g_GameSettingStringPointers_B36CD8[0x64] /*0x5472de*/
      + g_GameSettingStringPointers_B36CD8[0x62];
  v11 = Calc_FatigueFactor(a4) * (v10 * v9); /*0x5472ff*/
  v7 = v11; /*0x547303*/
  *a6 = v11; /*0x547307*/
  if ( v11 >= 1.0 ) /*0x547312*/
    v7 = 1.0; /*0x547318*/
  v12 = v7; /*0x54731f*/
  v13 = (g_GameSettingStringPointers_B36CD8[0x68] - g_GameSettingStringPointers_B36CD8[0x66]) * v12 /*0x54733b*/
      + g_GameSettingStringPointers_B36CD8[0x66];
  *a6 = v13; /*0x547343*/
  if ( a5 ) /*0x547345*/
    *a7 = 0.0; /*0x54734f*/
  else
    *a7 = v13 * g_GameSettingStringPointers_B36CD8[0x6A] + g_GameSettingStringPointers_B36CD8[0x6C]; /*0x547363*/
}
