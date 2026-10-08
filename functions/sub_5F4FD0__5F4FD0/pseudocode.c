ActorAnimData *__thiscall Actor_PlayKnockdownAnimGroup(Actor *this)
{
  ActorAnimData *result; // eax
  ActorAnimData *v3; // ebx
  unsigned __int16 AnimGroup; // ax
  unsigned int v5; // edi
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax

  result = TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x5f4fd4*/
  v3 = result; /*0x5f4fd9*/
  if ( result ) /*0x5f4fdd*/
  {
    if ( this->members.super.process ) /*0x5f4fdf*/
    {
      result = (ActorAnimData *)this->vtbl->super.super.GetSleepState((TESObjectREFR *)this); /*0x5f4fef*/
      if ( !result ) /*0x5f4ff3*/
      {
        AnimGroup = Actor_LoadAnimGroup_(this, 0x1Fu, 0, 0); /*0x5f4ffc*/
        v5 = AnimGroup; /*0x5f5001*/
        result = (ActorAnimData *)AnimKey_GetGroupID(AnimGroup); /*0x5f5005*/
        if ( result == (ActorAnimData *)0x1F ) /*0x5f5010*/
        {
          ActorAnimData_PlayAnimGroup(v3, v5, 1u, 0xFFFFFFFF); /*0x5f5019*/
          NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v3, 0); /*0x5f5022*/
          Actor_SetCurrentActionWithBowVisualCleanup(this, (ActorCurrentAction)8u, NormalizedSequenceSlot); /*0x5f502c*/
          return (ActorAnimData *)((int (__thiscall *)(Actor *, unsigned int, int))this->vtbl->Unk_E9)(this, v5, 1); /*0x5f503e*/
        }
      }
    }
  }
  return result; /*0x5f5041*/
}
