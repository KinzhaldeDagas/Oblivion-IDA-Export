int __usercall Actor_MagicCaster_PlayCastingAnimation_::CheckAnim_@<eax>(
        int a1@<ebx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  unsigned __int8 v8; // [esp+0h] [ebp-4h]

  if ( sub_51AA00(v8) == a1 )
    return Actor_MagicCaster_PlayCastingAnimation_::PlayAnim(a2, a3, a4, a5, a6, a7);
  else
    return Actor_MagicCaster_PlayCastingAnimation_::NoAttackAnimError();
}
