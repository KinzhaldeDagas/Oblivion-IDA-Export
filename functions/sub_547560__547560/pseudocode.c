double __cdecl sub_547560(float a1, char a2)
{
  float v3; // [esp+4h] [ebp+4h]

  v3 = fFatigueAttackWeaponMult * a1 + fFatigueAttackWeaponBase;
  if ( a2 )
    return (float)(fPowerAttackFatiguePenalty * v3);
  return v3;
}
