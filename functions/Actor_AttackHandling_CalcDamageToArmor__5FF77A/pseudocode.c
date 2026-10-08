void __cdecl Actor_AttackHandling_::CalcDamageToArmor(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        float a12,
        float a13,
        float a14,
        float a15)
{
  if ( a15 <= 0.0 ) /*0x5ff785*/
    Calc_DamageToArmor(a6, a14); /*0x5ff79b*/
  Actor_AttackHandling_::ApplyArmorRating(); /*0x5ff7a6*/
}
