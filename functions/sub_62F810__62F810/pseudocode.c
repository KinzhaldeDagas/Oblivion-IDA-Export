void __userpurge sub_62F810(
        double a1@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a4,
        TESObjectREFR *friendlyFight_,
        int a7)
{
  int v6; // ebp
  int v7; // esi
  bool v8; // zf
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  int v10; // eax
  double Distance; // st7
  TESObjectCELL *v12; // eax
  int v13; // eax
  TESObjectCELL *ParentCell; // eax
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
  float v44; // [esp+38h] [ebp-34h]
  float v45; // [esp+38h] [ebp-34h]
  TESForm *v46; // [esp+3Ch] [ebp-30h]
  TESObjectREFR **v47; // [esp+44h] [ebp-28h]
  float distanceToTarget; // [esp+48h] [ebp-24h]
  int v49[5]; // [esp+4Ch] [ebp-20h] BYREF
  unsigned int v50; // [esp+68h] [ebp-4h]

  v46 = 0;
  if ( *(_BYTE *)(((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a4->vtbl->GetBaseForm)(
                    a4,
                    st7_0,
                    a2)
                + 4) == 0x23 )
    v46 = a4->vtbl->GetBaseForm(a4);
  v6 = a7;
  v7 = *(_DWORD *)(a7 + 8);
  if ( v7 )
    (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x190))(v7);
  v8 = !sub_4D8B90(a4);
  a5 = (float)dword_B36A50;
  GetPos = a4->vtbl->GetPos;
  if ( v8 )
  {
    v13 = (int)GetPos(a4);
    Distance = (double)dword_B36A50;
    v40 = (float *)v13;
    a3a = Distance;
    v34 = a4->vtbl->GetPos(a4);
    ParentCell = TESObjectREFR_GetParentCell(a4);
    sub_446B90(ParentCell, v34, a3a, v40, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62E890, a7);
  }
  else
  {
    v10 = (int)GetPos(a4);
    Distance = (double)dword_B36A50;
    v39 = (float *)v10;
    a3 = Distance;
    v33 = a4->vtbl->GetPos(a4);
    v12 = TESObjectREFR_GetParentCell(a4);
    sub_4D5E30(v12, v33, a3, v39, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62E890, a7);
  }
  v15 = sub_67A420(a7, (int)&dword_B3B944);
  v16 = dword_B3B948;
  distanceToTarget = *(float *)&v15;
  if ( dword_B3B948 )
  {
    do
    {
      v17 = *(_DWORD *)(v16 + 4);
      FormHeapFree(v16);
      v16 = v17;
      dword_B3B948 = v17;
    }
    while ( v17 );
  }
  dword_B3B944 = 0;
  v18 = v15;
  if ( v15 )
  {
    while ( *v18 )
    {
      v19 = 0;
      if ( (*v18)->vtbl->IsActor(*v18) )
        v19 = *v18;
      v47 = (TESObjectREFR **)v18[1];
      if ( v19 )
      {
        if ( !sub_5E6BA0((Actor *)v19)
          && !sub_5E0F30(v19)
          && !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v19->vtbl[1].GetSleepState)(v19, 1)
          && (!sub_5E6C60((Actor *)v19) || !*(_BYTE *)(v6 + 0x2C)) )
        {
          if ( sub_5E6C60((Actor *)v19) && (TESActorBaseData_AllFactionsAreEvil(&v46[1].member.refID), !v20)
            || !sub_5E6C60((Actor *)v19)
            && (Distance = TesObjectREF_GetDistance(v19, friendlyFight_, 0),
                a3b = Distance,
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
            sub_68A9F0(v49);
            vtbl = v19[1].vtbl;
            v24 = *((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2);
            v50 = 0;
            v25 = 0;
            if ( !v24(vtbl) || (Distance = sub_65D880(TESDataHandler_g_PlayerRef, Distance, v49, v19), v26) )
              v25 = 1;
            if ( v19[1].vtbl && v25 )
            {
              ((void (__thiscall *)(TESObjectREFR *, int, _DWORD, int, _DWORD))v19->vtbl[1].Unk_5A)(v19, v6, 0, 1, 0);
              if ( Actor::GetProcessLevel((Actor *)v19) )
              {
                v27 = v19[1].vtbl;
                v28 = (void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))((char *)v27->super.super.InitializeComponent
                                                                        + 0x1C);
                v43 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A563D0;
                Distance = v43;
                (*v28)(v27, LODWORD(v43));
                ProcessLevel = Actor::GetProcessLevel((Actor *)v19);
                sub_674550((char)v27, a1, a2, v43, (int)v19, ProcessLevel);
                v30 = Actor::GetProcessLevel((Actor *)v19);
                sub_673A90((int)v19, v30, 0, 0, 0);
                v6 = a7;
              }
            }
            else
            {
              ActorBaseForm = Actor_GetActorBaseForm((Actor *)a4, 1);
              if ( !ActorBaseForm[2].member.modlist.data && !ActorBaseForm[2].member.refID )
                ActorBaseForm = Actor_GetActorBaseForm((Actor *)a4, 0);
              v32 = (char *)OblivionDynamicCast(
                              ActorBaseForm,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                              &TESNPC `RTTI Type Descriptor',
                              0);
              v44 = sub_606140(v6);
              a2 = v44;
              a1 = v44;
              v45 = sub_5234A0(v32) * v44 + v44;
              Distance = v45;
              (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v6 + 0xC) + 0x254))(LODWORD(v45));
              *(_BYTE *)(v6 + 0x11) = 1;
            }
            v50 = 0xFFFFFFFF;
            sub_68AA10(v49);
            v15 = (TESObjectREFR **)LODWORD(distanceToTarget);
          }
        }
      }
      if ( !v47 )
        break;
      v18 = v47;
    }
    BSSimpleList_Clear(v15);
  }
  FormHeapFree((unsigned int)v15);
}
