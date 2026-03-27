int __usercall Actor_AttackHandling_::CalcArmorRating@<eax>(
        int a1@<esi>,
        int ebp0@<ebp>,
        int edi0@<edi>,
        double a4@<st2>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        float a17,
        float a18,
        float a19)
{
  double v21; // st5
  float v23; // [esp+38h] [ebp+38h]

  if ( BYTE2(a11) )
  {
    v21 = 0.0;
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x348))(a1);
    if ( a4 >= fCostant_100 )
      a4 = flt_A2FE7C;
    else
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x348))(a1);
    *(float *)&a12 = a4;
    v21 = *(float *)&a12 / fCostant_100;
  }
  v23 = v21;
  if ( fArmorRatingMax >= (double)v23 )
    return Actor_AttackHandling_::CalcDamageToArmor(
             ebp0,
             edi0,
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
             a15,
             a16,
             a17,
             v23,
             a19);
  else
    return Actor_AttackHandling_::CalcDamageToArmor(
             ebp0,
             edi0,
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
             a15,
             a16,
             a17,
             fArmorRatingMax,
             a19);
}
