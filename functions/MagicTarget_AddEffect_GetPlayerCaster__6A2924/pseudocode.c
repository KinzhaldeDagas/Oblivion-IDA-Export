int __usercall MagicTarget_AddEffect_::GetPlayerCaster@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  if ( TESDataHandler_g_PlayerRef )
    return MagicTarget_AddEffect_::CheckPlayerIsCaster(
             (int)&TESDataHandler_g_PlayerRef->super.super.magicCaster,
             (int)TESDataHandler_g_PlayerRef,
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
             a13);
  else
    return MagicTarget_AddEffect_::NoPlayerCaster();
}
