int __usercall MagicTarget_AddEffect_::TargetEffectLoop_Body@<eax>(
        int ebx0@<ebx>,
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
  if ( *(_DWORD *)ebx0 )
  {
    if ( Magic_BoundItemSlotOverlap(*(_DWORD *)(a2 + 0xC), *(_DWORD *)(*(_DWORD *)ebx0 + 0xC)) )
      MagicTarget_RemoveEffects();
  }
  return MagicTarget_AddEffect_::TargetEffectLoop_Next(a2, a3, ebx0, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
