// RadiantAI: action code 8 used by Cast Magic row, not Alarm.
void __userpurge sub_62FBD0(MiddleLowProcess *this@<ecx>, double st6_0@<st1>, double a3@<st2>, Actor *a4)
{
  MiddleLowProcess *v4; // ebp
  TESPackage *editorPackage; // edi
  ObjectType v7; // ebx
  bool v8; // zf
  ActorVtbl *vtbl; // eax
  TESClass *BaseClass; // eax
  int vftable; // edi
  Actor *v12; // ebp
  unsigned int v13; // eax
  int v14; // ebp
  int v15; // ebx
  int v16; // ecx
  TESForm *ActorBaseForm; // eax
  SInt32 v18; // eax
  int v19; // eax
  int v20; // eax
  Actor *v21; // edi
  int **v22; // ebp
  BSExtraDataVtbl *v23; // eax
  char v24; // al
  BSExtraDataVtbl *TrespassPackage; // eax
  BSExtraDataVtbl *v26; // edi
  void (__thiscall *Unk_65)(BaseProcess *__hidden); // eax
  int v28; // [esp+10h] [ebp-48h]
  float v29; // [esp+14h] [ebp-44h]
  float Distance; // [esp+14h] [ebp-44h]
  bool v31; // [esp+18h] [ebp-40h]
  int v32; // [esp+24h] [ebp-34h]
  int v33; // [esp+28h] [ebp-30h]
  char v34; // [esp+3Ah] [ebp-1Eh]
  char v35; // [esp+3Bh] [ebp-1Dh]
  Actor *v37; // [esp+40h] [ebp-18h]
  int *v38; // [esp+44h] [ebp-14h]
  ObjectType v39; // [esp+48h] [ebp-10h]
  BSExtraDataVtbl *ExtraPackage; // [esp+50h] [ebp-8h]
  double v41; // [esp+50h] [ebp-8h]
  char v42; // [esp+5Ch] [ebp+4h]
  Actor *v43; // [esp+5Ch] [ebp+4h]

  v4 = this; /*0x62fbd5*/
  editorPackage = this->editorPackage; /*0x62fbd9*/
  v35 = 0; /*0x62fbe3*/
  v7.form = sub_569E60(editorPackage->members.target).form; /*0x62fbf1*/
  v39.form = v7.form; /*0x62fbf6*/
  ExtraPackage = ExtraDataList::GetExtraPackage(&a4->members.super.super.baseExtraList); /*0x62fbff*/
  if ( (PlayerCharacter *)v7.form == reference && reference->unk5C0 ) /*0x62fc0c*/
  {
    ((void (__thiscall *)(MiddleLowProcess *, Actor *))v4->Unk_64)(v4, a4); /*0x62fc21*/
    return; /*0x62fc2a*/
  }
  v42 = 0; /*0x62fc38*/
  if ( ((int (__thiscall *)(MiddleLowProcess *))v4->GetSitSleepState)(v4) /*0x62fc65*/
    && (((int (__thiscall *)(MiddleLowProcess *))v4->GetSitSleepState)(v4) == 4
     || ((int (__thiscall *)(MiddleLowProcess *))v4->GetSitSleepState)(v4) == 9) )
  {
    v8 = a4->vtbl->GetMountedHorse(a4) == 0; /*0x62fc73*/
    vtbl = a4->vtbl; /*0x62fc75*/
    if ( v8 ) /*0x62fc79*/
      vtbl->AddPackageWakeUp(a4); /*0x62fc93*/
    else
      vtbl->SetPackageDismount(a4); /*0x62fc81*/
    return; /*0x62fc8a*/
  }
  BaseClass = (TESClass *)Actor_GetBaseClass(a4); /*0x62fca1*/
  if ( TESClass::IsGuardClass(BaseClass) ) /*0x62fca8*/
  {
    ((void (__thiscall *)(MiddleLowProcess *, Actor *, int))v4->Unk_61)(v4, a4, 1); /*0x63007b*/
    return; /*0x63007b*/
  }
  vftable = (int)editorPackage[1].__vftable; /*0x62fcb5*/
  v38 = (int *)vftable; /*0x62fcba*/
  v34 = 1; /*0x62fcbe*/
  if ( !vftable ) /*0x62fcc3*/
    goto LABEL_40; /*0x62fcc3*/
  do /*0x62fcd4*/
  {
    vftable = *v38; /*0x62fcd4*/
    if ( !*v38 ) /*0x62fcd4*/
      break; /*0x62fcd4*/
    v12 = *(Actor **)(vftable + 8); /*0x62fcde*/
    v37 = 0; /*0x62fce3*/
    if ( v12 ) /*0x62fceb*/
    {
      if ( v12->vtbl->super.super.IsActor((TESObjectREFR *)v12) ) /*0x62fcf8*/
        v37 = v12; /*0x62fcfe*/
    }
    if ( *(_BYTE *)(vftable + 0x2C) /*0x62fd19*/
      || (((void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))this->Unk_8B)(
            this,
            a4,
            (ObjectType)v7.objectCode,
            vftable),
          *(_BYTE *)(vftable + 0x2C)) )
    {
      v34 = 0; /*0x62fd1f*/
    }
    else
    {
      v13 = *(_DWORD *)(vftable + 4); /*0x62fd26*/
      if ( v13 <= 1 && *(PlayerCharacter **)(vftable + 0xC) == reference ) /*0x62fd3b*/
      {
        v14 = *(_DWORD *)(vftable + 0x24); /*0x62fd3d*/
        v15 = 0; /*0x62fd40*/
        if ( v14 ) /*0x62fd44*/
        {
          if ( *(_BYTE *)(v14 + 4) == 6 ) /*0x62fd4a*/
            v15 = *(_DWORD *)(vftable + 0x24); /*0x62fd4c*/
        }
        if ( v13 == 1 /*0x62fd98*/
          || a4->vtbl->super.super.GetBaseForm(a4) == (TESForm *)v14
          || v15
          && (LOBYTE(v16) = a4 == (Actor *)reference,
              v32 = v16,
              ActorBaseForm = Actor_GetActorBaseForm(a4, 0),
              (double)(int)TESActorBaseData_GetFactionRank((int *)&ActorBaseForm[1].member.refID, v15, v32) > kTerrainLODQuadRayDirectionZ) )
        {
          v35 = 1; /*0x62fd9a*/
        }
        v7.form = v39.form; /*0x62fd9f*/
      }
    }
    if ( v42 ) /*0x62fda8*/
      goto LABEL_37; /*0x62fda8*/
    if ( *(int *)(vftable + 4) <= 2 ) /*0x62fdb2*/
    {
      v31 = 0; /*0x62fdfa*/
      Distance = TesObjectREF_GetDistance((TESObjectREFR *)a4, v7.form, 0); /*0x62fe0f*/
      v29 = COERCE_FLOAT(((int (__thiscall *)(Actor *, int, _DWORD))a4->vtbl->GetActorValue)(a4, 0x21, LODWORD(Distance))); /*0x62fe18*/
      v28 = 0; /*0x62fe19*/
LABEL_35:
      v19 = ((int (__thiscall *)(Actor *))a4->vtbl->GetDisposition)(a4); /*0x62fe1b*/
      shouldActorFight(v19, (int)v7.form, v28, v29, v31, 0, 0, 0x64); /*0x62fe29*/
      if ( v20 > 0 ) /*0x62fe33*/
        v42 = 1; /*0x62fe35*/
      goto LABEL_37; /*0x62fe35*/
    }
    if ( v37 ) /*0x62fdb9*/
    {
      v31 = 1; /*0x62fdc1*/
      v29 = TesObjectREF_GetDistance((TESObjectREFR *)a4, v7.form, 0); /*0x62fdd6*/
      v18 = a4->vtbl->GetActorValue(a4, kActorVal_Aggression); /*0x62fddd*/
      v28 = a4->vtbl->GetDisposition(a4, v37, v18); /*0x62fdf1*/
      goto LABEL_35; /*0x62fdf2*/
    }
LABEL_37:
    v4 = this; /*0x62fe3a*/
    v38 = (int *)v38[1]; /*0x62fe47*/
  }
  while ( v38 ); /*0x62fcd4*/
  if ( v42 ) /*0x62fe56*/
  {
    sub_5EAE70(a4, (int)v7.form, vftable, v33); /*0x62fe5a*/
    ((void (__thiscall *)(MiddleLowProcess *, Actor *, ObjectType, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))v4->Unk_89)( /*0x62fe7c*/
      v4,
      a4,
      v7,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      1);
    return; /*0x62fe85*/
  }
LABEL_40:
  if ( ExtraPackage && ((int)ExtraPackage[3].CompareTo & 0x1000) != 0 /*0x62feed*/
    || ((PlayerCharacter *)v7.form != reference || !PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0))
    && !((int (__thiscall *)(_DWORD, _DWORD))v7.form->vtbl[1].GetSleepState)((ObjectType)v7.objectCode, 1)
    || (v41 = TesObjectREF_GetDistance(v7.form, (TESObjectREFR *)a4, 0),
        *GameSetting_GetSafeFloatPointer(&unk_B36B08) < v41) )
  {
    if ( v34 ) /*0x62ffc1*/
    {
      if ( v35 ) /*0x62ffc8*/
      {
        ((void (__thiscall *)(MiddleLowProcess *, Actor *, int))v4->Unk_61)(v4, a4, 3); /*0x62ffcc*/
      }
      else if ( ((int (__thiscall *)(_DWORD))v7.form->vtbl[2].super.super.ClearComponentReferences)((ObjectType)v7.objectCode) ) /*0x62ffdb*/
      {
        sub_5EAE70(a4, (int)v7.form, vftable, v33); /*0x62ffe3*/
        TrespassPackage = ExtraDataList_GetTrespassPackage((ExtraDataList *)(v7.objectCode + 0x44)); /*0x62ffeb*/
        v26 = TrespassPackage; /*0x62fff0*/
        if ( TrespassPackage ) /*0x62fff4*/
        {
          sub_67D330(TrespassPackage, 0); /*0x62fffa*/
          *(float *)&v26[7].CompareTo = *(float *)&v26[7].CompareTo + dbl_A2FC68; /*0x630008*/
        }
        ((void (__thiscall *)(Actor *, BSExtraDataVtbl *))a4->vtbl->Unk_BF)(a4, v26); /*0x630016*/
      }
      else
      {
        ((void (__thiscall *)(MiddleLowProcess *, Actor *, int))v4->Unk_61)(v4, a4, 2); /*0x630024*/
      }
      return; /*0x62ffcc*/
    }
LABEL_53:
    v23 = ExtraDataList::GetExtraPackage(&a4->members.super.super.baseExtraList); /*0x62ff50*/
    if ( ((PlayerCharacter *)v7.form == reference /*0x63003c*/
       || v23
       && LOBYTE(v23[4].Destructor) == 4
       && (sub_566DC0((TESPackage *)v23, kTerrainLODQuadRayDirectionZ, st6_0, a3, a4, 0, kTerrainLODQuadRayDirectionZ),
           v24)
       && (PlayerCharacter *)v7.form == reference)
      && ((int (__thiscall *)(_DWORD))v7.form->vtbl[2].super.super.ClearComponentReferences)((ObjectType)v7.objectCode) )
    {
      Unk_65 = v4->Unk_65; /*0x63004f*/
      v4->follow = (Actor *)reference; /*0x63005b*/
      ((void (__thiscall *)(MiddleLowProcess *, Actor *, _DWORD, unsigned int, _DWORD))Unk_65)(v4, a4, 0, 0xFFFFFFFF, 0); /*0x630061*/
    }
    else
    {
      ((void (__thiscall *)(MiddleLowProcess *, Actor *, int))v4->Unk_61)(v4, a4, 4); /*0x62ff8c*/
    }
    return; /*0x63006a*/
  }
  v21 = (Actor *)sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)v7.form); /*0x62ff00*/
  v43 = v21; /*0x62ff04*/
  if ( !v21 ) /*0x62ff08*/
  {
LABEL_52:
    BSSimpleList_Clear(v43); /*0x62ff3a*/
    FormHeapFree((unsigned int)v43); /*0x62ff48*/
    goto LABEL_53; /*0x62ff48*/
  }
  while ( 1 ) /*0x62ff10*/
  {
    v22 = (int **)v21->vtbl; /*0x62ff10*/
    if ( !v21->vtbl ) /*0x62ff14*/
    {
LABEL_51:
      v4 = this; /*0x62ff36*/
      goto LABEL_52; /*0x62ff36*/
    }
    v21 = *(Actor **)&v21->members.super.super.super.type; /*0x62ff16*/
    if ( sub_67B710(v22) ) /*0x62ff1b*/
    {
      if ( !sub_67B6B0(v22, (int)a4, 0) ) /*0x62ff29*/
        break; /*0x62ff29*/
    }
    if ( !v21 ) /*0x62ff34*/
      goto LABEL_51; /*0x62ff34*/
  }
  ((void (__thiscall *)(Actor *, int **))a4->vtbl->Unk_C5)(a4, v22); /*0x62ff9c*/
  BSSimpleList_Clear(v43); /*0x62ffa4*/
  FormHeapFree((unsigned int)v43); /*0x62ffaa*/
}
