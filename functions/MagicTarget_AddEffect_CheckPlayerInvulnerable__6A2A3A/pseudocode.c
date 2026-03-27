int __userpurge MagicTarget_AddEffect_::CheckPlayerInvulnerable@<eax>(
        int a1@<ebp>,
        int a2@<eax>,
        int a3@<edi>,
        int _4,
        int a5,
        int a6)
{
  if ( a3 == a2 && GetGodMode() && EffectItem_IsHostile(*(_DWORD **)(a1 + 0xC)) )
    return MagicTarget_AddEffect_::Return_0(_4, a5, a6);
  else
    return MagicTarget_AddEffect_::CheckValidTarget(a1, a3, _4, a5, a6);
}
