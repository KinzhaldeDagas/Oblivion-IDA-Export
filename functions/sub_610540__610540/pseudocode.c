void __userpurge sub_610540(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        int a6,
        int a7)
{
  Actor *v8; // ebp
  _DWORD *v9; // eax
  int *v10; // edi
  TESObjectREFR *v11; // ecx
  int v12; // eax
  char v13; // al
  char v14; // al
  TESObjectREFR *v15; // ebx
  char *v16; // eax
  char *v17; // ecx
  int v18; // eax
  TESForm *v19; // eax
  void *v20; // eax
  signed int v21; // eax
  int v22; // eax
  int v23; // ebx
  PlayerCharacter *v24; // edi
  TESForm *ActorBaseForm; // eax
  char *v26; // [esp+4h] [ebp-15Ch]
  char *Name; // [esp+8h] [ebp-158h]
  bool v28; // [esp+Ch] [ebp-154h]
  int v29; // [esp+20h] [ebp-140h]
  float v30; // [esp+20h] [ebp-140h]
  char v31[300]; // [esp+24h] [ebp-13Ch] BYREF
  unsigned int v32; // [esp+15Ch] [ebp-4h]

  v8 = (Actor *)OblivionDynamicCast(
                  a5,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( (sub_5E6C60(v8)
     || (Actor::GetRaceIfNPC(v8)->isPlayable & 1) != 0
     && !v8->vtbl->IsTresspassing(v8)
     && Actor_IsNPC(v8)
     && (Actor::GetRaceIfNPC(v8)->isPlayable & 1) != 0)
    && (a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef
     || ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_37)(a1, 0x1F) != 0x64
     || !Actor_IsSneaking(a1)) )
  {
    v9 = (_DWORD *)FormHeapAlloc(0x30u);
    v29 = (int)v9;
    v32 = 0;
    if ( v9 )
      v10 = sub_6070B0(v9, 1u, (int)a5, (int)a1, a6, a7, 0);
    else
      v10 = 0;
    v11 = (TESObjectREFR *)v10[2];
    v32 = 0xFFFFFFFF;
    LOBYTE(v29) = 0;
    if ( a5 == v11 || TESObjectREFR_GetOwner(v11) == (BSExtraDataVtbl *)a5 )
      LOBYTE(v29) = 1;
    v12 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a5[1].vtbl->super.super.InitializeComponent + 0xEC))(
            a5[1].vtbl,
            v10[3]);
    if ( v12 )
      *(_DWORD *)(v12 + 4) = 3;
    else
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))a5[1].vtbl->super.super.InitializeComponent
       + 0xED))(
        a5[1].vtbl,
        a5,
        3);
    sub_4DB760(a1);
    if ( !v13 || (sub_4DB760(a5), v14) )
    {
      sub_605F60(v10, (int)a5, v29);
      v30 = (float)v18;
      ((void (__thiscall *)(TESObjectREFR *, int, _DWORD))a5->vtbl[2].super.Unk_09)(a5, v10[3], LODWORD(v30));
      v19 = a5->vtbl->GetBaseForm(a5);
      v20 = OblivionDynamicCast(
              v19,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0);
      if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
        if ( v20 )
          TESActorBaseData_SetSharedPlayerFactionFlags(2);
      }
      v21 = ((int (__thiscall *)(TESObjectREFR *, int))a5->vtbl[1].super.Unk_1F)(a5, v10[3]);
      if ( sub_605E20(v21, (int)a5) )
      {
        v8->members.super.process->Unk_2C(v8->members.super.process, 1);
        if ( !sub_5E8A90(a1) )
        {
          dword_B361C4 = (int)v8->vtbl->super.super.GetBaseForm((TESObjectREFR *)v8);
          sub_605F00(v10, (int)a1);
          LODWORD(a5[2].member.pos[2]) = v10[3];
          v22 = TESTopic::GEtTopic(2, 7);
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int, _DWORD, _DWORD, int))a5[1].vtbl->super.super.InitializeComponent
           + 0x69))(
            a5[1].vtbl,
            a5,
            v22,
            0,
            0,
            1);
          dword_B361C4 = 0;
        }
        ((void (__thiscall *)(TESObjectREFR *, int *, _DWORD, int, _DWORD))a5->vtbl[1].Unk_5A)(a5, v10, 0, 1, 0);
      }
      else
      {
        dword_B361C4 = (int)v8->vtbl->super.super.GetBaseForm((TESObjectREFR *)v8);
        LODWORD(a5[2].member.pos[2]) = v10[3];
        v23 = TESTopic::GEtTopic(2, 0xD);
        if ( v10[3] && sub_5EA050(a5, (TESObjectREFR *)v10[3], v28) )
          ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, _DWORD, _DWORD, _DWORD, int))a5->vtbl[1].Unk_61)(
            a5,
            v10[3],
            0,
            0,
            0,
            0,
            1);
        else
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int, _DWORD, _DWORD, int))a5[1].vtbl->super.super.InitializeComponent
           + 0x69))(
            a5[1].vtbl,
            a5,
            v23,
            0,
            0,
            1);
        dword_B361C4 = 0;
      }
    }
    else
    {
      v15 = (TESObjectREFR *)v10[2];
      Name = TESObjectREFR_GetName(a5);
      v26 = TESObjectREFR_GetName(v15);
      v16 = TESObjectREFR_GetName((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      _sprintf(v31, "%s  tried to pickpocket %s and %s did not care", v16, v26, Name);
      ShowUIMessageBox(v17, (char)v8, a2, a3, a4, v31, 0, 1, (const char *)sOk, 0);
    }
    if ( sub_605F30(v10) )
    {
      sub_675B30(&ActorProcessManager_ptr, v10);
      v24 = (PlayerCharacter *)v10[3];
      ActorBaseForm = Actor_GetActorBaseForm((Actor *)a5, 1);
      if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID )
        ActorBaseForm = Actor_GetActorBaseForm((Actor *)a5, 0);
      OblivionDynamicCast(
        ActorBaseForm,
        0,
        (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
        &TESNPC `RTTI Type Descriptor',
        0);
      if ( v24 == TESDataHandler_g_PlayerRef )
        TESActorBaseData_SetSharedPlayerFactionFlags(2);
    }
    else
    {
      sub_605E80((unsigned int *)v10);
      FormHeapFree((unsigned int)v10);
    }
  }
}
