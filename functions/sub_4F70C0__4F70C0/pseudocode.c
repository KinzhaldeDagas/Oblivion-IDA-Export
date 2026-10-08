// GetInFaction_Eval (index 71 / opcode 0x1047): the Faction parameter (typeID 0x11) is present when TESActorBaseData_GetFactionRank != -1. This returns a membership predicate, not the numeric rank.
char __cdecl GetInFaction_Eval(TESObjectREFR *subject, TESForm *param1, TESForm *param2, double *value)
{
  TESForm *v4; // edi
  TESForm *ActorBaseForm; // eax
  int v6; // ecx
  double v7; // st7

  *value = 0.0; /*0x4f70cc*/
  v4 = 0; /*0x4f70cf*/
  if ( param1 ) /*0x4f70d3*/
  {
    if ( param1->member.type == kFormType_Faction ) /*0x4f70d9*/
      v4 = param1; /*0x4f70db*/
  }
  if ( subject == (TESObjectREFR *)unk_B3619C && v4 == (TESForm *)unk_B36198 ) /*0x4f70ef*/
  {
    *value = unk_B361A0; /*0x4f70f7*/
LABEL_17:
    if ( MEMORY[0xB361AC] ) /*0x4f7169*/
      Interface_ConsolePrint("GetInFaction >> %0.2f", *value); /*0x4f717f*/
    return 1; /*0x4f717f*/
  }
  if ( subject && subject->vtbl->IsActor(subject) ) /*0x4f710d*/
  {
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)subject, 1); /*0x4f7117*/
    if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID ) /*0x4f7122*/
      ActorBaseForm = Actor_GetActorBaseForm((Actor *)subject, 0); /*0x4f712c*/
    if ( ActorBaseForm ) /*0x4f7133*/
    {
      if ( v4 ) /*0x4f7137*/
      {
        LOBYTE(v6) = subject == (TESObjectREFR *)reference; /*0x4f713f*/
        if ( TESActorBaseData_GetFactionRank((int *)&ActorBaseForm[1].member.refID, (int)v4, v6) != 0xFFFFFFFF ) /*0x4f714f*/
          *value = 1.0; /*0x4f7153*/
      }
    }
    v7 = *value; /*0x4f7155*/
    unk_B3619C = (int)subject; /*0x4f7157*/
    unk_B361A0 = v7; /*0x4f715d*/
    unk_B36198 = (int)v4; /*0x4f7163*/
    goto LABEL_17; /*0x4f7163*/
  }
  return 1; /*0x4f7187*/
}
