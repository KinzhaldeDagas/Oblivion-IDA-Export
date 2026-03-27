float __cdecl Calc_ActorBaseEncumbrance(float a1)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = fActorStrengthEncumbranceMult * a1;
  if ( v3 >= 0.0 )
    return v3;
  else
    return 0.0;
}
