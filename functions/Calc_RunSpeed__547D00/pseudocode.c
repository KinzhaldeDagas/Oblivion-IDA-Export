double __cdecl Calc_RunSpeed(float a1, float a2, char a3, float a4, int a5, char a6)
{
  float v7; // [esp+14h] [ebp-4h]

  v7 = Calc_WalkSpeed(a1, a2, a6, a3, *(float *)&a5) + dbl_A2FC68;
  return (float)(v7 * (fMoveRunAthleticsMult * a4 * fConstant_Inv100 + fMoveRunMult));
}
