// Player attack-animation admission uses Oblivion behavior and preserves a compiler-specific register/FPU ABI. Bow admission requires equipped AMMO and an AttackBow group with the required Start/Attach/Hold/Release/End note contract. Rejects a new bow attack while action 5 (AttackBowArrowAttached) remains at phase <=3; an accepted bow group commits action 4 (AttackBow). This path does not automatically reload: later attack input must admit another AttackBow sequence.
char __userpurge PlayerCharacter_TryStartAttackAnimGroup@<al>(
        PlayerCharacter *a1@<ecx>,
        BSAnimGroupSequence *a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        double a5@<st1>,
        double a6@<st0>,
        unsigned int groupID)
{
  SInt32 BaseCalcAVi; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  int v12; // edx
  int v13; // ecx
  ActorAnimData *v14; // eax
  ActorAnimData *v15; // ebp
  unsigned int v16; // edi
  EntryData *v17; // eax
  unsigned __int16 AnimGroup; // ax
  unsigned int v19; // edi
  LowProcess *process; // ebx
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  char v22; // al

  BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, (int)a2, a4, (int)a1, 0x1A); /*0x5f48d5*/
  if ( Calc_MasteryFromSkill(BaseCalcAVi) == kSkillMastery_Novice /*0x5f4909*/
    && MobileObject_IsJumpSuppressedByFallAnimOrInAir((MobileObject *)a1)
    || !a1->super.super.super.process
    || !a1->super.super.super.process->GetWeaponOut(a1->super.super.super.process) )
  {
    return 0; /*0x5f48f2*/
  }
  v10 = sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)a1); /*0x5f4918*/
  v11 = v10; /*0x5f491f*/
  if ( v10 ) /*0x5f4921*/
  {
    do /*0x5f4937*/
    {
      v12 = v10[1]; /*0x5f4923*/
      if ( !v12 && !*v10 ) /*0x5f492a*/
        break; /*0x5f492c*/
      v13 = *v10; /*0x5f492e*/
      v10 = (_DWORD *)v10[1]; /*0x5f4930*/
      *(_DWORD *)(v13 + 4) = a1; /*0x5f4934*/
    }
    while ( v12 ); /*0x5f4937*/
  }
  BSSimpleList_Clear(v11); /*0x5f493b*/
  FormHeapFree((unsigned int)v11); /*0x5f4941*/
  if ( !((unsigned __int8 (__thiscall *)(LowProcess *))a1->super.super.super.process->Unk_B6)(a1->super.super.super.process) ) /*0x5f4954*/
    return 0; /*0x5f4954*/
  if ( a1->super.super.super.process ) /*0x5f495a*/
  {
    if ( ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetCurrentAction)(a1->super.super.super.process) == 5 ) /*0x5f4970*/
    {
      if ( a1->vtbl->super.super.super.GetAnimData(a1) ) /*0x5f497c*/
      {
        v14 = a1->vtbl->super.super.super.GetAnimData(a1); /*0x5f498e*/
        if ( ActorAnimData_GetSlotActionState(v14, 3) <= 3 ) /*0x5f499a*/
          return 0; /*0x5f499a*/
      }
    }
  }
  if ( a1->super.super.super.process->Unk_4D(a1->super.super.super.process) /*0x5f49ba*/
    && !a1->super.super.super.process->GetEquippedAmmoData(a1->super.super.super.process, 1) )
  {
    return 0; /*0x5f49c1*/
  }
  v15 = a1->vtbl->super.super.super.GetAnimData(a1); /*0x5f49d4*/
  if ( !v15 ) /*0x5f49d8*/
    return 0; /*0x5f49d8*/
  if ( ((int (__thiscall *)(PlayerCharacter *, int, int))a1->vtbl->super.GetActorValue)(a1, 0x2F, a3) > 0 ) /*0x5f49ee*/
    MagicTarget_RemoveActiveEffectsByCode(&a1->super.super.magicTarget, 0x49564E49u, 0);// Ordinary attack-start path removes all 'INVI' effects before starting the attack. The bow Release tail repeats this at 0x5FD4F2, catching invisibility regained between attack start and release or unusual entry paths. /*0x5f49fa*/
  if ( !a1->super.super.super.process->GetEquippedLightData(a1->super.super.super.process, 1) /*0x5f4a1f*/
    || a1->super.super.super.process->GetEquippedWeaponData(a1->super.super.super.process, 1) )
  {
    v16 = groupID; /*0x5f4a35*/
  }
  else
  {
    v16 = groupID; /*0x5f4a25*/
    if ( groupID == 0x14 ) /*0x5f4a2c*/
      v16 = 0x15; /*0x5f4a2e*/
  }
  if ( a1->super.super.super.process->Unk_4E(a1->super.super.super.process) ) /*0x5f4a44*/
  {
    v16 = 0x15; /*0x5f4a57*/
    v17 = a1->super.super.super.process->GetEquippedWeaponData(a1->super.super.super.process, 1); /*0x5f4a5c*/
    sub_5ED5A0(a1, (char)v15, 0x15, a5, a6, (int)v17); /*0x5f4a61*/
  }
  AnimGroup = Actor_LoadAnimGroup_((Actor *)a1, v16, 0, 0); /*0x5f4a6d*/
  v19 = AnimGroup; /*0x5f4a72*/
  if ( !AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroup) ) /*0x5f4a76*/
    return 0; /*0x5f4ad4*/
  ActorAnimData_PlayAnimGroup(v15, v19, 1u, 0xFFFFFFFF); /*0x5f4a8a*/
  process = a1->super.super.super.process; /*0x5f4a8f*/
  NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v15, 3u); /*0x5f4a96*/
  v22 = ((int (__thiscall *)(LowProcess *, BSAnimGroupSequence *))process->Unk_4D)(process, NormalizedSequenceSlot); /*0x5f4aa6*/
  Actor_SetCurrentActionWithBowVisualCleanup(
    (Actor *)a1,
    (ActorCurrentAction)(v22 != 0 ? kActorCurrentAction_AttackBow : kActorCurrentAction_Attack),
    a2);
  ((void (__thiscall *)(PlayerCharacter *, unsigned int))a1->vtbl->super.Unk_E9)(a1, v19); /*0x5f4ac7*/
  return 1; /*0x5f48f4*/
}
