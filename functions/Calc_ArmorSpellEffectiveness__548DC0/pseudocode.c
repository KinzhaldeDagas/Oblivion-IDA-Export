double __cdecl Calc_ArmorSpellEffectiveness(SInt32 a1, signed int a2, signed int a3, signed int a4)
{
  SInt32 MinimumSkillForMastery; // eax
  double v6; // st7
  signed int v7; // ecx
  signed int v8; // edx
  double v9; // st6
  double v10; // st5
  signed int v11; // eax
  double v12; // rt2
  double v13; // st5
  double v14; // st6
  float v15; // [esp+0h] [ebp-4h]
  float v16; // [esp+0h] [ebp-4h]
  float v17; // [esp+Ch] [ebp+8h]

  v15 = (double)(a4 + a2) / fCostant_100; /*0x548dd7*/
  if ( v15 <= (double)*(float *)&SrcStr ) /*0x548de8*/
    return 1.0; /*0x548dea*/
  MinimumSkillForMastery = ActorValue_GetMinimumSkillForMastery(kSkillMastery_Journeyman); /*0x548df0*/
  v6 = 0.0; /*0x548df5*/
  v7 = a1; /*0x548df7*/
  v8 = MinimumSkillForMastery; /*0x548dfb*/
  if ( a1 < MinimumSkillForMastery ) /*0x548e02*/
  {
    if ( a1 >= 0x64 ) /*0x548e11*/
      v7 = 0x64; /*0x548e13*/
    v10 = fCostant_100; /*0x548e37*/
    v9 = (double)a2 / v10 * (double)(2 * (0x32 - v7)); /*0x548e37*/
  }
  else
  {
    v9 = 0.0; /*0x548e04*/
    v10 = fCostant_100; /*0x548e06*/
  }
  v11 = a3; /*0x548e39*/
  v12 = v10; /*0x548e3d*/
  v13 = v9; /*0x548e3d*/
  v14 = v12; /*0x548e3d*/
  if ( a3 < v8 ) /*0x548e44*/
  {
    if ( a3 >= 0x64 ) /*0x548e4b*/
      v11 = 0x64; /*0x548e4d*/
    v6 = (double)(2 * (0x32 - v11)) * ((double)a4 / v14); /*0x548e6b*/
  }
  v17 = v6; /*0x548e6f*/
  v16 = v13; /*0x548e41*/
  return (float)(1.0 - (flt_B37ED0[0x22] - flt_B37ED0[0x20]) * (v17 + v16) / v14 - flt_B37ED0[0x20]); /*0x548ded*/
}
