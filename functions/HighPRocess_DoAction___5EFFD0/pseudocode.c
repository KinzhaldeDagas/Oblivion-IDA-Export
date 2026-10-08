// Void Actor action-transition wrapper. Performs transition-specific bow/held-arrow visual cleanup, then commits action and sequence through process vtable +0x2D8. It has no success/result contract; callers/plugins must not consume EAX, so Crossbow's UInt32 HighProcessDoActionFn typedef is incorrect. Meaningful current-action state is HighProcess-only: HighProcess +0x2D0/+0x2D8 read/store +0x1F4/+0x1F8, while MiddleHigh returns None (-1) and its setter is a no-op; Crossbow's process-level-0 action filter therefore matches Oblivion. External Crossbow state-machine contrast: Equip-as-Cocked/first-shot-loaded is plugin policy, repeated action 4 while Reloading can flip state to Cocked and rebuild controller tracking, and interruption/cancellation actions are not modeled, leaving stale Reloading/Cocked phases.
void __thiscall Actor_SetCurrentActionWithBowVisualCleanup(
        Actor *this,
        ActorCurrentAction action,
        BSAnimGroupSequence *sequence)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  ActorAnimData *AnimData; // eax
  ActorAnimData *AnimDataByPerspective; // eax
  ActorSkinInfo *v10; // eax
  PlayerCharacter *v11; // ecx
  ActorSkinInfo *SkinInfoByPerspective; // edi
  int v13; // ebx
  NiNode *v14; // eax

  if ( this->members.super.process ) /*0x5effd4*/
    v4 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process); /*0x5effe5*/
  else
    v4 = 0xFFFFFFFF; /*0x5effe9*/
  v5 = v4 - 3; /*0x5effec*/
  if ( !v5 ) /*0x5efff3*/
  {
    if ( !this->members.super.process ) /*0x5f0096*/
      return; /*0x5f0096*/
    if ( !this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1) /*0x5f00cc*/
      || LOBYTE(this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1)->type[6].vtbl) != 5 )
    {
      goto LABEL_36; /*0x5f00cc*/
    }
    goto LABEL_20; /*0x5f00cc*/
  }
  v6 = v5 - 2; /*0x5efff9*/
  if ( !v6 ) /*0x5efffc*/
  {
LABEL_20:
    if ( !this->members.super.process ) /*0x5f00d6*/
      return; /*0x5f00d6*/
    if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process) == 5 /*0x5f00f3*/
      && action != kActorCurrentAction_AttackFollowThrough )
    {
      goto LABEL_27;                            // Leaving current action 5 (AttackBowArrowAttached) for anything except action 3 enters attached-arrow visual cleanup. /*0x5f00f3*/
    }
    if ( !this->members.super.process ) /*0x5f00f9*/
      return; /*0x5f00f9*/
    if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process) == 3 /*0x5f011d*/
      && action != 0xFFFFFFFF
      && action != kActorCurrentAction_Attack ) // Leaving action 3 (AttackFollowThrough) also performs cleanup unless next action is None (-1) or Attack (2).
    {
LABEL_27:
      v10 = this->vtbl->super.super.GetActiveSkinInfo(this); /*0x5f012b*/
      v11 = reference; /*0x5f012d*/
      SkinInfoByPerspective = v10; /*0x5f0135*/
      v13 = 1; /*0x5f0137*/
      if ( this != (Actor *)reference ) /*0x5f013c*/
        goto LABEL_33; /*0x5f013c*/
      v13 = 2; /*0x5f013e*/
      while ( 1 ) /*0x5f014b*/
      {
        if ( this == (Actor *)v11 && v13 == 1 ) /*0x5f0152*/
          SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)v11, v11->isThirdPerson); /*0x5f0168*/
LABEL_33:
        v14 = this->members.super.process->GetArrowAttachTargetNode(this->members.super.process, SkinInfoByPerspective); /*0x5f016a*/
        if ( v14 ) /*0x5f017a*/
          NiTObjectArray_ClearAndRelease(&v14->members.children);// Defensive interruption/post-follow-through cleanup inside Actor_SetCurrentActionWithBowVisualCleanup: clears all children of the perspective-correct cached ArrowBone when action 5 leaves to anything except action 3, or bow action 3 leaves to anything except None/Attack. Normal action-5 -> action-3 Release already cleared the held visual at 0x5FD23A; this is not the ordinary per-release boundary. /*0x5f0182*/
        if ( !--v13 ) /*0x5f018a*/
          break; /*0x5f018a*/
        v11 = reference; /*0x5f0145*/
      }
    }
    goto LABEL_36; /*0x5f018a*/
  }
  if ( v6 == 1 ) /*0x5f0005*/
  {
    if ( action == kActorCurrentAction_Attack ) /*0x5f0012*/
    {
      if ( !sequence ) /*0x5f001b*/
      {
LABEL_14:
        AnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x5f004b*/
        if ( AnimData ) /*0x5f0054*/
        {
          ActorAnimData_ClearSlot(AnimData, 1, 0.0); /*0x5f0064*/
          if ( this == (Actor *)reference ) /*0x5f0071*/
          {
            AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x5f0079*/
            ActorAnimData_ClearSlot(AnimDataByPerspective, 1, 0.0); /*0x5f0088*/
          }
        }
        goto LABEL_36; /*0x5f008d*/
      }
      v7 = TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)sequence + 0x1A)) == 0x1D; /*0x5f0025*/
    }
    else
    {
      v7 = action == kActorCurrentAction_Block; /*0x5f0014*/
    }
    if ( v7 /*0x5f0045*/
      || sequence
      && *(_DWORD *)(0x24 * TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)sequence + 0x1A)) + 0xB102E8) == 1 )
    {
      goto LABEL_36; /*0x5f0045*/
    }
    goto LABEL_14; /*0x5f0045*/
  }
LABEL_36:
  if ( this->members.super.process ) /*0x5f018e*/
    this->members.super.process->SetCurrentAction(this->members.super.process, action, sequence);// Commit requested current-action ID and associated sequence after transition-specific visual cleanup. /*0x5f01a5*/
}
