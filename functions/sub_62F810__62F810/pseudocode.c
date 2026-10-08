void __userpurge sub_62F810(
        double a1@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a4,
        TESObjectREFR *friendlyFight_,
        Crime *a7)
{
  Crime *v6; // ebp
  TESObjectREFR *target; // esi
  bool v8; // zf
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  int v10; // eax
  double value; // st7
  TESObjectCELL *v12; // eax
  int v13; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectREFR **v15; // ebx
  unsigned int v16; // eax
  int v17; // esi
  TESObjectREFR **v18; // edi
  TESObjectREFR *v19; // esi
  char v20; // al
  int v21; // eax
  int v22; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  int (__thiscall *v24)(TESObjectREFRVtbl *); // edx
  char v25; // bl
  char v26; // al
  TESObjectREFRVtbl *v27; // ebp
  void (__thiscall **v28)(TESObjectREFRVtbl *, _DWORD); // edi
  int ProcessLevel; // eax
  int v30; // eax
  TESForm *ActorBaseForm; // eax
  char *v32; // esi
  float *v33; // [esp+Ch] [ebp-60h]
  float *v34; // [esp+Ch] [ebp-60h]
  int v35; // [esp+Ch] [ebp-60h]
  float a3; // [esp+10h] [ebp-5Ch]
  float a3a; // [esp+10h] [ebp-5Ch]
  float a3b; // [esp+10h] [ebp-5Ch]
  float *v39; // [esp+14h] [ebp-58h]
  float *v40; // [esp+14h] [ebp-58h]
  char v41; // [esp+14h] [ebp-58h]
  float a5; // [esp+18h] [ebp-54h]
  float v43; // [esp+38h] [ebp-34h]
  float GoldValue; // [esp+38h] [ebp-34h]
  float v45; // [esp+38h] [ebp-34h]
  TESForm *v46; // [esp+3Ch] [ebp-30h]
  TESObjectREFR **v47; // [esp+44h] [ebp-28h]
  float distanceToTarget; // [esp+48h] [ebp-24h]
  TravelPath v49; // [esp+4Ch] [ebp-20h] BYREF
  unsigned int v50; // [esp+68h] [ebp-4h]

  v46 = 0; /*0x62f847*/
  if ( *(_BYTE *)(((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a4->vtbl->GetBaseForm)( /*0x62f851*/
                    a4,
                    st7_0,
                    a2,
                    a1)
                + 4) == 0x23 )
    v46 = a4->vtbl->GetBaseForm(a4); /*0x62f85f*/
  v6 = a7; /*0x62f863*/
  target = a7->target; /*0x62f867*/
  if ( target ) /*0x62f870*/
    ((int (__thiscall *)(TESObjectREFR *))target->vtbl->IsActor)(target); /*0x62f87c*/
  v8 = !sub_4D8B90(a4); /*0x62f89a*/
  a5 = (float)(int)stru_B36A50.value; /*0x62f89c*/
  GetPos = a4->vtbl->GetPos; /*0x62f8a1*/
  if ( v8 ) /*0x62f8a9*/
  {
    v13 = (int)GetPos(a4); /*0x62f8d7*/
    value = (double)(int)stru_B36A50.value; /*0x62f8d9*/
    v40 = (float *)v13; /*0x62f8df*/
    a3a = value; /*0x62f8eb*/
    v34 = a4->vtbl->GetPos(a4); /*0x62f8f0*/
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a4); /*0x62f8f3*/
    sub_446B90( /*0x62f8ff*/
      DwordAtOffset40,
      v34,
      a3a,
      v40,
      a5,
      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62E890,
      (int)a7);
  }
  else
  {
    v10 = (int)GetPos(a4); /*0x62f8ab*/
    value = (double)(int)stru_B36A50.value; /*0x62f8ad*/
    v39 = (float *)v10; /*0x62f8b3*/
    a3 = value; /*0x62f8bf*/
    v33 = a4->vtbl->GetPos(a4); /*0x62f8c4*/
    v12 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a4); /*0x62f8c7*/
    sub_4D5E30(v12, v33, a3, v39, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62E890, (int)a7); /*0x62f8cd*/
  }
  v15 = sub_67A420((ActorProcessManager *)&qword_B3BB2C[0x75], (int)a7, (int)&unk_B3B944); /*0x62f914*/
  v16 = unk_B3B948; /*0x62f916*/
  distanceToTarget = *(float *)&v15; /*0x62f91d*/
  if ( unk_B3B948 ) /*0x62f916*/
  {
    do /*0x62f938*/
    {
      v17 = *(_DWORD *)(v16 + 4); /*0x62f923*/
      FormHeapFree(v16); /*0x62f927*/
      v16 = v17; /*0x62f931*/
      unk_B3B948 = v17; /*0x62f933*/
    }
    while ( v17 ); /*0x62f938*/
  }
  unk_B3B944 = 0; /*0x62f93c*/
  v18 = v15; /*0x62f946*/
  if ( v15 ) /*0x62f948*/
  {
    while ( *v18 ) /*0x62f954*/
    {
      v19 = 0; /*0x62f966*/
      if ( (*v18)->vtbl->IsActor(*v18) ) /*0x62f968*/
        v19 = *v18; /*0x62f96e*/
      v47 = (TESObjectREFR **)v18[1]; /*0x62f975*/
      if ( v19 ) /*0x62f979*/
      {
        if ( !sub_5E6BA0((Actor *)v19) /*0x62f9be*/
          && !Actor::IsSleeping((Actor *)v19)
          && !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v19->vtbl[1].GetSleepState)(v19, 1)
          && (!Actor_IsGuardClass((Actor *)v19) || !v6->flag2C) )
        {
          if ( Actor_IsGuardClass((Actor *)v19) && (TESActorBaseData_AllFactionsAreEvil(&v46[1].member.refID), !v20) /*0x62fa45*/
            || !Actor_IsGuardClass((Actor *)v19)
            && (value = TesObjectREF_GetDistance(v19, friendlyFight_, 0),
                a3b = value,
                v41 = ((int (__thiscall *)(TESObjectREFR *, int, _DWORD, int))v19->vtbl[1].Unk_37)(
                        v19,
                        0x21,
                        LODWORD(a3b),
                        1),
                v35 = ((int (__thiscall *)(TESObjectREFR *))v19->vtbl[1].super.Unk_1F)(v19),
                v21 = ((int (__thiscall *)(TESObjectREFR *))v19->vtbl[1].super.Unk_1F)(v19),
                shouldActorFight(v21, (int)friendlyFight_, v35, distanceToTarget, v41, 0, 0, 0x64),
                v22 > 0) )
          {
            PathLow_ctor(&v49); /*0x62fa4f*/
            vtbl = v19[1].vtbl; /*0x62fa54*/
            v24 = *((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2); /*0x62fa59*/
            v50 = 0; /*0x62fa5c*/
            v25 = 0; /*0x62fa64*/
            if ( !v24(vtbl) || (value = sub_65D880(reference, value, (int *)&v49, v19), v26) ) /*0x62fa7f*/
              v25 = 1; /*0x62fa81*/
            if ( v19[1].vtbl && v25 ) /*0x62fa8f*/
            {
              ((void (__thiscall *)(TESObjectREFR *, Crime *, _DWORD, int, _DWORD))v19->vtbl[1].GetActiveSkinInfo)( /*0x62faa2*/
                v19,
                v6,
                0,
                1,
                0);
              if ( Actor::GetProcessLevel((Actor *)v19) ) /*0x62faa6*/
              {
                v27 = v19[1].vtbl; /*0x62fab3*/
                v28 = (void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))((char *)v27->super.super.InitializeComponent /*0x62fabe*/
                                                                        + 0x1C);
                v43 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - kFaceGenVariationScale1_5; /*0x62facf*/
                value = v43; /*0x62fad5*/
                (*v28)(v27, LODWORD(v43)); /*0x62fadc*/
                ProcessLevel = Actor::GetProcessLevel((Actor *)v19); /*0x62fae0*/
                sub_674550((int)v19, ProcessLevel); /*0x62faec*/
                v30 = Actor::GetProcessLevel((Actor *)v19); /*0x62faf9*/
                ActorProcessManager_AddMobileObject( /*0x62fb05*/
                  (ActorProcessManager *)&qword_B3BB2C[0x75],
                  (MobileObject *)v19,
                  v30,
                  0,
                  0,
                  0);
                v6 = a7; /*0x62fb0a*/
              }
            }
            else
            {
              ActorBaseForm = Actor_GetActorBaseForm((Actor *)a4, 1); /*0x62fb18*/
              if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID ) /*0x62fb23*/
                ActorBaseForm = Actor_GetActorBaseForm((Actor *)a4, 0); /*0x62fb2d*/
              v32 = (char *)OblivionDynamicCast( /*0x62fb4b*/
                              ActorBaseForm,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                              &TESNPC `RTTI Type Descriptor',
                              0);
              GoldValue = Crime_GetGoldValue(v6); /*0x62fb52*/
              v45 = sub_5234A0(v32) * GoldValue + GoldValue; /*0x62fb73*/
              value = v45; /*0x62fb77*/
              ((void (__stdcall *)(_DWORD))v6->criminal->vtbl->Unk_95)(LODWORD(v45)); /*0x62fb7e*/
              v6->flag11 = 1; /*0x62fb80*/
            }
            v50 = 0xFFFFFFFF; /*0x62fb88*/
            PathLow_dtor(&v49); /*0x62fb90*/
            v15 = (TESObjectREFR **)LODWORD(distanceToTarget); /*0x62fb95*/
          }
        }
      }
      if ( !v47 ) /*0x62fb9e*/
        break; /*0x62fb9e*/
      v18 = v47; /*0x62f950*/
    }
    BSSimpleList_Clear(v15); /*0x62fba6*/
  }
  FormHeapFree((unsigned int)v15); /*0x62fbac*/
}
