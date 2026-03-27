double __cdecl Calc_EnchantedWeaponStaffValue(float a1, float a2, float a3)
{
  float v4; // [esp+0h] [ebp-4h]

  v4 = 0.0;
  if ( a1 != 0.0 )
    return (float)(a1 + fEnchantmentPointsMult * a2 + fEnchantmentEffectPointsMult * a3);
  return v4;
}
