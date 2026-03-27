void __userpurge sub_630100(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, Actor *a5)
{
  int v6; // ebx
  TESPackage *v8; // ebp
  char v9; // al
  double Distance; // st7
  void (__thiscall *v11)(_DWORD *, Actor *, _DWORD, _DWORD, int); // eax
  float *v12; // ebx
  float *v13; // eax
  double v14; // st7
  int v15; // eax
  void (__thiscall *v16)(_DWORD *, Actor *); // eax
  int v17; // eax
  TESPackageVtbl *i; // esi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  TESForm *v20; // ebp
  int ***ContainerChanges; // eax
  ActorAnimData *v22; // eax
  BSExtraDataVtbl *ExtraPackage; // eax
  int v24; // edx
  TESObjectREFR *v25; // [esp+4h] [ebp-34h]
  BSExtraDataVtbl *v26; // [esp+Ch] [ebp-2Ch]
  Actor *v27; // [esp+10h] [ebp-28h]
  float v28; // [esp+20h] [ebp-18h]
  float v29; // [esp+20h] [ebp-18h]
  int v30; // [esp+24h] [ebp-14h] BYREF
  float v31; // [esp+28h] [ebp-10h]
  float v32[3]; // [esp+2Ch] [ebp-Ch] BYREF
  float v33; // [esp+3Ch] [ebp+4h]
  float v34; // [esp+3Ch] [ebp+4h]

  v6 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*a1 + 0x184))(a1, a4);
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) )
    a5->vtbl->AddPackageWakeUp(a5);
  v8 = 0;
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 0x20) == 0xF )
      v8 = (TESPackage *)v6;
  }
  (*(void (__thiscall **)(_DWORD *, PlayerCharacter *))(*a1 + 0xD0))(a1, TESDataHandler_g_PlayerRef);
  sub_566DC0(v8, flt_A30634, a3, a5, 0, flt_A30634);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0xC0))(a1) )
    {
      v22 = a5->vtbl->super.super.GetAnimData((TESObjectREFR *)a5);
      if ( sub_472EA0(v22) )
      {
        ExtraPackage = ExtraDataList::GetExtraPackage(&a5->members.super.super.baseExtraList);
        if ( ExtraPackage && LOBYTE(ExtraPackage[4].Destructor) == 4 )
        {
          v24 = *a1;
          a1[0xB] = TESDataHandler_g_PlayerRef;
          (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD, unsigned int, _DWORD))(v24 + 0x198))(
            a1,
            a5,
            0,
            0xFFFFFFFF,
            0);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a5, 1);
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
      v12 = a5->vtbl->super.super.GetPos((TESObjectREFR *)a5);
      v13 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      v33 = v13[1] - v12[1];
      v28 = v13[2] - v12[2];
      v32[0] = *v13 - *v12;
      v32[1] = v33;
      v32[2] = v28;
      v29 = sub_683CB0(v32);
      *(float *)&v30 = 0.0;
      sub_683D80((int)a5, v29, (int)&v30);
      v31 = v29;
      v34 = (double)iActorTurnDegree * dbl_A31C78;
      if ( sub_5E0590(a5) )
        v34 = (double)iActorKeepTurnDegree * dbl_A31C78;
      v31 = fabs(v31);
      v14 = v31;
      if ( v34 >= (double)v31 )
      {
        sub_5E05F0(a5, 0x30);
      }
      else
      {
        v14 = v29;
        sub_685530(a5, v29, 1);
      }
      v15 = TESTopic::GEtTopic(2, 3);
      a5->members.unk0E4 = (Actor *)TESDataHandler_g_PlayerRef;
      a5->members.super.process->SayTopic(a5->members.super.process, a5, (TESTopic *)v15, 0, 0, 1);
      v16 = *(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x594);
      *((_BYTE *)a1 + 0x25D) = 1;
      v16(a1, a5);
      v17 = ((int (__stdcall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm)(TESDataHandler_g_PlayerRef);
      sub_6286E0(a1, (int)a5, v17, v27);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x484))(a1, a1[0xB]);
      for ( i = v8[1].__vftable; i; i = (TESPackageVtbl *)i->super.super.ClearComponentReferences )
      {
        InitializeComponent = i->super.super.InitializeComponent;
        if ( !i->super.super.InitializeComponent )
          break;
        if ( !*((_DWORD *)InitializeComponent + 1) )
        {
          v20 = (TESForm *)a5;
          if ( sub_420680(&a5->members.super.super.baseExtraList) )
            v20 = (TESForm *)sub_420680(&a5->members.super.super.baseExtraList);
          v26 = *((BSExtraDataVtbl **)InitializeComponent + 9);
          v25 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
          ContainerChanges = (int ***)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
          sub_4919E0(ContainerChanges, a2, v14, v34, v25, v20, v26);
        }
      }
    }
  }
  else
  {
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
    v11 = *(void (__thiscall **)(_DWORD *, Actor *, _DWORD, _DWORD, int))(*a1 + 0x58C);
    if ( Distance <= dbl_A2FC70 )
      v11(a1, a5, 0, 0, 0x101);
    else
      v11(a1, a5, 0, 0, 0x201);
  }
}
