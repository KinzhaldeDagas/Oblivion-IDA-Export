int __usercall MagicTarget_AddEffect_::CheckPlayerIsNotTarget@<eax>(
        int a1@<eax>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        float a11,
        int a12,
        int a13)
{
  if ( a2 == a1 ) /*0x6a2965*/
    return MagicTarget_AddEffect_::GetTargetName(a2); /*0x6a2965*/
  else
    return MagicTarget_AddEffect_::PrintEffectResistedMsg(a3, a4, a5, a6, a7, a8, a9, a10, LODWORD(a11), a12, a13); /*0x6a2966*/
}
