bool __userpurge sub_5F7900@<al>(
        PlayerCharacter *a1@<ecx>,
        char a2@<dil>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        PlayerCharacter *a6)
{
  PlayerCharacter *v8; // edi
  ActorAnimData *v9; // eax
  ActorAnimData *v10; // eax
  __int16 AnimGroupFromField8Value; // ax
  PlayerCharacter *v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // eax

  if ( a1 == TESDataHandler_g_PlayerRef )
    return 0;
  v8 = a6;
  if ( !a6 )
    v8 = (PlayerCharacter *)((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetActionTarget)(a1->super.super.super.process);
  if ( a1->vtbl->super.super.super.GetSleepState((TESObjectREFR *)a1) )
    return 0;
  if ( !((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetActionTarget)(a1->super.super.super.process) )
    return 0;
  if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetActionTarget)(a1->super.super.super.process) == a1 )
    return 0;
  v9 = a1->vtbl->super.super.super.GetAnimData((TESObjectREFR *)a1);
  if ( sub_472EA0(v9) )
    return 0;
  if ( !a1->super.super.super.process->Unk_31(a1->super.super.super.process) )
    return 0;
  if ( a1->vtbl->super.IsInCombat((Actor *)a1, 1) )
    return 0;
  v10 = a1->vtbl->super.super.super.GetAnimData((TESObjectREFR *)a1);
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v10, 3);
  if ( sub_51AC80(AnimGroupFromField8Value) )
    return 0;
  if ( Actor_IsSneaking(TESDataHandler_g_PlayerRef) )
  {
    v12 = TESDataHandler_g_PlayerRef;
    if ( v8 == TESDataHandler_g_PlayerRef )
    {
      LOBYTE(a6) = 1;
      LOBYTE(v13) = PlayerCharacter_IsPlayerInCombat(v12, 0);
      if ( Actor_GetDetectionLevel(
             (TESObjectREFR *)a1,
             (int)v8,
             st5_0,
             a4,
             a5,
             0,
             (TESObjectREFR *)TESDataHandler_g_PlayerRef,
             &a6,
             v13,
             0,
             0,
             a2) <= 0 )
        return 0;
    }
  }
  v14 = &a1->super.super.super.process->__vftable;
  v15 = v14[2];
  if ( v15 )
  {
    switch ( *(_BYTE *)(v15 + 0x20) )
    {
      case 2:
      case 6:
        return !v14 || ((*(int (__thiscall **)(_DWORD *))(*v14 + 0x2C0))(v14) & 0xF) == 0;
      case 8:
      case 0x12:
        return 0;
      default:
        return 1;
    }
  }
  return 1;
}
