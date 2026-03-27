char __usercall sub_509D70@<al>(int a1@<edi>, int a2, int a3, void *a4)
{
  Actor *v9; // esi
  int ProcessLevel; // eax
  LowProcess *process; // edi
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  int CurrentAction; // eax
  struct Concurrency::details::ScheduleGroupBase *AnonymousScheduleGroup; // eax
  int v16; // eax
  int v17; // eax
  bool v18; // zf
  const char *v19; // eax
  int v20; // eax
  TESObjectREFR *v21; // eax
  char *Name; // eax
  TESObjectREFR *v23; // eax
  char *v24; // eax
  ActorAnimData *v25; // ebx
  int v26; // eax
  int i; // edi
  unsigned __int16 AnimGroupFromField8Value; // ax
  unsigned int v29; // esi
  unsigned int v30; // eax
  UInt32 v31; // eax
  const char *v32; // eax
  UInt32 v33; // ebx
  const char *v34; // eax
  const char *v36; // [esp-10h] [ebp-14h]
  int v37; // [esp-Ch] [ebp-10h]
  int v38; // [esp-Ch] [ebp-10h]
  const char *v39; // [esp-Ch] [ebp-10h]
  int v41; // [esp-8h] [ebp-Ch]

  if ( !a4
    || !(*(int (__thiscall **)(void *))(*(_DWORD *)a4 + 0x164))(a4)
    || !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a4 + 0x190))(a4) )
  {
    return 1;
  }
  v9 = (Actor *)OblivionDynamicCast(
                  a4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( v9 )
  {
    Interface_ConsolePrint("--- Actor Variables -----------------------------");
    if ( Actor::GetProcessLevel(v9) != 0xFFFFFFFF )
    {
      ProcessLevel = Actor::GetProcessLevel(v9);
      Interface_ConsolePrint("Process Level: %s", *(const char **)(4 * ProcessLevel + 0xB14998));
    }
    process = v9->members.super.process;
    v12 = ((int (__thiscall *)(LowProcess *, int))process->GetWeaponOut)(process, a1);
    v13 = ((int (__thiscall *)(LowProcess *, _DWORD))process->GetCombatMode)(process, v12);
    Interface_ConsolePrint("Wants Weapon Drawn %d, Weapon Drawn %d", v13, v41);
    if ( Actor_GetCurrentAction(v9) != 0xFFFFFFFF )
    {
      CurrentAction = Actor_GetCurrentAction(v9);
      Interface_ConsolePrint("Animation Action: %s", *(const char **)(4 * CurrentAction + 0xB14C80));
    }
    AnonymousScheduleGroup = Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v9);
    Interface_ConsolePrint("Life State: %s", *(const char **)(4 * (_DWORD)AnonymousScheduleGroup + 0xB09EF8));
    v16 = ((int (__thiscall *)(LowProcess *))v9->members.super.process->GetSitSleepState)(v9->members.super.process);
    Interface_ConsolePrint("Sit/Sleep State: %s", *(const char **)(4 * v16 + 0xB09F10));
    v17 = ((int (__thiscall *)(LowProcess *))v9->members.super.process->GetKnockedState)(v9->members.super.process);
    Interface_ConsolePrint("Knock State: %s", *(const char **)(4 * v17 + 0xB09F3C));
    v18 = ((unsigned __int8 (__thiscall *)(Actor *))v9->vtbl->Unk_9E)(v9) == 0;
    v19 = (const char *)&off_A3DAE8;
    if ( v18 )
      v19 = "No";
    Interface_ConsolePrint("Has RagDoll: %s", v19);
    if ( v9->vtbl->IsInCombat(v9, 1) )
    {
      v20 = (int)v9->vtbl->GetCombatTarget(v9);
      v21 = (TESObjectREFR *)((int (__thiscall *)(Actor *, _DWORD))v9->vtbl->GetCombatTarget)(
                               v9,
                               *(_DWORD *)(v20 + 0xC));
      Name = TESObjectREFR_GetName(v21);
      Interface_ConsolePrint("In Combat with \"%s\" (%08x)", Name, v37);
    }
    if ( sub_5E2E00(v9) )
    {
      v38 = *(_DWORD *)(sub_5E2E00(v9) + 0xC);
      v23 = (TESObjectREFR *)sub_5E2E00(v9);
      v24 = TESObjectREFR_GetName(v23);
      Interface_ConsolePrint("Current package target \"%s\" (%08x)", v24, v38);
    }
  }
  v25 = (ActorAnimData *)(*(int (__thiscall **)(void *))(*(_DWORD *)a4 + 0x164))(a4);
  if ( v25 )
  {
    Interface_ConsolePrint("--- Animation -------------------------------");
    v26 = sub_4712B0(v25);
    Interface_ConsolePrint("Anims Loading: %d", v26);
    for ( i = 0; i < 5; ++i )
    {
      if ( sub_4706E0(v25, i) )
      {
        AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v25, i);
        v29 = AnimGroupFromField8Value;
        v39 = *(const char **)(0x24 * sub_51AA00(AnimGroupFromField8Value) + 0xB102E0);
        v36 = *(const char **)(4 * sub_51A9E0(v29) + 0xB102C8);
        v30 = sub_51A9D0(v29);
        Interface_ConsolePrint(
          "%s -> %s/%s/%s",
          *(const char **)(4 * i + 0xB108EC),
          *(const char **)(4 * v30 + 0xB102B8),
          v36,
          v39);
      }
    }
    v31 = v25->unkC8[1];
    if ( v31 )
    {
      v32 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v31 + 0x24) + 0xD4))(*(_DWORD *)(v31 + 0x24));
      Interface_ConsolePrint("IdleAnim: %s", v32);
    }
    v33 = v25->unkC8[2];
    if ( v33 )
    {
      v34 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v33 + 0x24) + 0xD4))(*(_DWORD *)(v33 + 0x24));
      Interface_ConsolePrint("IdleAnim Queued: %s", v34);
    }
  }
  return 1;
}
