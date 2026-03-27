int __usercall MagicTarget_AddEffect_::RemoveDuplicate@<eax>(
        int ebp0@<ebp>,
        int edi0@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void *a10,
        float a11)
{
  MagicTarget_RemoveEffects();
  return MagicTarget_AddEffect_::CloneActiveEffect(ebp0, edi0, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
