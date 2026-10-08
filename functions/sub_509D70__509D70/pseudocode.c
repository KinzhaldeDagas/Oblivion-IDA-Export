// CustomAnimSupport decode: debug/dump path for ActorAnimData active slots. Prints slot names and decodes active keys via AnimKey helpers; used by path-specific state diagnostics.
char __usercall sub_509D70@<al>(int a1@<edi>, int a2, int a3, void *a4)
{
  Actor *v4; // esi
  int ProcessLevel; // eax
  LowProcess *process; // edi
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  int CurrentAction; // eax
  struct Concurrency::details::ScheduleGroupBase *AnonymousScheduleGroup; // eax
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  const char *v14; // eax
  int v15; // eax
  TESObjectREFR *v16; // eax
  char *Name; // eax
  int v18; // eax
  int v19; // eax
  TESObjectREFR *v20; // eax
  char *v21; // eax
  ActorAnimData *v22; // ebx
  int v23; // eax
  int i; // edi
  unsigned __int16 AnimGroupFromField8Value; // ax
  unsigned int v26; // esi
  int MovementPrefix; // eax
  UInt32 v28; // eax
  const char *v29; // eax
  UInt32 v30; // ebx
  const char *v31; // eax
  const char *v33; // [esp-10h] [ebp-14h]
  int v34; // [esp-Ch] [ebp-10h]
  int v35; // [esp-Ch] [ebp-10h]
  const char *v36; // [esp-Ch] [ebp-10h]
  int v38; // [esp-8h] [ebp-Ch]

  if ( !a4 /*0x509d9b*/
    || !(*(int (__thiscall **)(void *))(*(_DWORD *)a4 + 0x164))(a4)
    || !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a4 + 0x190))(a4) )
  {
    return 1; /*0x50a04c*/
  }
  v4 = (Actor *)OblivionDynamicCast( /*0x509dbb*/
                  a4,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( v4 )
  {
    Interface_ConsolePrint("--- Actor Variables -----------------------------"); /*0x509dcd*/
    if ( Actor::GetProcessLevel(v4) != 0xFFFFFFFF )
    {
      ProcessLevel = Actor::GetProcessLevel(v4); /*0x509de3*/
      Interface_ConsolePrint("Process Level: %s", *(const char **)(4 * ProcessLevel + 0xB14998));
    }
    process = v4->members.super.process; /*0x509dfd*/
    v7 = ((int (__thiscall *)(LowProcess *, int))process->GetWeaponOut)(process, a1); /*0x509e0a*/
    v8 = ((int (__thiscall *)(LowProcess *, _DWORD))process->GetCombatMode)(process, v7); /*0x509e1a*/
    Interface_ConsolePrint("Wants Weapon Drawn %d, Weapon Drawn %d", v8, v38); /*0x509e25*/
    if ( Actor_GetCurrentAction(v4) != 0xFFFFFFFF )
    {
      CurrentAction = Actor_GetCurrentAction(v4); /*0x509e3b*/
      Interface_ConsolePrint("Animation Action: %s", *(const char **)(4 * CurrentAction + 0xB14C80));
    }
    AnonymousScheduleGroup = Actor::GetDeadState((Concurrency::details::SchedulerBase *)v4); /*0x509e57*/
    Interface_ConsolePrint("Life State: %s", *(const char **)(4 * (_DWORD)AnonymousScheduleGroup + 0xB09EF8));
    v11 = ((int (__thiscall *)(LowProcess *))v4->members.super.process->GetSitSleepState)(v4->members.super.process); /*0x509e7c*/
    Interface_ConsolePrint("Sit/Sleep State: %s", *(const char **)(4 * v11 + 0xB09F10));
    v12 = ((int (__thiscall *)(LowProcess *))v4->members.super.process->GetKnockedState)(v4->members.super.process); /*0x509e9e*/
    Interface_ConsolePrint("Knock State: %s", *(const char **)(4 * v12 + 0xB09F3C));
    v13 = ((unsigned __int8 (__thiscall *)(Actor *))v4->vtbl->Unk_9E)(v4) == 0; /*0x509ec1*/
    v14 = (const char *)&off_A3DAE8; /*0x509ec3*/
    if ( v13 ) /*0x509ec8*/
      v14 = "No"; /*0x509eca*/
    Interface_ConsolePrint("Has RagDoll: %s", v14);
    if ( v4->vtbl->IsInCombat(v4, 1) ) /*0x509ee9*/
    {
      v15 = (int)v4->vtbl->GetCombatTarget(v4); /*0x509ef9*/
      v16 = (TESObjectREFR *)((int (__thiscall *)(Actor *, _DWORD))v4->vtbl->GetCombatTarget)( /*0x509f09*/
                               v4,
                               *(_DWORD *)(v15 + 0xC));
      Name = TESObjectREFR_GetName(v16); /*0x509f0d*/
      Interface_ConsolePrint("In Combat with \"%s\" (%08x)", Name, v34); /*0x509f18*/
    }
    sub_5E2E00(v4); /*0x509f22*/
    if ( v18 ) /*0x509f29*/
    {
      sub_5E2E00(v4); /*0x509f2d*/
      v35 = *(_DWORD *)(v19 + 0xC); /*0x509f35*/
      sub_5E2E00(v4); /*0x509f38*/
      v21 = TESObjectREFR_GetName(v20); /*0x509f3f*/
      Interface_ConsolePrint("Current package target \"%s\" (%08x)", v21, v35); /*0x509f4a*/
    }
  }
  v22 = (ActorAnimData *)(*(int (__thiscall **)(void *))(*(_DWORD *)a4 + 0x164))(a4); /*0x509f5e*/
  if ( v22 )
  {
    Interface_ConsolePrint("--- Animation -------------------------------"); /*0x509f6d*/
    v23 = ActorAnimData_GetPendingKFModelCount(v22); /*0x509f77*/
    Interface_ConsolePrint("Anims Loading: %d", v23);
    for ( i = 0; i < 5; ++i ) /*0x509f8a*/
    {
      if ( ActorAnimData_GetNormalizedSequenceSlot(v22, i) ) /*0x509f93*/
      {
        AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v22, i); /*0x509f9f*/
        v26 = AnimGroupFromField8Value; /*0x509fa4*/
        v36 = *(const char **)(0x24 * AnimKey_GetGroupID(AnimGroupFromField8Value) + 0xB102E0); /*0x509fba*/
        v33 = *(const char **)(4 * AnimKey_GetWeaponPrefix(v26) + 0xB102C8); /*0x509fcb*/
        MovementPrefix = AnimKey_GetMovementPrefix(v26); /*0x509fcd*/
        Interface_ConsolePrint( /*0x509fea*/
          "%s -> %s/%s/%s",
          *(const char **)(4 * i + 0xB108EC),
          *(const char **)(4 * MovementPrefix + 0xB102B8),
          v33,
          v36);
      }
    }
    v28 = v22->unkC8[1]; /*0x509ffa*/
    if ( v28 )
    {
      v29 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 0x24) + 0xD4))(*(_DWORD *)(v28 + 0x24)); /*0x50a011*/
      Interface_ConsolePrint("IdleAnim: %s", v29);
    }
    v30 = v22->unkC8[2]; /*0x50a021*/
    if ( v30 )
    {
      v31 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v30 + 0x24) + 0xD4))(*(_DWORD *)(v30 + 0x24)); /*0x50a036*/
      Interface_ConsolePrint("IdleAnim Queued: %s", v31);// DumpActorAnimationState command site. Diagnostic command path for printing actor animation state.
    }
  }
  return 1; /*0x50a04a*/
}
