int __userpurge Actor_MagicTarget_AttemptAddEffect_::UpdateHUDHealthBar@<eax>(
        Actor *a1@<ebp>,
        PlayerCharacter *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6)
{
  if ( a2 != reference ) /*0x5ee4ed*/
    return Actor_MagicTarget_AttemptAddEffect_::Done_(a3, a4, a5, a6); /*0x5ee4ed*/
  Player_UpdateHUDHealthBarTarget_(a1); /*0x5ee4f0*/
  return Actor_MagicTarget_AttemptAddEffect_::Done_(a3, a4, a5, a6);
}
