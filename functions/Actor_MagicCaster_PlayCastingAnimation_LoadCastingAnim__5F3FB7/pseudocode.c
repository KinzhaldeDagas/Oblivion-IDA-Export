int __usercall Actor_MagicCaster_PlayCastingAnimation_::LoadCastingAnim@<eax>(int a1@<ebx>, TESObjectREFR *a2@<esi>)
{
  unsigned __int8 AnimGroup; // al

  AnimGroup = Actor_LoadAnimGroup_(a2, a1, 0, 0);
  if ( sub_51AA00(AnimGroup) == a1 )
    return Actor_MagicCaster_PlayCastingAnimation_::CheckAnim(a1, a2);
  else
    return Actor_MagicCaster_PlayCastingAnimation_::LoadLeftAttackAnim(a2);
}
