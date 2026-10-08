int __usercall Actor_MagicCaster_PlayCastingAnimation_::LoadLeftAttackAnim@<eax>(TESObjectREFR *a1@<esi>)
{
  char *Name; // eax

  Name = TESObjectREFR_GetName(a1); /*0x5f3fd5*/
  PrintError("%s doesn't have a casting animation.", Name); /*0x5f3fe0*/
  Actor_LoadAnimGroup_((Actor *)a1, 0x14u, 0, 0); /*0x5f3ff4*/
  return Actor_MagicCaster_PlayCastingAnimation_::CheckAnim(0x14, a1);
}
