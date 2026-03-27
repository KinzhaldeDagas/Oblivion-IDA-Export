void __userpurge sub_5F6330(
        Actor *a1@<ecx>,
        TESObjectREFR *a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        PlayerCharacter *a6)
{
  PlayerCharacter *v8; // ecx
  PlayerCharacter *v9; // eax
  _DWORD *v10; // edi
  _DWORD *v11; // ebp
  _DWORD *v12; // ebx
  bool v13; // zf
  _DWORD *v14; // eax
  _DWORD *v15; // edi
  _DWORD *v16; // ebx
  _DWORD *v17; // ecx
  LowProcess *process; // ecx
  int v19; // eax
  char *Name; // eax
  LowProcess *v21; // ecx

  if ( !sub_5E6C60(a1) )
    goto LABEL_6;
  v8 = TESDataHandler_g_PlayerRef;
  if ( LOBYTE(TESDataHandler_g_PlayerRef->unk738) )
  {
    if ( !a1->vtbl->IsInCombat(a1, 1) )
    {
LABEL_6:
      v8 = TESDataHandler_g_PlayerRef;
      goto LABEL_7;
    }
    v9 = (PlayerCharacter *)a1->members.super.process->GetUnk02C(a1->members.super.process);
    v8 = TESDataHandler_g_PlayerRef;
    if ( v9 == TESDataHandler_g_PlayerRef )
    {
      ((void (__thiscall *)(LowProcess *, unsigned int))v8->super.super.super.process->Unk_111)(
        v8->super.super.super.process,
        0xFFFFFFFF);
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( !a6 || a6 == v8 )
    sub_65DEF0(v8, (int)a1);
  sub_5F4AE0(a1, a3, a4, a5, 0);
  ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_E5)(a1, 0);
  v10 = sub_67C880(&dword_B3BDB0, (int)a1, 4);
  v11 = v10;
  if ( v10 )
  {
    do
    {
      v12 = (_DWORD *)*v10;
      v13 = *v10 == 0;
      v10 = (_DWORD *)v10[1];
      if ( !v13 )
      {
        if ( *v12 )
        {
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v12 + 0x330))(*v12) )
          {
            v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v12 + 0x330))(*v12);
            sub_615010(v14, (int)a1);
          }
        }
      }
    }
    while ( v10 );
    BSSimpleList_Clear(v11);
    FormHeapFree((unsigned int)v11);
  }
  v15 = sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)a1);
  v16 = v15;
  while ( v15 )
  {
    v17 = (_DWORD *)*v15;
    if ( !*v15 )
      break;
    v15 = (_DWORD *)v15[1];
    sub_67B670(v17, (int)a1);
  }
  if ( v16[1] )
  {
    do
    {
      v15 = *(_DWORD **)(v16[1] + 4);
      FormHeapFree(v16[1]);
      v16[1] = v15;
    }
    while ( v15 );
  }
  *v16 = 0;
  FormHeapFree((unsigned int)v16);
  process = a1->members.super.process;
  if ( process )
  {
    if ( ((int (__thiscall *)(LowProcess *))process->Unk_5C)(process) )
      a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0);
  }
  if ( a1->members.super.process )
    ((void (__thiscall *)(LowProcess *, _DWORD))a1->members.super.process->Unk_B1)(a1->members.super.process, 0);
  if ( a1->vtbl->GetCombatController(a1) )
  {
    v19 = ((int (__thiscall *)(Actor *, PlayerCharacter *))a1->vtbl->GetCombatController)(a1, a6);
    LOBYTE(v16) = sub_61DB00(v19, a3, a4, a5, a2);
    if ( !((unsigned __int8 (__thiscall *)(Actor *))a1->vtbl->super.super.IsDead)(a1) )
    {
      if ( (_BYTE)v16 )
      {
        if ( byte_B3B908 )
        {
          Name = TESObjectREFR_GetName((TESObjectREFR *)a1);
          Interface_ConsolePrint("%.20s stops combat.", Name);
        }
        sub_5EAE70(a1, (int)v16, (int)v15, 0);
      }
    }
  }
  v21 = a1->members.super.process;
  if ( v21 )
  {
    v21->SetUnk01E(v21, 0);
    a1->members.super.process->Unk_128(a1->members.super.process);
  }
}
