int __usercall Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Next@<eax>(
        int ebp0@<ebp>,
        int esi0@<esi>,
        char a3@<bl>,
        int a4@<edi>,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14)
{
  int v14; // esi

  v14 = *(_DWORD *)(esi0 + 4);
  if ( v14 )
    return Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Check(
             ebp0,
             v14,
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
             a14);
  else
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Next(ebp0, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}
