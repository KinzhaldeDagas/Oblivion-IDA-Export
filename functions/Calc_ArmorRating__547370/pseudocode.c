// Authoritative Oblivion armor-rating formula (luck-modified skill, base/max scale, floor/minimum, condition). MW Medium Armor v20 now substitutes only the sidecar skill and calls a relocated native gateway by default; its old Morrowind base*skill/baseSkill formula is legacy opt-in only.
double __cdecl Calc_ArmorRating(unsigned __int16 a1, float a2, float a3, float a4)
{
  int v4; // eax
  double v5; // st6
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st5
  double v10; // st7
  signed int v12; // [esp-4h] [ebp-4h]
  float v13; // [esp+4h] [ebp+4h]
  float v14; // [esp+4h] [ebp+4h]
  float v15; // [esp+4h] [ebp+4h]
  float v16; // [esp+4h] [ebp+4h]
  float v17; // [esp+4h] [ebp+4h]
  float v18; // [esp+4h] [ebp+4h]
  float v20; // [esp+8h] [ebp+8h]
  float v21; // [esp+Ch] [ebp+Ch]
  float v22; // [esp+Ch] [ebp+Ch]

  v12 = Double_To_SInt32(a3); /*0x54737d*/
  v4 = Double_To_SInt32(a2); /*0x54737e*/
  v21 = Calc_LuckModifiedSkill(v4, v12);        // Worn armor rating uses Calc_LuckModifiedSkill for armor skill. AVU replacement must preserve fractional skill and lower-bound clamp before applying the configurable upper cap. /*0x547389*/
  v5 = g_GameSettingStringPointers_B36CD8[0x70]; /*0x547398*/
  v20 = g_GameSettingStringPointers_B36CD8[0x72] - v5; /*0x5473ab*/
  v13 = (v5 + v21 / fCostant_100 * v20) * (double)a1; /*0x5473c5*/
  v6 = v13; /*0x5473c9*/
  v7 = v13; /*0x5473d1*/
  v14 = (float)Double_To_SInt32(v13); /*0x5473e4*/
  v8 = v14; /*0x5473e8*/
  if ( v7 - v14 < 0.0 ) /*0x5473fd*/
    v8 = v8 - 1.0; /*0x5473ff*/
  v15 = v8; /*0x547403*/
  if ( v15 <= 1.0 ) /*0x547416*/
  {
    v10 = 1.0; /*0x547464*/
  }
  else
  {
    v16 = v6; /*0x54741c*/
    v9 = v16; /*0x547420*/
    v17 = (float)Double_To_SInt32(1.0); /*0x547433*/
    if ( v9 - v17 < 0.0 ) /*0x54744a*/
      v17 = v17 - 1.0; /*0x54745a*/
    v10 = v17; /*0x547452*/
  }
  v18 = v10; /*0x54746a*/
  v22 = g_GameSettingStringPointers_B36CD8[0x76] * a4 + g_GameSettingStringPointers_B36CD8[0x74]; /*0x54747e*/
  return (float)(v22 * v18); /*0x547492*/
}
