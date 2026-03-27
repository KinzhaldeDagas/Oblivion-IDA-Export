void __userpurge sub_64CFB0(
        HighProcess *a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        Actor *a6,
        int a7,
        int a8,
        int a9)
{
  void *v11; // eax
  float *v12; // eax
  Actor *follow; // ebx
  float *v14; // ebp
  double Distance; // st7
  HighProcess *process; // ecx
  Actor *v17; // ebx
  float *v18; // eax
  Actor *v19; // eax
  Actor *v20; // ebx
  int v21; // eax
  int v22; // eax
  Actor *v23; // ebx
  Actor *v24; // ebp
  Actor *v25; // ecx
  PlayerCharacter *v26; // eax
  char v27; // al
  PlayerCharacter *v28; // ecx
  _DWORD *v29; // esi
  _DWORD *v30; // ebx
  _DWORD *v31; // ecx
  double v32; // st7
  void (__thiscall *Unk_94)(Actor *); // eax
  double v34; // st7
  double v35; // st7
  signed int v36; // eax
  float *v37; // [esp+Ch] [ebp-30h]
  float v39; // [esp+20h] [ebp-1Ch] BYREF
  float v40; // [esp+24h] [ebp-18h]
  double v41; // [esp+28h] [ebp-14h]
  float v42[3]; // [esp+30h] [ebp-Ch] BYREF
  float v43; // [esp+40h] [ebp+4h]
  float v44; // [esp+40h] [ebp+4h]
  float v45; // [esp+40h] [ebp+4h]
  float v46; // [esp+40h] [ebp+4h]
  float v47; // [esp+4Ch] [ebp+10h]

  if ( !a1->follow )
    a1->Unk_155(a1, (TESChildCELL *)a6);
  if ( (PlayerCharacter *)a1->follow == TESDataHandler_g_PlayerRef && TESDataHandler_g_PlayerRef->unk5C0 )
  {
    ((void (__usercall *)(HighProcess *@<ecx>, Actor *, double@<st0>, double@<st1>, double@<st2>))a1->Unk_64)(
      a1,
      a6,
      a5,
      a4,
      a3);
    return;
  }
  v11 = (void *)((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->GetCurrentPackage)(
                  a1,
                  a5,
                  a4,
                  a3);
  v12 = (float *)OblivionDynamicCast(
                   v11,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                   &TrespassPackage `RTTI Type Descriptor',
                   0);
  follow = a1->follow;
  v14 = v12;
  LODWORD(v41) = follow;
  if ( v12 && follow && !follow->vtbl->IsTresspassing(follow) )
  {
    ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, follow, 2);
    return;
  }
  Distance = TesObjectREF_GetDistance((TESObjectREFR *)a6, (TESObjectREFR *)a1->follow, 0);
  if ( Distance > fConst_200 )
  {
    ((void (__thiscall *)(HighProcess *, Actor *, _DWORD, int, int))a1->Unk_65)(a1, a6, 0, a9, 1);
    return;
  }
  if ( !a1->unk0D0 )
    ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_64)(a1, a6);
  if ( a1->follow )
  {
    if ( OblivionDynamicCast(
           a6->members.super.process,
           0,
           (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
           &HighProcess `RTTI Type Descriptor',
           0) )
    {
      process = (HighProcess *)a6->members.super.process;
      if ( process )
      {
        if ( !((int (__thiscall *)(HighProcess *))process->GetSitSleepState)(process) )
        {
          v17 = a1->follow;
          v37 = a6->vtbl->super.super.GetPos(a6);
          v18 = v17->vtbl->super.super.GetPos((TESObjectREFR *)v17);
          sub_4121A0(v18, v42, v37);
          v47 = sub_683CB0(v42);
          v39 = 0.0;
          sub_683D80((int)a6, v47, (int)&v39);
          v40 = v47;
          v43 = (double)iActorTurnDegree * dbl_A31C78;
          if ( sub_5E0590(a6) )
            v43 = (double)iActorKeepTurnDegree * dbl_A31C78;
          v40 = fabs(v40);
          Distance = v40;
          a4 = v43;
          if ( v43 >= (double)v40 )
          {
            sub_5E05F0(a6, 0x30);
          }
          else
          {
            Distance = v47;
            sub_685530(a6, v47, 1);
          }
        }
      }
    }
  }
  if ( v14 )
  {
    v19 = (Actor *)OblivionDynamicCast(
                     a1->follow,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v20 = v19;
    if ( v19 && !v19->vtbl->IsTresspassing(v19) )
      goto LABEL_64;
    v21 = *((_DWORD *)v14 + 0x14);
    if ( (!v21 || *((_DWORD *)v14 + 0x10) > v21 && v14[0xF] <= 0.0) && LODWORD(v41) )
    {
      if ( sub_5E6C60(a6) )
      {
        if ( *((_DWORD *)v14 + 0x13) == 0xFFFFFFFF )
        {
          *((_DWORD *)v14 + 0x13) = ((int (__thiscall *)(Actor *, Actor *, _DWORD, unsigned int))v20->vtbl->Unk_92)(
                                      v20,
                                      a6,
                                      *((_DWORD *)v14 + 0x11),
                                      0xFFFFFFFF);
        }
        else
        {
          v22 = sub_675BB0(&ActorProcessManager_ptr, 2u, *((_DWORD *)v14 + 0x13));
          if ( v22 )
          {
            if ( !*(_BYTE *)(v22 + 0x2C) )
              ((void (__thiscall *)(Actor *, Actor *, _DWORD, _DWORD))v20->vtbl->Unk_92)(
                v20,
                a6,
                *((_DWORD *)v14 + 0x11),
                *((_DWORD *)v14 + 0x13));
          }
        }
      }
      else
      {
        ((void (__thiscall *)(LowProcess *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a6->members.super.process->Unk_89)(
          a6->members.super.process,
          a6,
          v20,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          1);
      }
      return;
    }
    if ( v14[0xF] <= 0.0 )
    {
LABEL_38:
      ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, a6, 1);
      return;
    }
    v44 = flt_B33E9C + flt_B33E9C;
    v45 = v44 + v14[0xF];
    Distance = v45;
    v14[0xF] = v45;
    a4 = flt_B36B30;
    if ( a4 < v45 )
    {
      a4 = dbl_A3D360 * Distance;
      v46 = a4;
      Distance = Distance + v46;
      v14[0xF] = Distance;
    }
  }
  v23 = (Actor *)OblivionDynamicCast(
                   a1->follow,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Character `RTTI Type Descriptor',
                   0);
  v24 = (Actor *)OblivionDynamicCast(
                   a1->follow,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  if ( !sub_5E6BA0(a6) || !v24 )
    return;
  v25 = (Actor *)TESDataHandler_g_PlayerRef;
  if ( v23 != (Actor *)TESDataHandler_g_PlayerRef )
  {
    if ( !v23
      || (v32 = (double)sub_5E4420(v23),
          Unk_94 = v23->vtbl->Unk_94,
          v41 = v32,
          v34 = ((double (__thiscall *)(Actor *))Unk_94)(v23),
          v34 > v41) )
    {
      ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, a6, 2);
      ((void (__thiscall *)(HighProcess *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->Unk_89)(
        a1,
        a6,
        v24,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        1);
      return;
    }
    v35 = ((double (__thiscall *)(Actor *))v23->vtbl->Unk_94)(v23);
    v36 = Double_To_SInt32(v35);
    sub_5E4A40(v23, a3, a4, v35, (TESForm *)a6, v36);
    v23->vtbl->Unk_AD(v23);
    sub_5EFF30(v23, (int)v23, (int)a1, (int)a6);
LABEL_64:
    ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, a6, 2);
    return;
  }
  if ( a1->follow == v25 && PlayerCharacter::IsSleeping_((PlayerCharacter *)v25) )
  {
    v26 = TESDataHandler_g_PlayerRef;
    if ( !TESDataHandler_g_PlayerRef->isMovingToNewSpace )
    {
      v26->HoursToSleep = 0;
      v26->isSleeping = 1;
      return;
    }
  }
  v27 = ((int (__thiscall *)(HighProcess *))a1->Unk_72)(a1);
  v28 = TESDataHandler_g_PlayerRef;
  if ( v27 )
  {
    if ( !LOBYTE(v28->unk738) )
      return;
  }
  else if ( !LOBYTE(v28->unk738) )
  {
    if ( !ActivateRef((TESObjectREFR *)v28, a3, a4, Distance, (TESObjectREFR *)a6, 0, 0, 1) )
      return;
    goto LABEL_38;
  }
  if ( !((unsigned __int8 (__thiscall *)(HighProcess *, Actor *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->Unk_89)(
          a1,
          a6,
          v28,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          1) )
  {
    v29 = sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)TESDataHandler_g_PlayerRef);
    v30 = v29;
    while ( v29 )
    {
      v31 = (_DWORD *)*v29;
      if ( !*v29 )
        break;
      v29 = (_DWORD *)v29[1];
      if ( sub_67B710(v31) )
      {
        sub_5EAE70(a6, (int)v30, (int)a6, a2);
        break;
      }
    }
    BSSimpleList_Clear(v30);
    FormHeapFree((unsigned int)v30);
  }
}
