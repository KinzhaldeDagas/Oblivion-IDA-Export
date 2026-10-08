// positive sp value has been detected, the output may be wrong!
int __usercall Actor_MagicCaster_PlayCastingAnimation_::NoAttackAnimError@<eax>(TESObjectREFR *a1@<esi>)
{
  char *Name; // eax

  Name = TESObjectREFR_GetName(a1); /*0x5f4041*/
  return PrintError("%s doesn't have a NORMAL power attack animation to use for casting.", Name); /*0x5f4067*/
}
