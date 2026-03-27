int __usercall MagicTarget_AddEffect_::NoPlayerCaster@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  return MagicTarget_AddEffect_::CheckPlayerIsCaster(0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}
