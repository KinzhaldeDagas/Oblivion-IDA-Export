int __usercall MagicTarget_AddEffect_::TargetEffectLoop_Check@<eax>(
        int ebx0@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        void *a11,
        float a12)
{
  if ( *(_DWORD *)(ebx0 + 4) || *(_DWORD *)ebx0 ) /*0x6a2b0e*/
    return MagicTarget_AddEffect_::TargetEffectLoop_Body(ebx0, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12); /*0x6a2b12*/
  else
    return MagicTarget_AddEffect_::CloneActiveEffect( /*0x6a2b11*/
             a2,
             a3,
             st6_0,
             st7_0,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             SLODWORD(a12));
}
