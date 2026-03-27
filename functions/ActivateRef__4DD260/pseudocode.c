char __userpurge ActivateRef@<al>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        int a6,
        int a7,
        int a8)
{
  bool v8; // bl
  TESObjectREFRVtbl *vtbl; // ecx
  int v11; // ebx
  TESForm *v12; // eax
  CHAR *NameForForm; // eax
  TESForm *v14; // eax
  const char *v15; // eax
  int v17; // eax
  int v18; // eax
  TeleportData *Teleport; // ebx
  TESObjectCELL *v20; // eax
  TESObjectREFR **v21; // ebx
  int v22; // edx
  const char *v23; // [esp-8h] [ebp-120h]
  const char *v24; // [esp-4h] [ebp-11Ch]
  char Format[260]; // [esp+10h] [ebp-108h] BYREF

  v8 = 0;
  byte_B35F04 = 0;
  if ( a5 )
  {
    if ( a5->vtbl->IsActor(a5) )
    {
      vtbl = a5[1].vtbl;
      if ( vtbl )
      {
        if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) )
          v8 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a5[1].vtbl->super.super.InitializeComponent + 0x11F))(a5[1].vtbl) == 4;
      }
    }
  }
  if ( (a1->member.super.flags & 0x2000) != 0 )
    return 1;
  if ( !a5 )
    goto LABEL_20;
  if ( a5->vtbl->IsActor(a5)
    && ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[2].super.Unk_0C)(a5)
    && a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Activator )
  {
    return 0;
  }
  if ( v8 )
    goto LABEL_20;
  if ( sub_579440() == a1 )
  {
    v11 = *(_DWORD *)(0xC
                    * *(unsigned __int8 *)(((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetBaseForm)(
                                             a1,
                                             a4,
                                             a3,
                                             a2)
                                         + 4)
                    + 0xB05E04);
    v12 = a1->vtbl->GetBaseForm(a1);
    NameForForm = TESFullName_GetNameForForm(v12);
    v14 = (TESForm *)((int (__thiscall *)(TESObjectREFR *, int, CHAR *))a5->vtbl->GetBaseForm)(a5, v11, NameForForm);
    v15 = TESFullName_GetNameForForm(v14);
    _sprintf(Format, "'%s' activated %s '%s'", v15, v23, v24);
    Interface_ConsolePrint(Format);
  }
  if ( a5 == (TESObjectREFR *)TESDataHandler_g_PlayerRef && TESDataHandler_g_PlayerRef->pad10D[0]
    || sub_41F830(&a1->member.baseExtraList, 1) )
  {
LABEL_20:
    v17 = (unsigned __int8)a1->vtbl->GetBaseForm(a1)->member.type - 0x18;
    if ( v17 )
    {
      v18 = v17 - 4;
      if ( !v18 || v18 == 2 )
        return 0;
    }
    else
    {
      Teleport = ExtraDataList_GetTeleport(&a1->member.baseExtraList);
      if ( Teleport )
      {
        if ( a5 == (TESObjectREFR *)TESDataHandler_g_PlayerRef
          && ((int (__thiscall *)(LowProcess *))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_11E)(TESDataHandler_g_PlayerRef->super.super.super.process) != 4 )
        {
          v20 = sub_42B460(&Teleport->linkedDoor);
          v21 = (TESObjectREFR **)v20;
          if ( v20 )
          {
            if ( TESObjectCELL_IsInterior(v20) )
              sub_4CB040(v21);
          }
        }
      }
    }
    if ( !((unsigned __int8 (__thiscall *)(TESForm *, TESObjectREFR *, TESObjectREFR *, int, int, int))a1->member.baseForm->vtbl->Unk_33)(
            a1->member.baseForm,
            a1,
            a5,
            a6,
            a7,
            a8) )
      return 0;
    sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, a4, v22, (PlayerCharacter *)a5);
    byte_B35F04 = 1;
    return 1;
  }
  sub_423DF0(&a1->member.baseExtraList, 2);
  sub_423EB0(&a1->member.baseExtraList, (int)a5);
  if ( activationRecurseDepth_ptr < 5 )
  {
    ++activationRecurseDepth_ptr;
    RunScripts(a1, a2, a3, a4);
    --activationRecurseDepth_ptr;
  }
  return byte_B35F04;
}
