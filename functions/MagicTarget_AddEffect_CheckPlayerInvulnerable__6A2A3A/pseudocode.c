int __userpurge MagicTarget_AddEffect_::CheckPlayerInvulnerable@<eax>(
        int a1@<ebp>,
        int a2@<eax>,
        int a3@<edi>,
        int a4@<esi>,
        int _4,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12,
        float a13)
{
  if ( a3 == a2 && GetGodMode() && EffectItem_IsHostile(*(_DWORD **)(a1 + 0xC)) ) /*0x6a2a4a*/
    return MagicTarget_AddEffect_::Return_0(_4, a6, a7); /*0x6a2a51*/
  else
    return MagicTarget_AddEffect_::CheckValidTarget((_DWORD *)a1, a3, a4, _4, a6, a7, a8, a9, a10, a11, a12, a13); /*0x6a2a52*/
}
