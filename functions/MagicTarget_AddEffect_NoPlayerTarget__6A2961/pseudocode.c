int __usercall MagicTarget_AddEffect_::NoPlayerTarget@<eax>(
        int a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  return MagicTarget_AddEffect_::CheckPlayerIsNotTarget(0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
