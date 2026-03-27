BSExtraDataVtbl *__thiscall sub_5F4E10(Actor *this, char a2)
{
  BSExtraDataVtbl *result; // eax
  ActorAnimData *v7; // ebp
  int v8; // esi
  unsigned __int16 AnimGroup; // ax
  _DWORD *v10; // ebx
  PowerListEntry *v11; // [esp-10h] [ebp-14h]
  PowerListEntry *v12; // [esp-10h] [ebp-14h]

  if ( !this->members.super.process
    || (result = (BSExtraDataVtbl *)((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process),
        result != (BSExtraDataVtbl *)8) )
  {
    result = TESObjectREFR_GetAnimData(this);
    v7 = (ActorAnimData *)result;
    if ( result )
    {
      if ( this->members.super.process )
      {
        result = (BSExtraDataVtbl *)this->vtbl->super.super.GetSleepState((TESObjectREFR *)this);
        if ( !result )
        {
          v8 = (a2 != 0) + 0x1C;
          AnimGroup = Actor_LoadAnimGroup_((TESObjectREFR *)this, v8, 0, 0);
          v10 = (_DWORD *)AnimGroup;
          if ( sub_51AA00(AnimGroup) != v8 && sub_51AA00((unsigned __int8)v10) == 0x1C )
            v8 = 0x1C;
          result = (BSExtraDataVtbl *)sub_51AA00((unsigned __int8)v10);
          if ( result == (BSExtraDataVtbl *)v8 )
          {
            ActorAnimData_PlayAnimGroup((int)v7, v10, 1, 0xFFFFFFFF);
            if ( v8 == 0x1D )
            {
              v11 = sub_4706E0(v7, dword_B106FC);
              HighPRocess_DoAction_____((PlayerCharacter *)this, 2, (int)v11);
            }
            else
            {
              v12 = sub_4706E0(v7, *(_DWORD *)(0x24 * v8 + 0xB102E8));
              HighPRocess_DoAction_____((PlayerCharacter *)this, 6, (int)v12);
            }
            return (BSExtraDataVtbl *)((int (__thiscall *)(Actor *, _DWORD *, int))this->vtbl->Unk_E9)(this, v10, 1);
          }
        }
      }
    }
  }
  return result;
}
