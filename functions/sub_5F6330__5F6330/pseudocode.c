void __userpurge sub_5F6330(
        Actor *a1@<ecx>,
        TESObjectREFR *a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        PlayerCharacter *a6)
{
  PlayerCharacter *v7; // ecx
  PlayerCharacter *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // ebp
  _DWORD *v11; // ebx
  bool v12; // zf
  int *v13; // eax
  _DWORD *v14; // edi
  _DWORD *v15; // ebx
  int **v16; // ecx
  LowProcess *process; // ecx
  int v18; // eax
  char *Name; // eax
  LowProcess *v20; // ecx

  if ( !Actor_IsGuardClass(a1) ) /*0x5f633a*/
    goto LABEL_6; /*0x5f633a*/
  v7 = reference; /*0x5f633c*/
  if ( LOBYTE(reference->unk738) ) /*0x5f6342*/
  {
    if ( !a1->vtbl->IsInCombat(a1, 1) ) /*0x5f635b*/
    {
LABEL_6:
      v7 = reference; /*0x5f6383*/
      goto LABEL_7; /*0x5f6383*/
    }
    v8 = (PlayerCharacter *)a1->members.super.process->GetUnk02C(a1->members.super.process); /*0x5f6368*/
    v7 = reference; /*0x5f636a*/
    if ( v8 == reference ) /*0x5f6372*/
    {
      ((void (__thiscall *)(LowProcess *, unsigned int))v7->super.super.super.process->Unk_111)( /*0x5f6381*/
        v7->super.super.super.process,
        0xFFFFFFFF);
      goto LABEL_6; /*0x5f6381*/
    }
  }
LABEL_7:
  if ( !a6 || a6 == v7 ) /*0x5f6393*/
    sub_65DEF0((unsigned int *)v7, (int)a1); /*0x5f6396*/
  Actor_UpdateBlockingState(a1, 0); /*0x5f63a2*/
  ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_E5)(a1, 0); /*0x5f63b3*/
  v9 = CombatGroupManager_BuildFriendlyEntryList((int *)&qword_B3BB2C[0xA1], (PlayerCharacter *)a1, 4); /*0x5f63c2*/
  v10 = v9; /*0x5f63c6*/
  if ( v9 ) /*0x5f63c8*/
  {
    do /*0x5f6403*/
    {
      v11 = (_DWORD *)*v9; /*0x5f63d0*/
      v12 = *v9 == 0; /*0x5f63d2*/
      v9 = (_DWORD *)v9[1]; /*0x5f63d4*/
      if ( !v12 ) /*0x5f63d7*/
      {
        if ( *v11 ) /*0x5f63d9*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v11 + 0x330))(*v11) ) /*0x5f63e7*/
          {
            v13 = (int *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v11 + 0x330))(*v11); /*0x5f63f8*/
            sub_615010(v13, a1); /*0x5f63fc*/
          }
        }
      }
    }
    while ( v9 ); /*0x5f6403*/
    BSSimpleList_Clear(v10); /*0x5f6407*/
    FormHeapFree((unsigned int)v10); /*0x5f640d*/
  }
  v14 = sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)a1); /*0x5f6422*/
  v15 = v14; /*0x5f6426*/
  while ( v14 ) /*0x5f6428*/
  {
    v16 = (int **)*v14; /*0x5f6430*/
    if ( !*v14 ) /*0x5f6430*/
      break; /*0x5f6434*/
    v14 = (_DWORD *)v14[1]; /*0x5f6436*/
    sub_67B670(v16, (int)a1); /*0x5f643a*/
  }
  if ( v15[1] ) /*0x5f6443*/
  {
    do /*0x5f6464*/
    {
      v14 = *(_DWORD **)(v15[1] + 4); /*0x5f6453*/
      FormHeapFree(v15[1]); /*0x5f6457*/
      v15[1] = v14; /*0x5f6461*/
    }
    while ( v14 ); /*0x5f6464*/
  }
  *v15 = 0; /*0x5f6467*/
  FormHeapFree((unsigned int)v15); /*0x5f646d*/
  process = a1->members.super.process; /*0x5f6472*/
  if ( process ) /*0x5f647a*/
  {
    if ( ((int (__thiscall *)(LowProcess *))process->Unk_5C)(process) ) /*0x5f6484*/
      a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0); /*0x5f6497*/
  }
  if ( a1->members.super.process ) /*0x5f6499*/
    ((void (__thiscall *)(LowProcess *, _DWORD))a1->members.super.process->Unk_B1)(a1->members.super.process, 0); /*0x5f64ac*/
  if ( a1->vtbl->GetCombatController(a1) ) /*0x5f64b8*/
  {
    v18 = ((int (__thiscall *)(Actor *, PlayerCharacter *))a1->vtbl->GetCombatController)(a1, a6); /*0x5f64cd*/
    LOBYTE(v15) = sub_61DB00(v18, a3, a4, a5, a2); /*0x5f64d8*/
    if ( !((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->super.super.IsDead)(a1) ) /*0x5f64e4*/
    {
      if ( (_BYTE)v15 ) /*0x5f64ec*/
      {
        if ( unk_B3B908 ) /*0x5f64ee*/
        {
          Name = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x5f64f8*/
          Interface_ConsolePrint("%.20s stops combat.", Name); /*0x5f6503*/
        }
        sub_5EAE70(a1, (int)v15, (int)v14, 0); /*0x5f650d*/
      }
    }
  }
  v20 = a1->members.super.process; /*0x5f6512*/
  if ( v20 ) /*0x5f651a*/
  {
    v20->SetUnk01E(v20, 0); /*0x5f6526*/
    a1->members.super.process->Unk_128(a1->members.super.process); /*0x5f6535*/
  }
}
