double __cdecl sub_547E70(float a1, float a2)
{
  double result; // st7
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]

  v3 = a1 * fConstant_Inv100;
  v4 = (flt_B37458 - fMoveMinFlySpeed) * v3 + fMoveMinFlySpeed;
  v5 = v4 * (1.0 - fMoveEncumEffect * a2);
  result = 0.0;
  if ( v5 >= 0.0 )
    return v5;
  return result;
}
