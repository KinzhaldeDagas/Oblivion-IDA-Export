BSExtraDataVtbl *__thiscall sub_5F4E10(Actor *this, char a2)
{
  BSExtraDataVtbl *result; // eax
  ActorAnimData *v4; // ebp
  unsigned int v5; // esi
  unsigned __int16 AnimGroup; // ax
  unsigned int v7; // ebx
  BSAnimGroupSequence *NormalizedSequenceSlot; // [esp-10h] [ebp-14h]
  BSAnimGroupSequence *v9; // [esp-10h] [ebp-14h]

  if ( !this->members.super.process /*0x5f4e29*/
    || (result = (BSExtraDataVtbl *)((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process),
        result != (BSExtraDataVtbl *)8) )
  {
    result = (BSExtraDataVtbl *)TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x5f4e32*/
    v4 = (ActorAnimData *)result; /*0x5f4e37*/
    if ( result ) /*0x5f4e3b*/
    {
      if ( this->members.super.process ) /*0x5f4e41*/
      {
        result = (BSExtraDataVtbl *)this->vtbl->super.super.GetSleepState((TESObjectREFR *)this); /*0x5f4e55*/
        if ( !result ) /*0x5f4e59*/
        {
          v5 = (a2 != 0) + 0x1C; /*0x5f4e71*/
          AnimGroup = Actor_LoadAnimGroup_(this, v5, 0, 0); /*0x5f4e74*/
          v7 = AnimGroup; /*0x5f4e79*/
          if ( AnimKey_GetGroupID(AnimGroup) != v5 && AnimKey_GetGroupID(v7) == 0x1C ) /*0x5f4e95*/
            v5 = 0x1C; /*0x5f4e97*/
          result = (BSExtraDataVtbl *)AnimKey_GetGroupID(v7); /*0x5f4e9a*/
          if ( result == (BSExtraDataVtbl *)v5 ) /*0x5f4ea4*/
          {
            ActorAnimData_PlayAnimGroup(v4, v7, 1u, 0xFFFFFFFF); /*0x5f4ead*/
            if ( v5 == 0x1D ) /*0x5f4eb5*/
            {
              NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v4, dword_B106FC); /*0x5f4ec5*/
              Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_Attack, NormalizedSequenceSlot); /*0x5f4ec8*/
            }
            else
            {
              v9 = ActorAnimData_GetNormalizedSequenceSlot(v4, *(_DWORD *)(0x24 * v5 + 0xB102E8)); /*0x5f4edc*/
              Actor_SetCurrentActionWithBowVisualCleanup(this, kActorCurrentAction_Block, v9); /*0x5f4ee1*/
            }
            return (BSExtraDataVtbl *)((int (__thiscall *)(Actor *, unsigned int, int))this->vtbl->Unk_E9)(this, v7, 1); /*0x5f4ef3*/
          }
        }
      }
    }
  }
  return result; /*0x5f4ef8*/
}
