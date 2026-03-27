int __usercall MagicTarget_AddEffect_::GetPlayerTarget@<eax>(int a1@<ebp>, int a2@<edi>, int a3, int a4, int a5)
{
  if ( TESDataHandler_g_PlayerRef )
    return MagicTarget_AddEffect_::CheckPlayerInvulnerable(
             a1,
             (int)&TESDataHandler_g_PlayerRef->super.super.magicTarget,
             a2,
             a3,
             a4,
             a5);
  else
    return MagicTarget_AddEffect_::CheckPlayerInvulnerable(a1, 0, a2, a3, a4, a5);
}
