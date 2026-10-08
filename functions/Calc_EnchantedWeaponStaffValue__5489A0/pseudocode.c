double __cdecl Calc_EnchantedWeaponStaffValue(float a1, float a2, float a3)
{
  float v4; // [esp+0h] [ebp-4h]

  v4 = 0.0; /*0x5489a3*/
  if ( a1 != 0.0 ) /*0x5489b3*/
    return (float)(a1 + MEMORY[0xB37A58][2] * a2 + MEMORY[0xB37A58][4] * a3); /*0x5489cd*/
  return v4; /*0x5489d4*/
}
