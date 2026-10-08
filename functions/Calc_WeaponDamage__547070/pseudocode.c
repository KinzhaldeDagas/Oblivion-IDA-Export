// Sidecar decode: Calc_WeaponDamage is actor/weapon agnostic after entry; BladeSkillsRestored substitutes only the skill-level argument after consuming the most recent exact source-return/formula-return token from its bounded per-thread stack. Unmatched or overflowed contexts retain native formula inputs.
double __cdecl Calc_WeaponDamage(int a1, int a2, int a3, float a4, int a5, float a6, float a7, float a8)
{
  double v8; // st7
  double v9; // st7
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+8h] [ebp-4h]
  int v14; // [esp+20h] [ebp+14h]
  int v15; // [esp+20h] [ebp+14h]
  float v16; // [esp+24h] [ebp+18h]
  float v17; // [esp+2Ch] [ebp+20h]
  float v18; // [esp+2Ch] [ebp+20h]

  v11 = Calc_LuckModifiedSkill(a1, a2); /*0x547082*/
  v8 = (double)a5 * g_GameSettingStringPointers_B36CD8[0x40]; /*0x547094*/
  v14 = a3; /*0x54709a*/
  v13 = v8; /*0x54709e*/
  v16 = g_GameSettingStringPointers_B36CD8[0x48] * a6 + g_GameSettingStringPointers_B36CD8[0x46]; /*0x5470b2*/
  v12 = v11 * fConstant_Inv100 * g_GameSettingStringPointers_B36CD8[0x44] + g_GameSettingStringPointers_B36CD8[0x42]; /*0x5470d3*/
  if ( a3 >= 0x64 ) /*0x5470d6*/
    v14 = 0x64; /*0x5470d8*/
  *(float *)&v15 = fConstant_Inv100 * (double)v14 * g_GameSettingStringPointers_B36CD8[0x4C] /*0x5470f5*/
                 + g_GameSettingStringPointers_B36CD8[0x4A];
  if ( LOBYTE(a8) ) /*0x5470f9*/
    v9 = 1.0; /*0x5470fb*/
  else
    v9 = Calc_FatigueFactor(a4); /*0x547107*/
  v17 = v9; /*0x54710f*/
  v18 = v16 * v13 * v12 * *(float *)&v15 * v17; /*0x547126*/
  return (float)(v18 * a7); /*0x54713a*/
}
