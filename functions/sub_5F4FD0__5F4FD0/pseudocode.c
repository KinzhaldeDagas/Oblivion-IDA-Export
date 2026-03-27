BSExtraDataVtbl *__thiscall sub_5F4FD0(Actor *this)
{
  BSExtraDataVtbl *result; // eax
  ActorAnimData *v6; // ebx
  unsigned __int16 AnimGroup; // ax
  _DWORD *v8; // edi
  PowerListEntry *v9; // eax

  result = TESObjectREFR_GetAnimData(this);
  v6 = (ActorAnimData *)result;
  if ( result )
  {
    if ( this->members.super.process )
    {
      result = (BSExtraDataVtbl *)this->vtbl->super.super.GetSleepState((TESObjectREFR *)this);
      if ( !result )
      {
        AnimGroup = Actor_LoadAnimGroup_((TESObjectREFR *)this, 0x1F, 0, 0);
        v8 = (_DWORD *)AnimGroup;
        result = (BSExtraDataVtbl *)sub_51AA00(AnimGroup);
        if ( result == (BSExtraDataVtbl *)0x1F )
        {
          ActorAnimData_PlayAnimGroup((int)v6, v8, 1, 0xFFFFFFFF);
          v9 = sub_4706E0(v6, 0);
          HighPRocess_DoAction_____((PlayerCharacter *)this, 8, (int)v9);
          return (BSExtraDataVtbl *)((int (__thiscall *)(Actor *, _DWORD *, int))this->vtbl->Unk_E9)(this, v8, 1);
        }
      }
    }
  }
  return result;
}
