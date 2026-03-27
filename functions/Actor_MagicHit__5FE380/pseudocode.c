// bad sp value at call has been detected, the output may be wrong!
void __userpurge Actor_MagicHit(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        int _74,
        int a6)
{
  int v7; // eax
  TESObjectREFR *v9; // edi
  char *v10; // eax
  int v11; // eax
  TESForm::FormFlags flags; // ebx
  int v13; // ebx
  int v14; // ebp
  double Distance; // st7
  int v16; // eax
  int v17; // eax
  TESForm *ActorBaseForm; // eax
  char v19; // al
  _DWORD *v20; // eax
  int v21; // ebx
  double v22; // st7
  int v23; // ebp
  double v24; // st6
  int v25; // eax
  PlayerCharacter *v26; // eax
  TESForm *v27; // eax
  int v28; // eax
  void (__thiscall **p_SetFromActiveFile)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // ebp
  BSExtraDataVtbl *Owner; // eax
  TESForm *v31; // eax
  TESObjectREFR *v32; // ebx
  TESObjectREFR *v33; // ebp
  int **vtbl; // ecx
  int v35; // eax
  Actor **v36; // ebp
  TESForm *v37; // eax
  char v38; // al
  BSExtraDataVtbl *v39; // ebp
  TESForm *v40; // eax
  TESForm *v41; // ebx
  char CompareTo; // al
  TESObjectREFR *v43; // eax
  BSExtraDataVtbl *v44; // eax
  void (__thiscall **p_Unk_8E)(Actor *); // edi
  BSExtraDataVtbl *v46; // eax
  TESObjectREFR *v47; // [esp+4h] [ebp-6Ch]
  char v48; // [esp+Ch] [ebp-64h]
  float a5a; // [esp+30h] [ebp-40h]
  int a5; // [esp+30h] [ebp-40h]
  float a5b; // [esp+30h] [ebp-40h]
  TESObjectREFR *v52; // [esp+3Ch] [ebp-34h]
  char v53; // [esp+40h] [ebp-30h]
  char v54; // [esp+40h] [ebp-30h]
  int v56; // [esp+54h] [ebp-1Ch] BYREF
  int v57; // [esp+58h] [ebp-18h]
  bool a7[4]; // [esp+5Ch] [ebp-14h]
  int DetectionLevel; // [esp+60h] [ebp-10h]
  int v60; // [esp+6Ch] [ebp-4h]
  char *retaddr; // [esp+70h] [ebp+0h]

  if ( a1->vtbl->IsDead(a1, 0) || BaseExtraList_HasGhost(&a1->member.baseExtraList) )
  {
    Actor_MagicHit_::Done(_74, a6);
    return;
  }
  if ( a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Creature )
  {
    v7 = (int)a1->vtbl->GetBaseForm(a1);
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 + 0x104) == 4 )
      {
        if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1) )
          __asm { jmp     edx }
      }
    }
  }
  v9 = (TESObjectREFR *)retaddr;
  if ( a1[2].vtbl == (TESObjectREFRVtbl *)4
    && (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xF4))(a1[1].vtbl) == retaddr )
  {
    goto LABEL_125;
  }
  if ( retaddr )
    v10 = retaddr + 0x5C;
  else
    v10 = 0;
  sub_6A24B0((int)&a1[1].member.super.modlist, (int)a1, 0x4D524843, (int)v10);
  LOBYTE(retaddr) = 0;
  v11 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1);
  flags = a1->member.super.flags;
  v57 = v11;
  v13 = (unsigned int)flags >> 0x14;
  LOBYTE(v13) = v13 & 1;
  v14 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_1F)(a1);
  if ( v14 < iAIFriendlyHitMinDisposition )
    LOBYTE(v13) = 0;
  a7[0] = a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Creature;
  Distance = TesObjectREF_GetDistance(a1, v9, 0);
  a5a = Distance;
  v16 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].Unk_37)(a1);
  shouldActorFight(v14, 0, v16, COERCE_FLOAT(0x21), SLOBYTE(a5a), 0, a7[0], 0);
  v57 = v17;
  if ( !a2 && !(_BYTE)v13 )
  {
    if ( (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xF4))(a1[1].vtbl) != v9 )
      goto LABEL_36;
    if ( v9 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      sub_420E00(&a1->member.baseExtraList, (int)v9);
      if ( sub_420ED0(&a1->member.baseExtraList, (int)v9) < iFriendHitAllowed )
        return;
      goto LABEL_36;
    }
LABEL_125:
    Actor_MagicHit_::Done(_74, a6);
    return;
  }
  if ( (a1->member.super.flags & 0x100000) != 0 )
    goto LABEL_52;
  if ( !a2 )
    goto LABEL_29;
  if ( sub_613670((_DWORD *)a2, (int)v9) )
    goto LABEL_29;
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)a1, 0);
  TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID);
  if ( v19 || v57 > 0 )
    goto LABEL_29;
  if ( v9 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    if ( !((int (__thiscall *)(TESObjectREFR *))v9->vtbl[1].IsMobileObject)(v9)
      || (v20 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v9->vtbl[1].IsMobileObject)(v9), sub_613670(
                                                                                                   v20,
                                                                                                   (int)a1)) )
    {
LABEL_29:
      sub_420EB0(&a1->member.baseExtraList, (int)v9);
LABEL_30:
      if ( !(_BYTE)v13 )
      {
        if ( !a2 )
          goto LABEL_36;
        sub_624C90(a2, v13, a3, a4, Distance, v9, v60);
      }
      goto LABEL_33;
    }
LABEL_52:
    if ( v9 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      goto LABEL_61;
  }
  if ( (a1->member.super.flags & 0x100000) == 0 || !a2 )
  {
    sub_420E00(&a1->member.baseExtraList, (int)v9);
    v56 = iFriendHitAllowed;
    if ( a2 )
    {
      if ( sub_446C30((BSSimpleList_VoidPtr *)(a2 + 0x15C), v9) )
        v56 = iAllyHitAllowed;
    }
    if ( sub_420ED0(&a1->member.baseExtraList, (int)v9) > v56 )
    {
      if ( !a2 )
        goto LABEL_36;
      Distance = 0.0;
      sub_616190(a2, a2, a3, 0.0, (int)v9, 0, 0.0, 0.0, 0.0);
      goto LABEL_30;
    }
  }
LABEL_61:
  ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int, int))a1->vtbl[1].Unk_58)(a1, v9, 1, 1);
  LOBYTE(v13) = 1;
LABEL_33:
  if ( a2 && sub_613670((_DWORD *)a2, (int)v9) || (_BYTE)v13 )
    goto LABEL_125;
LABEL_36:
  DetectionLevel = Actor_GetDetectionLevel(a1, (int)v9, a3, a4, Distance, 0, v9, &v56, 0, 0, 0, 0x64);
  v21 = Actor_GetDetectionLevel(a1, (int)v9, a3, a4, Distance, 1, v9, &v56, 1, 1, 0, v53);
  *(_DWORD *)a7 = v21;
  v22 = (double)v21;
  v23 = 0;
  v24 = flt_B36778;
  if ( v24 < v22 )
    v23 = 3;
  if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 2))(a1[1].vtbl) )
  {
    v52 = v9;
    v25 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xEC))(a1[1].vtbl);
    if ( !v25 )
    {
      a5 = v23;
      v25 = (*((int (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent
             + 0x2A))(
              a1[1].vtbl,
              v9);
    }
    *(_DWORD *)(v25 + 0xC) = v21;
    *(_DWORD *)(v25 + 4) = v23;
    *(_BYTE *)(v25 + 8) = v54;
  }
  if ( v21 <= 0 )
  {
    if ( sub_5E6BA0((Actor *)a1) || ((double (__cdecl *)(int))a1->vtbl[1].Unk_38)(0x21) >= dbl_A3AA50 )
      ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *))a1->vtbl[1].GetPos)(a1, v9);
    else
      a1->vtbl[1].GetBaseForm(a1);
    v40 = Actor_GetActorBaseForm((Actor *)a1, 1);
    v41 = v40;
    if ( v40 )
    {
      if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v40[2].member.refID) )
        v41 = Actor_GetActorBaseForm((Actor *)a1, 0);
    }
    if ( Actor_IsNPC((Actor *)a1) && v41 && v9 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      TESActorBaseData_SetSharedPlayerFactionFlags(1);
      return;
    }
    goto LABEL_125;
  }
  if ( sub_5E6C60((Actor *)a1)
    && !v52
    && Actor_IsNPC((Actor *)v9)
    && Actor_IsNPC((Actor *)v9)
    && Actor::GetRaceIfNPC((Actor *)v9)
    && (Actor::GetRaceIfNPC((Actor *)v9)->isPlayable & 1) != 0 )
  {
    v26 = TESDataHandler_g_PlayerRef;
    if ( v9 == (TESObjectREFR *)TESDataHandler_g_PlayerRef && LOBYTE(v26->unk738) )
      ((void (__thiscall *)(TESObjectREFR *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, _DWORD, int))a1->vtbl[1].Unk_61)(
        a1,
        v26,
        0,
        0,
        0,
        0,
        1);
    else
      ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))a1->vtbl[1].super.Unk_26)(a1, v9, 1);
    return;
  }
  if ( v9 == (TESObjectREFR *)TESDataHandler_g_PlayerRef
    || (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *))v9->vtbl[1].IsActor)(v9) == a1
    || (PlayerCharacter *)sub_5E14A0(v9) == TESDataHandler_g_PlayerRef
    && (PlayerCharacter *)((int (__thiscall *)(TESObjectREFR *))v9->vtbl[1].IsActor)(v9) == TESDataHandler_g_PlayerRef )
  {
    if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      goto LABEL_80;
    v27 = Actor_GetActorBaseForm((Actor *)a1, 0);
    TESActorBaseData_AllFactionsAreEvil(&v27[1].member.refID);
    v48 = 1;
    v47 = a1;
    (*((void (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x8A))(a1[1].vtbl);
    if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) )
    {
      v28 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1);
      sub_624C90(v28, v21, a3, v24, v22, v9, a5);
    }
    if ( !sub_5E6C60((Actor *)v9) )
    {
      if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) || sub_5E6CD0(a1, 0) )
      {
        a5b = *(float *)GameSetting_GetSafeFloatPointer((int *)&fCrimeDispAttack);
        ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, _DWORD))a1->vtbl[2].super.Unk_09)(a1, v9, LODWORD(a5b));
      }
      else if ( Actor_IsCreature((Actor *)a1) )
      {
        if ( ExtraDataList_GetOwner(&a1->member.baseExtraList) )
        {
          if ( !TESOBjectREFR_IsOwnedBy(a1, v9, 1) )
          {
            p_SetFromActiveFile = (void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))&v9->vtbl[1].super.SetFromActiveFile;
            Owner = ExtraDataList_GetOwner(&a1->member.baseExtraList);
            (*p_SetFromActiveFile)(v9, a1, 0, 1, 0, Owner);
          }
        }
      }
      else
      {
        ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))a1->vtbl[1].super.Unk_26)(a1, v9, 1);
      }
    }
  }
  if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
LABEL_80:
    if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v9->vtbl[1].GetSleepState)(v9, 1) )
      goto LABEL_82;
  }
  ((void (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.ClearModified)(a1);
LABEL_82:
  v31 = Actor_GetActorBaseForm((Actor *)a1, 1);
  if ( v31 )
  {
    if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&v31[2].member.refID) )
      Actor_GetActorBaseForm((Actor *)a1, 0);
  }
  if ( v9 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    TESActorBaseData_SetSharedPlayerFactionFlags(1);
  if ( !v48
    || !Actor_IsNPC((Actor *)v9)
    || !Actor::GetRaceIfNPC((Actor *)v9)
    || (Actor::GetRaceIfNPC((Actor *)v9)->isPlayable & 1) == 0 )
  {
    goto LABEL_125;
  }
  if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].GetSleepState)(a1, 1) )
  {
    if ( Actor_IsCreature((Actor *)a1) )
    {
      if ( ExtraDataList_GetOwner(&a1->member.baseExtraList) )
      {
        p_Unk_8E = &TESDataHandler_g_PlayerRef->vtbl->super.Unk_8E;
        v46 = ExtraDataList_GetOwner(&a1->member.baseExtraList);
        ((void (__thiscall *)(PlayerCharacter *, TESObjectREFR *, _DWORD, int, _DWORD, BSExtraDataVtbl *))*p_Unk_8E)(
          TESDataHandler_g_PlayerRef,
          a1,
          0,
          1,
          0,
          v46);
        return;
      }
    }
    else
    {
      ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))a1->vtbl[1].super.Unk_26)(a1, v9, 1);
    }
    goto LABEL_125;
  }
  v32 = (TESObjectREFR *)sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)v9);
  v33 = v32;
  if ( !v32 )
    goto LABEL_120;
  do
  {
    vtbl = (int **)v32->vtbl;
    if ( !v32->vtbl )
      break;
    v32 = *(TESObjectREFR **)&v32->member.super.type;
    v35 = sub_67B6B0(vtbl, (int)v9, 0);
    v36 = (Actor **)v35;
    if ( !v35 )
      continue;
    if ( !*(_BYTE *)(v35 + 4) )
    {
      v37 = Actor_GetActorBaseForm((Actor *)a1, 0);
      TESActorBaseData_AllFactionsAreEvil(&v37[1].member.refID);
      if ( !v38 )
        continue;
    }
    if ( !Actor_IsNPC(*v36) )
      continue;
    v39 = TESObjectREFR_GetOwner(a1);
    if ( Actor_IsNPC((Actor *)a1) )
    {
      ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))a1->vtbl[1].super.Unk_26)(a1, v9, 1);
    }
    else if ( v39 )
    {
      CompareTo = (char)v39->CompareTo;
      if ( CompareTo == 0x23 )
      {
        sub_675220(v39);
        goto LABEL_116;
      }
      if ( CompareTo == 6 )
      {
        v44 = TESObjectREFR_GetOwner(a1);
        v43 = sub_675290((int)&ActorProcessManager_ptr, (int)v44);
LABEL_116:
        if ( v43 )
          ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))v43->vtbl[1].super.Unk_26)(v43, v9, 1);
      }
    }
  }
  while ( v32 );
  v33 = v47;
LABEL_120:
  BSSimpleList_Clear(v33);
  FormHeapFree((unsigned int)v33);
}
