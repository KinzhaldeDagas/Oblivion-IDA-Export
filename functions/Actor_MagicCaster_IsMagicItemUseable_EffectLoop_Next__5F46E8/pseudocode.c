int __usercall Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Next@<eax>(
        int ebp0@<ebp>,
        char a2@<bl>,
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
  int v12; // eax

  v12 = *(_DWORD *)(ebp0 + 8);
  if ( v12 && v12 != 4 )
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Check(
             a2,
             v12 - 4,
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
  else
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_After_(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
