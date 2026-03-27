char *__usercall sub_468670@<eax>(double a1@<st2>, double a2@<st1>, Actor *a3)
{
  TESForm *ActorBaseForm; // eax
  TESForm::FormFlags *p_flags; // eax
  TESForm *v5; // eax

  if ( !a3 )
    return sub_4686B7();
  ActorBaseForm = Actor_GetActorBaseForm(a3, 1);
  if ( !ActorBaseForm )
    return sub_4686B7();
  p_flags = &ActorBaseForm[4].member.flags;
  if ( !p_flags )
    return sub_4686B7();
  if ( !*((_DWORD *)p_flags + 5) && !*((_DWORD *)p_flags + 4) )
  {
    v5 = Actor_GetActorBaseForm(a3, 0);
    if ( !v5 )
      return sub_4686B7();
    p_flags = &v5[4].member.flags;
  }
  if ( p_flags )
    return sub_569020((_DWORD *)p_flags + 4, a1, a2, (TESObjectREFR *)a3);
  return sub_4686B7();
}
