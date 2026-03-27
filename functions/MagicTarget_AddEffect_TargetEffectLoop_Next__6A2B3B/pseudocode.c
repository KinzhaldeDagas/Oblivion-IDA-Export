int __usercall MagicTarget_AddEffect_::TargetEffectLoop_Next@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int ebx0@<ebx>,
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
  _DWORD *v12; // ebx

  v12 = *(_DWORD **)(ebx0 + 4);
  if ( v12 )
    return MagicTarget_AddEffect_::TargetEffectLoop_Check(v12, a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  else
    return MagicTarget_AddEffect_::CloneActiveEffect(a1, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
