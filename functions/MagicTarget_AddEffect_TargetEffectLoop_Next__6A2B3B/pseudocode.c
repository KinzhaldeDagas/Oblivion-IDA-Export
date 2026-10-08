int __usercall MagicTarget_AddEffect_::TargetEffectLoop_Next@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int ebx0@<ebx>,
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
  int v14; // ebx

  v14 = *(_DWORD *)(ebx0 + 4); /*0x6a2b3b*/
  if ( v14 ) /*0x6a2b40*/
    return MagicTarget_AddEffect_::TargetEffectLoop_Check( /*0x6a2b40*/
             v14,
             a1,
             a2,
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
             *(float *)&a13);
  else
    return MagicTarget_AddEffect_::CloneActiveEffect(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13); /*0x6a2b42*/
}
