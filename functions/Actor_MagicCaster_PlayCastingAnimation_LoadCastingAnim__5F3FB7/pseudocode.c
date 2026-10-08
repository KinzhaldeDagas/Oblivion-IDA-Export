int __usercall Actor_MagicCaster_PlayCastingAnimation_::LoadCastingAnim@<eax>(
        unsigned int a1@<ebx>,
        TESObjectREFR *a2@<esi>)
{
  unsigned __int8 AnimGroup; // al

  AnimGroup = Actor_LoadAnimGroup_((Actor *)a2, a1, 0, 0); /*0x5f3fbe*/
  if ( AnimKey_GetGroupID(AnimGroup) == a1 ) /*0x5f3fd1*/
    return Actor_MagicCaster_PlayCastingAnimation_::CheckAnim(a1, a2); /*0x5f3fd1*/
  else
    return Actor_MagicCaster_PlayCastingAnimation_::LoadLeftAttackAnim(a2); /*0x5f3fd2*/
}
