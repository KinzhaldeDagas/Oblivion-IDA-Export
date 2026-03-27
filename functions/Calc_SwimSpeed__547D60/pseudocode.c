double __cdecl Calc_SwimSpeed(float a1, float a2, char a3, int a4, float a5, float a6)
{
  float v7; // [esp+2Ch] [ebp+18h]

  v7 = Calc_WalkSpeed(a1, a2, 0, a3, *(float *)&a4) * (a6 / fCostant_100 + dbl_A2F928);
  return (float)(v7 * (fMoveSwimWalkAthleticsMult * a5 * fConstant_Inv100 + fMoveSwimWalkBase));
}
