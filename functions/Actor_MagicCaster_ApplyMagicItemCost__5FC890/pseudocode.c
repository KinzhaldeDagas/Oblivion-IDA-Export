int __usercall Actor_MagicCaster_ApplyMagicItemCost@<eax>(
        int ecx0@<ecx>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( a3 )
    return Actor_MagicCaster_ApplyMagicItemCost_::DispelInvis(ecx0, a3, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  else
    return Actor_MagicCaster_ApplyMagicItemCost_::Done(0, a4);
}
