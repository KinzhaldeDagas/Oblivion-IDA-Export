void __usercall Actor_MagicCaster_PlayCastingAnimation_::CheckAnim_(
        int a1@<ebx>,
        TESObjectREFR *a2@<esi>,
        _DWORD *a3@<ebp>,
        int a4@<edi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  unsigned __int8 v16; // [esp+0h] [ebp-4h]

  if ( AnimKey_GetGroupID(v16) == a1 ) /*0x5f403d*/
    Actor_MagicCaster_PlayCastingAnimation_::PlayAnim( /*0x5f403d*/
      a1,
      a3,
      a4,
      (PlayerCharacter *)a2,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16);
  else
    Actor_MagicCaster_PlayCastingAnimation_::NoAttackAnimError(a2); /*0x5f403e*/
}
