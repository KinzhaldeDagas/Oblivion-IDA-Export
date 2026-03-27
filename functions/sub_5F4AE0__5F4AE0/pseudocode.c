char __userpurge sub_5F4AE0@<al>(Actor *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, char a5)
{
  char v5; // bl
  bool IsBlocking; // bl
  ActorAnimData *v9; // eax
  ActorAnimData *v10; // ebp
  bool v11; // bl
  PowerListEntry *v12; // eax
  PowerListEntry *v13; // edi
  bool v14; // bl
  int v15; // eax
  __int16 AnimGroupFromField8Value; // ax
  __int16 v17; // ax
  __int16 v18; // ax
  int v19; // eax
  unsigned __int8 v20; // al
  _DWORD *AnimData; // eax
  _DWORD *AnimGroup; // edi
  PowerListEntry *v23; // eax
  PowerListEntry *v24; // eax
  float v25; // [esp+18h] [ebp+4h]

  v5 = a5;
  if ( a5
    && !this->members.super.process->GetEquippedShieldData(this->members.super.process, 1)
    && !this->members.super.process->GetWeaponOut(this->members.super.process) )
  {
    if ( ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->GetCombatController)(
           this,
           a4,
           a3,
           st5_0) )
    {
      IsBlocking = Actor_IsBlocking(this);
      *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = IsBlocking;
    }
    return 0;
  }
  v9 = (ActorAnimData *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->super.super.GetAnimData)(
                          this,
                          a4,
                          a3,
                          st5_0);
  v10 = v9;
  if ( !v9 )
  {
    if ( this->vtbl->GetCombatController(this) )
    {
      v11 = this->members.super.process
         && ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process) == 6;
      *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = v11;
    }
    return 0;
  }
  v12 = sub_4706E0(v9, 1);
  v13 = v12;
  if ( v12 && v12[8].next != (PowerListEntry *)1 )
  {
    if ( this->vtbl->GetCombatController(this) )
    {
      v14 = Actor_IsBlocking(this);
      *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = v14;
    }
    return 0;
  }
  if ( !this->members.super.process
    || (v15 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process),
        v15 == 0xFFFFFFFF) )
  {
    v5 = 1;
  }
  else if ( v15 == 3 )
  {
    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v10, 3);
    if ( sub_51AC80(AnimGroupFromField8Value) )
    {
      v17 = ActorAnimData_GetAnimGroupFromField8Value(v10, 3);
      if ( sub_51ACC0(v17) )
      {
        v5 = 0;
      }
      else if ( ActorAnimData_GetSomethingFromField8Value(v10, 3) < 2 )
      {
        v5 = 0;
      }
    }
    else
    {
      v18 = ActorAnimData_GetAnimGroupFromField8Value(v10, 1);
      if ( sub_51ACC0(v18) )
        v5 = 0;
    }
  }
  if ( !this->members.super.process
    || (v19 = ((int (__thiscall *)(LowProcess *))this->members.super.process->GetCurrentAction)(this->members.super.process),
        v19 == 0xFFFFFFFF)
    || v19 == 3 )
  {
    if ( !a5 || !v5 )
      return 0;
    AnimGroup = (_DWORD *)(unsigned __int16)Actor_LoadAnimGroup_((TESObjectREFR *)this, 0x1B, 0, 0);
    if ( ActorAnimData_GetAnimGroupFromField8Value(v10, 1) == (_WORD)AnimGroup )
    {
      v23 = sub_4706E0(v10, 1);
      HighPRocess_DoAction_____((PlayerCharacter *)this, 6, (int)v23);
      if ( this->vtbl->GetCombatController(this) )
      {
        *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = a5;
        return 1;
      }
    }
    else
    {
      ActorAnimData_PlayAnimGroup((int)v10, AnimGroup, 1, 0xFFFFFFFF);
      v24 = sub_4706E0(v10, 1);
      HighPRocess_DoAction_____((PlayerCharacter *)this, 6, (int)v24);
      ((void (__thiscall *)(Actor *, _DWORD *, int))this->vtbl->Unk_E9)(this, AnimGroup, 1);
      if ( this->vtbl->GetCombatController(this) )
        *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = a5;
    }
    return 1;
  }
  else
  {
    if ( v19 != 6 || a5 || !ActorAnimData_GetAnimGroupFromField8Value(v10, 1) )
      return 0;
    v25 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B06538);
    if ( v13 )
    {
      v20 = BYTE1(v13[0xD].data[4].power);
      if ( v20 )
        v25 = (double)v20 / dbl_A3AA50;
    }
    sub_470FC0(v10, 1, v25);
    if ( this == (Actor *)TESDataHandler_g_PlayerRef )
    {
      AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
      sub_470FC0(AnimData, 1, v25);
    }
    HighPRocess_DoAction_____((PlayerCharacter *)this, 0xFFFFFFFF, 0);
    if ( this->vtbl->GetCombatController(this) )
      *((_BYTE *)this->vtbl->GetCombatController(this) + 0x49) = 0;
    return 1;
  }
}
