int __usercall Actor_AttackHandling_::CalcDamageToArmor@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float a14,
        float a15,
        float a16,
        float a17)
{
  double v17; // st7
  int v19; // [esp+3Ch] [ebp+34h]

  v17 = 0.0;
  if ( a17 <= 0.0 )
    v17 = Calc_DamageToArmor(a8, a16);
  *(float *)&v19 = v17;
  return Actor_AttackHandling_::ApplyArmorRating(
           a1 == 0,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           v19,
           a16);
}
