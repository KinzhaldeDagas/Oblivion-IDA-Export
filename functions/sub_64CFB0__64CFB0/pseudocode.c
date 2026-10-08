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
  Crime *CrimeByNumber; // eax
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

  if ( !a1->follow ) /*0x64cfb6*/
    a1->Unk_155(a1, (TESChildCELL *)a6); /*0x64cfca*/
  if ( (PlayerCharacter *)a1->follow == reference && reference->unk5C0 ) /*0x64cfd6*/
  {
    ((void (__usercall *)(HighProcess *@<ecx>, Actor *, double@<st0>, double@<st1>, double@<st2>))a1->Unk_64)( /*0x64cfea*/
      a1,
      a6,
      a5,
      a4,
      a3);
    return; /*0x64cff1*/
  }
  v11 = (void *)((int (__usercall *)@<eax>(HighProcess *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->GetCurrentPackage)( /*0x64d00e*/
                  a1,
                  a5,
                  a4,
                  a3);
  v12 = (float *)OblivionDynamicCast( /*0x64d011*/
                   v11,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                   &TrespassPackage `RTTI Type Descriptor',
                   0);
  follow = a1->follow; /*0x64d016*/
  v14 = v12; /*0x64d019*/
  LODWORD(v41) = follow; /*0x64d020*/
  if ( v12 && follow && !follow->vtbl->IsTresspassing(follow) ) /*0x64d034*/
  {
    ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, follow, 2); /*0x64d047*/
    return; /*0x64d050*/
  }
  Distance = TesObjectREF_GetDistance((TESObjectREFR *)a6, (TESObjectREFR *)a1->follow, 0); /*0x64d05b*/
  if ( Distance > fConst_200 ) /*0x64d06b*/
  {
    ((void (__thiscall *)(HighProcess *, Actor *, _DWORD, int, int))a1->Unk_65)(a1, a6, 0, a9, 1); /*0x64d081*/
    return; /*0x64d08a*/
  }
  if ( !a1->unk0D0 ) /*0x64d08d*/
    ((void (__thiscall *)(HighProcess *, Actor *))a1->Unk_64)(a1, a6); /*0x64d0a1*/
  if ( a1->follow ) /*0x64d0a3*/
  {
    if ( OblivionDynamicCast( /*0x64d0bf*/
           a6->members.super.process,
           0,
           (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
           &HighProcess `RTTI Type Descriptor',
           0) )
    {
      process = (HighProcess *)a6->members.super.process; /*0x64d0cf*/
      if ( process ) /*0x64d0d4*/
      {
        if ( !((int (__thiscall *)(HighProcess *))process->GetSitSleepState)(process) ) /*0x64d0e2*/
        {
          v17 = a1->follow; /*0x64d0f4*/
          v37 = a6->vtbl->super.super.GetPos(a6); /*0x64d0fd*/
          v18 = v17->vtbl->super.super.GetPos((TESObjectREFR *)v17); /*0x64d10b*/
          sub_4121A0(v18, v42, v37); /*0x64d10f*/
          v47 = Vector3_CalculateHeadingRadiansXY(v42); /*0x64d11e*/
          v39 = 0.0; /*0x64d12b*/
          sub_683D80((int)a6, v47, &v39); /*0x64d139*/
          v40 = v47; /*0x64d13e*/
          v43 = (double)(int)MEMORY[0xB36C10].value * dbl_A31C78; /*0x64d153*/
          if ( sub_5E0590(a6) ) /*0x64d157*/
            v43 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x64d16c*/
          v40 = fabs(v40); /*0x64d176*/
          Distance = v40; /*0x64d17a*/
          a4 = v43; /*0x64d17e*/
          if ( v43 >= (double)v40 ) /*0x64d189*/
          {
            sub_5E05F0(a6, 0x30); /*0x64d1a4*/
          }
          else
          {
            Distance = v47; /*0x64d18b*/
            sub_685530(a6, v47, 1); /*0x64d196*/
          }
        }
      }
    }
  }
  if ( v14 ) /*0x64d1ab*/
  {
    v19 = (Actor *)OblivionDynamicCast( /*0x64d1c3*/
                     a1->follow,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v20 = v19; /*0x64d1c8*/
    if ( v19 && !v19->vtbl->IsTresspassing(v19) ) /*0x64d1df*/
      goto LABEL_64; /*0x64d1df*/
    v21 = *((_DWORD *)v14 + 0x14); /*0x64d1e5*/
    if ( (!v21 || *((_DWORD *)v14 + 0x10) > v21 && v14[0xF] <= 0.0) && LODWORD(v41) ) /*0x64d20a*/
    {
      if ( Actor_IsGuardClass(a6) ) /*0x64d212*/
      {
        if ( *((_DWORD *)v14 + 0x13) == 0xFFFFFFFF ) /*0x64d221*/
        {
          *((_DWORD *)v14 + 0x13) = ((int (__thiscall *)(Actor *, Actor *, _DWORD, unsigned int))v20->vtbl->Unk_92)( /*0x64d236*/
                                      v20,
                                      a6,
                                      *((_DWORD *)v14 + 0x11),
                                      0xFFFFFFFF);
        }
        else
        {
          CrimeByNumber = ActorProcessManager_FindCrimeByNumber( /*0x64d24b*/
                            (ActorProcessManager *)&qword_B3BB2C[0x75],
                            kCrime_Trespass,
                            *((_DWORD *)v14 + 0x13));
          if ( CrimeByNumber ) /*0x64d252*/
          {
            if ( !CrimeByNumber->flag2C ) /*0x64d258*/
              ((void (__thiscall *)(Actor *, Actor *, _DWORD, _DWORD))v20->vtbl->Unk_92)( /*0x64d275*/
                v20,
                a6,
                *((_DWORD *)v14 + 0x11),
                *((_DWORD *)v14 + 0x13));
          }
        }
      }
      else
      {
        ((void (__thiscall *)(LowProcess *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a6->members.super.process->Unk_89)( /*0x64d29e*/
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
      return; /*0x64d240*/
    }
    if ( v14[0xF] <= 0.0 ) /*0x64d2b4*/
    {
LABEL_38:
      ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, a6, 1); /*0x64d2b6*/
      return; /*0x64d2cc*/
    }
    v44 = *(float *)&MEMORY[0xB33E90][0xC] + *(float *)&MEMORY[0xB33E90][0xC]; /*0x64d2d7*/
    v45 = v44 + v14[0xF]; /*0x64d2e2*/
    Distance = v45; /*0x64d2e6*/
    v14[0xF] = v45; /*0x64d2ea*/
    a4 = unk_B36B30; /*0x64d2ed*/
    if ( a4 < v45 ) /*0x64d2fa*/
    {
      a4 = dbl_A3D360 * Distance; /*0x64d302*/
      v46 = a4; /*0x64d304*/
      Distance = Distance + v46; /*0x64d308*/
      v14[0xF] = Distance; /*0x64d30c*/
    }
  }
  v23 = (Actor *)OblivionDynamicCast( /*0x64d33c*/
                   a1->follow,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Character `RTTI Type Descriptor',
                   0);
  v24 = (Actor *)OblivionDynamicCast( /*0x64d348*/
                   a1->follow,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  if ( !sub_5E6BA0(a6) || !v24 ) /*0x64d359*/
    return; /*0x64d359*/
  v25 = (Actor *)reference; /*0x64d35f*/
  if ( v23 != (Actor *)reference ) /*0x64d367*/
  {
    if ( !v23 /*0x64d4a5*/
      || (v32 = (double)sub_5E4420(v23),
          Unk_94 = v23->vtbl->Unk_94,
          v41 = v32,
          v34 = ((double (__thiscall *)(Actor *))Unk_94)(v23),
          v34 > v41) )
    {
      ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, a6, 2); /*0x64d4fb*/
      ((void (__thiscall *)(HighProcess *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->Unk_89)( /*0x64d519*/
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
      return; /*0x64d519*/
    }
    v35 = ((double (__thiscall *)(Actor *))v23->vtbl->Unk_94)(v23); /*0x64d4b1*/
    v36 = Double_To_SInt32(v35); /*0x64d4b3*/
    sub_5E4A40(v23, a3, a4, v35, (TESForm *)a6, v36); /*0x64d4bc*/
    v23->vtbl->Unk_AD(v23); /*0x64d4cb*/
    sub_5EFF30(v23, (int)v23, (int)a1, (int)a6); /*0x64d4d0*/
LABEL_64:
    ((void (__thiscall *)(HighProcess *, Actor *, int))a1->Unk_61)(a1, a6, 2); /*0x64d4d5*/
    return; /*0x64d4eb*/
  }
  if ( a1->follow == v25 && PlayerCharacter::IsSleeping_((PlayerCharacter *)v25) ) /*0x64d372*/
  {
    v26 = reference; /*0x64d37b*/
    if ( !reference->isMovingToNewSpace ) /*0x64d380*/
    {
      v26->HoursToSleep = 0; /*0x64d38c*/
      v26->isSleeping = 1; /*0x64d396*/
      return; /*0x64d3a1*/
    }
  }
  v27 = ((int (__thiscall *)(HighProcess *))a1->Unk_72)(a1); /*0x64d3ae*/
  v28 = reference; /*0x64d3b2*/
  if ( v27 ) /*0x64d3b8*/
  {
    if ( !LOBYTE(v28->unk738) ) /*0x64d3f7*/
      return; /*0x64d3f7*/
  }
  else if ( !LOBYTE(v28->unk738) ) /*0x64d3ba*/
  {
    if ( !ActivateRef((TESObjectREFR *)v28, a3, a4, Distance, (TESObjectREFR *)a6, 0, 0, 1) ) /*0x64d3d1*/
      return; /*0x64d3d1*/
    goto LABEL_38; /*0x64d3d1*/
  }
  if ( !((unsigned __int8 (__thiscall *)(HighProcess *, Actor *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->Unk_89)( /*0x64d419*/
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
    v29 = sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)reference); /*0x64d436*/
    v30 = v29; /*0x64d43a*/
    while ( v29 ) /*0x64d43c*/
    {
      v31 = (_DWORD *)*v29; /*0x64d440*/
      if ( !*v29 ) /*0x64d440*/
        break; /*0x64d440*/
      v29 = (_DWORD *)v29[1]; /*0x64d446*/
      if ( sub_67B710(v31) ) /*0x64d449*/
      {
        sub_5EAE70(a6, (int)v30, (int)a6, a2); /*0x64d45a*/
        break; /*0x64d45a*/
      }
    }
    BSSimpleList_Clear(v30); /*0x64d45f*/
    FormHeapFree((unsigned int)v30); /*0x64d467*/
  }
}
