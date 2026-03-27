int __usercall Actor_MagicCaster_PlayCastingAnimation_::LoadPowerAttackAnim@<eax>(TESObjectREFR *a1@<esi>)
{
  char *Name; // eax

  Name = TESObjectREFR_GetName(a1);
  PrintError("%s doesn't have a LEFT attack animation to use for casting.", Name);
  Actor_LoadAnimGroup_(a1, 0x16, 0, 0);
  return Actor_MagicCaster_PlayCastingAnimation_::CheckAnim_(0x16);
}
