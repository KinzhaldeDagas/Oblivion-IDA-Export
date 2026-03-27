double __cdecl Calc_SwimRunSpeed(float a1, float a2, char a3, int a4, float a5, float a6)
{
  double v6; // rt0
  double v7; // st6
  float v9; // [esp+14h] [ebp-4h]
  float v10; // [esp+2Ch] [ebp+14h]
  float v11; // [esp+2Ch] [ebp+14h]

  v9 = Calc_WalkSpeed(a1, a2, 0, a3, *(float *)&a4) + dbl_A2FC68;
  v6 = fConstant_Inv100;
  v7 = a5;
  v10 = (fMoveRunAthleticsMult * a5 * v6 + fMoveRunMult) * v9;
  v11 = v10 * (a6 / fCostant_100 + dbl_A2F928);
  return (float)((v6 * (v7 * fMoveSwimRunAthleticsMult) + fMoveSwimRunBase) * v11);
}
