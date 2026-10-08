// bad sp value at call has been detected, the output may be wrong!
void __userpurge Actor_MagicHit(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double st7_0@<st0>,
        int _74,
        int _78)
{
  TESForm *v8; // eax
  TESObjectREFR *v10; // edi
  MagicCaster *v11; // eax
  int v12; // eax
  TESForm::FormFlags flags; // ebx
  int v14; // ebx
  int v15; // ebp
  double Distance; // st7
  int v17; // eax
  int v18; // eax
  TESForm *ActorBaseForm; // eax
  char v20; // al
  _DWORD *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  double v25; // st7
  int v26; // ebp
  double v27; // st6
  int v28; // eax
  PlayerCharacter *v29; // eax
  TESForm *v30; // eax
  int v31; // eax
  void (__thiscall **p_SetFromActiveFile)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // ebp
  TESForm *Owner; // eax
  TESForm *v34; // eax
  TESObjectREFR *v35; // ebx
  TESObjectREFR *v36; // ebp
  int **vtbl; // ecx
  int v38; // eax
  Actor **v39; // ebp
  TESForm *v40; // eax
  char v41; // al
  TESForm *v42; // ebp
  TESForm *v43; // eax
  TESForm *v44; // ebx
  TESForm::FormType type; // al
  void *v46; // eax
  TESForm *v47; // eax
  void (__thiscall **p_Unk_8E)(Actor *); // edi
  TESForm *v49; // eax
  TESObjectREFR *v50; // [esp+4h] [ebp-6Ch]
  char v51; // [esp+Ch] [ebp-64h]
  float a5a; // [esp+30h] [ebp-40h]
  int a5; // [esp+30h] [ebp-40h]
  float a5b; // [esp+30h] [ebp-40h]
  TESObjectREFR *v55; // [esp+3Ch] [ebp-34h]
  char v56; // [esp+40h] [ebp-30h]
  char v57; // [esp+40h] [ebp-30h]
  int v59; // [esp+54h] [ebp-1Ch] BYREF
  int v60; // [esp+58h] [ebp-18h]
  bool a7[4]; // [esp+5Ch] [ebp-14h]
  int v62; // [esp+60h] [ebp-10h]
  int v63; // [esp+6Ch] [ebp-4h]
  char *retaddr; // [esp+70h] [ebp+0h]

  if ( ((unsigned __int8 (__usercall *)@<al>(TESObjectREFR *@<ecx>, _DWORD, double@<st0>, double@<st1>))a1->vtbl->IsDead)( /*0x5fe39d*/
         a1,
         0,
         st7_0,
         a4)
    || BaseExtraList_HasGhost(&a1->member.baseExtraList) )
  {
    Actor_MagicHit_::Done(_74, _78); /*0x5fe3a4*/
    return; /*0x5fe3a4*/
  }
  if ( a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Creature ) /*0x5fe3c0*/
  {
    v8 = a1->vtbl->GetBaseForm(a1); /*0x5fe3cc*/
    if ( v8 ) /*0x5fe3d0*/
    {
      if ( LOBYTE(v8[0xA].member.modlist.next) == 4 ) /*0x5fe3d8*/
      {
        if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1) ) /*0x5fe3e4*/
          __asm { jmp     edx } /*0x5fe3f9*/
      }
    }
  }
  v10 = (TESObjectREFR *)retaddr; /*0x5fe402*/
  if ( a1[2].vtbl == (TESObjectREFRVtbl *)4 /*0x5fe417*/
    && (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xF4))(a1[1].vtbl) == retaddr )
  {
    goto LABEL_125; /*0x5fe417*/
  }
  if ( retaddr ) /*0x5fe41f*/
    v11 = (MagicCaster *)(retaddr + 0x5C); /*0x5fe421*/
  else
    v11 = 0; /*0x5fe426*/
  MagicTarget_RemoveActiveEffectsByCode((MagicTarget *)&a1[1].member.super.modlist, 0x4D524843u, v11); /*0x5fe432*/
  LOBYTE(retaddr) = 0; /*0x5fe441*/
  v12 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1); /*0x5fe446*/
  flags = a1->member.super.flags; /*0x5fe448*/
  v60 = v12; /*0x5fe44b*/
  v14 = (unsigned int)flags >> 0x14; /*0x5fe457*/
  LOBYTE(v14) = v14 & 1; /*0x5fe45d*/
  v15 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_1F)(a1); /*0x5fe462*/
  if ( v15 < SLODWORD(flt_B36778[0x44]) ) /*0x5fe46a*/
    LOBYTE(v14) = 0; /*0x5fe46c*/
  a7[0] = a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Creature; /*0x5fe485*/
  Distance = TesObjectREF_GetDistance(a1, v10, 0); /*0x5fe495*/
  a5a = Distance; /*0x5fe4a3*/
  v17 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].Unk_37)(a1); /*0x5fe4aa*/
  shouldActorFight(v15, 0, v17, COERCE_FLOAT(0x21), SLOBYTE(a5a), 0, a7[0], 0); /*0x5fe4b0*/
  v60 = v18; /*0x5fe4bd*/
  if ( !a2 && !(_BYTE)v14 ) /*0x5fe4c5*/
  {
    if ( (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xF4))(a1[1].vtbl) != v10 ) /*0x5fe4d6*/
      goto LABEL_36; /*0x5fe4d6*/
    if ( v10 == (TESObjectREFR *)reference ) /*0x5fe4e2*/
    {
      ExtraDataList_AddFriendHit(&a1->member.baseExtraList, (int)v10); /*0x5fe4ee*/
      if ( (signed int)ExtraDataList_GetFriendHitCount(&a1->member.baseExtraList, v10) < SLODWORD(flt_B36778[0x4C]) ) /*0x5fe501*/
        return; /*0x5fe501*/
      goto LABEL_36; /*0x5fe501*/
    }
LABEL_125:
    Actor_MagicHit_::Done(_74, _78); /*0x5febe0*/
    return; /*0x5febe1*/
  }
  if ( (a1->member.super.flags & 0x100000) != 0 ) /*0x5fe51e*/
    goto LABEL_52; /*0x5fe51e*/
  if ( !a2 ) /*0x5fe526*/
    goto LABEL_29; /*0x5fe526*/
  if ( sub_613670((_DWORD *)a2, (int)v10) ) /*0x5fe52b*/
    goto LABEL_29; /*0x5fe52b*/
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x5fe538*/
  TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID); /*0x5fe542*/
  if ( v20 || v60 > 0 ) /*0x5fe550*/
    goto LABEL_29; /*0x5fe550*/
  if ( v10 != (TESObjectREFR *)reference ) /*0x5fe558*/
  {
    if ( !((int (__thiscall *)(TESObjectREFR *))v10->vtbl[1].IsMobileObject)(v10) /*0x5fe57d*/
      || (v21 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v10->vtbl[1].IsMobileObject)(v10),
          sub_613670(v21, (int)a1)) )
    {
LABEL_29:
      ExtraDataList_RemoveFriendHit(&a1->member.baseExtraList, (int)v10); /*0x5fe58a*/
LABEL_30:
      if ( !(_BYTE)v14 ) /*0x5fe595*/
      {
        if ( !a2 ) /*0x5fe599*/
          goto LABEL_36; /*0x5fe599*/
        sub_624C90(a2, v14, a3, a4, Distance, v10, v63); /*0x5fe5a3*/
      }
      goto LABEL_33; /*0x5fe5a3*/
    }
LABEL_52:
    if ( v10 != (TESObjectREFR *)reference ) /*0x5fe6f5*/
      goto LABEL_61; /*0x5fe6f5*/
  }
  if ( (a1->member.super.flags & 0x100000) == 0 || !a2 ) /*0x5fe704*/
  {
    ExtraDataList_AddFriendHit(&a1->member.baseExtraList, (int)v10); /*0x5fe70a*/
    v59 = LODWORD(flt_B36778[0x4C]); /*0x5fe717*/
    if ( a2 ) /*0x5fe71b*/
    {
      if ( BSSimpleList::Contains((BSSimpleList_VoidPtr *)(a2 + 0x15C), v10) ) /*0x5fe724*/
        v59 = LODWORD(flt_B36778[0x5A]); /*0x5fe732*/
    }
    if ( (int)ExtraDataList_GetFriendHitCount(&a1->member.baseExtraList, v10) > v59 ) /*0x5fe748*/
    {
      if ( !a2 ) /*0x5fe74c*/
        goto LABEL_36; /*0x5fe74c*/
      Distance = 0.0; /*0x5fe752*/
      CombatController_TryAddTarget(a2, a2, a3, 0.0, (Actor *)v10, 0, 0.0, 0.0, 0.0); /*0x5fe765*/
      goto LABEL_30; /*0x5fe76a*/
    }
  }
LABEL_61:
  ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int, int))a1->vtbl[1].Unk_58)(a1, v10, 1, 1); /*0x5fe76f*/
  LOBYTE(v14) = 1; /*0x5fe780*/
LABEL_33:
  if ( a2 && sub_613670((_DWORD *)a2, (int)v10) || (_BYTE)v14 ) /*0x5fe5be*/
    goto LABEL_125; /*0x5fe5be*/
LABEL_36:
  Actor_GetDetectionLevelAgainstActor(a1, (int)v10, a3, a4, Distance, 0, v10, &v59, 0, 0, 0, 0x64); /*0x5fe5c4*/
  v62 = v22; /*0x5fe5df*/
  Actor_GetDetectionLevelAgainstActor(a1, (int)v10, a3, a4, Distance, 1, v10, &v59, 1, 1, 0, v56); /*0x5fe5ed*/
  v24 = v23; /*0x5fe5f2*/
  *(_DWORD *)a7 = v23; /*0x5fe5f4*/
  v25 = (double)v23; /*0x5fe5f8*/
  v26 = 0; /*0x5fe5fc*/
  v27 = flt_B36778[0]; /*0x5fe5fe*/
  if ( v27 < v25 ) /*0x5fe60b*/
    v26 = 3; /*0x5fe60d*/
  if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 2))(a1[1].vtbl) ) /*0x5fe61a*/
  {
    v55 = v10; /*0x5fe62b*/
    v28 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xEC))(a1[1].vtbl); /*0x5fe62c*/
    if ( !v28 ) /*0x5fe630*/
    {
      a5 = v26; /*0x5fe643*/
      v28 = (*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent /*0x5fe645*/
             + 0x2A))(
              a1[1].vtbl,
              v10);
    }
    *(_DWORD *)(v28 + 0xC) = v24; /*0x5fe64b*/
    *(_DWORD *)(v28 + 4) = v26; /*0x5fe64e*/
    *(_BYTE *)(v28 + 8) = v57; /*0x5fe651*/
  }
  if ( v24 <= 0 ) /*0x5fe658*/
  {
    if ( sub_5E6BA0((Actor *)a1) || ((double (__cdecl *)(int))a1->vtbl[1].Unk_38)(0x21) >= dbl_A3AA50 ) /*0x5fea9c*/
      ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *))a1->vtbl[1].GetPos)(a1, v10); /*0x5feac0*/
    else
      a1->vtbl[1].GetBaseForm(a1); /*0x5feab1*/
    v43 = Actor_GetActorBaseForm((Actor *)a1, 1); /*0x5feac6*/
    v44 = v43; /*0x5feacb*/
    if ( v43 ) /*0x5feacf*/
    {
      if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v43[2].member.refID) ) /*0x5fead4*/
        v44 = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x5feae6*/
    }
    if ( Actor_IsNPC((Actor *)a1) && v44 && v10 == (TESObjectREFR *)reference ) /*0x5feb05*/
    {
      TESActorBaseData_SetSharedPlayerFactionFlags(1); /*0x5feb10*/
      return; /*0x5feb1c*/
    }
    goto LABEL_125; /*0x5feb05*/
  }
  if ( Actor_IsGuardClass((Actor *)a1) /*0x5fe6ae*/
    && !v55
    && Actor_IsNPC((Actor *)v10)
    && Actor_IsNPC((Actor *)v10)
    && Actor::GetRaceIfNPC((Actor *)v10)
    && (Actor::GetRaceIfNPC((Actor *)v10)->isPlayable & 1) != 0 )
  {
    v29 = reference; /*0x5fe6b4*/
    if ( v10 == (TESObjectREFR *)reference && LOBYTE(v29->unk738) ) /*0x5fe6c1*/
      ((void (__thiscall *)(TESObjectREFR *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->vtbl[1].Unk_61)( /*0x5fe6e3*/
        a1,
        v29,
        0,
        0,
        0,
        0,
        1);
    else
      ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))a1->vtbl[1].super.Unk_26)(a1, v10, 1); /*0x5fe794*/
    return; /*0x5fe6ec*/
  }
  if ( v10 == (TESObjectREFR *)reference /*0x5fe7dd*/
    || (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))v10->vtbl[1].IsActor)(v10) == a1
    || (PlayerCharacter *)sub_5E14A0(v10) == reference
    && (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))v10->vtbl[1].IsActor)(v10) == reference )
  {
    if ( a1 == (TESObjectREFR *)reference ) /*0x5fe7e9*/
      goto LABEL_80; /*0x5fe7e9*/
    v30 = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x5fe7f8*/
    TESActorBaseData_AllFactionsAreEvil(&v30[1].member.refID); /*0x5fe802*/
    v51 = 1; /*0x5fe846*/
    v50 = a1; /*0x5fe849*/
    (*((void (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x8A))(a1[1].vtbl); /*0x5fe84a*/
    if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) ) /*0x5fe861*/
    {
      v31 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1); /*0x5fe877*/
      sub_624C90(v31, v24, a3, v27, v25, v10, a5); /*0x5fe87b*/
    }
    if ( !Actor_IsGuardClass((Actor *)v10) ) /*0x5fe882*/
    {
      if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) || sub_5E6CD0(a1, 0) ) /*0x5fe8a2*/
      {
        a5b = *GameSetting_GetSafeFloatPointer(&g_fCrimeDispAttack_Value); /*0x5fe910*/
        ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, _DWORD))a1->vtbl[2].super.Unk_09)(a1, v10, LODWORD(a5b)); /*0x5fe925*/
      }
      else if ( Actor_IsCreature((Actor *)a1) ) /*0x5fe8ad*/
      {
        if ( ExtraDataList_GetOwner(&a1->member.baseExtraList) ) /*0x5fe8b9*/
        {
          if ( !TESObjectREFR_IsOwnedBy(a1, v10, 1) ) /*0x5fe8c7*/
          {
            p_SetFromActiveFile = (void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))&v10->vtbl[1].super.SetFromActiveFile; /*0x5fe8d5*/
            Owner = ExtraDataList_GetOwner(&a1->member.baseExtraList); /*0x5fe8db*/
            (*p_SetFromActiveFile)(v10, a1, 0, 1, 0, Owner); /*0x5fe8ed*/
          }
        }
      }
      else
      {
        ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))a1->vtbl[1].super.Unk_26)(a1, v10, 1); /*0x5fe8fe*/
      }
    }
  }
  if ( a1 == (TESObjectREFR *)reference ) /*0x5fe932*/
  {
LABEL_80:
    if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v10->vtbl[1].GetSleepState)(v10, 1) ) /*0x5fe944*/
      goto LABEL_82; /*0x5fe944*/
  }
  ((void (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.ClearModified)(a1); /*0x5fe946*/
LABEL_82:
  v34 = Actor_GetActorBaseForm((Actor *)a1, 1); /*0x5fe954*/
  if ( v34 ) /*0x5fe961*/
  {
    if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v34[2].member.refID) ) /*0x5fe966*/
      Actor_GetActorBaseForm((Actor *)a1, 0); /*0x5fe973*/
  }
  if ( v10 == (TESObjectREFR *)reference ) /*0x5fe980*/
    TESActorBaseData_SetSharedPlayerFactionFlags(1); /*0x5fe987*/
  if ( !v51 /*0x5fe9c0*/
    || !Actor_IsNPC((Actor *)v10)
    || !Actor::GetRaceIfNPC((Actor *)v10)
    || (Actor::GetRaceIfNPC((Actor *)v10)->isPlayable & 1) == 0 )
  {
    goto LABEL_125; /*0x5fe9c0*/
  }
  if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].GetSleepState)(a1, 1) ) /*0x5fe9d6*/
  {
    if ( Actor_IsCreature((Actor *)a1) ) /*0x5feb88*/
    {
      if ( ExtraDataList_GetOwner(&a1->member.baseExtraList) ) /*0x5feb96*/
      {
        p_Unk_8E = &reference->vtbl->super.Unk_8E; /*0x5feba9*/
        v49 = ExtraDataList_GetOwner(&a1->member.baseExtraList); /*0x5febaf*/
        ((void (__thiscall *)(PlayerCharacter *, TESObjectREFR *, _DWORD, int, _DWORD, TESForm *))*p_Unk_8E)( /*0x5febc4*/
          reference,
          a1,
          0,
          1,
          0,
          v49);
        return; /*0x5febcd*/
      }
    }
    else
    {
      ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))a1->vtbl[1].super.Unk_26)(a1, v10, 1); /*0x5febdd*/
    }
    goto LABEL_125; /*0x5feb9d*/
  }
  v35 = (TESObjectREFR *)sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)v10); /*0x5fe9e9*/
  v36 = v35; /*0x5fe9ed*/
  if ( !v35 ) /*0x5fe9f3*/
    goto LABEL_120; /*0x5fe9f3*/
  do /*0x5fea00*/
  {
    vtbl = (int **)v35->vtbl; /*0x5fea00*/
    if ( !v35->vtbl ) /*0x5fea00*/
      break; /*0x5fea00*/
    v35 = *(TESObjectREFR **)&v35->member.super.type; /*0x5fea0a*/
    v38 = sub_67B6B0(vtbl, (int)v10, 0); /*0x5fea10*/
    v39 = (Actor **)v38; /*0x5fea15*/
    if ( !v38 ) /*0x5fea19*/
      continue; /*0x5fea19*/
    if ( !*(_BYTE *)(v38 + 4) ) /*0x5fea1f*/
    {
      v40 = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x5fea29*/
      TESActorBaseData_AllFactionsAreEvil(&v40[1].member.refID); /*0x5fea33*/
      if ( !v41 ) /*0x5fea3a*/
        continue; /*0x5fea3a*/
    }
    if ( !Actor_IsNPC(*v39) ) /*0x5fea43*/
      continue; /*0x5fea4a*/
    v42 = TESObjectREFR_GetOwner(a1); /*0x5fea59*/
    if ( Actor_IsNPC((Actor *)a1) ) /*0x5fea5b*/
    {
      ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))a1->vtbl[1].super.Unk_26)(a1, v10, 1); /*0x5fea75*/
    }
    else if ( v42 ) /*0x5feb21*/
    {
      type = v42->member.type; /*0x5feb23*/
      if ( type == kFormType_NPC ) /*0x5feb28*/
      {
        v46 = sub_675220((int)&qword_B3BB2C[0x75], (int)v42); /*0x5feb30*/
        goto LABEL_116; /*0x5feb35*/
      }
      if ( type == kFormType_Faction ) /*0x5feb39*/
      {
        v47 = TESObjectREFR_GetOwner(a1); /*0x5feb3d*/
        v46 = sub_675290((int)&qword_B3BB2C[0x75], (int)v47); /*0x5feb48*/
LABEL_116:
        if ( v46 ) /*0x5feb4f*/
          (*(void (__thiscall **)(void *, TESObjectREFR *, int))(*(_DWORD *)v46 + 0x240))(v46, v10, 1); /*0x5feb5e*/
      }
    }
  }
  while ( v35 ); /*0x5fea00*/
  v36 = v50; /*0x5feb68*/
LABEL_120:
  BSSimpleList_Clear(v36); /*0x5feb6c*/
  FormHeapFree((unsigned int)v36); /*0x5feb74*/
}
