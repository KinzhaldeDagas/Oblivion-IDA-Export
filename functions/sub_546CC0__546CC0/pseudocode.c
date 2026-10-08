// Exact flee score: fAIFleeConfBase + confidence*fAIFleeConfMult + (1-currentHealth/baseHealth)*fAIFleeHealthMult. Vanilla defaults: 40 - 0.5*confidence + 20*missingHealthFraction.
double __cdecl AI_CalculateFleeScore(float a1, float a2, int a3)
{
  double v3; // st7
  float v5; // [esp+8h] [ebp+8h]

  if ( a2 == 0.0 ) /*0x546ccf*/
    v3 = 0.0; /*0x546cd9*/
  else
    v3 = a1 / a2; /*0x546cd1*/
  v5 = v3; /*0x546ced*/
  return (float)((double)a3 * g_GameSettingStringPointers_B36CD8[0x1A] /*0x546d09*/
               + g_GameSettingStringPointers_B36CD8[0x18]
               + (1.0 - v5) * g_GameSettingStringPointers_B36CD8[0x16]);
}
