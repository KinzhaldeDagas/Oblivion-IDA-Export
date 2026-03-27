int __userpurge Actor_MagicTarget_AttemptAddEffect_::UpdateHUDHealthBar@<eax>(
        Actor *a1@<ebp>,
        PlayerCharacter *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6)
{
  if ( a2 != TESDataHandler_g_PlayerRef )
    return Actor_MagicTarget_AttemptAddEffect_::Done_(a3, a4, a5, a6);
  Player_UpdateHUDHealthBarTarget_(a1);
  return Actor_MagicTarget_AttemptAddEffect_::Done_(a3, a4, a5, a6);
}
