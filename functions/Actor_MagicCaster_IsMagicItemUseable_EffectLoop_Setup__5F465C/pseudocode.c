int __usercall Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Setup@<eax>(
        char a1@<bl>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12)
{
  if ( !a2 || a2 == 0xFFFFFFF4 )
    return Actor_MagicCaster_IsMagicItemUseable_::SetFailureCode(a3, a4, a5, a6, a7, a8, a9, a10);
  else
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Check_(
             a1,
             a2 + 0xC,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
}
