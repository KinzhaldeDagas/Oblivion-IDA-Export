char __usercall Cmd_ShowClassMenu@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>)
{
  _BYTE *BaseClass; // esi

  if ( reference ) /*0x505810*/
  {
    BaseClass = Actor_GetBaseClass((Actor *)reference); /*0x505820*/
    if ( !TESClass_IsPlayable(BaseClass) ) /*0x505824*/
      BaseClass = Player_GetDefaultClassRecommendation(reference); /*0x505838*/
    sub_57AA20(a1, a2, a3, (int)BaseClass); /*0x50583b*/
  }
  return 1; /*0x505846*/
}
