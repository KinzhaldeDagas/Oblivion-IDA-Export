int __usercall Actor_MagicCaster_PlayCastingAnimation_::CheckAnim@<eax>(
        int a1@<ebx>,
        TESObjectREFR *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 v9; // [esp+0h] [ebp-4h]

  if ( AnimKey_GetGroupID(v9) == a1 ) /*0x5f4007*/
    return Actor_MagicCaster_PlayCastingAnimation_::CheckAnim_(a1, a3, a4, a5, a6, a7, a8); /*0x5f4007*/
  else
    return Actor_MagicCaster_PlayCastingAnimation_::LoadPowerAttackAnim(a2); /*0x5f4008*/
}
