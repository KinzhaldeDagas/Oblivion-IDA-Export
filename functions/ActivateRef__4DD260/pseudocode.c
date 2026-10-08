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
  const char *v22; // [esp-8h] [ebp-120h]
  const char *v23; // [esp-4h] [ebp-11Ch]
  char Format[260]; // [esp+10h] [ebp-108h] BYREF

  v8 = 0; /*0x4dd286*/
  unk_B35F04 = 0; /*0x4dd28c*/
  if ( a5 ) /*0x4dd292*/
  {
    if ( a5->vtbl->IsActor(a5) ) /*0x4dd29e*/
    {
      vtbl = a5[1].vtbl; /*0x4dd2a4*/
      if ( vtbl ) /*0x4dd2a9*/
      {
        if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) ) /*0x4dd2b0*/
          v8 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a5[1].vtbl->super.super.InitializeComponent + 0x11F))(a5[1].vtbl) == 4; /*0x4dd2c8*/
      }
    }
  }
  if ( (a1->member.super.flags & 0x2000) != 0 ) /*0x4dd2d2*/
    return 1; /*0x4dd2d2*/
  if ( !a5 ) /*0x4dd2da*/
    goto LABEL_20; /*0x4dd2da*/
  if ( a5->vtbl->IsActor(a5) /*0x4dd310*/
    && ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[2].super.Unk_0C)(a5)
    && a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Activator )
  {
    return 0; /*0x4dd310*/
  }
  if ( v8 ) /*0x4dd318*/
    goto LABEL_20; /*0x4dd318*/
  if ( sub_579440() == a1 ) /*0x4dd325*/
  {
    v11 = *(_DWORD *)(0xC /*0x4dd33c*/
                    * *(unsigned __int8 *)(((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetBaseForm)(
                                             a1,
                                             a4,
                                             a3,
                                             a2)
                                         + 4)
                    + 0xB05E04);
    v12 = a1->vtbl->GetBaseForm(a1); /*0x4dd34b*/
    NameForForm = TESFullName_GetNameForForm(v12); /*0x4dd34e*/
    v14 = (TESForm *)((int (__thiscall *)(TESObjectREFR *, int, CHAR *))a5->vtbl->GetBaseForm)(a5, v11, NameForForm); /*0x4dd362*/
    v15 = TESFullName_GetNameForForm(v14); /*0x4dd365*/
    _sprintf(Format, "'%s' activated %s '%s'", v15, v22, v23); /*0x4dd378*/
    Interface_ConsolePrint(Format); /*0x4dd382*/
  }
  if ( a5 == (TESObjectREFR *)reference && reference->pad10D[0] /*0x4dd3a3*/
    || ExtraDataList_TestActionFlagBits(&a1->member.baseExtraList, 1) )
  {
LABEL_20:
    v17 = (unsigned __int8)a1->vtbl->GetBaseForm(a1)->member.type - 0x18; /*0x4dd3f5*/
    if ( v17 ) /*0x4dd3f8*/
    {
      v18 = v17 - 4; /*0x4dd3fa*/
      if ( !v18 || v18 == 2 ) /*0x4dd402*/
        return 0; /*0x4dd402*/
    }
    else
    {
      Teleport = ExtraDataList_GetTeleport(&a1->member.baseExtraList); /*0x4dd429*/
      if ( Teleport ) /*0x4dd42d*/
      {
        if ( a5 == (TESObjectREFR *)reference /*0x4dd448*/
          && ((int (__thiscall *)(LowProcess *))reference->super.super.super.process->Unk_11E)(reference->super.super.super.process) != 4 )
        {
          v20 = sub_42B460(&Teleport->linkedDoor); /*0x4dd44c*/
          v21 = (TESObjectREFR **)v20; /*0x4dd451*/
          if ( v20 ) /*0x4dd455*/
          {
            if ( TESObjectCELL_IsInterior(v20) ) /*0x4dd459*/
              sub_4CB040(v21); /*0x4dd464*/
          }
        }
      }
    }
    if ( !((unsigned __int8 (__thiscall *)(TESForm *, TESObjectREFR *, TESObjectREFR *, int, int, int))a1->member.baseForm->vtbl->Unk_33)( /*0x4dd48b*/
            a1->member.baseForm,
            a1,
            a5,
            a6,
            a7,
            a8) )                               // Generic reference activation dispatches through the projectile reference's base form. For arrows that base form is AMMO, so normal inventory pickup semantics apply.
      return 0; /*0x4dd41e*/
    sub_665260((TESObjectREFR *)reference, a4, (PlayerCharacter *)a5); /*0x4dd498*/
    unk_B35F04 = 1; /*0x4dd49d*/
    return 1; /*0x4dd4a4*/
  }
  ExtraDataList_SetActionFlagBits(&a1->member.baseExtraList, 2); /*0x4dd3b0*/
  sub_423EB0(&a1->member.baseExtraList, (int)a5); /*0x4dd3b8*/
  if ( MEMORY[0xB35F00] < 5 ) /*0x4dd3c4*/
  {
    ++MEMORY[0xB35F00]; /*0x4dd3cb*/
    RunScripts(a1, a2, a3, a4); /*0x4dd3d3*/
    --MEMORY[0xB35F00]; /*0x4dd3d8*/
  }
  return unk_B35F04; /*0x4dd406*/
}
