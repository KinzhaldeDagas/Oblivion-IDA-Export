int __usercall Actor_MagicCaster_PlayCastingAnimation_::CheckAnim@<eax>(int a1@<ebx>, TESObjectREFR *a2@<esi>)
{
  unsigned __int8 v3; // [esp+0h] [ebp-4h]

  if ( sub_51AA00(v3) == a1 )
    return Actor_MagicCaster_PlayCastingAnimation_::CheckAnim_(a1);
  else
    return Actor_MagicCaster_PlayCastingAnimation_::LoadPowerAttackAnim(a2);
}
