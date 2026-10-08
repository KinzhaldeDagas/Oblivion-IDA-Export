int __usercall MagicTarget_AddEffect_::RemoveDuplicate@<eax>(
        int ebp0@<ebp>,
        int edi0@<edi>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12,
        int a13)
{
  MagicTarget_RemoveEffects(); /*0x6a2b6e*/
  return MagicTarget_AddEffect_::CloneActiveEffect(ebp0, edi0, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
