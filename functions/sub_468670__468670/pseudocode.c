// RadiantAI: obtains TESAIForm package list from actor base form, then calls central package chooser sub_569020.
TESPackage *__usercall sub_468670@<eax>(double a1@<st1>, double a2@<st0>, Actor *a3)
{
  TESForm *ActorBaseForm; // eax
  TESForm::FormFlags *p_flags; // eax
  TESForm *v6; // eax

  if ( !a3 ) /*0x46867a*/
    return (TESPackage *)sub_4686B7(0); /*0x46867a*/
  ActorBaseForm = Actor_GetActorBaseForm(a3, 1); /*0x468680*/
  if ( !ActorBaseForm ) /*0x468687*/
    return (TESPackage *)sub_4686B7(0); /*0x468687*/
  p_flags = &ActorBaseForm[4].member.flags; /*0x468689*/
  if ( !p_flags ) /*0x46868c*/
    return (TESPackage *)sub_4686B7(0); /*0x46868c*/
  if ( !*((_DWORD *)p_flags + 5) && !*((_DWORD *)p_flags + 4) ) /*0x468693*/
  {
    v6 = Actor_GetActorBaseForm(a3, 0); /*0x46869b*/
    if ( !v6 ) /*0x4686a2*/
      return (TESPackage *)sub_4686B7(0); /*0x4686a2*/
    p_flags = &v6[4].member.flags; /*0x4686a4*/
  }
  if ( p_flags ) /*0x4686a9*/
    return sub_569020((int *)p_flags + 4, a1, a2, (TESObjectREFR *)a3); /*0x4686b6*/
  return (TESPackage *)sub_4686B7(0); /*0x4686b4*/
}
