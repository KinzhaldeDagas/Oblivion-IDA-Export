void __thiscall sub_675D50(ActorProcessManager *this, PlayerCharacter *a2, char a3)
{
  LowProcess *process; // esi
  LowProcess_vtbl *v4; // edi
  int v5; // eax
  ActorProcessManager *v6; // esi
  int i; // ebx
  Actor *ListHead; // eax
  Actor *j; // edi
  Actor *vtbl; // esi
  TESPackage *CurrentPackage; // eax
  int v12; // [esp+0h] [ebp-14h]

  if ( a2 ) /*0x675d5f*/
  {
    if ( a2->super.super.super.process ) /*0x675d61*/
    {
      process = a2->super.super.super.process; /*0x675d67*/
      v4 = process->__vftable; /*0x675d6a*/
      v5 = ((int (__thiscall *)(LowProcess *))process->Unk_110)(process); /*0x675d74*/
      ((void (__thiscall *)(LowProcess *, int))v4->Unk_111)(process, -v5); /*0x675d81*/
      if ( a2 == reference ) /*0x675d8a*/
        LOBYTE(reference->unk738) = 0; /*0x675d8c*/
    }
  }
  v6 = this; /*0x675d93*/
  for ( i = 0; i < 4; ++i ) /*0x675d97*/
  {
    if ( i ) /*0x675da2*/
    {
      if ( i == 1 ) /*0x675daa*/
      {
        ListHead = ActorProcessManager_GetListHead(v6, 1); /*0x675dad*/
      }
      else if ( i == 2 ) /*0x675db2*/
      {
        ListHead = ActorProcessManager_GetListHead(v6, 2); /*0x675db5*/
      }
      else
      {
        ListHead = ActorProcessManager_GetListHead(v6, 3); /*0x675dbb*/
      }
    }
    else
    {
      ListHead = ActorProcessManager_GetListHead(v6, 0); /*0x675da5*/
    }
    for ( j = ActorList_ReturnHead((ActorList *)ListHead); j; v6 = this ) /*0x675dcb*/
    {
      if ( !j->vtbl ) /*0x675dd1*/
        break; /*0x675dd5*/
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))j->vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) ) /*0x675de3*/
      {
        vtbl = (Actor *)j->vtbl; /*0x675ded*/
        if ( j->vtbl ) /*0x675ded*/
        {
          if ( vtbl->vtbl->IsInCombat(vtbl, 1) ) /*0x675dff*/
          {
            if ( i > 1 ) /*0x675e0a*/
              sub_5EAE70(vtbl, i, (int)j, v12); /*0x675e19*/
            else
              ((void (__thiscall *)(Actor *, PlayerCharacter *))vtbl->vtbl->Unk_D0)(vtbl, a2); /*0x675e15*/
          }
          else if ( !a3 && sub_5E6BA0(vtbl) ) /*0x675e29*/
          {
            if ( Actor::GetCurrentPackage(vtbl)->members.target ) /*0x675e39*/
            {
              CurrentPackage = Actor::GetCurrentPackage(vtbl); /*0x675e41*/
              if ( (PlayerCharacter *)sub_569E60(CurrentPackage->members.target).form == a2 || !a2 ) /*0x675e54*/
              {
                sub_5EAE70(vtbl, i, (int)j, v12); /*0x675e58*/
                vtbl->members.super.process->Unk_126(vtbl->members.super.process); /*0x675e68*/
              }
            }
          }
        }
      }
      j = *(Actor **)&j->members.super.super.super.type; /*0x675e6a*/
    }
  }
}
