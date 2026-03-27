int __usercall Actor_AttackHandling_::ApplyArmorRating@<eax>(
        char a1@<zf>,
        int a2@<edi>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        float a15,
        int a16,
        float a17)
{
  float v18; // [esp+18h] [ebp+18h]
  float v19; // [esp+30h] [ebp+30h]

  v18 = (1.0 - a17) * a9;
  v19 = 0.0;
  if ( a1 )
    return Actor_AttackHandling_::Blocking(a4, a5, a6, a7, a8, LODWORD(v18), a10, a2, a12, a13, a14, LODWORD(v19));
  else
    return Actor_AttackHandling_::Blocking(a4, a5, a6, a7, a8, LODWORD(v18), a10, a3, a12, a13, a14, LODWORD(v19));
}
