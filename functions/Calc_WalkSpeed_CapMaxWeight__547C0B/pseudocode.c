double __cdecl Calc_WalkSpeed_::CapMaxWeight(float a1, float a2, char a3, char a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st7
  double v7; // st7
  double result; // st7
  float v9; // [esp+14h] [ebp+14h]
  float v10; // [esp+14h] [ebp+14h]

  v4 = a2;
  v5 = fMoveWeightMax;
  if ( v5 < a2 )
    v4 = fMoveWeightMax;
  v6 = (v4 + fMoveWeightMin) / (v5 - fMoveWeightMin);
  if ( a4 )
  {
    v9 = (1.0 - v6 * fMoveEncumEffectNoWea)
       * ((fMoveCharWalkMax - fMoveCharWalkMin) * (a1 * dbl_A3D8E8) + fMoveCharWalkMin);
    v7 = v9 * fMoveNoWeaponMult;
  }
  else
  {
    v7 = (1.0 - v6 * fMoveEncumEffect) * ((fMoveCharWalkMax - fMoveCharWalkMin) * (a1 * dbl_A3D8E8) + fMoveCharWalkMin);
  }
  v10 = v7;
  if ( a3 )
    v10 = fMoveSneakMult * v10;
  result = 0.0;
  if ( v10 >= 0.0 )
    return v10;
  return result;
}
