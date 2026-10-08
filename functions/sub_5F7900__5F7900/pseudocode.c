bool __userpurge sub_5F7900@<al>(
        PlayerCharacter *a1@<ecx>,
        char a2@<dil>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        PlayerCharacter *a6)
{
  PlayerCharacter *v8; // edi
  ActorAnimData *v9; // eax
  ActorAnimData *v10; // eax
  __int16 AnimGroupFromField8Value; // ax
  TESObjectREFR ***v12; // ecx
  int v13; // eax
  int v14; // eax
  LowProcess *process; // ecx
  TESPackage *editorPackage; // eax

  if ( a1 == reference ) /*0x5f7909*/
    return 0; /*0x5f790b*/
  v8 = a6; /*0x5f7912*/
  if ( !a6 ) /*0x5f7918*/
    v8 = (PlayerCharacter *)((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetActionTarget)(a1->super.super.super.process); /*0x5f7927*/
  if ( a1->vtbl->super.super.super.GetSleepState((TESObjectREFR *)a1) ) /*0x5f7933*/
    return 0; /*0x5f7933*/
  if ( !((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetActionTarget)(a1->super.super.super.process) ) /*0x5f7948*/
    return 0; /*0x5f7948*/
  if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetActionTarget)(a1->super.super.super.process) == a1 ) /*0x5f7961*/
    return 0; /*0x5f7961*/
  v9 = a1->vtbl->super.super.super.GetAnimData(a1); /*0x5f7971*/
  if ( ActorAnimData_IsIdleInactive(v9) ) /*0x5f7975*/
    return 0; /*0x5f7975*/
  if ( !a1->super.super.super.process->Unk_31(a1->super.super.super.process) ) /*0x5f798d*/
    return 0; /*0x5f798d*/
  if ( a1->vtbl->super.IsInCombat((Actor *)a1, 1) ) /*0x5f79a3*/
    return 0; /*0x5f79a3*/
  v10 = a1->vtbl->super.super.super.GetAnimData(a1); /*0x5f79b9*/
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v10, 3); /*0x5f79bd*/
  if ( AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value) ) /*0x5f79c3*/
    return 0; /*0x5f79c3*/
  if ( Actor_IsSneaking(reference) ) /*0x5f79d5*/
  {
    v12 = (TESObjectREFR ***)reference; /*0x5f79de*/
    if ( v8 == reference ) /*0x5f79e6*/
    {
      LOBYTE(a6) = 1; /*0x5f79ee*/
      LOBYTE(v13) = PlayerCharacter_IsPlayerInCombat(v12, 0); /*0x5f79f3*/
      Actor_GetDetectionLevelAgainstActor( /*0x5f7a09*/
        (TESObjectREFR *)a1,
        (int)v8,
        st5_0,
        a4,
        a5,
        0,
        (TESObjectREFR *)reference,
        &a6,
        v13,
        0,
        0,
        a2);
      if ( v14 <= 0 ) /*0x5f7a10*/
        return 0; /*0x5f7a36*/
    }
  }
  process = a1->super.super.super.process; /*0x5f7a12*/
  editorPackage = process->editorPackage; /*0x5f7a15*/
  if ( editorPackage ) /*0x5f7a1a*/
  {
    switch ( editorPackage->members.type ) /*0x5f7a2f*/
    {
      case 2u: /*0x5f7a2f*/
      case 6u: /*0x5f7a2f*/
        return !process || (process->GetMovementFlags(process) & 0xF) == 0; /*0x5f7a4d*/
      case 8u: /*0x5f7a2f*/
      case 0x12u: /*0x5f7a2f*/
        return 0;
      default:
        return 1;
    }
  }
  return 1; /*0x5f790d*/
}
