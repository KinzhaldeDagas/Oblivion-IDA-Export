int __userpurge MagicItem_GetFXEffect_::EffectLoop_Next@<eax>(
        int a1@<edi>,
        int a2@<ebx>,
        int a3@<ebp>,
        _DWORD *a4@<esi>,
        int a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  int v8; // edi
  int v9; // edi

  v8 = *(_DWORD *)(a1 + 8); /*0x419bea*/
  if ( !v8 ) /*0x419bef*/
    return MagicItem_GetFXEffect_::CheckSCIT_VFX(a4, a5); /*0x419bef*/
  v9 = v8 - 4; /*0x419bf1*/
  if ( v9 ) /*0x419bf4*/
    return MagicItem_GetFXEffect_::EffectLoop(v9, a2, a3, a5, a6, a7, (int)a8); /*0x419bf4*/
  else
    return MagicItem_GetFXEffect_::CheckSCIT_VFX(a8, a5); /*0x419bf7*/
}
