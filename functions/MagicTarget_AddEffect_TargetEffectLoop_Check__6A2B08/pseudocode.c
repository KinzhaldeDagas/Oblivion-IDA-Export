int __usercall MagicTarget_AddEffect_::TargetEffectLoop_Check@<eax>(
        _DWORD *a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
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
  if ( a1[1] || *a1 )
    return MagicTarget_AddEffect_::TargetEffectLoop_Body(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    return MagicTarget_AddEffect_::CloneActiveEffect(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
