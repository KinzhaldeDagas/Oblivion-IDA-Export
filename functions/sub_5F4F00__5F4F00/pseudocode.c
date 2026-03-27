BSExtraDataVtbl *__thiscall sub_5F4F00(Actor *this)
{
  BSExtraDataVtbl *result; // eax
  ActorAnimData *v6; // ebx
  unsigned __int16 AnimGroup; // ax
  _DWORD *v8; // edi
  PowerListEntry *v9; // eax
  _DWORD *AnimData; // eax

  if ( !this->members.super.process
    || (result = (BSExtraDataVtbl *)((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process),
        result != (BSExtraDataVtbl *)8) )
  {
    result = TESObjectREFR_GetAnimData(this);
    v6 = (ActorAnimData *)result;
    if ( result )
    {
      if ( this->members.super.process )
      {
        result = (BSExtraDataVtbl *)this->vtbl->super.super.GetSleepState((TESObjectREFR *)this);
        if ( !result )
        {
          AnimGroup = Actor_LoadAnimGroup_((TESObjectREFR *)this, 0x1E, 0, 0);
          v8 = (_DWORD *)AnimGroup;
          if ( sub_51AA00(AnimGroup) == 0x1E )
          {
            ActorAnimData_PlayAnimGroup((int)v6, v8, 1, 0xFFFFFFFF);
            v9 = sub_4706E0(v6, 3);
            HighPRocess_DoAction_____((PlayerCharacter *)this, 7, (int)v9);
            return (BSExtraDataVtbl *)((int (__thiscall *)(Actor *, _DWORD *, int))this->vtbl->Unk_E9)(this, v8, 1);
          }
          else
          {
            result = (BSExtraDataVtbl *)sub_470FC0(v6, 3, 0.0);
            if ( this == (Actor *)TESDataHandler_g_PlayerRef )
            {
              AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
              return (BSExtraDataVtbl *)sub_470FC0(AnimData, 3, 0.0);
            }
          }
        }
      }
    }
  }
  return result;
}
