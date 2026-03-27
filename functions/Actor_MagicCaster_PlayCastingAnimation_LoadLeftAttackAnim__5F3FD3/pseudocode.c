int __usercall Actor_MagicCaster_PlayCastingAnimation_::LoadLeftAttackAnim@<eax>(TESObjectREFR *a1@<esi>)
{
  char *Name; // eax

  Name = TESObjectREFR_GetName(a1);
  PrintError("%s doesn't have a casting animation.", Name);
  Actor_LoadAnimGroup_(a1, 0x14, 0, 0);
  return Actor_MagicCaster_PlayCastingAnimation_::CheckAnim(0x14, a1);
}
