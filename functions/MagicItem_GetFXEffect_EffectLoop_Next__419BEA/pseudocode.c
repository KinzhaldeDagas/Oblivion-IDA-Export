int __userpurge MagicItem_GetFXEffect_::EffectLoop_Next@<eax>(
        int a1@<edi>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // edi
  int v8; // edi

  v7 = *(_DWORD *)(a1 + 8);
  if ( v7 && (v8 = v7 - 4) != 0 )
    return MagicItem_GetFXEffect_::EffectLoop(v8, a2, a3, a4, a5, a6, a7);
  else
    return MagicItem_GetFXEffect_::CheckSCIT_VFX(a4);
}
