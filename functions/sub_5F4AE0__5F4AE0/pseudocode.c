// Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
char __thiscall Actor_UpdateBlockingState(Actor *this, char shouldBlock)
{
  char v2; // bl
  bool IsBlocking; // bl
  ActorAnimData *v6; // eax
  ActorAnimData *v7; // ebp
  bool v8; // bl
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  BSAnimGroupSequence *v10; // edi
  bool v11; // bl
  int v12; // eax
  unsigned __int16 AnimGroupFromField8Value; // ax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // ax
  int v16; // eax
  unsigned __int8 v17; // al
  ActorAnimData *AnimDataByPerspective; // eax
  unsigned int AnimGroup; // edi
  BSAnimGroupSequence *v20; // eax
  BSAnimGroupSequence *v21; // eax
  float shouldBlocka; // [esp+18h] [ebp+4h]

  v2 = shouldBlock; /*0x5f4ae1*/
  if ( shouldBlock /*0x5f4b0a*/
    && !this->members.super.process->GetEquippedShieldData(this->members.super.process, 1)
    && !this->members.super.process->GetWeaponOut(this->members.super.process) )
  {
    if ( this->vtbl->GetCombatController(this) ) /*0x5f4b1a*/
    {
      IsBlocking = Actor_IsBlocking(this); /*0x5f4b27*/
      *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = IsBlocking; /*0x5f4b35*/
    }
    return 0; /*0x5f4b3c*/
  }
  v6 = this->vtbl->super.super.GetAnimData(this); /*0x5f4b4a*/
  v7 = v6; /*0x5f4b4c*/
  if ( !v6 ) /*0x5f4b50*/
  {
    if ( this->vtbl->GetCombatController(this) ) /*0x5f4b5c*/
    {
      v8 = this->members.super.process /*0x5f4b7d*/
        && ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process) == 6;
      *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = v8; /*0x5f4b8b*/
    }
    return 0; /*0x5f4b93*/
  }
  NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v6, 1u); /*0x5f4b9b*/
  v10 = NormalizedSequenceSlot; /*0x5f4ba0*/
  if ( NormalizedSequenceSlot && *((_DWORD *)NormalizedSequenceSlot + 0x11) != 1 ) /*0x5f4baa*/
  {
    if ( this->vtbl->GetCombatController(this) ) /*0x5f4bb6*/
    {
      v11 = Actor_IsBlocking(this); /*0x5f4bc3*/
      *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = v11; /*0x5f4bd1*/
    }
    return 0; /*0x5f4bda*/
  }
  if ( !this->members.super.process /*0x5f4bf3*/
    || (v12 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process),
        v12 == 0xFFFFFFFF) )
  {
    v2 = 1; /*0x5f4c53*/
  }
  else if ( v12 == 3 ) /*0x5f4bf8*/
  {
    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v7, 3); /*0x5f4bfd*/
    if ( AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value) ) /*0x5f4c03*/
    {
      v14 = ActorAnimData_GetAnimGroupFromField8Value(v7, 3); /*0x5f4c13*/
      if ( AnimGroup_UsesPowerOrCastNoteTemplate(v14) ) /*0x5f4c19*/
      {
        v2 = 0; /*0x5f4c25*/
      }
      else if ( ActorAnimData_GetSlotActionState(v7, 3) < 2 ) /*0x5f4c35*/
      {
        v2 = 0; /*0x5f4c37*/
      }
    }
    else
    {
      v15 = ActorAnimData_GetAnimGroupFromField8Value(v7, 1); /*0x5f4c3d*/
      if ( AnimGroup_UsesPowerOrCastNoteTemplate(v15) ) /*0x5f4c43*/
        v2 = 0; /*0x5f4c4f*/
    }
  }
  if ( !this->members.super.process /*0x5f4c78*/
    || (v16 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process),
        v16 == 0xFFFFFFFF)
    || v16 == 3 )
  {
    if ( !shouldBlock || !v2 ) /*0x5f4d4b*/
      return 0; /*0x5f4d4b*/
    AnimGroup = Actor_LoadAnimGroup_(this, 0x1Bu, 0, 0); /*0x5f4d62*/
    if ( ActorAnimData_GetAnimGroupFromField8Value(v7, 1) == (_WORD)AnimGroup ) /*0x5f4d6f*/
    {
      v20 = ActorAnimData_GetNormalizedSequenceSlot(v7, 1u); /*0x5f4d73*/
      Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_Block, v20); /*0x5f4d7d*/
      if ( this->vtbl->GetCombatController(this) ) /*0x5f4d8c*/
      {
        *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = shouldBlock; /*0x5f4da5*/
        return 1; /*0x5f4dab*/
      }
    }
    else
    {
      ActorAnimData_PlayAnimGroup(v7, AnimGroup, 1u, 0xFFFFFFFF); /*0x5f4db3*/
      v21 = ActorAnimData_GetNormalizedSequenceSlot(v7, 1u); /*0x5f4dbc*/
      Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_Block, v21); /*0x5f4dc6*/
      ((void (__thiscall *)(Actor *, unsigned int, int))this->vtbl->Unk_E9)(this, AnimGroup, 1); /*0x5f4dd8*/
      if ( this->vtbl->GetCombatController(this) ) /*0x5f4de4*/
        *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = shouldBlock; /*0x5f4dfa*/
    }
    return 1; /*0x5f4e00*/
  }
  else
  {
    if ( v16 != 6 || shouldBlock || !ActorAnimData_GetAnimGroupFromField8Value(v7, 1) ) /*0x5f4c96*/
      return 0; /*0x5f4c9e*/
    shouldBlocka = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B06538); /*0x5f4cb2*/
    if ( v10 ) /*0x5f4cb6*/
    {
      v17 = *(_BYTE *)(*((_DWORD *)v10 + 0x1A) + 0x21); /*0x5f4cbb*/
      if ( v17 ) /*0x5f4cc0*/
        shouldBlocka = (double)v17 / dbl_A3AA50; /*0x5f4cd3*/
    }
    ActorAnimData_ClearSlot(v7, 1, shouldBlocka); /*0x5f4ce3*/
    if ( this == (Actor *)reference ) /*0x5f4cf0*/
    {
      AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x5f4cfe*/
      ActorAnimData_ClearSlot(AnimDataByPerspective, 1, shouldBlocka); /*0x5f4d05*/
    }
    Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_None, 0); /*0x5f4d10*/
    if ( this->vtbl->GetCombatController(this) ) /*0x5f4d1f*/
      *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = 0; /*0x5f4d31*/
    return 1; /*0x5f4d38*/
  }
}
