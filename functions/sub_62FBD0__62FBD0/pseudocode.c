void __userpurge sub_62FBD0(MiddleLowProcess *this@<ecx>, double st6_0@<st1>, Actor *a2)
{
  MiddleLowProcess *v3; // ebp
  TESPackage *editorPackage; // edi
  ObjectType v6; // ebx
  bool v7; // zf
  ActorVtbl *vtbl; // eax
  TESClass *BaseClass; // eax
  int vftable; // edi
  Actor *v11; // ebp
  unsigned int v12; // eax
  int v13; // ebp
  int v14; // ebx
  int v15; // ecx
  TESForm *ActorBaseForm; // eax
  SInt32 v17; // eax
  int v18; // eax
  int v19; // eax
  Actor *v20; // edi
  int **v21; // ebp
  TESPackage *v22; // eax
  char v23; // al
  BSExtraDataVtbl *v24; // eax
  BSExtraDataVtbl *v25; // edi
  void (__thiscall *Unk_65)(BaseProcess *__hidden); // eax
  int v27; // [esp+10h] [ebp-48h]
  float v28; // [esp+14h] [ebp-44h]
  float Distance; // [esp+14h] [ebp-44h]
  bool v30; // [esp+18h] [ebp-40h]
  int v31; // [esp+24h] [ebp-34h]
  int v32; // [esp+28h] [ebp-30h]
  char v33; // [esp+3Ah] [ebp-1Eh]
  char v34; // [esp+3Bh] [ebp-1Dh]
  Actor *v36; // [esp+40h] [ebp-18h]
  int *v37; // [esp+44h] [ebp-14h]
  ObjectType v38; // [esp+48h] [ebp-10h]
  BSExtraDataVtbl *ExtraPackage; // [esp+50h] [ebp-8h]
  double v40; // [esp+50h] [ebp-8h]
  char v41; // [esp+5Ch] [ebp+4h]
  Actor *v42; // [esp+5Ch] [ebp+4h]

  v3 = this;
  editorPackage = this->editorPackage;
  v34 = 0;
  v6.form = sub_569E60(editorPackage->members.target).form;
  v38.form = v6.form;
  ExtraPackage = ExtraDataList::GetExtraPackage(&a2->members.super.super.baseExtraList);
  if ( (PlayerCharacter *)v6.form == TESDataHandler_g_PlayerRef && TESDataHandler_g_PlayerRef->unk5C0 )
  {
    ((void (__thiscall *)(MiddleLowProcess *, Actor *))v3->Unk_64)(v3, a2);
    return;
  }
  v41 = 0;
  if ( ((int (__thiscall *)(MiddleLowProcess *))v3->GetSitSleepState)(v3)
    && (((int (__thiscall *)(MiddleLowProcess *))v3->GetSitSleepState)(v3) == 4
     || ((int (__thiscall *)(MiddleLowProcess *))v3->GetSitSleepState)(v3) == 9) )
  {
    v7 = a2->vtbl->GetMountedHorse(a2) == 0;
    vtbl = a2->vtbl;
    if ( v7 )
      vtbl->AddPackageWakeUp(a2);
    else
      vtbl->SetPackageDismount(a2);
    return;
  }
  BaseClass = (TESClass *)Actor_GetBaseClass(a2);
  if ( TESClass::IsGuardClass(BaseClass) )
  {
    ((void (__thiscall *)(MiddleLowProcess *, Actor *, int))v3->Unk_61)(v3, a2, 1);
    return;
  }
  vftable = (int)editorPackage[1].__vftable;
  v37 = (int *)vftable;
  v33 = 1;
  if ( !vftable )
    goto LABEL_40;
  do
  {
    vftable = *v37;
    if ( !*v37 )
      break;
    v11 = *(Actor **)(vftable + 8);
    v36 = 0;
    if ( v11 )
    {
      if ( v11->vtbl->super.super.IsActor((TESObjectREFR *)v11) )
        v36 = v11;
    }
    if ( *(_BYTE *)(vftable + 0x2C)
      || (((void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))this->Unk_8B)(
            this,
            a2,
            (ObjectType)v6.objectCode,
            vftable),
          *(_BYTE *)(vftable + 0x2C)) )
    {
      v33 = 0;
    }
    else
    {
      v12 = *(_DWORD *)(vftable + 4);
      if ( v12 <= 1 && *(PlayerCharacter **)(vftable + 0xC) == TESDataHandler_g_PlayerRef )
      {
        v13 = *(_DWORD *)(vftable + 0x24);
        v14 = 0;
        if ( v13 )
        {
          if ( *(_BYTE *)(v13 + 4) == 6 )
            v14 = *(_DWORD *)(vftable + 0x24);
        }
        if ( v12 == 1
          || a2->vtbl->super.super.GetBaseForm(a2) == (TESForm *)v13
          || v14
          && (LOBYTE(v15) = a2 == (Actor *)TESDataHandler_g_PlayerRef,
              v31 = v15,
              ActorBaseForm = Actor_GetActorBaseForm(a2, 0),
              (double)TESActorBaseData_GetFactionRank(&ActorBaseForm[1].member.refID, v14, v31) > flt_A30634) )
        {
          v34 = 1;
        }
        v6.form = v38.form;
      }
    }
    if ( v41 )
      goto LABEL_37;
    if ( *(int *)(vftable + 4) <= 2 )
    {
      v30 = 0;
      Distance = TesObjectREF_GetDistance((TESObjectREFR *)a2, v6.form, 0);
      v28 = COERCE_FLOAT(((int (__thiscall *)(Actor *, int, _DWORD))a2->vtbl->GetActorValue)(a2, 0x21, LODWORD(Distance)));
      v27 = 0;
LABEL_35:
      v18 = ((int (__thiscall *)(Actor *))a2->vtbl->GetDisposition)(a2);
      shouldActorFight(v18, (int)v6.form, v27, v28, v30, 0, 0, 0x64);
      if ( v19 > 0 )
        v41 = 1;
      goto LABEL_37;
    }
    if ( v36 )
    {
      v30 = 1;
      v28 = TesObjectREF_GetDistance((TESObjectREFR *)a2, v6.form, 0);
      v17 = a2->vtbl->GetActorValue(a2, kActorVal_Aggression);
      v27 = a2->vtbl->GetDisposition(a2, v36, v17);
      goto LABEL_35;
    }
LABEL_37:
    v3 = this;
    v37 = (int *)v37[1];
  }
  while ( v37 );
  if ( v41 )
  {
    sub_5EAE70(a2, (int)v6.form, vftable, v32);
    ((void (__thiscall *)(MiddleLowProcess *, Actor *, ObjectType, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))v3->Unk_89)(
      v3,
      a2,
      v6,
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
LABEL_40:
  if ( ExtraPackage && ((int)ExtraPackage[3].CompareTo & 0x1000) != 0
    || ((PlayerCharacter *)v6.form != TESDataHandler_g_PlayerRef
     || !PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0))
    && !((int (__thiscall *)(_DWORD, _DWORD))v6.form->vtbl[1].GetSleepState)((ObjectType)v6.objectCode, 1)
    || (v40 = TesObjectREF_GetDistance(v6.form, (TESObjectREFR *)a2, 0),
        *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36B08) < v40) )
  {
    if ( v33 )
    {
      if ( v34 )
      {
        ((void (__thiscall *)(MiddleLowProcess *, Actor *, int))v3->Unk_61)(v3, a2, 3);
      }
      else if ( ((int (__thiscall *)(_DWORD))v6.form->vtbl[2].super.super.ClearComponentReferences)((ObjectType)v6.objectCode) )
      {
        sub_5EAE70(a2, (int)v6.form, vftable, v32);
        v24 = sub_41FC70((ExtraDataList *)(v6.objectCode + 0x44));
        v25 = v24;
        if ( v24 )
        {
          sub_67D330(v24, 0);
          *(float *)&v25[7].CompareTo = *(float *)&v25[7].CompareTo + dbl_A2FC68;
        }
        ((void (__thiscall *)(Actor *, BSExtraDataVtbl *))a2->vtbl->Unk_BF)(a2, v25);
      }
      else
      {
        ((void (__thiscall *)(MiddleLowProcess *, Actor *, int))v3->Unk_61)(v3, a2, 2);
      }
      return;
    }
LABEL_53:
    v22 = (TESPackage *)ExtraDataList::GetExtraPackage(&a2->members.super.super.baseExtraList);
    if ( ((PlayerCharacter *)v6.form == TESDataHandler_g_PlayerRef
       || v22
       && v22->members.type == 4
       && (sub_566DC0(v22, flt_A30634, st6_0, a2, 0, flt_A30634), v23)
       && (PlayerCharacter *)v6.form == TESDataHandler_g_PlayerRef)
      && ((int (__thiscall *)(_DWORD))v6.form->vtbl[2].super.super.ClearComponentReferences)((ObjectType)v6.objectCode) )
    {
      Unk_65 = v3->Unk_65;
      v3->follow = (Actor *)TESDataHandler_g_PlayerRef;
      ((void (__thiscall *)(MiddleLowProcess *, Actor *, _DWORD, unsigned int, _DWORD))Unk_65)(v3, a2, 0, 0xFFFFFFFF, 0);
    }
    else
    {
      ((void (__thiscall *)(MiddleLowProcess *, Actor *, int))v3->Unk_61)(v3, a2, 4);
    }
    return;
  }
  v20 = (Actor *)sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)v6.form);
  v42 = v20;
  if ( !v20 )
  {
LABEL_52:
    BSSimpleList_Clear(v42);
    FormHeapFree((unsigned int)v42);
    goto LABEL_53;
  }
  while ( 1 )
  {
    v21 = (int **)v20->vtbl;
    if ( !v20->vtbl )
    {
LABEL_51:
      v3 = this;
      goto LABEL_52;
    }
    v20 = *(Actor **)&v20->members.super.super.super.type;
    if ( sub_67B710(v21) )
    {
      if ( !sub_67B6B0(v21, (int)a2, 0) )
        break;
    }
    if ( !v20 )
      goto LABEL_51;
  }
  ((void (__thiscall *)(Actor *, int **))a2->vtbl->Unk_C5)(a2, v21);
  BSSimpleList_Clear(v42);
  FormHeapFree((unsigned int)v42);
}
