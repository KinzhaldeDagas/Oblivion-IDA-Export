ActorAnimData *__thiscall Actor_PlayStaggerAnimGroup(Actor *this)
{
  ActorAnimData *result; // eax
  ActorAnimData *v3; // ebx
  unsigned __int16 AnimGroup; // ax
  unsigned int v5; // edi
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  ActorAnimData *AnimDataByPerspective; // eax

  if ( !this->members.super.process /*0x5f4f19*/
    || (result = (ActorAnimData *)((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process),
        result != (ActorAnimData *)8) )
  {
    result = TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x5f4f22*/
    v3 = result; /*0x5f4f27*/
    if ( result ) /*0x5f4f2b*/
    {
      if ( this->members.super.process ) /*0x5f4f31*/
      {
        result = (ActorAnimData *)this->vtbl->super.super.GetSleepState((TESObjectREFR *)this); /*0x5f4f45*/
        if ( !result ) /*0x5f4f49*/
        {
          AnimGroup = Actor_LoadAnimGroup_(this, 0x1Eu, 0, 0); /*0x5f4f52*/
          v5 = AnimGroup; /*0x5f4f57*/
          if ( AnimKey_GetGroupID(AnimGroup) == 0x1E ) /*0x5f4f66*/
          {
            ActorAnimData_PlayAnimGroup(v3, v5, 1u, 0xFFFFFFFF); /*0x5f4f6f*/
            NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v3, 3u); /*0x5f4f78*/
            Actor_SetCurrentActionWithBowVisualCleanup( /*0x5f4f82*/
              this,
              kActorCurrentAction_UnequipWeapon|kActorCurrentAction_Block,
              NormalizedSequenceSlot);
            return (ActorAnimData *)((int (__thiscall *)(Actor *, unsigned int, int))this->vtbl->Unk_E9)(this, v5, 1); /*0x5f4f94*/
          }
          else
          {
            result = (ActorAnimData *)ActorAnimData_ClearSlot(v3, 3, 0.0); /*0x5f4fa4*/
            if ( this == (Actor *)reference ) /*0x5f4fb1*/
            {
              AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x5f4fb5*/
              return (ActorAnimData *)ActorAnimData_ClearSlot(AnimDataByPerspective, 3, 0.0); /*0x5f4fc4*/
            }
          }
        }
      }
    }
  }
  return result; /*0x5f4f98*/
}
