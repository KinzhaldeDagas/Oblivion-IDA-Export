char __userpurge sub_5F48D0@<al>(
        PlayerCharacter *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        double a5@<st1>,
        double a6@<st0>,
        int a7)
{
  int BaseCalcAVi; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  int v12; // edx
  int v13; // ecx
  ActorAnimData *v14; // eax
  ActorAnimData *v15; // ebp
  int v16; // edi
  int v17; // eax
  unsigned __int16 AnimGroup; // ax
  _DWORD *v19; // edi
  LowProcess *process; // ebx
  PowerListEntry *v21; // eax
  char v22; // al

  BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, a2, a4, (int)a1, 0x1A);
  if ( !Calc_MasteryFromSkill(BaseCalcAVi) && sub_5EC180((MobileObject *)a1)
    || !a1->super.super.super.process
    || !a1->super.super.super.process->GetWeaponOut(a1->super.super.super.process) )
  {
    return 0;
  }
  v10 = sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)a1);
  v11 = v10;
  if ( v10 )
  {
    do
    {
      v12 = v10[1];
      if ( !v12 && !*v10 )
        break;
      v13 = *v10;
      v10 = (_DWORD *)v10[1];
      *(_DWORD *)(v13 + 4) = a1;
    }
    while ( v12 );
  }
  BSSimpleList_Clear(v11);
  FormHeapFree((unsigned int)v11);
  if ( !((unsigned __int8 (__thiscall *)(LowProcess *))a1->super.super.super.process->Unk_B6)(a1->super.super.super.process) )
    return 0;
  if ( a1->super.super.super.process )
  {
    if ( ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->GetCurrentAction)(a1->super.super.super.process) == 5 )
    {
      if ( a1->vtbl->super.super.super.GetAnimData((TESObjectREFR *)a1) )
      {
        v14 = a1->vtbl->super.super.super.GetAnimData((TESObjectREFR *)a1);
        if ( ActorAnimData_GetSomethingFromField8Value(v14, 3) <= 3 )
          return 0;
      }
    }
  }
  if ( a1->super.super.super.process->Unk_4D(a1->super.super.super.process)
    && !a1->super.super.super.process->GetEquippedAmmoData(a1->super.super.super.process, 1) )
  {
    return 0;
  }
  v15 = a1->vtbl->super.super.super.GetAnimData((TESObjectREFR *)a1);
  if ( !v15 )
    return 0;
  if ( ((int (__thiscall *)(PlayerCharacter *, int, int))a1->vtbl->super.GetActorValue)(a1, 0x2F, a3) > 0 )
    sub_6A24B0((int)&a1->super.super.magicTarget, (int)a1, 0x49564E49, 0);
  if ( !a1->super.super.super.process->GetEquippedLightData(a1->super.super.super.process, 1)
    || a1->super.super.super.process->GetEquippedWeaponData(a1->super.super.super.process, 1) )
  {
    v16 = a7;
  }
  else
  {
    v16 = a7;
    if ( a7 == 0x14 )
      v16 = 0x15;
  }
  if ( a1->super.super.super.process->Unk_4E(a1->super.super.super.process) )
  {
    v16 = 0x15;
    v17 = (int)a1->super.super.super.process->GetEquippedWeaponData(a1->super.super.super.process, 1);
    sub_5ED5A0(a1, (char)v15, 0x15, a5, a6, v17);
  }
  AnimGroup = Actor_LoadAnimGroup_((TESObjectREFR *)a1, v16, 0, 0);
  v19 = (_DWORD *)AnimGroup;
  if ( !sub_51AC80(AnimGroup) )
    return 0;
  ActorAnimData_PlayAnimGroup((int)v15, v19, 1, 0xFFFFFFFF);
  process = a1->super.super.super.process;
  v21 = sub_4706E0(v15, 3);
  v22 = ((int (__thiscall *)(LowProcess *, PowerListEntry *))process->Unk_4D)(process, v21);
  HighPRocess_DoAction_____(a1, v22 != 0 ? 4 : 2, a2);
  ((void (__thiscall *)(PlayerCharacter *, _DWORD *))a1->vtbl->super.Unk_E9)(a1, v19);
  return 1;
}
