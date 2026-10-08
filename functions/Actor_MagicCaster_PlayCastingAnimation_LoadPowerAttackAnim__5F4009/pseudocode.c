int __usercall Actor_MagicCaster_PlayCastingAnimation_::LoadPowerAttackAnim@<eax>(
        TESObjectREFR *a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  char *Name; // eax

  Name = TESObjectREFR_GetName(a1); /*0x5f400b*/
  PrintError("%s doesn't have a LEFT attack animation to use for casting.", Name); /*0x5f4016*/
  Actor_LoadAnimGroup_((Actor *)a1, 0x16u, 0, 0); /*0x5f402a*/
  return Actor_MagicCaster_PlayCastingAnimation_::CheckAnim_(0x16, a2, a3, a4, a5, a6, a7);
}
